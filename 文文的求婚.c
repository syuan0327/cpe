#include <stdio.h>
int year,s1,s2,s3;
int main(){
    while(scanf("%d",&year)!=EOF){
        s1=year%400;
        s2=year%4;
        s3=year%100;

        if(s1==0||(s2==0&s3!=0))printf("閏年\n");
        else if(year<400)printf("error!\n");
        else printf("平年\n");
    }
}
