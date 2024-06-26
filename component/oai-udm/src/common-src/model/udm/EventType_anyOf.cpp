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
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "EventType_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::udm {

EventType_anyOf::EventType_anyOf() {}

void EventType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool EventType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool EventType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "EventType_anyOf" : pathPrefix;

  if (m_value ==
      EventType_anyOf::eEventType_anyOf::INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool EventType_anyOf::operator==(const EventType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool EventType_anyOf::operator!=(const EventType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const EventType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case EventType_anyOf::eEventType_anyOf::INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case EventType_anyOf::eEventType_anyOf::LOSS_OF_CONNECTIVITY:
      j = "LOSS_OF_CONNECTIVITY";
      break;
    case EventType_anyOf::eEventType_anyOf::UE_REACHABILITY_FOR_DATA:
      j = "UE_REACHABILITY_FOR_DATA";
      break;
    case EventType_anyOf::eEventType_anyOf::UE_REACHABILITY_FOR_SMS:
      j = "UE_REACHABILITY_FOR_SMS";
      break;
    case EventType_anyOf::eEventType_anyOf::LOCATION_REPORTING:
      j = "LOCATION_REPORTING";
      break;
    case EventType_anyOf::eEventType_anyOf::CHANGE_OF_SUPI_PEI_ASSOCIATION:
      j = "CHANGE_OF_SUPI_PEI_ASSOCIATION";
      break;
    case EventType_anyOf::eEventType_anyOf::ROAMING_STATUS:
      j = "ROAMING_STATUS";
      break;
    case EventType_anyOf::eEventType_anyOf::COMMUNICATION_FAILURE:
      j = "COMMUNICATION_FAILURE";
      break;
    case EventType_anyOf::eEventType_anyOf::AVAILABILITY_AFTER_DDN_FAILURE:
      j = "AVAILABILITY_AFTER_DDN_FAILURE";
      break;
    case EventType_anyOf::eEventType_anyOf::CN_TYPE_CHANGE:
      j = "CN_TYPE_CHANGE";
      break;
    case EventType_anyOf::eEventType_anyOf::DL_DATA_DELIVERY_STATUS:
      j = "DL_DATA_DELIVERY_STATUS";
      break;
    case EventType_anyOf::eEventType_anyOf::PDN_CONNECTIVITY_STATUS:
      j = "PDN_CONNECTIVITY_STATUS";
      break;
    case EventType_anyOf::eEventType_anyOf::UE_CONNECTION_MANAGEMENT_STATE:
      j = "UE_CONNECTION_MANAGEMENT_STATE";
      break;
  }
}

void from_json(const nlohmann::json& j, EventType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "LOSS_OF_CONNECTIVITY") {
    o.setValue(EventType_anyOf::eEventType_anyOf::LOSS_OF_CONNECTIVITY);
  } else if (s == "UE_REACHABILITY_FOR_DATA") {
    o.setValue(EventType_anyOf::eEventType_anyOf::UE_REACHABILITY_FOR_DATA);
  } else if (s == "UE_REACHABILITY_FOR_SMS") {
    o.setValue(EventType_anyOf::eEventType_anyOf::UE_REACHABILITY_FOR_SMS);
  } else if (s == "LOCATION_REPORTING") {
    o.setValue(EventType_anyOf::eEventType_anyOf::LOCATION_REPORTING);
  } else if (s == "CHANGE_OF_SUPI_PEI_ASSOCIATION") {
    o.setValue(
        EventType_anyOf::eEventType_anyOf::CHANGE_OF_SUPI_PEI_ASSOCIATION);
  } else if (s == "ROAMING_STATUS") {
    o.setValue(EventType_anyOf::eEventType_anyOf::ROAMING_STATUS);
  } else if (s == "COMMUNICATION_FAILURE") {
    o.setValue(EventType_anyOf::eEventType_anyOf::COMMUNICATION_FAILURE);
  } else if (s == "AVAILABILITY_AFTER_DDN_FAILURE") {
    o.setValue(
        EventType_anyOf::eEventType_anyOf::AVAILABILITY_AFTER_DDN_FAILURE);
  } else if (s == "CN_TYPE_CHANGE") {
    o.setValue(EventType_anyOf::eEventType_anyOf::CN_TYPE_CHANGE);
  } else if (s == "DL_DATA_DELIVERY_STATUS") {
    o.setValue(EventType_anyOf::eEventType_anyOf::DL_DATA_DELIVERY_STATUS);
  } else if (s == "PDN_CONNECTIVITY_STATUS") {
    o.setValue(EventType_anyOf::eEventType_anyOf::PDN_CONNECTIVITY_STATUS);
  } else if (s == "UE_CONNECTION_MANAGEMENT_STATE") {
    o.setValue(
        EventType_anyOf::eEventType_anyOf::UE_CONNECTION_MANAGEMENT_STATE);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " EventType_anyOf::eEventType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

EventType_anyOf::eEventType_anyOf EventType_anyOf::getValue() const {
  return m_value;
}
void EventType_anyOf::setValue(EventType_anyOf::eEventType_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::udm
