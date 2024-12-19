#include<stdio.h>
int main(){
    int i;
    for(i=21;i<200;i++){
        if(i%2==0){
            printf("%d\t",i);
        }
        else {
            printf(" ");
        }
    }
    return 0;
}
