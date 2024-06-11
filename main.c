#include <stdio.h>

int main() {
    int arr[] = {2, 4, 5, 6, 8, 10, 12, 15, 20}; // Пример массива чисел
    int k = 3; // Заданное число k
    int count = 0;
    int unique[100] = {0}; // Массив для хранения уникальных элементов

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        int isUnique = 1;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique && arr[i] % k == 0) {
            unique[count] = arr[i];
            count++;
        }
    }

    printf("Количество уникальных элементов, делящихся на %d: %d\n", k, count);

    return 0;
}
