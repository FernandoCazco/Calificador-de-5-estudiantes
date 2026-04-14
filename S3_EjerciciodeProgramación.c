#include <stdio.h>
#define estudiantes 5
#define asignatura 3

int main(){

    float notas[estudiantes][asignatura];
    int i,j;

    printf("|-----Calificaciones-----|\n");

    for (int i = 0;i< estudiantes; i++){
        printf("\n-----Estuadiante %d -----\n", i+1);
        for (int j=0; j<asignatura; j++){
            printf("Ingrese la nota de la asignatura %d:",j+1);
            scanf("%f", &notas[i][j]);
        }
    }

    return 0;
}
