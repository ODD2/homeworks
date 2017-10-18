//
//  main.c
//  10_17class1
//
//  Created by 韓悅華 on 2017/10/17.
//  Copyright © 2017年 韓悅華. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a =0;
    int b =0;
    int flag = 0 ;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0){
            if(b<=10000&&b>1){
                for(int i =2;i<=b;i++)
                {
                    flag=0;
                    for(int j=2;j<=i/2;j++)
                    {
                        if(i%j==0)
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0){
                        printf("%u\n",i);
                    }
                }
            }
        }
        else if (a==1){
            if(b<=20&&b>1){
                for(int i =2;i<=b;i++)
                {
                    flag=0;
                    for(int j=2;j<=i/2;j++)
                    {
                        if(i%j==0)
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0){
                        unsigned long int accumulater=1;
                        for(int g = i;g>0;g--)accumulater*=g;
                        printf("%d! = %lu\n",i,accumulater);
                    }
                }
            }
        }
    }
    return 0;
}
