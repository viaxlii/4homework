#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a[10], x = atof(argv[1]);
    int k = atoi(argv[2]);
    
    for(int i = 0; i < 10; i++) {
        scanf("%f", &a[i]);
    }
    
    for(int i = 0; i < k; i++) {
        printf("%.3f ", a[i]);
    }
    printf("%.2f ", x);
    for(int i = k; i < 9; i++) {
        printf("%.3f ", a[i]);
    }
    printf("\n");
    return 0;
}


