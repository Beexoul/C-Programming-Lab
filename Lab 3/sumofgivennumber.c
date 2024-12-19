#include<stdio.h>

int main(){
    int i,n,sum=0,x,rem,p;
    printf("Enter any number to find the sum");
    scanf("%d",&n);
    while (n!=0)
    {
     x++;   
    }
    n=i;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);

return 0;

}

