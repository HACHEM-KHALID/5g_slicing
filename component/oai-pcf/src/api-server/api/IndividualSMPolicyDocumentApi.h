/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1.alpha-5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * IndividualSMPolicyDocumentApi.h
 *
 *
 */

#ifndef IndividualSMPolicyDocumentApi_H_
#define IndividualSMPolicyDocumentApi_H_

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>

#include <optional>
#include <utility>

#include "ProblemDetails.h"
#include "SmPolicyControl.h"
#include "SmPolicyDecision.h"
#include "SmPolicyDeleteData.h"
#include "SmPolicyUpdateContextData.h"
#include <string>

namespace oai::pcf::api {

using namespace oai::model::pcf;

class IndividualSMPolicyDocumentApi {
 public:
  explicit IndividualSMPolicyDocumentApi(
      const std::shared_ptr<Pistache::Rest::Router>& rtr);
  virtual ~IndividualSMPolicyDocumentApi() = default;
  void init();

 private:
  void setupRoutes();

  void delete_sm_policy_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void get_sm_policy_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void update_sm_policy_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void individual_sm_policy_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  const std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during Parameter parsing
  /// and validation. May be overridden to return custom error formats. This is
  /// called inside a catch block. Important: When overriding, do not call
  /// `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(
      const std::exception& ex) const noexcept;

  /// <summary>
  /// Helper function to handle unexpected Exceptions during processing of the
  /// request in handler functions. May be overridden to return custom error
  /// formats. This is called inside a catch block. Important: When overriding,
  /// do not call `throw ex;`, but instead use `throw;`.
  /// </summary>
  virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(
      const std::exception& ex) const noexcept;

  /// <summary>
  /// Delete an existing Individual SM Policy
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="smPolicyId">Identifier of a policy association</param>
  /// <param name="smPolicyDeleteData"></param>
  virtual void delete_sm_policy(
      const std::string& smPolicyId,
      const oai::model::pcf::SmPolicyDeleteData& smPolicyDeleteData,
      Pistache::Http::ResponseWriter& response) = 0;
  /// <summary>
  /// Read an Individual SM Policy
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="smPolicyId">Identifier of a policy association</param>
  virtual void get_sm_policy(
      const std::string& smPolicyId,
      Pistache::Http::ResponseWriter& response) = 0;
  /// <summary>
  /// Update an existing Individual SM Policy
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="smPolicyId">Identifier of a policy association</param>
  /// <param name="smPolicyUpdateContextData"></param>
  virtual void update_sm_policy(
      const std::string& smPolicyId,
      const oai::model::pcf::SmPolicyUpdateContextData&
          smPolicyUpdateContextData,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::pcf::api

#endif /* IndividualSMPolicyDocumentApi_H_ */
