#ifndef VEC_VEC2_HPP
#define VEC_VEC2_HPP

#include <cmath>
#include <string>

#include "Util.hpp"

class Vec2 {
public:
    float x, y;

    Vec2();
    Vec2(const float);
    Vec2(const float, const float);

    std::string toString();
    std::string toString(int);

    float lengthSquared();
    float length();

    Vec2 operator+(const Vec2) const;
    Vec2 operator+(const float) const;
    void operator+=(const Vec2);
    void operator+=(const float);

    Vec2 operator-(const Vec2) const;
    Vec2 operator-(const float) const;
    void operator-=(const Vec2);
    void operator-=(const float);

    Vec2 operator*(const Vec2) const;
    Vec2 operator*(const float) const;
    void operator*=(const Vec2);
    void operator*=(const float);

    Vec2 operator/(const Vec2) const;
    Vec2 operator/(const float) const;
    void operator/=(const Vec2);
    void operator/=(const float);

    Vec2 operator-() const;

    // non object specific

    static float dot(const Vec2, const Vec2);
    static float distance(const Vec2, const Vec2);
    static float distanceSquared(const Vec2, const Vec2);
    static Vec2 reflect(const Vec2, const Vec2);
    static Vec2 refract(const Vec2, const Vec2, const float);
    static Vec2 abs(const Vec2);
    static Vec2 step(const Vec2, const Vec2);
    static Vec2 sign(const Vec2);
};

// more prototypes

Vec2 operator+(const float, const Vec2);
Vec2 operator-(const float, const Vec2);
Vec2 operator*(const float, const Vec2);
Vec2 operator/(const float, const Vec2);

#endif
