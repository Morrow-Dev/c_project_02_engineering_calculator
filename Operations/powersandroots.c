#include <stdio.h>
#include <stdbool.h>
#include <math.h>

double square(double x) {
    double result;
   result = pow(x, 2);
    return result;
}


double cube(double x) {
    double result;
    result = pow(x, 3);
    return result;
}

double power(double x, double exponent) {
    double result;
    result = pow(x, exponent);
    return result;
}
double squareRoot(double x) {
    double result;
    result = sqrt(x);
    return result;
}

double cubeRoot(double x) {
    double result;
    result = cbrt(x);
    return result;
}