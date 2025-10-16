#include <stdio.h>

int main(int argc, char** argv) {
    float a[10];
    
    for(int i = 0; i < 10; i++) {
        scanf("%f", &a[i]);
    }
    
    for(int i = 9; i > -1; i--) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
    return 0;
}
