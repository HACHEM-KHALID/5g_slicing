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

#include "VgmlcAddress.h"

namespace oai::model::udm {

VgmlcAddress::VgmlcAddress() {
  m_VgmlcAddressIpv4      = "";
  m_VgmlcAddressIpv4IsSet = false;
  m_VgmlcAddressIpv6IsSet = false;
  m_VgmlcFqdn             = "";
  m_VgmlcFqdnIsSet        = false;
}

VgmlcAddress::~VgmlcAddress() {}

void VgmlcAddress::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const VgmlcAddress& o) {
  j = nlohmann::json();
  if (o.vgmlcAddressIpv4IsSet()) j["vgmlcAddressIpv4"] = o.m_VgmlcAddressIpv4;
  if (o.vgmlcAddressIpv6IsSet()) j["vgmlcAddressIpv6"] = o.m_VgmlcAddressIpv6;
  if (o.vgmlcFqdnIsSet()) j["vgmlcFqdn"] = o.m_VgmlcFqdn;
}

void from_json(const nlohmann::json& j, VgmlcAddress& o) {
  if (j.find("vgmlcAddressIpv4") != j.end()) {
    j.at("vgmlcAddressIpv4").get_to(o.m_VgmlcAddressIpv4);
    o.m_VgmlcAddressIpv4IsSet = true;
  }
  if (j.find("vgmlcAddressIpv6") != j.end()) {
    j.at("vgmlcAddressIpv6").get_to(o.m_VgmlcAddressIpv6);
    o.m_VgmlcAddressIpv6IsSet = true;
  }
  if (j.find("vgmlcFqdn") != j.end()) {
    j.at("vgmlcFqdn").get_to(o.m_VgmlcFqdn);
    o.m_VgmlcFqdnIsSet = true;
  }
}

std::string VgmlcAddress::getVgmlcAddressIpv4() const {
  return m_VgmlcAddressIpv4;
}
void VgmlcAddress::setVgmlcAddressIpv4(std::string const& value) {
  m_VgmlcAddressIpv4      = value;
  m_VgmlcAddressIpv4IsSet = true;
}
bool VgmlcAddress::vgmlcAddressIpv4IsSet() const {
  return m_VgmlcAddressIpv4IsSet;
}
void VgmlcAddress::unsetVgmlcAddressIpv4() {
  m_VgmlcAddressIpv4IsSet = false;
}
oai::model::common::Ipv6Addr VgmlcAddress::getVgmlcAddressIpv6() const {
  return m_VgmlcAddressIpv6;
}
void VgmlcAddress::setVgmlcAddressIpv6(
    oai::model::common::Ipv6Addr const& value) {
  m_VgmlcAddressIpv6      = value;
  m_VgmlcAddressIpv6IsSet = true;
}
bool VgmlcAddress::vgmlcAddressIpv6IsSet() const {
  return m_VgmlcAddressIpv6IsSet;
}
void VgmlcAddress::unsetVgmlcAddressIpv6() {
  m_VgmlcAddressIpv6IsSet = false;
}
std::string VgmlcAddress::getVgmlcFqdn() const {
  return m_VgmlcFqdn;
}
void VgmlcAddress::setVgmlcFqdn(std::string const& value) {
  m_VgmlcFqdn      = value;
  m_VgmlcFqdnIsSet = true;
}
bool VgmlcAddress::vgmlcFqdnIsSet() const {
  return m_VgmlcFqdnIsSet;
}
void VgmlcAddress::unsetVgmlcFqdn() {
  m_VgmlcFqdnIsSet = false;
}

}  // namespace oai::model::udm
