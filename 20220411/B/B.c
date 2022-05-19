#include<stdio.h>
int main()
{
    int CaseNumber,number;
    int kutikuti,lakhkuti,hajarkuti,shatakuti,kuti,lakh,hajar,shata,num;
    int kk,lk,hk,sk,ku,la,ha,sh,n;
    
    {
        for(CaseNumber = 1;scanf("%d",&number) != EOF;CaseNumber++)
        {
            printf("%4d.",CaseNumber);
            num = number % 100;
            n = number / 100;
            shata = n % 10;
            sh = n / 10;
            hajar = sh % 100;
            ha = sh / 100;
            lakh = ha % 100;
            la = ha / 100;
            kuti = la % 100;
            ku = la / 100;
            shatakuti = ku % 100;
            sk = ku / 100;
            hajarkuti = sk % 10;
            hk = sk / 10;
            lakhkuti = hk % 100;
            lk = hk / 100;
            kutikuti = lk % 100;
            ku = lk / 100;
            if(number == 0)
            {
                printf("0");
            }
            if(kutikuti != 0)
            {
                printf("%d kuti kuti ",kutikuti);
            }
            if(lakhkuti != 0)
            {
                printf("%d lakh kuti ",lakhkuti);
            }
            if(hajarkuti != 0)
            {
                printf("%d hajar kuti ",hajarkuti);
            }
            if(shatakuti != 0)
            {
                printf("%d shata kuti ",shatakuti);
            }
            if(kuti != 0)
            {
                printf("%d kuti ",kuti);
            }
            if(lakh != 0)
            {
                printf("%d lakh ",lakh);
            }
            if(hajar != 0)
            {
                printf("%d hajar ",hajar);
            }
            if(shata != 0)
            {
                printf("%d shata ",shata);
            }
            if(num != 0)
            {
                printf("%d",num);
            }
            printf("\n");
        }
    }
    return 0;
}