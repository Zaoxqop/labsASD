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

        operations += 1; // ініціалізація j = 1
        for (int j = 1; j <= i; j++) {
            zn += j * sin(j) + j;
            operations += 5; // sin, множення, два додавання, присвоєння

            operations += 1; // збільшення j на 1
        }


        P *= (chs / zn);
        operations += 3; // ділення, множення, присвоєння

        operations += 1; // збільшення i на 1
    }

    printf("Result: %.7f\n", P);
    printf("Operations: %d\n", operations);

    return 0;
}