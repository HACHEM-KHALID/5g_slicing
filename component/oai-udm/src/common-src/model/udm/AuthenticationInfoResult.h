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
 * Nudm_UEAU
 * UDM UE Authentication Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AuthenticationInfoResult.h
 *
 *
 */

#ifndef AuthenticationInfoResult_H_
#define AuthenticationInfoResult_H_

#include <nlohmann/json.hpp>
#include <string>

#include "AuthType.h"
#include "AuthenticationVector.h"

namespace oai::model::udm {

/// <summary>
///
/// </summary>
class AuthenticationInfoResult {
 public:
  AuthenticationInfoResult();
  virtual ~AuthenticationInfoResult();

  void validate();

  /////////////////////////////////////////////
  /// AuthenticationInfoResult members

  /// <summary>
  ///
  /// </summary>
  AuthType getAuthType() const;
  void setAuthType(AuthType const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  ///
  /// </summary>
  AuthenticationVector getAuthenticationVector() const;
  void setAuthenticationVector(AuthenticationVector const& value);
  bool authenticationVectorIsSet() const;
  void unsetAuthenticationVector();
  /// <summary>
  ///
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const& value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  bool isAkmaInd() const;
  void setAkmaInd(bool const value);
  bool akmaIndIsSet() const;
  void unsetAkmaInd();

  friend void to_json(nlohmann::json& j, const AuthenticationInfoResult& o);
  friend void from_json(const nlohmann::json& j, AuthenticationInfoResult& o);

 protected:
  AuthType m_AuthType;

  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  AuthenticationVector m_AuthenticationVector;
  bool m_AuthenticationVectorIsSet;
  std::string m_Supi;
  bool m_SupiIsSet;
  bool m_AkmaInd;
  bool m_AkmaIndIsSet;
};

}  // namespace oai::model::udm

#endif /* AuthenticationInfoResult_H_ */