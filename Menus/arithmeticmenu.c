#include <string.h>
#include <stdio.h>
#include "../Operations/arithmetic.h"
#include <stdbool.h>


void arithmeticMenu(void) {
    bool arithmeticALWAYS = true;
    while (arithmeticALWAYS == true){
        int menuchoice;
        printf("=========================================================================\n");
        printf("                            ARITHMETIC MENU.\n");
        printf("=========================================================================\n");
        printf("1. Addition     2. Subtraction     3. Multiplication     4. Division\n");
        printf("Or type '0' to return to the main menu.");
        scanf("%d", &menuchoice);

        switch (menuchoice) {
            // Addition
            case 1: {
                double x;
                double y;

                printf("Please type your first number to add.\n");
                scanf("%lf", &x);
                printf("Please type your second number to add.\n");
                scanf("%lf", &y);
                double result = add(x, y);
                printf("%.2lf+%.2lf = %.2lf\n", x, y, result);
                break;
            }
            // Subtraction
            case 2: {
                double x;
                double y;

                printf("Please type your first number.\n");
                scanf("%lf", &x);
                printf("Please type the number you wish to subtract.\n");
                scanf("%lf", &y);
                double result = subtract(x, y);
                printf("%.2lf-%.2lf = %.2lf\n", x, y, result);
                break;

            }
            // Multiplication
            case 3: {
                double x;
                double y;

                printf("Please type your first number.\n");
                scanf("%lf", &x);
                printf("Please type the number to multiply it by.\n");
                scanf("%lf", &y);
                double result = multiply(x, y);
                printf("%.2lf*%.2lf = %.2lf\n", x, y, result);
                break;

            }// Division
            case 4: {
                double x;
                double y;

                printf("Please type your dividend.\n");
                scanf("%lf", &x);
                printf("Please type your divisor.\n");
                scanf("%lf", &y);
                if (y != 0) {
                    double result = divide(x, y);
                    printf("%.2lf/%.2lf = %.2lf\n", x, y, result);
                } else {
                    printf("You cannot divide by Zero.\n");
                }

                break;

            }
            case 0: {
                arithmeticALWAYS = false;
                break;
            }
        } default: {
            printf("Invalid Input.\n");
            break;
        }


    }
}