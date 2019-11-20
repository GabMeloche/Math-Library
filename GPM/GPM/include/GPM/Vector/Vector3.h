#pragma once
// Make your .inl here in include folder.

template<typename T>
struct Vector3
{
    T x;
    T y;
    T z;

    void Add(Vector3<T>& p_vec);
    void Substract(Vector3<T>& p_vec);
    void Multiply(Vector3<T>& p_vec);
    void Divide(Vector3<T>& p_vec);
    void Set(T px, T py, T pz);

    void Normalize();

    T Dot(Vector3<T>& p_vec);
    T Angle(Vector3<T>& p_vec);

    T GetMagnitude();

    static Vector3<T> Forward();
    static Vector3<T> Right();
    static Vector3<T> Up();
    static Vector3<T> Zero();
    static Vector3<T> One();

    static T RadToDeg(T& p_value);
    static T DegToRad(T& p_value);
    static T Distance(Vector3<T>& vec1, Vector3<T>& vec2);

    Vector3<T> GetNormalized();
};

#include <GPM/Vector/Vector3.inl>