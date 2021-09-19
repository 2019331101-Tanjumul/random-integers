#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main() {
    int i , n , m ,number, rand(m) ;

printf("How many random numbers you want:\n ");
scanf("%d",&n);
printf("Max number that you want to watch in random number counting:\n");
scanf("%d",&m);
printf("You want to see %d numbers that randomly shows you from 0 to %d numbers here\n",n,m);

for(i=1 ; i<=n ; i++) //creating a loop to match with the desire numbers
{
    number=rand(); // it is not shwoing the max input numbers but it is showing random numbers , what i will fix later.
    printf("%d random num is :%d\n",i,number);
}
 getch();
 return 0;
}
