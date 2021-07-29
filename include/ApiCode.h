//
//   Copyright (c) 2021 sonny40732
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

#ifndef SPARKAPI_CPP_APICODE_H
#define SPARKAPI_CPP_APICODE_H

#import <map>
#import <string>
#import <utility>

/**
 * ApiCode is an implementation of all the SparkAPI Error Codes
 * @see <a
 * href="http://sparkplatform.com/docs/supporting_documentation/error_codes">
 * http://sparkplatform.com/docs/supporting_documentation/error_codes</a>
 */
class ApiCode {

  private:
  /**
   * The std::map for reverse lookups
   */
  static std::map<int, ApiCode*> MAP;
  /**
   * The SparkApi error code
   * @see <a
   * href="http://sparkplatform.com/docs/supporting_documentation/error_codes">
   * http://sparkplatform.com/docs/supporting_documentation/error_codes</a>
   */
  int code;
  /**
   * The message for the error
   * @see <a
   * href="http://sparkplatform.com/docs/supporting_documentation/error_codes">
   * http://sparkplatform.com/docs/supporting_documentation/error_codes</a>
   */
  std::string message;

  /**
   * Constructor for SparkAPi class<br>
   * Objects should only be created in accordance to the see also link<br>
   * With the exception of the UNKNOWN_API_CODE with should always be (0, "")
   * @see <a
   * href="http://sparkplatform.com/docs/supporting_documentation/error_codes">
   * http://sparkplatform.com/docs/supporting_documentation/error_codes</a>
   * @param code: SparkApi error code
   * @param message: message for the error code
   */
  ApiCode(const int& code, const std::string& message);

  public:
  /**
   * @return The Code of the APiCode object
   */
  [[nodiscard]] int getCode() const;

  /**
   * @return the message of the ApiCode object
   */
  [[nodiscard]] std::string getMessage() const;

  /**
   * Reverse lookup for ApiCode
   * @param code: The SparkAPi error code
   * @return A pointer to the APiCode static object for that error code or
   * ApiCode::UNKNOWN_API_CODE
   */
  [[nodiscard]] static ApiCode* get(int code);

  static const ApiCode NOT_FOUND;
  static const ApiCode NOT_ALLOWED;
  static const ApiCode INVALID_KEY;
  static const ApiCode DISABLED_KEY;
  static const ApiCode AUTH_NOT_PERMITTED;
  static const ApiCode API_USER_REQUIRED;
  static const ApiCode X_SPARK_API_USER_AGENT_REQUIRED;
  static const ApiCode READ_ONLY_ACCESS;
  static const ApiCode FORBIDDEN;
  static const ApiCode SESSION_EXPIRED;
  static const ApiCode USER_ACCOUNT_NOT_AVAILABLE;
  static const ApiCode PORTAL_GROUP_INVALID;
  static const ApiCode SSL_REQUIRED;
  static const ApiCode INVALID_JSON;
  static const ApiCode INVALID_FILTER;
  static const ApiCode FILTER_EXCEEDS_RESTRICTIONS;
  static const ApiCode MISSING_PARAMETER;
  static const ApiCode INVALID_PARAMETER;
  static const ApiCode INVALID_WRITE;
  static const ApiCode DATA_VALIDATION_FAILED;
  static const ApiCode PREVIOUS_DATA_PROHIBITED;
  static const ApiCode PORTAL_REQUIRED;
  static const ApiCode PORTAL_ALREADY_EXISTS;
  static const ApiCode RESOURCE_UNAVAILABLE;
  static const ApiCode RESOURCE_DISABLED;
  static const ApiCode TEMPORARY_UNAVAILABLE;
  static const ApiCode LONG_REQUEST_CANCELLED;
  static const ApiCode LONG_REQUEST_FILTER_OR_ORDERBY_CANCELLED;
  static const ApiCode RATE_LIMIT_EXCEEDED;
  static const ApiCode RESERVED;
  static const ApiCode SAVED_SEARCH_UNAVAILBLE;
  static const ApiCode EMAIL_LINK_UNAVAILBLE;
  static const ApiCode SHARED_LISTINGS_ID_UNAVAILABLE;
  static const ApiCode SEARCH_CRITERIA_RESTRICTIONS;
  static const ApiCode USER_ALREADY_SUBSCRIBED_TO_SEARCH;
  static const ApiCode RESO_VERSION_NOT_SUPPORTED;
  static const ApiCode UNKNOWN_API_CODE;
};

#endif   // SPARKAPI_CPP_APICODE_H
