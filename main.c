#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Вычисляем количество элементов в массиве

    printf("Количество элементов в массиве: %d\n", size);

    return 0;
}
