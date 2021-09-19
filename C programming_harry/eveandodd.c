#include<stdio.h> 
int main() {
int i,t,n;
printf("Dile Here someting :");
scanf("%d",&t);
for(i=0;i<=t;i++){
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