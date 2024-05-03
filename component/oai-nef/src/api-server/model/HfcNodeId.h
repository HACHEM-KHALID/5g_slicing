/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * HfcNodeId.h
 *
 *
 */

#ifndef HfcNodeId_H_
#define HfcNodeId_H_

#include <nlohmann/json.hpp>
#include <string>

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class HfcNodeId {
 public:
  HfcNodeId();
  virtual ~HfcNodeId() = default;

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

  bool operator==(const HfcNodeId& rhs) const;
  bool operator!=(const HfcNodeId& rhs) const;

  /////////////////////////////////////////////
  /// HfcNodeId members

  /// <summary>
  ///
  /// </summary>
  std::string getHfcNId() const;
  void setHfcNId(std::string const& value);

  friend void to_json(nlohmann::json& j, const HfcNodeId& o);
  friend void from_json(const nlohmann::json& j, HfcNodeId& o);

 protected:
  std::string m_HfcNId;
};

}  // namespace oai::nef::model

#endif /* HfcNodeId_H_ */