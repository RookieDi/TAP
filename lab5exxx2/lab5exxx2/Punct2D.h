#pragma once
#include <iostream>
#include <cmath>

class Punct2D {
protected:
    double x, y;

public:
    Punct2D();
    Punct2D(double xVal, double yVal);
    virtual ~Punct2D();

    double getX() const;
    double getY() const;

    Punct2D& operator=(const Punct2D& other);
    bool operator<(const Punct2D& other) const;
    bool operator<=(const Punct2D& other) const;
    bool operator>(const Punct2D& other) const;
    bool operator>=(const Punct2D& other) const;
    bool operator==(const Punct2D& other) const;
    bool operator!=(const Punct2D& other) const;
    Punct2D operator+(const Punct2D& other) const;
    Punct2D operator-(const Punct2D& other) const;
    Punct2D operator*(const double scalar) const;
    Punct2D operator/(const double divisor) const;
    Punct2D& operator+=(const Punct2D& other);
    Punct2D& operator-=(const Punct2D& other);
    Punct2D& operator*=(const double scalar);
    Punct2D& operator/=(const double divisor);
    Punct2D operator--();
    Punct2D operator--(int);

    friend std::ostream& operator<<(std::ostream& out, const Punct2D& p);
    friend std::istream& operator>>(std::istream& in, Punct2D& p);

    double distanta(const Punct2D& other) const;
};

