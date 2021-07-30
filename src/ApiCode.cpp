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

#import "ApiCode.h"

std::map<int, ApiCode*> ApiCode::MAP = std::map<int, ApiCode*>();

ApiCode::ApiCode(const int& code, const std::string& message) {
  this->code = code;
  this->message = message;
  MAP.emplace(this->code, this);
}

ApiCode* ApiCode::get(int code) {
  if (ApiCode::MAP.find(code) != ApiCode::MAP.end())
    return ApiCode::MAP[code];
  else
    return ApiCode::MAP[0];
}

int ApiCode::getCode() const {
  return this->code;
}

std::string ApiCode::getMessage() const {
  return this->message;
}

const ApiCode ApiCode::NOT_FOUND = ApiCode(404, "Not found");

const ApiCode ApiCode::NOT_ALLOWED = ApiCode(405, "Method not allowed");

const ApiCode ApiCode::INVALID_KEY
    = ApiCode(1000, "Invalid API key and/or request signed improperly");

const ApiCode ApiCode::DISABLED_KEY = ApiCode(1010, "API key is disabled");

const ApiCode ApiCode::AUTH_NOT_PERMITTED = ApiCode(
    1013,
    "The auth mechanism used for this request is not "
    "permitted for the provided key");

const ApiCode ApiCode::API_USER_REQUIRED = ApiCode(
    1015,
    "ApiUser must be supplied, or the provided key does not "
    "have access to the supplied user");

const ApiCode ApiCode::X_SPARK_API_USER_AGENT_REQUIRED = ApiCode(
    1016,
    "The X-SparkApi-User-Agent request header is required. No "
    "request to the API will be successful without it. Please "
    "see the overview for additional information.");

const ApiCode ApiCode::READ_ONLY_ACCESS = ApiCode(
    1017,
    "You are restricted to read-only access. POST, PUT, and "
    "DELETE requests are forbidden.");

const ApiCode ApiCode::FORBIDDEN = ApiCode(
    1018,
    "You are forbidden from accessing this resource with the "
    "method attempted");

const ApiCode ApiCode::SESSION_EXPIRED
    = ApiCode(1020, "Session token has expired");

const ApiCode ApiCode::USER_ACCOUNT_NOT_AVAILABLE
    = ApiCode(1023, "The user's account is not yet available in Spark.");

const ApiCode ApiCode::PORTAL_GROUP_INVALID = ApiCode(
    1025,
    "The user has a Portal Group selected that is no longer valid. Set "
    "a new portal group before accessing this service.");

const ApiCode ApiCode::SSL_REQUIRED
    = ApiCode(1030, "SSL required for this type of request");

const ApiCode ApiCode::INVALID_JSON = ApiCode(
    1035,
    R"(POST data not supplied as valid JSON. Issued if the "Content-Type" header is not "application/json" and/or if the POST data is not in valid JSON format)");

const ApiCode ApiCode::INVALID_FILTER = ApiCode(
    1040,
    "The _filter syntax was invalid or a specified field to search on does "
    "not exist. Response will include the SparkQLErrors attribute.");

const ApiCode ApiCode::FILTER_EXCEEDS_RESTRICTIONS = ApiCode(
    1041,
    "(Message varies) The _filter syntax is valid but exceeds "
    "restrictions on filter or argument length Response will "
    "include the SparkQLErrors attribute.");

const ApiCode ApiCode::MISSING_PARAMETER = ApiCode(
    1050,
    "(Message varies) A required parameter for the request was not provided");

const ApiCode ApiCode::INVALID_PARAMETER = ApiCode(
    1053,
    "(Message varies) A parameter was provided but does not "
    "adhere to constraints");

const ApiCode ApiCode::INVALID_WRITE = ApiCode(
    1055,
    "(Message varies) Issued when a write is requested that "
    "will conflict with existing data. For instance, adding a "
    "new contact with an e-mail that already exists");

const ApiCode ApiCode::DATA_VALIDATION_FAILED = ApiCode(
    1060, "(Message varies) A Validation field did not match existing data");

const ApiCode ApiCode::PREVIOUS_DATA_PROHIBITED = ApiCode(
    1061, "(Message varies) Attempt to reuse previous data when prohibited");

const ApiCode ApiCode::PORTAL_REQUIRED = ApiCode(
    1100,
    "This resource cannot be accessed until a Portal account "
    "is created for the specified contact");

const ApiCode ApiCode::PORTAL_ALREADY_EXISTS
    = ApiCode(1110, "A portal already exists for this contact");

const ApiCode ApiCode::RESOURCE_UNAVAILABLE = ApiCode(
    1500,
    "The resource is not available at the current API key's service "
    "level. For example, this error applies if a user attempts to "
    "access the IDX Links API via a non-IDX API key.");

const ApiCode ApiCode::RESOURCE_DISABLED = ApiCode(
    1505,
    "(Message varies) This resource, or a component of this resource, "
    "is disabled for the current user's MLS. This is usually temporary, "
    "such as during a gradual rollout of a feature.");

const ApiCode ApiCode::TEMPORARY_UNAVAILABLE
    = ApiCode(1510, "The API is temporarily unavailable.");

const ApiCode ApiCode::LONG_REQUEST_CANCELLED = ApiCode(
    1515,
    "Your request took too long to process and has therefore been cancelled.");

const ApiCode ApiCode::LONG_REQUEST_FILTER_OR_ORDERBY_CANCELLED = ApiCode(
    1516,
    "Your request took too long to process and was cancelled "
    "due to the _filter or _orderby parameter you provided.");

const ApiCode ApiCode::RATE_LIMIT_EXCEEDED = ApiCode(1550, "Over rate limit");

const ApiCode ApiCode::RESERVED = ApiCode(
    2000,
    "Codes 2000-2999 are reserved for value-specific errors in the "
    "_filter parameter. These are not syntax errors, but instead errors "
    "specific to the valid field present in the parameter. Responses "
    "will include the SparkQLErrors attribute.");

const ApiCode ApiCode::SAVED_SEARCH_UNAVAILBLE = ApiCode(
    2001,
    "The SavedSearch specified does not exist or is not "
    "available to the current user.");

const ApiCode ApiCode::EMAIL_LINK_UNAVAILBLE = ApiCode(
    2002,
    "The EmailLink specified does not exist or is not "
    "available to the current user.");

const ApiCode ApiCode::SHARED_LISTINGS_ID_UNAVAILABLE = ApiCode(
    2003,
    "The SharedListings id specified does not exist or does "
    "not contain listings.");

const ApiCode ApiCode::SEARCH_CRITERIA_RESTRICTIONS = ApiCode(
    2500,
    "The search you are attempting to subscribe to does not "
    "meet the search criteria restrictions.");

const ApiCode ApiCode::USER_ALREADY_SUBSCRIBED_TO_SEARCH = ApiCode(
    2505, "The current user is already subscribed to this saved search.");

const ApiCode ApiCode::RESO_VERSION_NOT_SUPPORTED = ApiCode(
    3000, "The RESO data dictionary version you requested is not supported.");

const ApiCode ApiCode::UNKNOWN_API_CODE = ApiCode(0, "");
