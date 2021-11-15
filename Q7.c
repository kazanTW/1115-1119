#include <stdio.h>

int main(void) {
    int a, b, temp;
    int arr[64];


    while (scanf("%d%d", &a, &b) != EOF) {
        if (a > b) {
            temp = a - b;
        }
        else if (b > a) {
            temp = b - a;
        }

        printf("%d\n", temp);
    }

    return 0;
}