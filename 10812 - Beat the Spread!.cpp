#include<stdio.h>
int main()
{
     long n,s,d,j,p,m,i;
    scanf("%ld",&j);
    for(i=0;i<j;i++)
    {
        scanf("%ld %ld",&s,&d);

        p=(s+d)/2;
        m=(s-d)/2;

        if(d>s ||(s%2)!=(d%2))
            printf("impossible\n");
        else
             printf("%ld %ld\n",p,m);

    }
    return 0;
}
