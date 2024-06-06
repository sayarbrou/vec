#pragma once

#include <string>
#include <cmath>

namespace Util {
    std::string trunc(float, int);
};

std::string Util::trunc(float val, int decimals) {
    std::string tmp = std::to_string(val);
    int ind = tmp.find(".");
    return tmp.substr(0, std::min(ind + decimals + 1, (int)(tmp.size()-1)));
}
