#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *ch, int i, int n)
{
   int j;
   if (i == n)
     //printf("%s\n", ch);
     cout<<ch<<endl;
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((ch+i), (ch+j));
          permute(ch, i+1, n);
          swap((ch+i), (ch+j)); //backtrack
       }
   }
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char ch [1000];
        cin>>ch;
        int len = strlen(ch);
        permute(ch,0,len-1);
    }

    return 0;
}
