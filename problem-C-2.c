#include<stdio.h>
int main()
{
    int n, arr[100], sum = 0, c=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum = sum+arr[i];
    }
    float avg = (float)sum/n;

    for(int i=0; i<n; i++){
        if(arr[i]<=avg){
            c++;
        }
    }
    printf("result : %d", c-1);
}
