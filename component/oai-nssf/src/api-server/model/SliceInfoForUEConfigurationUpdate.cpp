/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SliceInfoForUEConfigurationUpdate.h"
#include "Helpers.h"

#include <sstream>

namespace oai {
namespace nssf_server {
namespace model {

SliceInfoForUEConfigurationUpdate::SliceInfoForUEConfigurationUpdate() {
  m_SubscribedNssaiIsSet            = false;
  m_AllowedNssaiCurrentAccessIsSet  = false;
  m_AllowedNssaiOtherAccessIsSet    = false;
  m_DefaultConfiguredSnssaiInd      = false;
  m_DefaultConfiguredSnssaiIndIsSet = false;
  m_RequestedNssaiIsSet             = false;
  m_MappingOfNssaiIsSet             = false;
}

void SliceInfoForUEConfigurationUpdate::validate() const {
  std::stringstream msg;
  // if (!validate(msg))
  // {
  //     throw oai::nssf_server::helpers::ValidationException(msg.str());
  // }
}

bool SliceInfoForUEConfigurationUpdate::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SliceInfoForUEConfigurationUpdate::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SliceInfoForUEConfigurationUpdate" : pathPrefix;

  if (subscribedNssaiIsSet()) {
    const std::vector<SubscribedSnssai>& value = m_SubscribedNssai;
    const std::string currentValuePath = _pathPrefix + ".subscribedNssai";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const SubscribedSnssai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".subscribedNssai") &&
                  success;

        i++;
      }
    }
  }

  if (requestedNssaiIsSet()) {
    const std::vector<oai::model::common::Snssai>& value = m_RequestedNssai;
    const std::string currentValuePath = _pathPrefix + ".requestedNssai";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::Snssai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".requestedNssai") &&
                  success;

        i++;
      }
    }
  }

  if (mappingOfNssaiIsSet()) {
    const std::vector<MappingOfSnssai>& value = m_MappingOfNssai;
    const std::string currentValuePath        = _pathPrefix + ".mappingOfNssai";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const MappingOfSnssai& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".mappingOfNssai") &&
                  success;

        i++;
      }
    }
  }

  return success;
}

bool SliceInfoForUEConfigurationUpdate::operator==(
    const SliceInfoForUEConfigurationUpdate& rhs) const {
  return

      ((!subscribedNssaiIsSet() && !rhs.subscribedNssaiIsSet()) ||
       (subscribedNssaiIsSet() && rhs.subscribedNssaiIsSet() &&
        getSubscribedNssai() == rhs.getSubscribedNssai())) &&

      ((!allowedNssaiCurrentAccessIsSet() &&
        !rhs.allowedNssaiCurrentAccessIsSet()) ||
       (allowedNssaiCurrentAccessIsSet() &&
        rhs.allowedNssaiCurrentAccessIsSet() &&
        getAllowedNssaiCurrentAccess() ==
            rhs.getAllowedNssaiCurrentAccess())) &&

      ((!allowedNssaiOtherAccessIsSet() &&
        !rhs.allowedNssaiOtherAccessIsSet()) ||
       (allowedNssaiOtherAccessIsSet() && rhs.allowedNssaiOtherAccessIsSet() &&
        getAllowedNssaiOtherAccess() == rhs.getAllowedNssaiOtherAccess())) &&

      ((!defaultConfiguredSnssaiIndIsSet() &&
        !rhs.defaultConfiguredSnssaiIndIsSet()) ||
       (defaultConfiguredSnssaiIndIsSet() &&
        rhs.defaultConfiguredSnssaiIndIsSet() &&
        isDefaultConfiguredSnssaiInd() ==
            rhs.isDefaultConfiguredSnssaiInd())) &&

      ((!requestedNssaiIsSet() && !rhs.requestedNssaiIsSet()) ||
       (requestedNssaiIsSet() && rhs.requestedNssaiIsSet() &&
        getRequestedNssai() == rhs.getRequestedNssai())) &&

      ((!mappingOfNssaiIsSet() && !rhs.mappingOfNssaiIsSet()) ||
       (mappingOfNssaiIsSet() && rhs.mappingOfNssaiIsSet() &&
        getMappingOfNssai() == rhs.getMappingOfNssai()))

          ;
}

bool SliceInfoForUEConfigurationUpdate::operator!=(
    const SliceInfoForUEConfigurationUpdate& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SliceInfoForUEConfigurationUpdate& o) {
  j = nlohmann::json();
  if (o.subscribedNssaiIsSet() || !o.m_SubscribedNssai.empty())
    j["subscribedNssai"] = o.m_SubscribedNssai;
  if (o.allowedNssaiCurrentAccessIsSet())
    j["allowedNssaiCurrentAccess"] = o.m_AllowedNssaiCurrentAccess;
  if (o.allowedNssaiOtherAccessIsSet())
    j["allowedNssaiOtherAccess"] = o.m_AllowedNssaiOtherAccess;
  if (o.defaultConfiguredSnssaiIndIsSet())
    j["defaultConfiguredSnssaiInd"] = o.m_DefaultConfiguredSnssaiInd;
  if (o.requestedNssaiIsSet() || !o.m_RequestedNssai.empty())
    j["requestedNssai"] = o.m_RequestedNssai;
  if (o.mappingOfNssaiIsSet() || !o.m_MappingOfNssai.empty())
    j["mappingOfNssai"] = o.m_MappingOfNssai;
}

