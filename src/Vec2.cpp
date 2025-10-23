#include "vec/Vec2.hpp"

#include <cmath>
#include <string>

#include "Util.hpp"

template <typename T> Vec2::Vec2<T>() { x = y = 0.0; }
template <typename T> Vec2::Vec2<T>(const T val) { x = y = val; }
template <typename T> Vec2::Vec2<T>(const T val1, const T val2) { x = val1; y = val2; }

template <typename T> std::string Vec2::toString() {
    std::string output = "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
    return output;
}

template <typename T> T Vec2::lengthSquared() { return x*x + y*y; }
template <typename T> T Vec2::length() { return std::sqrt(x*x + y*y); }

template <typename T> Vec2<T> Vec2::operator+(const Vec2<T> vec) const { return Vec2<T>(x + vec.x, y + vec.y); }
template <typename T> Vec2<T> Vec2::operator+(const T val) const { return Vec2<T>(x + val, y + val); }
template <typename T> void Vec2::operator+=(const Vec2<T> vec) { x += vec.x; y += vec.y; }
template <typename T> void Vec2::operator+=(const T val) { x += val; y += val; }

template <typename T> Vec2<T> Vec2::operator-(const Vec2<T> vec) const { return Vec2<T>(x - vec.x, y - vec.y); }
template <typename T> Vec2<T> Vec2::operator-(const T val) const { return Vec2<T>(x - val, y - val); }
template <typename T> void Vec2::operator-=(const Vec2<T> vec) { x -= vec.x; y -= vec.y; }
template <typename T> void Vec2::operator-=(const T val) { x -= val; y -= val; }

template <typename T> Vec2<T> Vec2::operator*(const Vec2<T> vec) const { return Vec2<T>(x * vec.x, y * vec.y); }
template <typename T> Vec2<T> Vec2::operator*(const T val) const { return Vec2<T>(x * val, y * val); }
template <typename T> void Vec2::operator*=(const Vec2<T> vec) { x *= vec.x; y *= vec.y; }
template <typename T> void Vec2::operator*=(const T val) { x *= val; y *= val; }

template <typename T> Vec2<T> Vec2::operator/(const Vec2<T> vec) const { return Vec2<T>(x / vec.x, y / vec.y); }
template <typename T> Vec2<T> Vec2::operator/(const T val) const { return Vec2<T>(x / val, y / val); }
template <typename T> void Vec2::operator/=(const Vec2<T> vec) { x /= vec.x; y /= vec.y; }
template <typename T> void Vec2::operator/=(const T val) { x /= val; y /= val; }

template <typename T> Vec2<T> Vec2::operator-() const { return Vec2<T>(-x, -y); }

// more definitions

template <typename T> Vec2<T> operator+(const T val, const Vec2<T> vec) { return Vec2<T>(val + vec.x, val + vec.y); }
template <typename T> Vec2<T> operator-(const T val, const Vec2<T> vec) { return Vec2<T>(val - vec.x, val - vec.y); }
template <typename T> Vec2<T> operator*(const T val, const Vec2<T> vec) { return Vec2<T>(val * vec.x, val * vec.y); }
template <typename T> Vec2<T> operator/(const T val, const Vec2<T> vec) { return Vec2<T>(val / vec.x, val / vec.y); }

// non object specific

template <typename T> T Vec2::dot(const Vec2<T> a, const Vec2<T> b) { 
    return a.x*b.x + a.y*b.y; 
}

template <typename T> T Vec2::distance(const Vec2<T> a, const Vec2<T> b) {
    return (a - b).length();
}

template <typename T> T Vec2::distanceSquared(const Vec2<T> a, const Vec2<T> b) {
    return (a - b).lengthSquared();
}

template <typename T> Vec2<T> Vec2::reflect(const Vec2<T> i, const Vec2<T> n) {
    return i - 2.0 * dot(i, n) * n;
}

template <typename T> Vec2<T> Vec2::refract(const Vec2<T> i, const Vec2<T> n, const T eta) {
    T d = dot(n, i);
    T k = 1.0 - eta*eta * (1.0 - d*d);

    return (k < 0.0) ? Vec2<T>(0.0) : eta * i - (eta * d + std::sqrt(k)) * n; 
}

template <typename T> Vec2<T> Vec2::abs(const Vec2<T> vec) {
    return Vec2<T>(std::abs(vec.x), std::abs(vec.y));
}

template <typename T> Vec2<T> Vec2::step(const Vec2<T> edge, const Vec2<T> x) {
    return Vec2<T>(
        (x.x < edge.x) ? 0.0 : 1.0,
        (x.y < edge.y) ? 0.0 : 1.0
    );
}

template <typename T> Vec2<T> Vec2::sign(const Vec2<T> vec) {
    return Vec2<T>(
        (vec.x < 0.0) ? -1.0 : ((vec.x > 0.0) ? 1.0 : 0.0),
        (vec.y < 0.0) ? -1.0 : ((vec.y > 0.0) ? 1.0 : 0.0)
    );
}
