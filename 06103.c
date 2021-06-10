#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    // Your code h-ere!
    int sum=0;
    
    for(int i=1;i<=50000;i++){
        if(i%3==0){
            sum+=i;
            continue;
        }
        char A[10]={0};
        sprintf(A,"%d",i);
        for(int j=0;j<10;j++){
            if(A[j]=='3'){
                sum+=i;
                break;
            }
        }
        
    }
    printf("%d",sum);
}