/**
 * 3gpp-lpi-pp
 * API for Location Privacy Indication Parameters Provisioning. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * LocationPrivacyInd.h
 *
 *
 */

#ifndef LocationPrivacyInd_H_
#define LocationPrivacyInd_H_

#include <nlohmann/json.hpp>

#include "LocationPrivacyInd_anyOf.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class LocationPrivacyInd {
 public:
  LocationPrivacyInd();
  virtual ~LocationPrivacyInd() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const LocationPrivacyInd& rhs) const;
  bool operator!=(const LocationPrivacyInd& rhs) const;

  /////////////////////////////////////////////
  /// LocationPrivacyInd members

  LocationPrivacyInd_anyOf getValue() const;
  void setValue(LocationPrivacyInd_anyOf value);
  LocationPrivacyInd_anyOf::eLocationPrivacyInd_anyOf getEnumValue() const;
  void setEnumValue(LocationPrivacyInd_anyOf::eLocationPrivacyInd_anyOf value);
  friend void to_json(nlohmann::json& j, const LocationPrivacyInd& o);
  friend void from_json(const nlohmann::json& j, LocationPrivacyInd& o);
  friend void to_json(nlohmann::json& j, const LocationPrivacyInd_anyOf& o);
  friend void from_json(const nlohmann::json& j, LocationPrivacyInd_anyOf& o);

 protected:
  LocationPrivacyInd_anyOf m_value;
};

}  // namespace oai::nef::model

#endif /* LocationPrivacyInd_H_ */