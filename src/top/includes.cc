#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <algorithm>
#include <vector>
#include <filesystem>
#include <fstream>

extern "C"
{
#include "../../libs/lua/include/lua.h"
#include "../../libs/lua/include/lauxlib.h"
#include "../../libs/lua/include/lualib.h"
}

#ifdef _WIN32
#pragma comment(lib, "../../libs/liblua54.a")
#endif

// using std::cout, std::cin, std::string;

// functions

#include "../executions/index.hh"
#include "../functions/functionStrings.hh"