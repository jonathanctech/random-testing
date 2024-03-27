#include <stdio.h>

int main() {
    // a. Prints name, ID number, and course section number
    printf("Name: [Your Name]\nID: [Your ID]\nCourse Section: [Your Course Section]\n");

    // b. Accepts two integers (A and B) from the user
    int A, B;
    printf("Enter integer A: ");
    scanf("%d", &A);
    printf("Enter integer B: ");
    scanf("%d", &B);

    // c. Displays the logical operations
    printf("\nLogical Operations:\n");
    printf("A && B: %d\n", A && B);
    printf("A || B: %d\n", A || B);
    printf("!(A || B): %d\n", !(A || B));

    // d. Verification
    printf("\nVerification:\n");
    printf("Enter the expected value for A && B: ");
    int expected_AND;
    scanf("%d", &expected_AND);
    printf("A && B is %s\n", (A && B) == expected_AND ? "correct" : "incorrect");

    printf("Enter the expected value for A || B: ");
    int expected_OR;
    scanf("%d", &expected_OR);
    printf("A || B is %s\n", (A || B) == expected_OR ? "correct" : "incorrect");

    printf("Enter the expected value for !(A || B): ");
    int expected_NOT;
    scanf("%d", &expected_NOT);
    printf("!(A || B) is %s\n", !(A || B) == expected_NOT ? "correct" : "incorrect");

    printf("this not something that i remember writing");

    return 0;
}

