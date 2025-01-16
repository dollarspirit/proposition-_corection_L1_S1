#include<stdio.h>
int main(){
    int n, terme=1;
    printf("calcule des termes\n");
    do{
        printf("entrez la valeur de n :");
        scanf("%d",&n);
    }while(n<0);
    for(int i=1;i<=n;i++){
        terme*=i;
        printf("le terme %d est %d\n",i,terme);
    }
return 0;
}