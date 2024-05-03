/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "PdnType.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

PdnType::PdnType() {}

void PdnType::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool PdnType::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PdnType::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "PdnType" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool PdnType::operator==(const PdnType& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool PdnType::operator!=(const PdnType& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PdnType& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, PdnType& o) {
  from_json(j, o.m_value);
}

PdnType_anyOf PdnType::getValue() const {
  return m_value;
}

void PdnType::setValue(PdnType_anyOf value) {
  m_value = value;
}

PdnType_anyOf::ePdnType_anyOf PdnType::getEnumValue() const {
  return m_value.getValue();
}

void PdnType::setEnumValue(PdnType_anyOf::ePdnType_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::nef::model