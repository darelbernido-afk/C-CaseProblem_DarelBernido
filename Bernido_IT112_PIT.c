#include <stdio.h>

int main() {
    
    printf("Name: Darel Bernido\n");
    printf("ID Number: 2025304729\n");
    printf("------------------------------\n");

    
    int grade;
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    if (grade >= 75)
        printf("Result: You passed!\n");
    else
        printf("Result: You failed.\n");

    return 0;
}
