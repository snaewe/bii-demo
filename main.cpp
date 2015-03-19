/**
 * @file main.cpp
 * @section LICENSE

    This code is under MIT License, http://opensource.org/licenses/MIT
 */

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <iostream>
#include <string>

inline
std::string binstr(const char* s, size_t N)
{
  return std::string(s, N);
}

template<size_t N>
std::string binstr(char const (&s)[N])
{
  // -1 because a string literal contains a trailing '\0' which wee don't want.
  return binstr(s, N-1);
}

#if 0
std::string binstr(const char* s)
{
  return std::string(s);
}
#endif

TEST_CASE()
{
  REQUIRE(binstr("\x03\x00\x02").size() == 3);
  REQUIRE(binstr("").size() == 0);
  REQUIRE(binstr("\x03\x00\x02")[0] == '\x03');
  REQUIRE(binstr("\x03\x00\x02")[1] == '\x00');
}

int main(int argc, char* argv[])
{
  int result = Catch::Session().run( argc, argv );

  return result;
}
