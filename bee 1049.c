#include<stdio.h>
int main()
{
    char w1[15],w2[15],w3[15];
    scanf("%s%s%s",&w1,&w2,&w3);
    if(w1=="vertebrado" && w2=="ave "&& w3=="carnivoro"){
        printf("aguia");
    }
   else if(w1=="vertebrado" && w2=="ave" && w3="onivoro"){
        printf("pomba");
    }
    else if(w1=="vertebrado"&& w2=="mamifero" && w3=="onivoro" ){
        printf("homem");
    }
   else if(w1=="vertebrado" && w2=="mamifero "&& w3=="herbivoro" ){
        printf("vaca");
    }
   else if(w1=="invertebrado" && w2=="inseto" && w3=="hematofago" ){
        printf("pulga");
    }
   else if(w1=="invertebrado" && w2=="inseto" && w3=="herbivoro "){
        printf("lagarta");
    }
   else if(w1=="invertebrado" && w2=="anelideo" && w3=="hematofago" ){
        printf("sanguessuga");
    }
  else  if(w1=="invertebrado"&& w2=="anelideo" && w3=="onivoro" ){
        printf("minhoca");
    }
    return 0;
}
