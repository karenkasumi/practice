#include <stdio.h>
int main(void){
    // Your code here!
    int sum=0;
    int count=1;
    for(int i=500;i>0;i--){
        if(sum+i<=5000){
            sum+=i;
        }
        else{
            sum=i;count++;
        }
    }
    printf("%d",count);
}
