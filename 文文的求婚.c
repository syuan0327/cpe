#include <stdio.h>
int year,s;
int main(){
    while(1){
        printf("please input year:\n");
        scanf("%d",&year);
        s=year%400;
        if(s==0)printf("»Ó¦~\n");
        else if(year<400)printf("error!\n");
        else printf("¥­¦~\n");
    }


}
