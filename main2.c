//la media de numeros 
//la varianza de numeros
//desviacion estandar es la raiz de la varinaza 
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void llenar_array();
void contar_filas();
void contar_columnas();


int arraymanin[5][5];
int suma_fila[5];
int suma_col[5];

int main()
{
    int i, j;

    srand(time(NULL));
    printf("array original con numeros random");
    printf("==========================================================");
    llenar_array();
    printf("==========================================================\n");
    contar_filas();
    contar_columnas();

    for (i = 0; i <= 5; i++) {
        printf("suma de fila %d: %d\n", i, suma_fila[i]);
    }

    printf("==========================================================\n");

    for (j = 0; j <= 5; j++) {
        printf("suma de columnas %d: %d\n", j, suma_col[j]);
    }

    return 0;
}

void llenar_array() {
    int i = 0, j = 0;

    for ( i = 0; i <= 5; i++) {
        for (j = 0; j < 5; j++) {
            arraymanin[i][j] = rand()%21;
            printf("[%d] ", arraymanin[i][j]);
        }
        printf("\n");
    }
}

void contar_filas() {
    int i, j;
    int suma;

    for (i = 0; i <= 5; i++) {
        suma = 0;
        for (j = 0; j <= 5; j++) {
            suma += arraymanin[i][j];
        }
        suma_fila[i] = suma;   
    }
}

void contar_columnas() {
    int i, j;
    int suma;

    for (i = 0; i <= 5; i++) {
        suma = 0;
        for (j = 0; j <= 5; j++) {
            suma += arraymanin[j][i];
        }
        suma_col[i] = suma;   
    }
}
