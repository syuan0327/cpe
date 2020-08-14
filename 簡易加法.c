#include <stdio.h>
int a,b,c;
int main(){
    scanf("%d %d",&a,&b);
    if(a<=0)a=-a;
    if(b<=0)b=-b;
    c=a+b;
    if(c>=106)c=106;
    printf("%d+%d=%d\n",a,b,c);

}
