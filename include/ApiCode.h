#ifndef SPARKAPI_CPP_APICODE_H
#define SPARKAPI_CPP_APICODE_H

#include <string>
#include <utility>

class ApiCode {

    private:
        int code;
        std::string message;

        ApiCode(int code, std::string message) {
            this->code = code;
            this->message = std::move(message);
        }

    public:
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

        [[nodiscard]] int getCode() const {
            return this->code;
        }

        [[nodiscard]] std::string getMessage() const {
            return this->message;
        }

};



#endif //SPARKAPI_CPP_APICODE_H
