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
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2019, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SscModes.h
 *
 *
 */

#ifndef SscModes_H_
#define SscModes_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "SscMode.h"

namespace oai::model::udm {

/// <summary>
///
/// </summary>
class SscModes {
 public:
  SscModes();
  virtual ~SscModes();

  void validate();

  /////////////////////////////////////////////
  /// SscModes members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::SscMode getDefaultSscMode() const;
  void setDefaultSscMode(oai::model::common::SscMode const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::SscMode>& getAllowedSscModes();
  bool allowedSscModesIsSet() const;
  void unsetAllowedSscModes();

  friend void to_json(nlohmann::json& j, const SscModes& o);
  friend void from_json(const nlohmann::json& j, SscModes& o);

 protected:
  oai::model::common::SscMode m_DefaultSscMode;

  std::vector<oai::model::common::SscMode> m_AllowedSscModes;
  bool m_AllowedSscModesIsSet;
};

}  // namespace oai::model::udm

#endif /* SscModes_H_ */
