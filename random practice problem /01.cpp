#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T); 
    char time[6]; 
    for (int i = 1; i <= T; i++) {
        scanf("%s", time); 
        int hh = (time[0] - '0') * 10 + (time[1] - '0'); 
        int mm = (time[3] - '0') * 10 + (time[4] - '0'); 
        if (hh == 12) {
            hh = 12; 
        }
        if (mm != 0) {
            mm = 60 - mm; 
            hh = 11 - hh; 
            if (hh == 0) {
                hh = 12; 
            }
        }
        printf("Case %d: %02d:%02d\n", i, hh, mm); 
    }
    return 0;
}
