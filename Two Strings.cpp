#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i = 0, t = 0;
    char a[100000], b[100000];
    int check = 0;
    scanf("%d", &t);
    while(t > 0) {
        scanf("%s", a);
        scanf("%s", b);
        check = 0;
        for(i = 0; i < strlen(a); i++) {
            check |= 1 << (a[i] - 'a');
           // cout<<check<<" "<<endl;
            cout<<(a[i] - 'a')<<" ";

           // cout<<1 << (a[i] - 'a')<<" ";
        }
        for(i = 0; i < strlen(b); i++) {
            if(check & (1 << (b[i] - 'a'))) {
                printf("YES\n");
                break;
            }
        }
        if(i == strlen(b)) {
            printf("NO\n");
        }
        t--;
    }
    return 0;
}
