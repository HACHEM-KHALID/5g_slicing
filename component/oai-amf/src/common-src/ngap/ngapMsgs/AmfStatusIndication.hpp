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

#ifndef _AMF_STATUS_INDICATION_H_
#define _AMF_STATUS_INDICATION_H_

#include "MessageType.hpp"
#include "NgapIesStruct.hpp"
#include "NgapMessage.hpp"
#include "UnavailableGuamiList.hpp"

extern "C" {
#include "Ngap_AMFStatusIndication.h"
}

namespace oai::ngap {

class AmfStatusIndication : public NgapMessage {
 public:
  AmfStatusIndication();
  virtual ~AmfStatusIndication();

  void initialize();

  void setUnavailableGuamiList(const UnavailableGuamiList& list);
  void getUnavailableGuamiList(UnavailableGuamiList& list) const;

  bool decode(Ngap_NGAP_PDU_t* ngapMsgPdu) override;

 private:
  Ngap_AMFStatusIndication_t* m_AmfStatusIndicationIEs;

  UnavailableGuamiList m_UnavailableGuamiList;  // Mandatory
};
}  // namespace oai::ngap
#endif
