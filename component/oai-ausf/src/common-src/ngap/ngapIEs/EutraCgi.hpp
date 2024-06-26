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

#ifndef _EUTRA_CGI_H_
#define _EUTRA_CGI_H_

#include "EutraCellIdentity.hpp"
#include "PlmnId.hpp"

extern "C" {
#include "Ngap_EUTRA-CGI.h"
}

namespace oai::ngap {

class EutraCgi {
 public:
  EutraCgi();
  virtual ~EutraCgi();

  void set(const PlmnId&, const EutraCellIdentity&);
  void get(PlmnId&, EutraCellIdentity&) const;

  bool encode(Ngap_EUTRA_CGI_t&) const;
  bool decode(const Ngap_EUTRA_CGI_t&);

 private:
  PlmnId m_PlmnId;                        // Mandatory
  EutraCellIdentity m_eutraCellIdentity;  // Mandatory
};
}  // namespace oai::ngap

#endif
