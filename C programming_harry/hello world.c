#include<stdio.h> 
int main() {
 int i , t; 
 char n [101];
 scanf("%d",&t);
 for (i=0; i<=t; i++){
     scanf("%d",&n);
     //writing my code 
     if(n%2==0){
         printf("%d is a even number\n",n);
         else{
             printf("%d is a ODD number");
             
         }
     }
 }
return 0; 
}