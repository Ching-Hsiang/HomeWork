#include<stdio.h>

unsigned int reverse(unsigned int);

// testing
int main()
{
    int N;
    unsigned int num;
    scanf("%d",&N);
    for(int i = 1;i <= N;i++) {
        scanf("%u",&num);
        int count = 1;
        num += reverse(num);
        while(reverse(num) != num) {
            num += reverse(num);
            count++;
        }
        printf("%d %u\n",count,num);
    }
    return 0;
}

unsigned int reverse(unsigned int a)
{
    unsigned int b = 0;
    while(a != 0) {
        b = b * 10 + a % 10;
        a /= 10;
    }
    return b;
}
