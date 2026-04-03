#ifndef REPLACEALL_HPP
# define REPLACEALL_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <string_view>

std::string replaceall(std::string_view content, std::string_view s1, std::string_view s2);

#endif