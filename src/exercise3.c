#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float a[10];
    int k = atoi(argv[1]);
    
    for(int i = 0; i < 10; i++) {
        scanf("%f", &a[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        int x = (10 - k + i) % 10;
        printf("%.2f ", a[x]);
    }
    printf("\n");
    return 0;
}








