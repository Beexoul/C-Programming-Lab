#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter any number to find the sum");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("%d \n\t",sum);
    return 0;
}
