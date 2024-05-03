/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "RequestedQos.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

RequestedQos::RequestedQos() {
  m_r_5qi      = 0;
  m_GbrUl      = "";
  m_GbrUlIsSet = false;
  m_GbrDl      = "";
  m_GbrDlIsSet = false;
}

void RequestedQos::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool RequestedQos::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool RequestedQos::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "RequestedQos" : pathPrefix;

  /* r_5qi */ {
    const int32_t& value               = m_r_5qi;
    const std::string currentValuePath = _pathPrefix + ".r5qi";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 255) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 255;";
    }
  }

  if (gbrUlIsSet()) {
    const std::string& value           = m_GbrUl;
    const std::string currentValuePath = _pathPrefix + ".gbrUl";
  }

  if (gbrDlIsSet()) {
    const std::string& value           = m_GbrDl;
    const std::string currentValuePath = _pathPrefix + ".gbrDl";
  }

  return success;
}

bool RequestedQos::operator==(const RequestedQos& rhs) const {
  return

      (getR5qi() == rhs.getR5qi()) &&

      ((!gbrUlIsSet() && !rhs.gbrUlIsSet()) ||
       (gbrUlIsSet() && rhs.gbrUlIsSet() && getGbrUl() == rhs.getGbrUl())) &&

      ((!gbrDlIsSet() && !rhs.gbrDlIsSet()) ||
       (gbrDlIsSet() && rhs.gbrDlIsSet() && getGbrDl() == rhs.getGbrDl()))

          ;
}

bool RequestedQos::operator!=(const RequestedQos& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RequestedQos& o) {
  j        = nlohmann::json();
  j["5qi"] = o.m_r_5qi;
  if (o.gbrUlIsSet()) j["gbrUl"] = o.m_GbrUl;
  if (o.gbrDlIsSet()) j["gbrDl"] = o.m_GbrDl;
}

void from_json(const nlohmann::json& j, RequestedQos& o) {
  j.at("5qi").get_to(o.m_r_5qi);
  if (j.find("gbrUl") != j.end()) {
    j.at("gbrUl").get_to(o.m_GbrUl);
    o.m_GbrUlIsSet = true;
  }
  if (j.find("gbrDl") != j.end()) {
    j.at("gbrDl").get_to(o.m_GbrDl);
    o.m_GbrDlIsSet = true;
  }
}

int32_t RequestedQos::getR5qi() const {
  return m_r_5qi;
}
void RequestedQos::setR5qi(int32_t const value) {
  m_r_5qi = value;
}
std::string RequestedQos::getGbrUl() const {
  return m_GbrUl;
}
void RequestedQos::setGbrUl(std::string const& value) {
  m_GbrUl      = value;
  m_GbrUlIsSet = true;
}
bool RequestedQos::gbrUlIsSet() const {
  return m_GbrUlIsSet;
}
void RequestedQos::unsetGbrUl() {
  m_GbrUlIsSet = false;
}
std::string RequestedQos::getGbrDl() const {
  return m_GbrDl;
}
void RequestedQos::setGbrDl(std::string const& value) {
  m_GbrDl      = value;
  m_GbrDlIsSet = true;
}
bool RequestedQos::gbrDlIsSet() const {
  return m_GbrDlIsSet;
}
void RequestedQos::unsetGbrDl() {
  m_GbrDlIsSet = false;
}

}  // namespace oai::model::pcf