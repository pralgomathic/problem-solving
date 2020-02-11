#include<stdio.h>
int main()
{
    int a[1000],q,b,i,k;
    long long n;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
        break;
        if(n==0)
            printf("0");
        q=n;
        k=0;
        while(q!=0)
        {
           a[k]=q%3;
           q=q/3;
           k++;

        }
        for(i=k-1;i>=0;i--)
                printf("%d",a[i]);
        printf("\n");

    }

     return 0;
}

