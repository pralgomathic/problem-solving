#include<stdio.h>
int gcd(int m,int n);
int main()
{
    int N,i,j,G;
    while(scanf("%d",&N)==1)
    {
        if(N==0)
                break;
        if(N>1 && N<501)
        {

            G=0;
            for(i=1; i<N; i++)
            {
                for(j=i+1; j<=N; j++)
                {
                    G+=gcd(i,j);

                }
            }
            printf("%d\n",G);
        }

    }

    return 0;
}
int gcd(int m,int n)
{
    int r;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;

}

