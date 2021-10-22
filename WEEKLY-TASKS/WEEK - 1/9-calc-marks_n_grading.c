// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage <  40% : Grade F

#include <stdio.h>
#include <stdlib.h>

char getGrade(float percentage);

int main() {
    short subjectCount = 5;
    float percentage, totalMarks = 0, *marks = (float *) malloc(5 * sizeof(float));
    char grade;

    printf("\n\nEnter marks of student in all 5 subjcts : ");

    for(short i = 0 ; i < subjectCount ; i++) {
        scanf("%f", (marks + i));
        totalMarks += *(marks + i);
    }

    percentage = totalMarks / subjectCount;
    printf("\nPercentage : %.2f%%\nGrade : %c\n\n\n", percentage, getGrade(percentage));
    
    return 0;
}

char getGrade(float percentage) {
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 80)
        return 'B';
    else if(percentage >= 70)
        return 'C';
    else if(percentage >= 60)
        return 'D';
    else if(percentage >= 40)
        return 'E';
    else
        return 'F';
}