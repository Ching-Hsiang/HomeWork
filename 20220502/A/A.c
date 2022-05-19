#include<stdio.h>
int main()
{
    int length,count;
    char ch;
    while(scanf("%d",&length) != EOF)
    {
        int number[length];
        for(count = 0;count < length;count++) {
            scanf("%d",&number[count]);
        }
        if(number[0] == 0) {
            ch = 'B';
        }
        else {
            ch = 'C';
        }

        for(count = 1;count <= length;count++)
        {
            switch (ch)
            {
                case 'A':
                    printf("%d",0);
                    if(number[count] == 0) {
                        ch = 'B';
                    }
                    else {
                        ch = 'C';
                    }
                    break;
                case 'B':
                    printf("%d",0);
                    if(number[count] == 0) {
                        ch = 'B';
                    }
                    else {
                        ch = 'D';
                    }
                    break;
                case 'C':
                    printf("%d",0);
                    if(number[count] == 0) {
                        ch = 'E';
                    }
                    else {
                        ch = 'C';
                    }
                    break;
                case 'D':
                    printf("%d",1);
                    if(number[count] == 0) {
                        ch = 'E';
                    }
                    else {
                        ch = 'C';
                    }
                    break;
                case 'E':
                    printf("%d",1);
                    if(number[count] == 0) {
                        ch = 'B';
                    }
                    else {
                        ch = 'D';
                    }
                    break;
            
                default:
                    break;
            }
        }
    printf("\n");   
    }
    return 0;
}