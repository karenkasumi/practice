#include <stdio.h>
int main(void){
    // Your code here!
    int sum=0;
    for(int i=1;i<=30000000;i++){
        if(1234567890%i==0)sum+=i;
    }
    printf("%d",sum);
}
