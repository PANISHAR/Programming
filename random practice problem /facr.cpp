#include <stdio.h>

void prime(int n) {
    if (n <= 1) {
        printf("Invalid number. \n");
        return;
    }
    
    printf("Prime factors of %d are: ", n);
    
    int Factor = -1; 
    

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            if (Factor != i) {
                printf("%d ", i);
            Factor = i;
            }
            n /= i;
        }
    }
    
    printf("\n");
}

int main() {
    int n;
    
        scanf("%d", &n);
    
    prime(n);
    
    return 0;
}
