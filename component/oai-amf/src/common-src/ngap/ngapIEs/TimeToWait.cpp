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

#include "TimeToWait.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
TimeToWait::TimeToWait() {
  m_Time = -1;
}

//------------------------------------------------------------------------------
TimeToWait::TimeToWait(e_Ngap_TimeToWait time) {
  m_Time = time;
}

//------------------------------------------------------------------------------
TimeToWait::~TimeToWait() {}

//------------------------------------------------------------------------------
void TimeToWait::set(e_Ngap_TimeToWait time) {
  m_Time = time;
}

//------------------------------------------------------------------------------
bool TimeToWait::encode(Ngap_TimeToWait_t& time) const {
  time = m_Time;
  return true;
}

//------------------------------------------------------------------------------
bool TimeToWait::decode(const Ngap_TimeToWait_t& time) {
  m_Time = time;
  return true;
}

//------------------------------------------------------------------------------
long TimeToWait::get() const {
  return m_Time;
}
}  // namespace oai::ngap
