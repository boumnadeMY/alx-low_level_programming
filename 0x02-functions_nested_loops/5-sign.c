#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+\n");
        return 1;
    } else if (n == 0) {
        printf("0\n");
        return 0;
    } else {
        printf("-\n");
        return -1;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = print_sign(num);
    printf("Sign of %d is %d\n", num, result);

    return 0;
}
