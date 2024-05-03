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
 * Nudm_UEAU
 * UDM UE Authentication Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AuthenticationInfoResult.h"

namespace oai::model::udm {

AuthenticationInfoResult::AuthenticationInfoResult() {
  m_SupportedFeatures         = "";
  m_SupportedFeaturesIsSet    = false;
  m_AuthenticationVectorIsSet = false;
  m_Supi                      = "";
  m_SupiIsSet                 = false;
  m_AkmaInd                   = false;
  m_AkmaIndIsSet              = false;
}

AuthenticationInfoResult::~AuthenticationInfoResult() {}

void AuthenticationInfoResult::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const AuthenticationInfoResult& o) {
  j             = nlohmann::json();
  j["authType"] = o.m_AuthType;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.authenticationVectorIsSet())
    j["authenticationVector"] = o.m_AuthenticationVector;
  if (o.supiIsSet()) j["supi"] = o.m_Supi;
  if (o.akmaIndIsSet()) j["akmaInd"] = o.m_AkmaInd;
}

void from_json(const nlohmann::json& j, AuthenticationInfoResult& o) {
  j.at("authType").get_to(o.m_AuthType);
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("authenticationVector") != j.end()) {
    j.at("authenticationVector").get_to(o.m_AuthenticationVector);
    o.m_AuthenticationVectorIsSet = true;
  }
  if (j.find("supi") != j.end()) {
    j.at("supi").get_to(o.m_Supi);
    o.m_SupiIsSet = true;
  }
  if (j.find("akmaInd") != j.end()) {
    j.at("akmaInd").get_to(o.m_AkmaInd);
    o.m_AkmaIndIsSet = true;
  }
}

AuthType AuthenticationInfoResult::getAuthType() const {
  return m_AuthType;
}
void AuthenticationInfoResult::setAuthType(AuthType const& value) {
  m_AuthType = value;
}
std::string AuthenticationInfoResult::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void AuthenticationInfoResult::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool AuthenticationInfoResult::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void AuthenticationInfoResult::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
AuthenticationVector AuthenticationInfoResult::getAuthenticationVector() const {
  return m_AuthenticationVector;
}
void AuthenticationInfoResult::setAuthenticationVector(
    AuthenticationVector const& value) {
  m_AuthenticationVector      = value;
  m_AuthenticationVectorIsSet = true;
}
bool AuthenticationInfoResult::authenticationVectorIsSet() const {
  return m_AuthenticationVectorIsSet;
}
void AuthenticationInfoResult::unsetAuthenticationVector() {
  m_AuthenticationVectorIsSet = false;
}
std::string AuthenticationInfoResult::getSupi() const {
  return m_Supi;
}
void AuthenticationInfoResult::setSupi(std::string const& value) {
  m_Supi      = value;
  m_SupiIsSet = true;
}
bool AuthenticationInfoResult::supiIsSet() const {
  return m_SupiIsSet;
}
void AuthenticationInfoResult::unsetSupi() {
  m_SupiIsSet = false;
}
bool AuthenticationInfoResult::isAkmaInd() const {
  return m_AkmaInd;
}
void AuthenticationInfoResult::setAkmaInd(bool const value) {
  m_AkmaInd      = value;
  m_AkmaIndIsSet = true;
}
bool AuthenticationInfoResult::akmaIndIsSet() const {
  return m_AkmaIndIsSet;
}
void AuthenticationInfoResult::unsetAkmaInd() {
  m_AkmaIndIsSet = false;
}

}  // namespace oai::model::udm