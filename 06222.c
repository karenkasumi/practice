#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int a;
    int b;
}bridge;

int compare(const void *n1, const void *n2){
    if(((bridge*)n1)->b>((bridge*)n2)->b)return 1;

    else if(((bridge*)n1)->b<((bridge*)n2)->b)return -1;

    else return 0;
}
int main(void){
    int N,M;
    scanf("%d%d",&N,&M);
    bridge ab[100000];
    for(int i=0;i<M;i++){
        scanf("%d%d",&ab[i].a,&ab[i].b);
    }
    qsort(ab,M,sizeof(bridge),compare);
    int sum=0,t=0;
    for(int i=0;i<M;i++){
        if(t<=ab[i].a){
            sum++;
            t=ab[i].b;
        }
    }
    printf("%d\n",sum);

    
}