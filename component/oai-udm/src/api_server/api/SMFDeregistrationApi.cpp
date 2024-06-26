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

#include "SMFDeregistrationApi.h"

#include "Helpers.h"
#include "udm_sbi_helper.hpp"
#include "udm_config.hpp"

extern oai::udm::config::udm_config udm_cfg;

namespace oai::udm::api {

using namespace oai::model::common::helpers;
using namespace oai::model::common;
using namespace oai::udm::config;

SMFDeregistrationApi::SMFDeregistrationApi(
    std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void SMFDeregistrationApi::init() {
  setupRoutes();
}

void SMFDeregistrationApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Delete(
      *router,
      udm_sbi_helper::ContextManagementServiceBase +
          udm_sbi_helper::UdmUeCmPathSmfRegistrationPduSession,
      Routes::bind(&SMFDeregistrationApi::smf_deregistration_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &SMFDeregistrationApi::smf_deregistration_api_default_handler, this));
}

void SMFDeregistrationApi::smf_deregistration_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  // Getting the path params
  auto ueId         = request.param(":ueId").as<std::string>();
  auto pduSessionId = request.param(":pduSessionId").as<int32_t>();

  // Getting the query params
  auto smfSetIdQuery = request.query().get("smf-set-id");
  Pistache::Optional<std::string> smfSetId;
  if (!smfSetIdQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(smfSetIdQuery.get(), valueQuery_instance)) {
      smfSetId = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->smf_deregistration(ueId, pduSessionId, smfSetId, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (Pistache::Http::HttpError& e) {
    response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void SMFDeregistrationApi::smf_deregistration_api_default_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::udm::api
