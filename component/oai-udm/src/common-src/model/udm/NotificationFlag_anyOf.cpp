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

#include "NotificationFlag_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::udm {

NotificationFlag_anyOf::NotificationFlag_anyOf() {}

void NotificationFlag_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool NotificationFlag_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool NotificationFlag_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "NotificationFlag_anyOf" : pathPrefix;

  if (m_value == NotificationFlag_anyOf::eNotificationFlag_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool NotificationFlag_anyOf::operator==(
    const NotificationFlag_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool NotificationFlag_anyOf::operator!=(
    const NotificationFlag_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const NotificationFlag_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case NotificationFlag_anyOf::eNotificationFlag_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case NotificationFlag_anyOf::eNotificationFlag_anyOf::ACTIVATE:
      j = "ACTIVATE";
      break;
    case NotificationFlag_anyOf::eNotificationFlag_anyOf::DEACTIVATE:
      j = "DEACTIVATE";
      break;
    case NotificationFlag_anyOf::eNotificationFlag_anyOf::RETRIEVAL:
      j = "RETRIEVAL";
      break;
  }
}

void from_json(const nlohmann::json& j, NotificationFlag_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "ACTIVATE") {
    o.setValue(NotificationFlag_anyOf::eNotificationFlag_anyOf::ACTIVATE);
  } else if (s == "DEACTIVATE") {
    o.setValue(NotificationFlag_anyOf::eNotificationFlag_anyOf::DEACTIVATE);
  } else if (s == "RETRIEVAL") {
    o.setValue(NotificationFlag_anyOf::eNotificationFlag_anyOf::RETRIEVAL);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " NotificationFlag_anyOf::eNotificationFlag_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

NotificationFlag_anyOf::eNotificationFlag_anyOf
NotificationFlag_anyOf::getValue() const {
  return m_value;
}
void NotificationFlag_anyOf::setValue(
    NotificationFlag_anyOf::eNotificationFlag_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::udm
