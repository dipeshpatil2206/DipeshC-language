#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;


    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a >= b && a >= c) {
        largest = a;
    } if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }


    if (a <= b && a <= c) {
        smallest = a;
    }  if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    getch();
}

