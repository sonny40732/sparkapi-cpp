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

#ifndef SPARKAPI_CPP_CONFIG_H
#define SPARKAPI_CPP_CONFIG_H

#import "Utils/StringUtils.h"

#import <string>
#import <vector>

class Config {

  private:

  /**
   * Stores theX-SparkApi-User-Agent header value
   * Aka the name of the program using the library
   * This is not the User-Agent header, that is set based the library and for
   * this library it is set as "SparkApiCpp"
   */
  std::string XUserAgent;

  Config(std::string& test) {
    XUserAgent = test;
  }

  public:

  virtual void auth() = 0;

  /**
   *{'S','p','a','r','k','A','p','i','-','c','p','p', '\0'}
   */
  constexpr static char userAgent[] {
      'S', 'p', 'a', 'r', 'k', 'A', 'p', 'i', '-', 'c', 'p', 'p', '\0'};
};

#endif   //SPARKAPI_CPP_CONFIG_H
