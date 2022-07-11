#include "dicionario.h"

extern tNO *inicio_texto, *final_texto;
extern size_t cont;
FILE *arqvSaida;
char vet[275502][30];

int main(int argc, char *argv[]) {
    FILE *arqv;

    arqv = fopen("/home/felipe/Documentos/ProgramasEmC/praticando/CorretorOrtografico/dic/brazilian", "r");

    if (!arqv) {
        perror("error");
        exit(1);
    }

    char tmp;
    char linha[1000];
    unsigned int i = 0;

    while (!feof(arqv))
        fscanf(arqv, "%s", vet[i++]);

    fclose(arqv);

    arqv = fopen(argv[1], "r");

    if (!arqv) {
        perror("error");
        exit(1);
    }

    arqvSaida = fopen(argv[2], "w+");

    if (!arqvSaida) {
        perror("error");
        exit(1);
    }
    i = 0;

    while (!feof(arqv)) {
        tmp = fgetc(arqv);
        while (!feof(arqv) && tmp != '\n') {
            if (tmp != 44 && tmp != 34 && tmp != 39 && tmp != 46)  // 44 = vírgula : 34 = aspas duplas, 39 = apóstrofo, 46 = ponto final
                linha[i++] = tmp;

            tmp = fgetc(arqv);
        }
        linha[i] = '\n';
        i = 0;

        tratarLinha(linha, arqvSaida,argv);
        memset(linha, '\0', 1000);
    }

    return 0;
}