#include <stdio.h>

#define PI 3.14159265358979323846

// Prototipos de funciones
float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main() {
	int opcion;
	float longitud, altura, radio;
	float areaCalculada, perimetroCalculado;
	
	do {
		printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
		if (scanf("%d", &opcion) != 1) {
			printf("Entrada no valida. Por favor, ingrese un numero.\n");
			while (getchar() != '\n'); 
			opcion = 0; 
			continue;
		}
		
		if (opcion != 1 && opcion != 2) {
			printf("Opcion incorrecta. Intente de nuevo.\n");
		}
	} while (opcion != 1 && opcion != 2);
	
	if (opcion == 1) {
		printf("Opcion de rectangulo seleccionada\n");
		
		printf("Ingrese la longitud del rectangulo: ");
		scanf("%f", &longitud);
		
		printf("Ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		
		areaCalculada = calcularAreaRectangulo(longitud, altura);
		perimetroCalculado = calcularPerimetroRectangulo(longitud, altura);
		
	} else {
		printf("Opcion de circulo seleccionada\n");
		
		printf("Ingrese el radio del circulo: ");
		scanf("%f", &radio);
		
		areaCalculada = calcularAreaCirculo(radio);
		perimetroCalculado = calcularPerimetroCirculo(radio);
	}
	
	imprimirResultados(areaCalculada, perimetroCalculado);
	
	return 0;
}

float calcularAreaRectangulo(float longitud, float altura) {
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
	return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio) {
	return PI * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
	return 2 * PI * radio;
}

void imprimirResultados(float area, float perimetro) {
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}

