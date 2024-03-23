#include <stdio.h>

int power(int base, int index);

int main() {
    int base, index;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter index: ");
    scanf("%d", &index);

    printf("%d^%d is %d\n", base, index, power(base, index));

    return 0;
}


int power(int base, int index) {
    
    if (index == 0)
        return 1;
    
    else
        return base * power(base,index - 1);
}

