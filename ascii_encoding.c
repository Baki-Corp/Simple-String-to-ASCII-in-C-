#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char chaine_to_encode[1000];
    char p = 37;
    printf("Script By Deucalion\n");
    printf("Que voulez vous encoder ? ");
    scanf("%s", chaine_to_encode);

    for (i=0; i<strlen(chaine_to_encode);i++)
    {
        printf("%c%x",p, chaine_to_encode[i]);
    }
    return 0;
}