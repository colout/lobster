// Copyright 2014 Wouter van Oortmerssen. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LOBSTER_COMPILER
#define LOBSTER_COMPILER

#include "lobster/natreg.h"

namespace lobster {

extern void Compile(NativeRegistry &natreg, string_view fn, string_view stringsource,
                    string &bytecode, string *parsedump, string *pakfile,
                    bool dump_builtins, bool dump_names, bool return_value);
extern bool LoadPakDir(const char *lpak);
extern bool LoadByteCode(string &bytecode);
extern void RegisterBuiltin(NativeRegistry &natreg, const char *name,
                            void (* regfun)(NativeRegistry &));
extern void RegisterCoreLanguageBuiltins(NativeRegistry &natreg);

}

#endif  // LOBSTER_COMPILER
