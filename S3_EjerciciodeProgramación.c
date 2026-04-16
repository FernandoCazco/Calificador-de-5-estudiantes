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

    for (int i = 0; i < estudiantes; i++)
    {
        float suma = 0;
        for(int j = 0; j< asignatura; j++){
            suma+= notas[i][j];
        }
        float promedio = suma / asignatura;
        printf("Estudiante %d: %.2f\n", i+1, promedio);
    }
    
    printf("\n|-----Promedio por Asignatura-----|\n");
    for (int j = 0; j < asignatura; j++)
    {
        float suma = 0;
        for (int i = 0; i < estudiantes; i++)
        {
            suma += notas[i][j];
        }
        float promedio = suma / estudiantes;
        printf("Asignatura %d: %.2f\n", j+1, promedio);
        
    }
    

    return 0;
}
