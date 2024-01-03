#pragma once
#include "Punct2D.h"

class Punct3D : public Punct2D {
private:
    double z;

public:
    Punct3D();
    Punct3D(double xVal, double yVal, double zVal);
    ~Punct3D() override;

    double getZ() const;

    Punct3D& operator=(const Punct3D& other);
    double distanta(const Punct3D& other) const;
};
