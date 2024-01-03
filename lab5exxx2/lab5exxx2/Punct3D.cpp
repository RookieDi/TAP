#include "Punct3D.h"

Punct3D::Punct3D() : Punct2D(), z(0.0) {}

Punct3D::Punct3D(double xVal, double yVal, double zVal) : Punct2D(xVal, yVal), z(zVal) {}

Punct3D::~Punct3D() {}

double Punct3D::getZ() const { return z; }

Punct3D& Punct3D::operator=(const Punct3D& other) {
    if (this != &other) {
        Punct2D::operator=(other);
        z = other.z;
    }
    return *this;
}

double Punct3D::distanta(const Punct3D& other) const {
    return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y) + (z - other.z) * (z - other.z));
}
