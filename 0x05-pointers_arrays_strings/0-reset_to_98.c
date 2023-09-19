#include <stdio.h>

void reset_to_98(int *n) {
    *n = 98; /* Update the value pointed to by n to 98 */
}

int main() {
    int number = 402;
    printf("n = %d\n", number);

    reset_to_98(&number);

    printf("n = %d\n", number);
}
