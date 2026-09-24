#include "MyMath.h"

double MyMath::PI()
{
    return 3.14;
}

double MyMath::add(double x, double y)
{
    return x+y;
}

double MyMath::sub(double x, double y)
{
    return x-y;
}

double MyMath::mult(double x, double y)
{
    return x*y;
}

double MyMath::div(double x, double y)
{
    return x/y;
}

int MyMath::random(int x, int y)
{
    return rand() % (y - x + 1) + x;
}

double MyMath::abs(double x)
{
    return std::abs(x);
}

double MyMath::round(double x)
{
    return std::round(x);
}

double MyMath::floor(double x)
{
    return std::floor(x);
}

double MyMath::max(double x, double y)
{
    return std::max(x, y);
}

double MyMath::min(double x, double y)
{
    return std::min(x, y);
}

double MyMath::pow(double x, int y)
{
    return std::pow(x, y);
}
