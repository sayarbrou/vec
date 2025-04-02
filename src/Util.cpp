#include "vec/Util.hpp"

#include <string>
#include <cmath>

std::string Util::trunc(float val, int decimals) {
    std::string tmp = std::to_string(val);
    int ind = tmp.find(".");
    return tmp.substr(0, std::min(ind + decimals + 1, static_cast<int>(tmp.size()-1)));
}
