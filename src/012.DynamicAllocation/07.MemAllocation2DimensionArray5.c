#include <stdio.h>
#include <stdlib.h>

void add_one(int width, int (*arr)[width], int height) {
    for(int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            arr[i][j]++;
        }
    }
}

void print_array(int width, int (*arr)[width], int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int width, height;
    
    printf("배열의 열 크기 : ");
    scanf("%d", &width);
    
    printf("배열의 행 크기 : ");
    scanf("%d", &height);
    
    int(*arr)[width] = (int(*)[width])malloc(height * width * sizeof(int));
    
    for(int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int data;
            scanf("%d", &data);
            arr[i][j] = data;
        }
    }
    
    printf("----- Array ----- \n");
    print_array(width, arr, height);
    printf("----- Add One ------ \n");
    add_one(width, arr, height);
    print_array(width, arr, height);
    
    free(arr);
    
    return 0;
} 