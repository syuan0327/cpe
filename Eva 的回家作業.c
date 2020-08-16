#include <stdio.h>
int col,c,d;
int a1,a2,a3,a4,a5,a6;
int main(){
   scanf("%d",&col);
   if(col<0||col>20)printf("error!");
   for(int i=0;i<col;i++)
   {
       scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
       if(a3%a2==0)
       {
           d=a3/a2;
           a5=a4*d;
       }
       else
       {
           c=a2-a1;
           a5=a4+c;
       }
       printf("ans=%d\n",a5);
    }
}

