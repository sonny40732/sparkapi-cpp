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

#ifndef SPARKAPI_CPP_STRINGUTILS_H
#define SPARKAPI_CPP_STRINGUTILS_H

#import <string>
#import <vector>

using namespace std;

namespace utils {
  bool cString(const vector<char>& input, char*& output);

  bool cString(const string& input, char*& output);

  bool stringToCharArr(const vector<string>& input, vector<char*>& output);
}   //namespace utils

#endif   //SPARKAPI_CPP_STRINGUTILS_H
