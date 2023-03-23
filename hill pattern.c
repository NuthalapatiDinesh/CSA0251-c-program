#include<stdio.h>
int main(){
    int n=5;
    int i,j,k;
    for(i=n;i>=1;i--){
    for(j=1;j<=n-i;j++){
        printf("  ");
    }
        for(j=1,k='A';j<=i;j++,k++){
            printf("%c",k);
    }
    for(j=i-1,k='A'+j;j>=1;j--,k--){
            printf("%c",k);
    }
    printf("\n");
    }
    return 0;
}