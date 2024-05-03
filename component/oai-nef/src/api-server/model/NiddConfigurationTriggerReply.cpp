/**
 * 3gpp-nidd-configuration-trigger
 * API for NIDD Configuration Trigger. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NiddConfigurationTriggerReply.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

NiddConfigurationTriggerReply::NiddConfigurationTriggerReply() {
  m_SuppFeat = "";
}

void NiddConfigurationTriggerReply::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool NiddConfigurationTriggerReply::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NiddConfigurationTriggerReply::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "NiddConfigurationTriggerReply" : pathPrefix;

  /* SuppFeat */ {
    const std::string& value           = m_SuppFeat;
    const std::string currentValuePath = _pathPrefix + ".suppFeat";
  }

  return success;
}

bool NiddConfigurationTriggerReply::operator==(
    const NiddConfigurationTriggerReply& rhs) const {
  return

      (getSuppFeat() == rhs.getSuppFeat())

          ;
}

bool NiddConfigurationTriggerReply::operator!=(
    const NiddConfigurationTriggerReply& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NiddConfigurationTriggerReply& o) {
  j             = nlohmann::json();
  j["suppFeat"] = o.m_SuppFeat;
}

void from_json(const nlohmann::json& j, NiddConfigurationTriggerReply& o) {
  j.at("suppFeat").get_to(o.m_SuppFeat);
}

std::string NiddConfigurationTriggerReply::getSuppFeat() const {
  return m_SuppFeat;
}
void NiddConfigurationTriggerReply::setSuppFeat(std::string const& value) {
  m_SuppFeat = value;
}

}  // namespace oai::nef::model