#include<stdio.h>
int main()
{
    int A, B, C, N;
    scanf("%d %d %d %d", &A, &B, &C, &N);

    int n1=A-C;
    int n2=B-C;
    int n3=C;
    int n4 = N-n1-n2-n3;

    if(n1 >= 0 && n2 >= 0 && n3 >= 0 && n4>0){
        printf("%d\n", n4);
    }
    else {
        printf("-1\n");
    }
}
