#ifndef VEC_VEC2_HPP
#define VEC_VEC2_HPP

#include <cmath>
#include <string>

template <typename T>
class Vec2 {
public:
    T x, y;

    Vec2();
    Vec2(const T);
    Vec2(const T, const T);

    std::string toString();

    T lengthSquared();
    T length();

    Vec2 operator+(const Vec2) const;
    Vec2 operator+(const T) const;
    void operator+=(const Vec2);
    void operator+=(const T);

    Vec2 operator-(const Vec2) const;
    Vec2 operator-(const T) const;
    void operator-=(const Vec2);
    void operator-=(const T);

    Vec2 operator*(const Vec2) const;
    Vec2 operator*(const T) const;
    void operator*=(const Vec2);
    void operator*=(const T);

    Vec2 operator/(const Vec2) const;
    Vec2 operator/(const T) const;
    void operator/=(const Vec2);
    void operator/=(const T);

    Vec2 operator-() const;

    // non object specific

    static T dot(const Vec2, const Vec2);
    static T distance(const Vec2, const Vec2);
    static T distanceSquared(const Vec2, const Vec2);
    static Vec2 reflect(const Vec2, const Vec2);
    static Vec2 refract(const Vec2, const Vec2, const T);
    static Vec2 abs(const Vec2);
    static Vec2 step(const Vec2, const Vec2);
    static Vec2 sign(const Vec2);
};

// more prototypes

Vec2 operator+(const T, const Vec2);
Vec2 operator-(const T, const Vec2);
Vec2 operator*(const T, const Vec2);
Vec2 operator/(const T, const Vec2);

#endif
