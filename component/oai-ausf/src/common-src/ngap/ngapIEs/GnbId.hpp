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

#ifndef _GNB_ID_H_
#define _GNB_ID_H_

#include <optional>

#include "NgapIesStruct.hpp"

extern "C" {
#include "Ngap_GNB-ID.h"
}

namespace oai::ngap {

constexpr uint8_t NGAP_GNB_ID_SIZE_MAX = 32;
constexpr uint8_t NGAP_GNB_ID_SIZE_MIN = 22;

class GnbId {
 public:
  GnbId();
  virtual ~GnbId();

  void set(const gNBId_t& gnbId);
  bool get(gNBId_t& gnbId) const;

  bool set(const uint32_t& id, const uint8_t& bitLength);
  // long get() const;
  bool get(uint32_t& id) const;

  bool encode(Ngap_GNB_ID_t&) const;
  bool decode(const Ngap_GNB_ID_t&);

 private:
  std::optional<gNBId_t> m_GnbId;  // 22bits to 32bits
  Ngap_GNB_ID_PR m_Present;
};

}  // namespace oai::ngap

#endif
