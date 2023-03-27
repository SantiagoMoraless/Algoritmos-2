#include <stdio.h>
#include "array_helpers3.h"


unsigned int array_from_file(int array[], unsigned int max_size, const char *filepath) {

    FILE *archivo;
    archivo = fopen(filepath, "r");
    fscanf(archivo, "%u", &max_size);

    if (archivo == NULL) {
        printf("No se puede abrir el archivo");
    }



    for (unsigned int i = 0; i < max_size; ++i) {
        fscanf(archivo, "%d", &array[i]);
    }
    

    fclose(archivo);

    return max_size;
}

void array_dump(int a[], unsigned int length) {

    for (unsigned int i = 0; i < length; ++i) {
        if (i == 0) {
            printf("[ %d,", a[i]);
        }
        if (((i+1) < length) && (i != 0)) {
            printf(" %d,", a[i]);
        } 
        if (i == (length - 1) ) {
            printf(" %d]\n", a[i]);
        }
    }
}





