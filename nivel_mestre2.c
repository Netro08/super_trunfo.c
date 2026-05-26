#include <stdio.h>

int main() {
    int x = 5;
    float y = 5.0;
    char c ='a';
    
    int num = 10;
    float result = 10.0;

    int comparison = (float)num == result;

    printf("num == result: %d\n", comparison);


    printf("x >= y: %d\n", x >= y);
    printf("x == y %d\n", x == y);
    printf("x != y %d\n", x != y);

    printf("x >= c : %d\n" , x >= c);
    printf("O valor ASCII de %c é %d: \n" , c, c);


    return 0;
}



    