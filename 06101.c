#include <stdio.h>
int main(void){
    // Your code here!
    int a=1;
    int b=0;
    int c=5;
    int d;
    
    for(int i=0;i<28;i++){
        d=a+b+c;
        a=b;b=c;c=d;
    }
    printf("%d",c);
}
