#include <stdio.h>
int month,day,s;
int main(){
    printf("please input month:\n");
    scanf("%d",&month);
    printf("please input day:\n");
    scanf("%d",&day);
    s=(month*2+day)%3;
    if(s==0)printf("´¶³q");
    else if(s==1)printf("good");
    else if(s==2)printf("very good");

}
