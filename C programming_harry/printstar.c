#include<stdio.h> 
int main() {
int i , j , count; 

printf("Enter the amount of Row : ");
scanf("%d",&count);

for(i=1; i<=count; ++i)
{
    for(j=1; j<=i; ++j){
        printf("*");
    }
    printf("\n");

}
return 0; 
}

