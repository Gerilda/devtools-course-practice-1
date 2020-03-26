// Copyright 2020 Sokolov Nikolai

#ifndef MODULES_VECTOR3D_INCLUDE_VECTOR3D_H_
#define MODULES_VECTOR3D_INCLUDE_VECTOR3D_H_

#include <iostream>
#include <cmath>

class Vector3D {
public:
    explicit Vector3D(const double& _x = 0, const double& _y = 0, const double& _z = 0);
    Vector3D(const Vector3D& _v);

    double getX();
    double getY();
    double getZ();

    void setX(const double& _x);
    void setY(const double& _y);
    void setZ(const double& _z);

    Vector3D& operator=(const Vector3D& f);
    Vector3D operator+(const Vector3D& _v);
    Vector3D operator-(const Vector3D& _v);

    double norm();
    void normalization();

private:
    double X;
    double Y;
    double Z;
};

Vector3D normalization(Vector3D& _v);

double ScalarProduct(Vector3D& _v1, Vector3D& _v2);

Vector3D VectorProduct(Vector3D& _v1, Vector3D& _v2);

#endif  // MODULES_VECTOR3D_INCLUDE_VECTOR3D_H_