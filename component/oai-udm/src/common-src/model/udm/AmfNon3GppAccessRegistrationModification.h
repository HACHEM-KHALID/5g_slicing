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
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AmfNon3GppAccessRegistrationModification.h
 *
 *
 */

#ifndef AmfNon3GppAccessRegistrationModification_H_
#define AmfNon3GppAccessRegistrationModification_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "BackupAmfInfo.h"
#include "Guami.h"
#include "ImsVoPs.h"

namespace oai::model::udm {

/// <summary>
///
/// </summary>
class AmfNon3GppAccessRegistrationModification {
 public:
  AmfNon3GppAccessRegistrationModification();
  virtual ~AmfNon3GppAccessRegistrationModification();

  void validate();

  /////////////////////////////////////////////
  /// AmfNon3GppAccessRegistrationModification members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::Guami getGuami() const;
  void setGuami(oai::model::common::Guami const& value);
  /// <summary>
  ///
  /// </summary>
  bool isPurgeFlag() const;
  void setPurgeFlag(bool const value);
  bool purgeFlagIsSet() const;
  void unsetPurgeFlag();
  /// <summary>
  ///
  /// </summary>
  std::string getPei() const;
  void setPei(std::string const& value);
  bool peiIsSet() const;
  void unsetPei();
  /// <summary>
  ///
  /// </summary>
  ImsVoPs getImsVoPs() const;
  void setImsVoPs(ImsVoPs const& value);
  bool imsVoPsIsSet() const;
  void unsetImsVoPs();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::BackupAmfInfo>& getBackupAmfInfo();
  void setBackupAmfInfo(
      std::vector<oai::model::common::BackupAmfInfo> const& value);
  bool backupAmfInfoIsSet() const;
  void unsetBackupAmfInfo();

  friend void to_json(
      nlohmann::json& j, const AmfNon3GppAccessRegistrationModification& o);
  friend void from_json(
      const nlohmann::json& j, AmfNon3GppAccessRegistrationModification& o);

 protected:
  oai::model::common::Guami m_Guami;

  bool m_PurgeFlag;
  bool m_PurgeFlagIsSet;
  std::string m_Pei;
  bool m_PeiIsSet;
  ImsVoPs m_ImsVoPs;
  bool m_ImsVoPsIsSet;
  std::vector<oai::model::common::BackupAmfInfo> m_BackupAmfInfo;
  bool m_BackupAmfInfoIsSet;
};

}  // namespace oai::model::udm

#endif /* AmfNon3GppAccessRegistrationModification_H_ */
