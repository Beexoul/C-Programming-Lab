
#include<stdio.h>
int main(){
    int i,even,odd;
    printf("Even Number is:\n");
    for(i=50;i<500;i++){
        if(i%2==0){
            even=even+i;
        }
    }
    printf("%d",even);
    printf("\n\nthe odd number is:\n");
    for(i=50;i<500;i++){
        if(i%2!=0){
           odd=odd+i;
        }
    }
    printf("%d",odd);
    return 0;
}
