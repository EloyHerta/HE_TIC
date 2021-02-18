/*
1. Introduce las carreras que deseas cursar (3, en orden).
primear opcion:
segunda...:
2. Nota evau. Fase obligatoria.
Se obtiene calculando la media aritmética de las calificaciones de las cuatro materias
que integran esta Fase: Ingles(Frances), Lengua, Historia, Matematicas II.

- Cada materia de la fase obligatoria se califica con una puntuación de 0 a 10 puntos.

- Tienes que sacar un minimo de 4 puntos en la Fase obligatoria para que pueda ponderar bachillerato.

3. Nota media del bachillerato.
4. Calcular la nota de ACCESO: [0,4 * Nota de la EvAU] + [0,6 * NotaMediaBachillerato]
5. Si la nota de acceso es menor que 5 -> suspenso.
6. Introduces las notas de las asignaturas FASE VOLUNTARIA.
7. Nota de admision 
Nota de Admisión = Nota de Acceso + a*M1 + b*M2
M1, M2 = calificaciones de un máximo de dos materias superadas en la EvAU —tanto en Fase Obligatoria como en Fase Voluntaria— que proporcionen mejor nota de admisión para el estudio grado solicitado tras la aplicación del correspondiente parámetro de ponderación. [UNA MATERIA SE CONSIDERA SUPERADA CON UNA NOTA MÍNIMA DE 5 PUNTOS. LAS MATERIAS SUSPENDIDAS EN LA EVAU NO SE TIENEN EN CUENTA PARA EL CÁLCULO DE LA NOTA DE ADMISIÓN].

*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string>

int main(){
	using namespace std;
	
	char palabra[20];
	
	string carreras[20];
	
	printf("\nIntroduce las tres carreras que desees cursar:");
	printf("\nCarrera 1: "); 
	scanf("%s", &carreras[1]);
	printf("\nCarrera 2: "); 
	scanf("%s", &carreras[2]);
	printf("\nCarrera 3: ");
	scanf("%s", &carreras[3]);
	
	for(int i = 0; i<3; i++){
		printf("Tus carreras son: %s, %s, %s", &carreras[i]);	
	}
	
	
	
	
	return 0;
}

