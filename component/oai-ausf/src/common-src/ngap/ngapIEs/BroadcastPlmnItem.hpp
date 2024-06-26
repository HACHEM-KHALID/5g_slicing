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

#ifndef _BROADCAST_PLMN_ITEM_H
#define _BROADCAST_PLMN_ITEM_H

#include <vector>

#include "PlmnId.hpp"
#include "SNssai.hpp"

extern "C" {
#include "Ngap_BroadcastPLMNItem.h"
}

namespace oai::ngap {

class BroadcastPlmnItem {
 public:
  BroadcastPlmnItem();
  virtual ~BroadcastPlmnItem();

  void set(const PlmnId& plmn, const std::vector<SNssai>& sliceList);
  void get(PlmnId& plmn, std::vector<SNssai>& sliceList) const;

  bool encode(Ngap_BroadcastPLMNItem_t&) const;
  bool decode(const Ngap_BroadcastPLMNItem_t&);

 private:
  PlmnId m_Plmn;                             // Mandatory
  std::vector<SNssai> m_SupportedSliceList;  // Tai Slice Support List
                                             // (Mandatory)
};
}  // namespace oai::ngap
#endif
