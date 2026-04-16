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

    printf("\n|----Nota mas alta y baja por asignatura-----1\n");

    for (int j = 0; j < asignatura; j++)
    {
        float alta= notas[0][j];
        float baja = notas [0][j];
        for (int i = 1; i < estudiantes; i++)
        {
            if (notas[i][j]> alta)
            {
                alta = notas[i][j];
            }
            if (notas[i][j]< baja){
                baja = notas[i][j];
            }
            
        }
        printf("Asignatura %d  -Altas: %.2f| Baja: %.2f\n", j+1, alta, baja);
        
    }
    

    
    
    printf("\n|-----Nota mas alta y mas baja por estudiante-----|\n");
    for (int i = 0; i < estudiantes; i++)
    {
        float alta = notas[i][0];
        float baja = notas[i][0];
        for (int j = 1; j < asignatura;j++)
        {
            if(notas[i][j]>alta){
                alta = notas[i][j];
            }
            if(notas[i][j]< baja){
                baja = notas [i][j];
            }
        }
        printf("Estudiant %d - Alta: %.2f | Baja: %.2f\n",i+1, alta,baja );
    }
    

    return 0;
}
