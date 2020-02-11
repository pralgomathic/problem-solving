#include<stdio.h>
int main()
{
    int flip[1001],n,i,j,count,key;
    while(scanf("%d",&n)==1)
    {
        count=0;
        for(i=1;i<=n;i++)
            scanf("%d",&flip[i]);

        for(j=2;j<=n;j++)
        {
            key=flip[j];
            i=j-1;
            while(i>0 && flip[i]>key)
            {
                flip[i+1]=flip[i--];
                count++;
            }
            flip[i+1]=key;
        }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
