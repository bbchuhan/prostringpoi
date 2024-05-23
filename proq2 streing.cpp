#include <stdio.h>

void cubeElements(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(arr + i * cols + j) = (*(arr + i * cols + j)) * (*(arr + i * cols + j)) * (*(arr + i * cols + j));
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter array's size: ");
    scanf("%d", &rows);
    cols = rows;

    int arr[rows][cols];

    printf("\nEnter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    cubeElements(&arr[0][0], rows, cols);

    printf("\nCubes of all elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
