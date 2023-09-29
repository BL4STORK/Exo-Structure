#include <stdio.h>

struct temps{
    unsigned heures;
    unsigned minutes;

};

int main() {
    struct temps instant;
    printf("Donnez l'heure:\n");
    scanf("%d", &instant);
    printf("Donnez les minutes:\n");
    scanf("%d", &instant);
    if(instant.heures < 10){
        printf("0%d", instant.heures);
    }else


    return 0;
}
