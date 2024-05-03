/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * KeyType.h
 *
 * Represents the type of a key.
 */

#ifndef KeyType_H_
#define KeyType_H_

#include <nlohmann/json.hpp>

namespace oai::model::udsf {

/// <summary>
/// Represents the type of a key.
/// </summary>
class KeyType {
 public:
  KeyType();
  virtual ~KeyType() = default;

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

  bool operator==(const KeyType& rhs) const;
  bool operator!=(const KeyType& rhs) const;

  void get(std::string& kt) const;
  std::string get() const;
  void set(const std::string& kt);

  /////////////////////////////////////////////
  /// KeyType members

  friend void to_json(nlohmann::json& j, const KeyType& o);
  friend void from_json(const nlohmann::json& j, KeyType& o);

 protected:
  std::string value;
};

}  // namespace oai::model::udsf

#endif /* KeyType_H_ */