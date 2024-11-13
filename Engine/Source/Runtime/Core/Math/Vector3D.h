#pragma once

class Vector3D
{
public:
    double x;
    double y;
    double z;

    Vector3D() : x(0.0), y(0.0), z(0.0) {}
    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

    // Addition operator
    Vector3D operator+(const Vector3D& other) const
    {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }

    // Assignment operator
    Vector3D& operator+=(const Vector3D& other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }
};