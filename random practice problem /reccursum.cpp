#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int i;
    for (i = 1; i<= t; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int Player = (y + z) % x;
        if (Player == 0) {
            Player = x;
        }

        printf("Case %d: %d\n", i, Player);
    }

    return 0;
}
