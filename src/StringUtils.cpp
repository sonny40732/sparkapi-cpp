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

#include "StringUtils.h"

using namespace utils;

bool stringToCharArr(const vector<string>& input, vector<char*>& output) {
  try {
    int i = 0;
    for (const string& item : input) {
      if (!cString(item, output[0]))
        throw exception();
      ++i;
    }
    return true;
  } catch (...) { return false; }
}

bool cString(const string& input, char*& output) {
  const vector<char> tmp(input.begin(), input.end());
  return cString(tmp, output);
}

bool cString(const vector<char>& input, char*& output) {
  try {
    const long size = input.size();
    output = new char[size + 1];
    for (long i = size - 1; i >= 0; --i) output[i] = input[i];
    output[size] = '\0';
    return true;
  } catch (...) { return false; }
}
