#include<stdio.h>
#include<string.h>

char arr[100][100];
int n;

void sortElement();
void checkSubSet();

int main()
{
    //char arr[100][100];
    int i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%s", &arr[i]);
    }

    sortElement();
    checkSubSet();
}

void sortElement()
{
    char temp[10];
    int i, j;
    for(i = 1; i<=n; i++){
        for(j=0; j<n-i; j++){
            if(strlen(arr[j]) > strlen(arr[j+1])){
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

void checkSubSet()
{
    int i, j, k, m=0;
    char a[100], b[100];
    for(i=0; i<n-1; i++){
        strcpy(a, arr[i+1]);
        strcpy(b, arr[i]);
        for(k=0, j=0; a[k] != '\0' && b[j] != '\0'; k++){
            if(a[k] == b[j]){
                j++;
            }
            else{
                j=0;
            }
        }
        if(strlen(arr[i]) == j){
            m++;
        }
    }

    if(m == n-1){
        printf("Yes\n");
        for(i =0; i<n; i++){
            printf("%s\n", arr[i]);
        }
    }
    else{
        printf("No\n");
    }
}
