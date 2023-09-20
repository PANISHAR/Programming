#include <stdio.h>

int main() {
    int t, n;
    int a[101];

    scanf("%d", &t); 

    for (int i = 0; i < t; i++) {
        scanf("%d", &n); 

        
        for (int j = 0; j < 101; j++) {
            a[j] = 0;
        }

        
        for (int j = 0; j < n; j++) {
            int temp;
            scanf("%d", &temp);
            a[temp]++;
        }

        int mode = 0,cnt=0;
        for (int j = 0; j < 101; j++) {
            if (a[j] > cnt) {
                mode = j;
                cnt = a[j];
            }
        }

        printf("%d\n", mode);
    }

    return 0;
}
