#include <stdio.h>
int main(void){
    int pay;
    scanf("%d",&pay);
    int back=1000-pay;
    int coin[6]={500,100,50,10,5,1};
    int sum=0;
    for(int i=0;i<6;i++){
        int n=back/coin[i];
        back-=coin[i]*n;
        sum+=n;
    }
    printf("%d\n",sum);
}