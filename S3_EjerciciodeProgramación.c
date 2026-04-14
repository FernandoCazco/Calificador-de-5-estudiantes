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
            do {
                printf("Ingrese la nota de la asignatura %d (0-10):",j+1);
                scanf("%f", &notas[i][j]);
                if(notas[i][j] < 0 || notas[i][j] > 10){
                    printf("Nota invalida. Debe ser de 0-10.\n");
                }
            } while(notas[i][j]<0 || notas [i][j] >10);
            

        }
    }
    printf("\n|-----Promedio por estudiante-----|\n");

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    

    return 0;
}
