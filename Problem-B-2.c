#include<stdio.h>

int main()
{
    int n, k, res=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &k);
        if(k<100 && k>=1){
            printf("%d\n", k);
        }
        else{
            for(int j=1; j<=k; j = j*10+1){
                for(int d=1; d<=9; d++){
                    if(j*d <= k){
                        res++;
                    }
                }
            }
            printf("%d\n",res);
        }
    }
}
