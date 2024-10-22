#include <stdio.h>

int Resultof_y(int x) {
    return 5*x*x + 7*x - 3;
}

int main() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

int y = Resultof_y(x);
printf("The value of y is: %d\n", y);
return 0;
}
