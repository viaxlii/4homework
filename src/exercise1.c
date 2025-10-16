#include <stdio.h>

int main(int argc, char** argv) {
    float a[10], sum = 0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%f", &a[i]);
        sum += a[i];
    }
    
    printf("%.2f\n", sum / 10);
    return 0;
}
