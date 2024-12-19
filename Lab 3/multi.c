#include<stdio.h>
int main(){
    int i,n,multi=0;
    printf("Enter any number to find the sum \t");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        multi=n*i;
    printf("%d * %d = %d\n",n,i,multi);

    }
    return 0;
}
