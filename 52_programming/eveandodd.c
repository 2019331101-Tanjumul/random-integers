#include<stdio.h>
int main() {
int n,t,i;
scanf("%d",&t);

for (i=0;i<=t;i++){
    printf("check the Eve Odd num :");
    scanf("%d",&n);
    if(n%2==0) 
    {
        printf("Eve\n");
    }
    else{
        printf("Odd\n");
    }
}
return 0;
}
