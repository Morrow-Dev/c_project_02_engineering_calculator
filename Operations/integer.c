#include <stdbool.h>
#include <stdio.h>

int intRemainder(int a, int b) {
    int result = a%b;
    return result;
}

int integerDivision(int a, int b) {
    int result = a/b;
    return result;
    }


bool isEven(int number) {
    int result = number % 2;
    if (result == 0) {
        return true;
    } else {
        return false;
    }
}


int divisibilityTest(int a, int b) {
    int result = a%b;
    if (result == 0) {
        return true;
    } else {
        return false;
    }
}