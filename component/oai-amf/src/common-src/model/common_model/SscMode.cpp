/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SscMode.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

SscMode::SscMode() {}

void SscMode::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool SscMode::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SscMode::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "SscMode" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool SscMode::operator==(const SscMode& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool SscMode::operator!=(const SscMode& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SscMode& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, SscMode& o) {
  from_json(j, o.m_value);
}

SscMode_anyOf SscMode::getValue() const {
  return m_value;
}

void SscMode::setValue(SscMode_anyOf value) {
  m_value = value;
}

SscMode_anyOf::eSscMode_anyOf SscMode::getEnumValue() const {
  return m_value.getValue();
}

void SscMode::setEnumValue(SscMode_anyOf::eSscMode_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::common