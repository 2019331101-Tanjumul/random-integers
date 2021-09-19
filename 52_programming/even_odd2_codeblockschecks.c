#include<stdio.h>
int main() {
 int i , t;
 char n[101];

 scanf("%d",&t);
 for (i=1; i<=t; i++){
     scanf("%s",&n);

     if(n[101]%2==0)
     {
         printf("even\n");
     }
        else
         {
             printf("odd\n");

         }
     }
     return 0;
  }


