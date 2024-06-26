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

#include "MobilityRestrictionList.hpp"

namespace oai::ngap {
//------------------------------------------------------------------------------
MobilityRestrictionList::MobilityRestrictionList() {}
//------------------------------------------------------------------------------
MobilityRestrictionList::~MobilityRestrictionList() {}

//------------------------------------------------------------------------------
void MobilityRestrictionList::setPlmn(const PlmnId& plmn) {
  m_ServingPlmn = plmn;
}

//------------------------------------------------------------------------------
void MobilityRestrictionList::getPlmn(PlmnId& plmn) const {
  plmn = m_ServingPlmn;
}

//------------------------------------------------------------------------------
bool MobilityRestrictionList::encode(
    Ngap_MobilityRestrictionList_t& mobilityRestrictionList) const {
  if (!m_ServingPlmn.encode(mobilityRestrictionList.servingPLMN)) {
    return false;
  }
  return true;
}

//------------------------------------------------------------------------------
bool MobilityRestrictionList::decode(
    const Ngap_MobilityRestrictionList_t& mobilityRestrictionList) {
  if (!m_ServingPlmn.decode(mobilityRestrictionList.servingPLMN)) {
    return false;
  }
  return true;
}
}  // namespace oai::ngap
