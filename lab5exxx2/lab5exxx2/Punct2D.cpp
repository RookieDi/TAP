#include "Punct2D.h"

Punct2D::Punct2D() : x(0.0), y(0.0) {}

Punct2D::Punct2D(double xVal, double yVal) : x(xVal), y(yVal) {}

Punct2D::~Punct2D() {}

double Punct2D::getX() const {
    return x;
}

double Punct2D::getY() const {
    return y;
}

Punct2D& Punct2D::operator=(const Punct2D& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

bool Punct2D::operator<(const Punct2D& other) const {
    return (x < other.x) || ((x == other.x) && (y < other.y));
}

bool Punct2D::operator<=(const Punct2D& other) const {
    return (*this < other) || (*this == other);
}

bool Punct2D::operator>(const Punct2D& other) const {
    return !(*this <= other);
}

bool Punct2D::operator>=(const Punct2D& other) const {
    return !(*this < other);
}

bool Punct2D::operator==(const Punct2D& other) const {
    return (x == other.x) && (y == other.y);
}

bool Punct2D::operator!=(const Punct2D& other) const {
    return !(*this == other);
}

Punct2D Punct2D::operator+(const Punct2D& other) const {
    return Punct2D(x + other.x, y + other.y);
}

Punct2D Punct2D::operator-(const Punct2D& other) const {
    return Punct2D(x - other.x, y - other.y);
}

Punct2D Punct2D::operator*(const double scalar) const {
    return Punct2D(x * scalar, y * scalar);
}

Punct2D Punct2D::operator/(const double divisor) const {
    if (divisor != 0) {
        return Punct2D(x / divisor, y / divisor);
    }
    else {
        std::cerr << "Error: Division by zero\n";
        return *this;
    }
}

Punct2D& Punct2D::operator+=(const Punct2D& other) {
    x += other.x;
    y += other.y;
    return *this;
}

Punct2D& Punct2D::operator-=(const Punct2D& other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

Punct2D& Punct2D::operator*=(const double scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}

Punct2D& Punct2D::operator/=(const double divisor) {
    if (divisor != 0) {
        x /= divisor;
        y /= divisor;
    }
    else {
        std::cerr << "Error: Division by zero\n";
    }
    return *this;
}

Punct2D Punct2D::operator--() {
    x--;
    y--;
    return *this;
}

Punct2D Punct2D::operator--(int) {
    Punct2D temp = *this;
    --(*this);
    return temp;
}

double Punct2D::distanta(const Punct2D& other) const {
    return std::sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

std::ostream& operator<<(std::ostream& out, const Punct2D& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

std::istream& operator>>(std::istream& in, Punct2D& p) {
    in >> p.x >> p.y;
    return in;
}

