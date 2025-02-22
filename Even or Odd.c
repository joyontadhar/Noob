/*For every odd number, the last bit will always be 1. So, when we use bit wise AND it will return 1 if both are 1. So it will be 1(true) for odd numbers and 0(false) for even numbers.*/
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num & 1) printf("Odd");
    else printf("Even");

    return 0;
}

