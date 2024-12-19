
#include<stdio.h>
int main(){
    int i;
    printf("Even Number is:\n");
    for(i=50;i<500;i++){
        if(i%2==0){
            printf("%d\t ",i);
        }

    
    }
    printf("\n\nthe odd number is:\n");
    for(i=50;i<500;i++){
        if(i%2!=0){
            printf("%d\t ",i);
        }
    }
    return 0;
}
