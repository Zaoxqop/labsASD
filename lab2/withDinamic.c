#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double P = 1.0;
    double zn = 0.0;
    unsigned int operations = 0;

    for (int i = 1; i <= n; i++) {
        double chs = i * sqrt(i);
        operations += 3; // sqrt, множення, присвоєння

        zn += i * sin(i) + i;
        operations += 5; // sin, множення, два додавання,
                         // присвоєння

        P *= (chs / zn);
        operations += 3; // ділення, множення, присвоєння

        operations += 2; // i++
    }

    printf("Result: %.7f\n", P);
    printf("Operations: %u\n", operations);

    return 0;
}