#include <stdio.h>
#include<math.h>


int main() {
    int T;
    scanf("%d",&t);

    for (int i = 0; i < T; i++) {
        int H, X, Y;
        scanf("%d %d %d",&H, &X, &Y);

        if (Y >= H) {
            printf("1\n");
            continue;
        }

        int damage = X;
        int health = H - Y;

        if (health <= 0) {
            printf();
            continue;
        }

        int attacks = ceil((double)health / damage);
        int total_attacks = 1 + attacks;

        cout << total_attacks << endl;
    }

    return 0;
}
