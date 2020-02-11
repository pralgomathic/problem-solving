#include<stdio.h>

int main(){

    float h,u,d,f;

    while(scanf("%f %f %f %f",&h,&u,&d,&f) && h){
            f=f*u/100;
            double ht=0.0;
            int cnt = 0;
            while(1){
                cnt++;
                if(u>0) ht=ht+u;
                u = u - f;
                if(ht>h) break;
                ht = ht-d;
                if(ht<0) break;
            }
            if(ht>=0){
                printf("success on day %d\n",cnt);
            }else{
                printf("failure on day %d\n",cnt);
            }

    }


    return 0;
}
