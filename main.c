#include <stdio.h>
#include <stdlib.h>

#define decal 3


void cryptage(char p[],int decalage) {
    int i = 0;
    while(p[i]!='\0') {
        p[i] += decalage;
        if(p[i] > 255) {
            p[i] -= 255;
        }
        i++;
    }
}

void decryptage(char p[],int decalage) {
    int i = 0;
    while(p[i]!='\0') {
        p[i] -= decalage;
        if(p[i] < 32)
            p[i] += 32;
        if( p[i] > 255)
            p[i]-=255;
        i++;
    }
}




int main() {
    char password[20];

printf("Enter mot de passe\n");
    scanf("%s",password);


printf("\n\ncode cryptee avec decalage de %d",decal);
    cryptage(password,decal);
    printf("\n%s",password);


printf("\n\ncode dycrypter avec decalage de %d",decal);
    decryptage(password,decal);
    printf("\n%s\n\n",password);
}
