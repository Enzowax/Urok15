#pragma once
#include <string>
#include <stdexcept> 
using namespace std;

float Sum(float a, float b)
{
    return a + b;
}

float Sub(float a, float b)
{
    return a - b;
}

float Mul(float a, float b)
{
    return a * b;
}

float Div(float a, float b)
{
    if (b != 0)
        return a / b;
    else
        throw invalid_argument("Деление на 0");
}