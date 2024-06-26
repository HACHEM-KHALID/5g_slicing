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
/**
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RegistrationLocationInfo.h"

namespace oai::model::udm {

RegistrationLocationInfo::RegistrationLocationInfo() {
  m_AmfInstanceId     = "";
  m_PlmnIdIsSet       = false;
  m_VgmlcAddressIsSet = false;
}

RegistrationLocationInfo::~RegistrationLocationInfo() {}

void RegistrationLocationInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const RegistrationLocationInfo& o) {
  j                  = nlohmann::json();
  j["amfInstanceId"] = o.m_AmfInstanceId;
  if (o.plmnIdIsSet()) j["plmnId"] = o.m_PlmnId;
  if (o.vgmlcAddressIsSet()) j["vgmlcAddress"] = o.m_VgmlcAddress;
  j["accessTypeList"] = o.m_AccessTypeList;
}

void from_json(const nlohmann::json& j, RegistrationLocationInfo& o) {
  j.at("amfInstanceId").get_to(o.m_AmfInstanceId);
  if (j.find("plmnId") != j.end()) {
    j.at("plmnId").get_to(o.m_PlmnId);
    o.m_PlmnIdIsSet = true;
  }
  if (j.find("vgmlcAddress") != j.end()) {
    j.at("vgmlcAddress").get_to(o.m_VgmlcAddress);
    o.m_VgmlcAddressIsSet = true;
  }
  j.at("accessTypeList").get_to(o.m_AccessTypeList);
}

std::string RegistrationLocationInfo::getAmfInstanceId() const {
  return m_AmfInstanceId;
}
void RegistrationLocationInfo::setAmfInstanceId(std::string const& value) {
  m_AmfInstanceId = value;
}
oai::model::common::PlmnId RegistrationLocationInfo::getPlmnId() const {
  return m_PlmnId;
}
void RegistrationLocationInfo::setPlmnId(
    oai::model::common::PlmnId const& value) {
  m_PlmnId      = value;
  m_PlmnIdIsSet = true;
}
bool RegistrationLocationInfo::plmnIdIsSet() const {
  return m_PlmnIdIsSet;
}
void RegistrationLocationInfo::unsetPlmnId() {
  m_PlmnIdIsSet = false;
}
VgmlcAddress RegistrationLocationInfo::getVgmlcAddress() const {
  return m_VgmlcAddress;
}
void RegistrationLocationInfo::setVgmlcAddress(VgmlcAddress const& value) {
  m_VgmlcAddress      = value;
  m_VgmlcAddressIsSet = true;
}
bool RegistrationLocationInfo::vgmlcAddressIsSet() const {
  return m_VgmlcAddressIsSet;
}
void RegistrationLocationInfo::unsetVgmlcAddress() {
  m_VgmlcAddressIsSet = false;
}
std::vector<oai::model::common::AccessType>&
RegistrationLocationInfo::getAccessTypeList() {
  return m_AccessTypeList;
}
void RegistrationLocationInfo::setAccessTypeList(
    std::vector<oai::model::common::AccessType> const& value) {
  m_AccessTypeList = value;
}

}  // namespace oai::model::udm
