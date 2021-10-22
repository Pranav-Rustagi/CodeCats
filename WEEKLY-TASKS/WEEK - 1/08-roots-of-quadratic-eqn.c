// Write a C program to find all roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, D;
    float root1, root2;
    printf("\n\nFor quadratic equation of form a.x^2 + b.x + c = 0\nEnter values of a, b, and c : ");
    scanf("%d %d %d", &a, &b, &c);
    
    D = pow(b, 2) - (4 * a * c);
    root1 = ((-1 * b) + sqrt(D)) / (2 * a);
    root2 = ((-1 * b) - sqrt(D)) / (2 * a);

    printf("\nRoot(s) of the equation : %.2f", root1);

    if(root1 != root2)
        printf(", %.2f", root2);
        
    printf("\n\n\n");
    return 0;
}