void from_json(const nlohmann::json& j, SliceInfoForUEConfigurationUpdate& o) {
  if (j.find("subscribedNssai") != j.end()) {
    j.at("subscribedNssai").get_to(o.m_SubscribedNssai);
    o.m_SubscribedNssaiIsSet = true;
  }
  if (j.find("allowedNssaiCurrentAccess") != j.end()) {
    j.at("allowedNssaiCurrentAccess").get_to(o.m_AllowedNssaiCurrentAccess);
    o.m_AllowedNssaiCurrentAccessIsSet = true;
  }
  if (j.find("allowedNssaiOtherAccess") != j.end()) {
    j.at("allowedNssaiOtherAccess").get_to(o.m_AllowedNssaiOtherAccess);
    o.m_AllowedNssaiOtherAccessIsSet = true;
  }
  if (j.find("defaultConfiguredSnssaiInd") != j.end()) {
    j.at("defaultConfiguredSnssaiInd").get_to(o.m_DefaultConfiguredSnssaiInd);
    o.m_DefaultConfiguredSnssaiIndIsSet = true;
  }
  if (j.find("requestedNssai") != j.end()) {
    j.at("requestedNssai").get_to(o.m_RequestedNssai);
    o.m_RequestedNssaiIsSet = true;
  }
  if (j.find("mappingOfNssai") != j.end()) {
    j.at("mappingOfNssai").get_to(o.m_MappingOfNssai);
    o.m_MappingOfNssaiIsSet = true;
  }
}

std::vector<SubscribedSnssai>
SliceInfoForUEConfigurationUpdate::getSubscribedNssai() const {
  return m_SubscribedNssai;
}
void SliceInfoForUEConfigurationUpdate::setSubscribedNssai(
    std::vector<SubscribedSnssai> const& value) {
  m_SubscribedNssai      = value;
  m_SubscribedNssaiIsSet = true;
}
bool SliceInfoForUEConfigurationUpdate::subscribedNssaiIsSet() const {
  return m_SubscribedNssaiIsSet;
}
void SliceInfoForUEConfigurationUpdate::unsetSubscribedNssai() {
  m_SubscribedNssaiIsSet = false;
}
AllowedNssai SliceInfoForUEConfigurationUpdate::getAllowedNssaiCurrentAccess()
    const {
  return m_AllowedNssaiCurrentAccess;
}
void SliceInfoForUEConfigurationUpdate::setAllowedNssaiCurrentAccess(
    AllowedNssai const& value) {
  m_AllowedNssaiCurrentAccess      = value;
  m_AllowedNssaiCurrentAccessIsSet = true;
}
bool SliceInfoForUEConfigurationUpdate::allowedNssaiCurrentAccessIsSet() const {
  return m_AllowedNssaiCurrentAccessIsSet;
}
void SliceInfoForUEConfigurationUpdate::unsetAllowedNssaiCurrentAccess() {
  m_AllowedNssaiCurrentAccessIsSet = false;
}
AllowedNssai SliceInfoForUEConfigurationUpdate::getAllowedNssaiOtherAccess()
    const {
  return m_AllowedNssaiOtherAccess;
}
void SliceInfoForUEConfigurationUpdate::setAllowedNssaiOtherAccess(
    AllowedNssai const& value) {
  m_AllowedNssaiOtherAccess      = value;
  m_AllowedNssaiOtherAccessIsSet = true;
}
bool SliceInfoForUEConfigurationUpdate::allowedNssaiOtherAccessIsSet() const {
  return m_AllowedNssaiOtherAccessIsSet;
}
void SliceInfoForUEConfigurationUpdate::unsetAllowedNssaiOtherAccess() {
  m_AllowedNssaiOtherAccessIsSet = false;
}
bool SliceInfoForUEConfigurationUpdate::isDefaultConfiguredSnssaiInd() const {
  return m_DefaultConfiguredSnssaiInd;
}
void SliceInfoForUEConfigurationUpdate::setDefaultConfiguredSnssaiInd(
    bool const value) {
  m_DefaultConfiguredSnssaiInd      = value;
  m_DefaultConfiguredSnssaiIndIsSet = true;
}
bool SliceInfoForUEConfigurationUpdate::defaultConfiguredSnssaiIndIsSet()
    const {
  return m_DefaultConfiguredSnssaiIndIsSet;
}
void SliceInfoForUEConfigurationUpdate::unsetDefaultConfiguredSnssaiInd() {
  m_DefaultConfiguredSnssaiIndIsSet = false;
}
std::vector<oai::model::common::Snssai>
SliceInfoForUEConfigurationUpdate::getRequestedNssai() const {
  return m_RequestedNssai;
}
void SliceInfoForUEConfigurationUpdate::setRequestedNssai(
    std::vector<oai::model::common::Snssai> const& value) {
  m_RequestedNssai      = value;
  m_RequestedNssaiIsSet = true;
}
bool SliceInfoForUEConfigurationUpdate::requestedNssaiIsSet() const {
  return m_RequestedNssaiIsSet;
}
void SliceInfoForUEConfigurationUpdate::unsetRequestedNssai() {
  m_RequestedNssaiIsSet = false;
}
std::vector<MappingOfSnssai>
SliceInfoForUEConfigurationUpdate::getMappingOfNssai() const {
  return m_MappingOfNssai;
}
void SliceInfoForUEConfigurationUpdate::setMappingOfNssai(
    std::vector<MappingOfSnssai> const& value) {
  m_MappingOfNssai      = value;
  m_MappingOfNssaiIsSet = true;
}
bool SliceInfoForUEConfigurationUpdate::mappingOfNssaiIsSet() const {
  return m_MappingOfNssaiIsSet;
}
void SliceInfoForUEConfigurationUpdate::unsetMappingOfNssai() {
  m_MappingOfNssaiIsSet = false;
}

}  // namespace model
}  // namespace nssf_server
}  // namespace oai