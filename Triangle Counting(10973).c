#include<stdio.h>
int main()
{
    int T,n,m,i,j,k,x,count;
    while(scanf("%d",&T)==1)
    {
        count=0;
        scanf("%d %d",&n,&m);
        for(x=0;x<m;x++)
            scanf("%d %d",&i,&j);

        for(i=1;i<=n;i++)
            for(j=i+1;j<=n;j++)
                for(k=j+1;k<=n;k++)
                {
                    if(i<j && j<k)
                    count++;
                }
                printf("%d\n",count);
    }

    return 0;
}
