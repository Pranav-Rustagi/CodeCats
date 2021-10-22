// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <stdio.h>

float grossSalary(int basicSal, int hra, int da);

int main() {
    int basicSal, hra, da;
    printf("\n\nEnter basic salary : ");
    scanf("%d", &basicSal);

    if(basicSal <= 10000) {
        hra = 20;
        da = 80;
    }
    else if(basicSal <= 20000) {
        hra = 25;
        da = 90;
    }
    else {
        hra = 30;
        da = 95;
    }

    printf("\nGross salary : %.2f\n\n\n", grossSalary(basicSal, hra, da));

    return 0;
}


float grossSalary(int basicSal, int hra, int da) {
    float hraAmount = (float)basicSal * hra / 100;
    float daAmount = (float)basicSal * da / 100;

    return (basicSal + hraAmount + daAmount);
}