#include <stdio.h>
#include <stdlib.h>
void sort(int arr[], int len);

void main() {
    int randomNumber, seed, MIN;
    int arr[6];
    scanf("%d", &seed);
    srand(seed);

    for (int i = 1; i <= 6; i++) {
        randomNumber = (rand() % 42) + 1;
        arr[i - 1] = randomNumber;
    }
    sort(arr, 6);

    for (int i = 0; i < 6; i++) {
        printf("%-4d", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; ++i) {
		for (j = 0; j < len - 1 - i; ++j) {  
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
        }
    }
}