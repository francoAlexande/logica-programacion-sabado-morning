/*
 1.Hacer una funcion que si es un numero primo
*/
#include <stdio.h>

int main() {
    int i, numero, cont = 0;

    printf("Digite un numero");
    scanf("%i", &numero);

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0){
            cont++;
        }
    }

    if (cont > 2) {
        printf("El numero %i no es primo\n", numero);
    } else {
        printf("El numero %i es primo\n", numero);
    }

    return 0;
}
