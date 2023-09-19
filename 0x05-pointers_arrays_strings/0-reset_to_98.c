#include <stdio.h>

void reset_to_98(int *n) {
    *n = 98; // Update the value pointed to by n to 98
}

int main() {
    int number = 42;
    printf("Before reset_to_98: %d\n", number);

    // Call the function to reset the value to 98
    reset_to_98(&number);

    printf("After reset_to_98: %d\n", number);

    return 0;
}
