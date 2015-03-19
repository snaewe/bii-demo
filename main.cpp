/**
 * Print a simple "Hello world!"
 *
 * @file main.cpp
 * @section LICENSE

    This code is under MIT License, http://opensource.org/licenses/MIT
 */

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

int main() {
  std::cout << binstr("\x03\x00\x02").size() << std::endl;
  std::cout << binstr("").size() << std::endl;
}
