#include <stdio.h>
int main(){
       if (n <= 1);




    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)

    }

}

int main() {
    int count = 0, num = 2;
    long long sum = 0;

    while (count < 500) {
        if (isPrime(num)) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("Sum of the first 500 prime numbers is: %lld\n", sum);

}
