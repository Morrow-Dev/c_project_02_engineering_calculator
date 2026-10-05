#include <stdio.h>
#include <stdbool.h>
#include "../Operations/powersandroots.h"

void powersAndRootsMenu(void) {
    bool parmALWAYS = true;
    while (parmALWAYS == true) {
        int menuchoice;
        printf("=========================================================================\n");
        printf("                         POWERS AND ROOTS MENU.\n");
        printf("=========================================================================\n");
        printf("1. Square     2. Cube     3. Power    4. Square Root    5.Cube root.\n");
        printf("Or type '0' to return to the main menu.");
        scanf("%d", &menuchoice);

        switch (menuchoice) {
            // Return to Menu
            case 0: {
                parmALWAYS = false;
                break;
            }
            // Square
            case 1: {
                double x;
                double result;
                printf("Please enter a number.\n");
                scanf("%lf", &x);
                if (x < 0) {
                    printf("Cannot use a negative number.");
                } else {
                    result = square(x);
                    printf("%.2f squared is %.2f.\n", x, result);
                }
                break;
            }
            // Cube
            case 2: {
                double x;
                double result;
                printf("Please enter a number.\n");
                scanf("%lf", &x);
                result = cube(x);
                printf("%.2f cubed is %.2f.\n", x, result);
                break;
            }
            //Power
            case 3: {
                double x;
                double exponent;
                double result;
                printf("Please enter your base number.\n");
                scanf("%lf", &x);
                printf("Please enter your exponent.\n");
                scanf("%lf", &exponent);
                result = power(x, exponent);
                printf("%.2f raised to the power %.2f equals %.2f.\n", x, exponent, result);
                break;
            }
            // Square Root
            case 4: {
                double x;
                double result;
                printf("Please enter the number to find the square root of.\n");
                scanf("%lf", &x);
                result = squareRoot(x);
                printf("The square root of %.2f is %.2f.\n", x, result);
                break;
            }
            // Cube Root
            case 5: {
                double x;
                double result;
                printf("Please enter the number to find the cube root of.\n");
                scanf("%lf", &x);
                result = cubeRoot(x);
                printf("The cube root of %.2f is %.2f.\n", x, result);
                break;
            }
            default: {
                printf("Invalid Input.\n");
            }
        }

        }
    }