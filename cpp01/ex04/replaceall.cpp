#include "replaceall.hpp"

std::string replaceall(std::string_view content, std::string_view s1, std::string_view s2)
{
    if (s1.empty())
        return std::string(content);

    std::string result;
    size_t pos = 0;
    size_t lastpos = 0;

    while ((pos = content.find(s1, lastpos)) != std::string_view::npos)
    {
        result.append(content.substr(lastpos, pos - lastpos));
        result.append(s2);
        lastpos = pos + s1.length();
    }
    result.append(content.substr(lastpos));
    return result;
}
