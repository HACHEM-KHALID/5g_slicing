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

#include "RuleOperation_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::pcf {

RuleOperation_anyOf::RuleOperation_anyOf() {}

void RuleOperation_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool RuleOperation_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool RuleOperation_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "RuleOperation_anyOf" : pathPrefix;

  if (m_value == RuleOperation_anyOf::eRuleOperation_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool RuleOperation_anyOf::operator==(const RuleOperation_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool RuleOperation_anyOf::operator!=(const RuleOperation_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const RuleOperation_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case RuleOperation_anyOf::eRuleOperation_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case RuleOperation_anyOf::eRuleOperation_anyOf::CREATE_PCC_RULE:
      j = "CREATE_PCC_RULE";
      break;
    case RuleOperation_anyOf::eRuleOperation_anyOf::DELETE_PCC_RULE:
      j = "DELETE_PCC_RULE";
      break;
    case RuleOperation_anyOf::eRuleOperation_anyOf::
        MODIFY_PCC_RULE_AND_ADD_PACKET_FILTERS:
      j = "MODIFY_PCC_RULE_AND_ADD_PACKET_FILTERS";
      break;
    case RuleOperation_anyOf::eRuleOperation_anyOf::
        MODIFY__PCC_RULE_AND_REPLACE_PACKET_FILTERS:
      j = "MODIFY_ PCC_RULE_AND_REPLACE_PACKET_FILTERS";
      break;
    case RuleOperation_anyOf::eRuleOperation_anyOf::
        MODIFY__PCC_RULE_AND_DELETE_PACKET_FILTERS:
      j = "MODIFY_ PCC_RULE_AND_DELETE_PACKET_FILTERS";
      break;
    case RuleOperation_anyOf::eRuleOperation_anyOf::
        MODIFY_PCC_RULE_WITHOUT_MODIFY_PACKET_FILTERS:
      j = "MODIFY_PCC_RULE_WITHOUT_MODIFY_PACKET_FILTERS";
      break;
  }
}

void from_json(const nlohmann::json& j, RuleOperation_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "CREATE_PCC_RULE") {
    o.setValue(RuleOperation_anyOf::eRuleOperation_anyOf::CREATE_PCC_RULE);
  } else if (s == "DELETE_PCC_RULE") {
    o.setValue(RuleOperation_anyOf::eRuleOperation_anyOf::DELETE_PCC_RULE);
  } else if (s == "MODIFY_PCC_RULE_AND_ADD_PACKET_FILTERS") {
    o.setValue(RuleOperation_anyOf::eRuleOperation_anyOf::
                   MODIFY_PCC_RULE_AND_ADD_PACKET_FILTERS);
  } else if (s == "MODIFY_ PCC_RULE_AND_REPLACE_PACKET_FILTERS") {
    o.setValue(RuleOperation_anyOf::eRuleOperation_anyOf::
                   MODIFY__PCC_RULE_AND_REPLACE_PACKET_FILTERS);
  } else if (s == "MODIFY_ PCC_RULE_AND_DELETE_PACKET_FILTERS") {
    o.setValue(RuleOperation_anyOf::eRuleOperation_anyOf::
                   MODIFY__PCC_RULE_AND_DELETE_PACKET_FILTERS);
  } else if (s == "MODIFY_PCC_RULE_WITHOUT_MODIFY_PACKET_FILTERS") {
    o.setValue(RuleOperation_anyOf::eRuleOperation_anyOf::
                   MODIFY_PCC_RULE_WITHOUT_MODIFY_PACKET_FILTERS);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " RuleOperation_anyOf::eRuleOperation_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

RuleOperation_anyOf::eRuleOperation_anyOf RuleOperation_anyOf::getValue()
    const {
  return m_value;
}
void RuleOperation_anyOf::setValue(
    RuleOperation_anyOf::eRuleOperation_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::pcf