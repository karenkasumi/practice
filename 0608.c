#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int M;
int a[29],b[29];
int sum;
void    permutations(int *P, int *used, int total, int N)
{
    int     i;
    int     n;

    i = 1; //as permutation does not contain 0
    while (i <= total)
    {
        if (!used[i]) //if i is unused in the current permutation
        {
            used[i] = 1; //mark i as "used"
            P[N] = i;
            if (N == 1&&P[1]==1) //print when one permutation is complete 
            {                    

                n = total;
                int check[n];
                memset(check, 0, sizeof(check));

                for(int j=1; j<n; j++){

                    for(int k=1; k<=M; k++){
                        if((P[j]==a[k]&&P[j+1]==b[k])||
                          (P[j]==b[k]&&P[j+1]==a[k])){
                            check[j]=1;
                            /*
                            for(int l=1; l<=n; l++)printf("%d",P[l]);
                            printf("\n");
                            */
                            break;
                        }
                    }
                }
                for(int j=1; j<n; j++){
                    if(check[j]==0)break;
                    if(j==n-1){
                        sum++;

                    }
                    
                }
            }
            else // set num for P[N - 1]
                permutations(P, used, total, N - 1);
            used[i] = 0; //set i as "unused"
        }
        i++;
    }
}

int     main()
{
    int     N;
    int     *P;
    int     *used;
    scanf("%d%d",&N,&M);
    for(int i=1; i<=M; i++)scanf("%d%d",&a[i],&b[i]);
    /*
    N=3;M=3;
    a[1]=1;a[2]=1;a[3]=2;
    b[1]=2;b[2]=3;b[3]=3;
    */

    P = (int *)malloc(sizeof(int) * (N + 1));
    used = (int *)calloc((N + 1), sizeof(int));

    permutations(P, used, N, N);
    printf("%d\n",sum);

    free(P);
    free(used);
    return (0);
}