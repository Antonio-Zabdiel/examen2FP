//la media de numeros 
//la varianza de numeros
//desviacion estandar es la raiz de la varinaza 
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void llenar_array();
float promedio(int);
float varianza(float, int);
float desviacion_estandar(float);

int arraymanin[50];

int main()
{
    int i = 0;
    int prom;
    float varian;
    float ds;

    printf("se le sacara el premedio, varianza, y desviacion estandar a un array de numeros random de 50 elementos\n los numeros seran del 0 al 50\n===============================================================================================\nEstos son los valores del array\n=================================================================================\n");
    
    llenar_array();
    prom = promedio(50);//ya ta el promedio :)
    varian = varianza(prom, 50);
    ds = desviacion_estandar(varian);
    
    printf("\n===============================================================================================\nel promedio es: %d\n la varianza: %d\n la desviacion estandar %f\n===============================================================================================", prom, varian, ds);


    return 0;
}

void llenar_array(){
    int i = 0;
    for ( i = 0; i <= 50; i++)
    {
        arraymanin[i] = rand()%51;
        printf("%d, ", arraymanin[i]);
    }
}

float promedio(int num){
    int prom = 0;
    int i = 0;

    for(i = 0 ; i <= 50 ; i++){
        prom += arraymanin[i];
    }

    return prom/num;
}

float varianza(float promed, int num_dat){
    float varianz;
    int i = 0;

    for(i = 0 ; i <= num_dat ; i++){
        varianz += pow((arraymanin[i]-promed), 2);
    }   

    return varianz /= 50;
}

float desviacion_estandar(float varianz){
    return sqrt(varianz);
}
