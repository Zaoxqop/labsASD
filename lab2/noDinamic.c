#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    double P = 1.0;
    unsigned int operations = 0;

    for (int i = 1; i <= n; i++) {
        double chs = i * sqrt(i);
        operations += 3; // sqrt, множення, присвоєння

        double zn = 0.0;
        operations += 1; // присвоєння zn = 0

        for (int j = 1; j <= i; j++) {
            zn += j * sin(j) + j;
            operations += 5; // sin, множення, два додавання, присвоєння

            operations += 2; // j++
        }


        P *= (chs / zn);
        operations += 3; // ділення, множення, присвоєння

        operations += 2; // i++
    }

    printf("Result: %.7f\n", P);
    printf("Operations: %u\n", operations);

    return 0;
}