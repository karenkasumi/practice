#include <stdio.h>
int main(void){
    // Your code here!
    int A[10000]={0};
    int count=0;
    for(int i=0;i<=30;i++){
        for(int j=0;j<=40;j++){
            for(int k=0;k<=10;k++){
                int yen=i*205+j*82+k*30;
                for(int l=0;l<=count;l++){
                    if(A[l]==yen){
                        break;
                    }
                    if(l==count){
                        A[count+1]=yen;
                        count++;
                    }
                }
            }
        }
    }
    printf("%d",count);
}