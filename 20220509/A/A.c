#include<stdio.h>
#include<math.h>
void reverse(unsigned long);
int main()
{
    unsigned long number;
    while(scanf("%lu",&number) != EOF)
    reverse(number);
    putchar('\n');
    return 0;
}

void reverse(unsigned long num)
{
    int count,a[32];
    unsigned long sum = 0;
    for(count = 0;count < 32;count++) {
        a[count] = num % 2;
        num /= 2;
    }
    for(count = 0;count < 32;count++)
    {
        printf("%d",a[count]);
    }
    printf(" = ");
    for(count = 0;count < 32;count++)
    {
        sum += a[count] * pow(2,(31 - count));
    }
    printf("%lu\n",sum);
    return ;
}
