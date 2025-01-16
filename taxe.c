#include<stdio.h>
int main(){
    ;
    float ht,ttc,tva=0.106,net,remise;
    do{
        printf("entrez le prix du produit(HT):");
        scanf("%f",&ht);
    }while(ht<=0);
    ttc= ht*(1.00+tva);
    //remise selon la condition
    if (ttc <3500) {//remise de 10,1%
        remise = ttc * 0.101;
    } 
    else if (ttc >= 3500 && ttc < 12800) {//remise de 15,2%
        remise = ttc * 0.152;
    } 
    else if (ttc > 3000 && ttc <= 6000) {//remise de 25,3%
        remise = ttc * 0.253;
    } 
    net=ttc-remise;
    printf("le prix toute taxe comprise est %.2lf\n",ttc);
    printf("la remise est %.2lf\n",remise);
    printf("le prix net est %.2lf\n",net);
    

    return 0;
}
