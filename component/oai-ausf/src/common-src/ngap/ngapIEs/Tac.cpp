/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#include "Tac.hpp"

#include "logger.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
TAC::TAC() {
  m_Tac = 0;
}

//------------------------------------------------------------------------------
TAC::~TAC() {}

//------------------------------------------------------------------------------
void TAC::set(const uint32_t& tac) {
  m_Tac = tac;
}

//------------------------------------------------------------------------------
uint32_t TAC::get() const {
  return m_Tac;
}

//------------------------------------------------------------------------------
bool TAC::encode(Ngap_TAC_t& tac) const {
  tac.size   = 3;  // OCTET_STRING(SIZE(3))
  tac.buf    = (uint8_t*) calloc(3, sizeof(uint8_t));
  tac.buf[2] = m_Tac & 0x0000ff;
  tac.buf[1] = (m_Tac & 0x00ff00) >> 8;
  tac.buf[0] = (m_Tac & 0xff0000) >> 16;

  return true;
}

//------------------------------------------------------------------------------
bool TAC::decode(const Ngap_TAC_t& tac) {
  if (!tac.buf) return false;
  m_Tac = 0;
  for (int i = 0; i < tac.size; i++) {
    m_Tac |= tac.buf[i] << ((tac.size - 1 - i) * 8);
  }
  Logger::ngap().debug("Received TAC 0x%x", m_Tac);
  return true;
}

}  // namespace oai::ngap
