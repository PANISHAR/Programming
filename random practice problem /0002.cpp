#include <stdio.h>

int main() {
    int t, h1, m1, h2, m2, diff, caseNo = 1;
    scanf("%d", &t);
    
    while(t--) {
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        
        if(h1 > h2 || (h1 == h2 && m1 > m2)) {

            h2 += 24;
        }
        
       
        diff = ((h2 * 60) + m2) - ((h1 * 60) + m1);
        
        printf("Case %d: %d\n", caseNo++, diff);
    }
    
    return 0;
}
