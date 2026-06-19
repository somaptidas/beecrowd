#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,str3;
    cin>>str1>>str2>>str3;

    if(str1=="vertebrado"){
        if(str2=="ave"){
            if(str3=="carnivoro"){
                printf("aguia\n");
            }
            if(str3=="onivoro"){
                printf("pomba\n");
            }
        }
        if(str2=="mamifero"){
            if(str3=="onivoro"){
                printf("homem\n");
            }
            if(str3=="herbivoro"){
                printf("vaca\n");
            }
        }
    }
    else if(str1=="invertebrado"){
        if(str2=="inseto"){
            if(str3=="hematofago"){
                printf("pulga\n");
            }
            if(str3=="herbivoro"){
                printf("lagarta\n");
            }
        }
        if(str2=="anelideo"){
            if(str3=="hematofago"){
                printf("sanguessuga\n");
            }
            if(str3=="onivoro"){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
