#include<iostream>
#include<cmath>

using namespace std;
/*
bool RelativelyPrime (int a, int b)
{
  for ( ; ; )
    {
    if (!(a %= b)) return b == 1 ;
    if (!(b %= a)) return a == 1 ;
  }

}
int main()
{
    int a, b,t;
    while(scanf("%d",&t)==1)
    {
        cin>>a>>b;
        int rp = 0;
        for (int i=1;i<=a;i++)
        {
            for(int j=1;j<=a;j++)
            {
                bool res = RelativelyPrime (i,j);
                if(res==1)
                {
                    rp = rp +1;

                }

            }


        }


        cout<<rp<<endl;
    }

}
*/
int isPrime(int x)
{

 for(int i=2;i<=x/2;i++)
 {
   if(x%i==0)
   return 0;
 }
 return 1;
 }
int main()
{

    int num;
    int f[100];
    cin>>num;
    int a=0;
    for(int x=1;x<=num;x++)
    {
        if(num%x==0 && isPrime(x))
        {
            f[a] = x;
            a++;
        }
    }
    int rp=num;
    int ar[10];
    //memset(ar,1,sizeof(ar));
    for(int i=1;i<a;i++)
    {
        //cout<<f[i]<<endl;
         //ar[i]=1;

         rp *= (1 - (1/f[i]));
         cout<<rp;
    }

    //cout<<rp<<endl;
}

