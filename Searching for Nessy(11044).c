#include<stdio.h>
int main()
{
    int t,n,m,i;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        {
            scanf("%d %d",&n,&m);
            printf("%d\n",(n/3)*(m/3));
        }
    }

    return 0;
}
