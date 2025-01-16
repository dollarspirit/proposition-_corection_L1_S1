#include<stdio.h>
#include<math.h>
int main(){
    int n, somme=0;
    printf("calcule des termes\n");
    do{
        printf("entrez la valeur de n :");
        scanf("%d",&n);
    }while(n<0);
    for(int i=1;i<=n;i++){
        somme+=pow(i,2);//pow(i,2) est la fonction qui permet de calculer le carré de i
    }
    printf("la somme des carrés des %d premiers entiers est : %d\n",n,somme);
    return 0;
}