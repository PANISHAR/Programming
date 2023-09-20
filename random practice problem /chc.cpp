#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);

    int cnt = 0;
    while (n) {
        if ((n & 1) == 0) {  
            cnt++;
        }
        n >>= 1;  
    }
    
    long long ans = 1;
    while (cnt--) {
        ans <<= 1;  
    }
    
    printf("%lld\n", ans);
    return 0;
}
