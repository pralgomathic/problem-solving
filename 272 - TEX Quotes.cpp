#include<iostream>
#include<cstdio>

using namespace std;

int main ()
{
    char ch;

    while(scanf("%c",&ch)!=EOF)
    {
        int flag = 0;

        if(ch!='"')
            cout<<ch;

        if(ch=='"')
        {
            if(flag==0)
            {
                flag=1;
                cout<<"``";
            }
            else
            {
                flag = 0;
                cout<<"''";
            }

        }
    }
    return 0;
}
