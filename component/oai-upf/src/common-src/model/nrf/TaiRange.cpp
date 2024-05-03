/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service.   © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TaiRange.h"
#include "Helpers.h"

#include <sstream>
#include <Helpers.h>

namespace oai::model::nrf {

TaiRange::TaiRange() {
  m_Nid      = "";
  m_NidIsSet = false;
}

void TaiRange::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool TaiRange::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TaiRange::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "TaiRange" : pathPrefix;

  if (!m_PlmnId.validate(msg)) {
    msg << _pathPrefix << ": PlmnId is invalid;";
    success = false;
  }

  /* TacRangeList */ {
    const std::vector<oai::model::nrf::TacRange>& value = m_TacRangeList;
    const std::string currentValuePath = _pathPrefix + ".tacRangeList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::nrf::TacRange& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".tacRangeList") && success;

        i++;
      }
    }
  }

  if (nidIsSet()) {
    const std::string& value           = m_Nid;
    const std::string currentValuePath = _pathPrefix + ".nid";
  }

  return success;
}

bool TaiRange::operator==(const TaiRange& rhs) const {
  return

      (getPlmnId() == rhs.getPlmnId()) &&

      (getTacRangeList() == rhs.getTacRangeList()) &&

      ((!nidIsSet() && !rhs.nidIsSet()) ||
       (nidIsSet() && rhs.nidIsSet() && getNid() == rhs.getNid()))

          ;
}

bool TaiRange::operator!=(const TaiRange& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TaiRange& o) {
  j                 = nlohmann::json::object();
  j["plmnId"]       = o.m_PlmnId;
  j["tacRangeList"] = o.m_TacRangeList;
  if (o.nidIsSet()) j["nid"] = o.m_Nid;
}

void from_json(const nlohmann::json& j, TaiRange& o) {
  j.at("plmnId").get_to(o.m_PlmnId);
  j.at("tacRangeList").get_to(o.m_TacRangeList);
  if (j.find("nid") != j.end()) {
    j.at("nid").get_to(o.m_Nid);
    o.m_NidIsSet = true;
  }
}

oai::model::common::PlmnId TaiRange::getPlmnId() const {
  return m_PlmnId;
}
void TaiRange::setPlmnId(oai::model::common::PlmnId const& value) {
  m_PlmnId = value;
}
std::vector<oai::model::nrf::TacRange> TaiRange::getTacRangeList() const {
  return m_TacRangeList;
}
void TaiRange::setTacRangeList(
    std::vector<oai::model::nrf::TacRange> const& value) {
  m_TacRangeList = value;
}
std::string TaiRange::getNid() const {
  return m_Nid;
}
void TaiRange::setNid(std::string const& value) {
  m_Nid      = value;
  m_NidIsSet = true;
}
bool TaiRange::nidIsSet() const {
  return m_NidIsSet;
}
void TaiRange::unsetNid() {
  m_NidIsSet = false;
}

}  // namespace oai::model::nrf