#include <stdio.h>

// Función para intercambiar dos valores usando punteros
void swap(int *a, int *b) {
    int temp = *a;
        *a = *b;
            *b = temp;
            }
	            int main() {
                int x = 5;
                    int y = 10;
                        printf("Antes del intercambio:\n");
                            printf("x = %d, y = %d\n", x, y);
                                // Llamada a la función swap para intercambiar los valores de x e y
                                    swap(&x, &y);
                                        printf("Después del intercambio:\n");
                                            printf("x = %d, y = %d\n", x, y);
                                                return 0;
                                                 }
