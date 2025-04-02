#ifndef VEC_VEC3_HPP

#include <cmath>
#include <string>

#include "Vec2.hpp"
#include "Util.hpp"

class Vec3 {
public:
    float x, y, z;

    Vec3();
    Vec3(const float);
    Vec3(const float, const float, const float);
    Vec3(const Vec2, const float);
    Vec3(const float, const Vec2);

    std::string toString();
    std::string toString(int);

    float lengthSquared();
    float length();

    Vec3 operator+(const Vec3) const;
    Vec3 operator+(const float) const;
    void operator+=(const Vec3);
    void operator+=(const float);

    Vec3 operator-(const Vec3) const;
    Vec3 operator-(const float) const;
    void operator-=(const Vec3);
    void operator-=(const float);

    Vec3 operator*(const Vec3) const;
    Vec3 operator*(const float) const;
    void operator*=(const Vec3);
    void operator*=(const float);

    Vec3 operator/(const Vec3) const;
    Vec3 operator/(const float) const;
    void operator/=(const Vec3);
    void operator/=(const float);

    Vec3 operator-() const;

    // non object specific

    static float dot(const Vec3, const Vec3);
    static float distance(const Vec3, const Vec3);
    static float distanceSquared(const Vec3, const Vec3);
    static Vec3 normalize(Vec3);
    static Vec3 cross(const Vec3, const Vec3);
    static Vec3 reflect(const Vec3, const Vec3);
    static Vec3 refract(const Vec3, const Vec3, const float);
    static Vec3 abs(const Vec3);
    static Vec3 step(const Vec3, const Vec3);
    static Vec3 sign(const Vec3);
    static Vec3 min(const Vec3, const Vec3);
    static Vec3 max(const Vec3, const Vec3);
    static Vec3 lerp(const Vec3, const Vec3, const Vec3);
    static Vec3 pow(const Vec3, const Vec3);
};

// more prototypes

Vec3 operator+(const float, const Vec3);
Vec3 operator-(const float, const Vec3);
Vec3 operator*(const float, const Vec3);
Vec3 operator/(const float, const Vec3);

#endif
