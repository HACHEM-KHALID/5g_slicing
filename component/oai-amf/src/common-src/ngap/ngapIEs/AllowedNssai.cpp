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

#include "AllowedNssai.hpp"

extern "C" {
#include "Ngap_AllowedNSSAI-Item.h"
}

namespace oai::ngap {

//------------------------------------------------------------------------------
AllowedNSSAI::AllowedNSSAI() {}

//------------------------------------------------------------------------------
AllowedNSSAI::~AllowedNSSAI() {}

//------------------------------------------------------------------------------
void AllowedNSSAI::set(const std::vector<SNssai>& list) {
  // Get maximum 8 items
  uint8_t number_items = (list.size() > kAllowedSNSSAIMaxItems) ?
                             kAllowedSNSSAIMaxItems :
                             list.size();
  m_List.insert(m_List.begin(), list.begin(), list.begin() + number_items);
}

//------------------------------------------------------------------------------
void AllowedNSSAI::get(std::vector<SNssai>& list) const {
  list = m_List;
}
//------------------------------------------------------------------------------
bool AllowedNSSAI::encode(Ngap_AllowedNSSAI_t& list) const {
  for (std::vector<SNssai>::const_iterator it = std::begin(m_List);
       it < std::end(m_List); ++it) {
    Ngap_AllowedNSSAI_Item_t* item =
        (Ngap_AllowedNSSAI_Item_t*) calloc(1, sizeof(Ngap_AllowedNSSAI_Item_t));
    if (!item) return false;
    if (!it->encode(item->s_NSSAI)) return false;
    if (ASN_SEQUENCE_ADD(&list.list, item) != 0) return false;
  }
  return true;
}

//------------------------------------------------------------------------------
bool AllowedNSSAI::decode(const Ngap_AllowedNSSAI_t& list) {
  m_List.clear();
  // Get maximum 8 items
  uint8_t number_items = (list.list.count > kAllowedSNSSAIMaxItems) ?
                             kAllowedSNSSAIMaxItems :
                             list.list.count;
  for (int i = 0; i < number_items; i++) {
    SNssai snssai = {};
    if (!snssai.decode(list.list.array[i]->s_NSSAI)) return false;
    m_List.push_back(snssai);
  }
  return true;
}

}  // namespace oai::ngap
