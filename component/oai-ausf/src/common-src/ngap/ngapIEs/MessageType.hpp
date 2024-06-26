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

#ifndef _MESSAGE_TYPE_H_
#define _MESSAGE_TYPE_H_

extern "C" {
#include "Ngap_Criticality.h"
#include "Ngap_InitiatingMessage.h"
#include "Ngap_NGAP-PDU.h"
#include "Ngap_ProcedureCode.h"
#include "Ngap_SuccessfulOutcome.h"
#include "Ngap_UnsuccessfulOutcome.h"
}

namespace oai::ngap {

class MessageType {
 public:
  MessageType();
  MessageType(
      const Ngap_ProcedureCode_t& procedureCode,
      Ngap_NGAP_PDU_PR m_typeOfMessage);
  virtual ~MessageType();

  void setProcedureCode(const Ngap_ProcedureCode_t& procedureCode);
  Ngap_ProcedureCode_t getProcedureCode() const;

  void setTypeOfMessage(Ngap_NGAP_PDU_PR typeOfMessage);
  Ngap_NGAP_PDU_PR getTypeOfMessage() const;

  void setCriticality(Ngap_Criticality criticality);
  Ngap_Criticality getCriticality() const;

  void setValuePresent(Ngap_InitiatingMessage__value_PR valuePresent);
  void setValuePresent(Ngap_SuccessfulOutcome__value_PR valuePresent);
  void setValuePresent(Ngap_UnsuccessfulOutcome__value_PR valuePresent);

  int encode(Ngap_NGAP_PDU_t&) const;
  // TODO: void decode(const Ngap_NGAP_PDU_t&);

 private:
  Ngap_ProcedureCode_t m_ProcedureCode;  // Ngap_ProcedureCode.h
  Ngap_NGAP_PDU_PR m_TypeOfMessage;      // Ngap_NGAP-PDU.h
  Ngap_Criticality m_Criticality;        // Ngap_Criticality.h

  Ngap_InitiatingMessage__value_PR
      m_InitiatingMsgValuePresent;  // Ngap_InitiatingMessage.h
  Ngap_SuccessfulOutcome__value_PR
      m_SuccessfulOutcomeValuePresent;  // Ngap_SuccessfulOutcome.h
  Ngap_UnsuccessfulOutcome__value_PR
      m_UnsuccessfulOutcomeValuePresent;  // Ngap_UnsuccessfulOutcome.h
};
}  // namespace oai::ngap

#endif
