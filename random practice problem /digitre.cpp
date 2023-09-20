#include <stdio.h>

void Roman(int year) {

    int roman[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char* Symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    if (year <= 0) {
        printf("Invalid year.\n");
        return;
    }
    
    
    
    int i = 0;
    while (year > 0) {
        
        if (year >= roman[i]) {
            printf("%s", Symbols[i]);
            year -= roman[i];
        } else {
            i++;
        }
    }
    
    printf("\n");
}

int main() {
    int year;
    
    
    scanf("%d", &year);
    
    Roman(year);
    
    return 0;
}
