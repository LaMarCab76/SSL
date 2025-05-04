#include <stdio.h>

int main() {
    const char *mensaje="Hello, World!";
    const char *nombrearchivo="output.txt";
    FILE *archivosalida;
    fprintf(stdout, mensaje);
    archivosalida = fopen(nombrearchivo, "w");
    fprintf(archivosalida, "%s", mensaje);
    fclose(archivosalida);
    return 0;
}