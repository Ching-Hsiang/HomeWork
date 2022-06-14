#include<stdio.h>

int main()
{
    unsigned int numA,numB,sum;
    while ( scanf("%u %u", &numA, &numB) != EOF ) {
        sum = (numA ^ numB);
        printf("%u\n",sum);
    }
    return 0;
}