#include <stdio.h>

int main() {
    int t, n, i, flag;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        flag = 0;
        for (i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }

        if (n <= 1) {
            printf("no\n");
        } else if (flag == 0) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
