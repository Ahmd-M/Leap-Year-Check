#include <stdio.h>

int main() {

    int year, divBy_4, divBy_100, divBy_400;
    scanf("%d", &year);

    divBy_4 = !(year%4);
    divBy_100 = !(year%100);
    divBy_400 = !(year%400);
    
    if((divBy_4 && !divBy_100)||divBy_400)
        printf("Y\n", year);
    else
        printf("N\n", year);

    return 0;
}