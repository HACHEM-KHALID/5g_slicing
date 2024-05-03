/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SearchComparison.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::udsf {

SearchComparison::SearchComparison() {
  m_Tag   = "";
  m_Value = "";
}

void SearchComparison::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool SearchComparison::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SearchComparison::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SearchComparison" : pathPrefix;

  return success;
}

bool SearchComparison::operator==(const SearchComparison& rhs) const {
  return

      (getOp() == rhs.getOp()) &&

      (getTag() == rhs.getTag()) &&

      (getValue() == rhs.getValue())

          ;
}

bool SearchComparison::operator!=(const SearchComparison& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SearchComparison& o) {
  j          = nlohmann::json();
  j["op"]    = o.m_Op;
  j["tag"]   = o.m_Tag;
  j["value"] = o.m_Value;
}

void from_json(const nlohmann::json& j, SearchComparison& o) {
  j.at("op").get_to(o.m_Op);
  j.at("tag").get_to(o.m_Tag);
  j.at("value").get_to(o.m_Value);
}

oai::model::udsf::ComparisonOperator SearchComparison::getOp() const {
  return m_Op;
}
void SearchComparison::setOp(
    oai::model::udsf::ComparisonOperator const& value) {
  m_Op = value;
}
std::string SearchComparison::getTag() const {
  return m_Tag;
}
void SearchComparison::setTag(std::string const& value) {
  m_Tag = value;
}
std::string SearchComparison::getValue() const {
  return m_Value;
}
void SearchComparison::setValue(std::string const& value) {
  m_Value = value;
}

}  // namespace oai::model::udsf