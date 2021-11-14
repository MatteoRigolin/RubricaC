#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[20];
    char cognome[20];
    int numeroTel;
} Rubrica_T;

void mostraRubrica(FILE *stream, char contenutoStream[100][100], int){
    printf("Rubrica:\n");
    for (int i = 0; !feof(stream); i++){
        fscanf(stream, "%s %s %d", rubrica[i].nome, rubrica[i].cognome, rubrica[i].numeroTel);
        printf("%s %s %d", rubrica[i].nome, rubrica[i].cognome, rubrica[i].numeroTelefonico);
    }
}

void aggiuntaContatto(FILE *stream, char contenutoStream[100][100], int l)
{
    Rubrica_T rubrica;
    printf("Inserisci il nome della persona che desideri inserire nella rubrica: ");
    scanf("%s", rubrica.nome);

    printf("Inserisci il cognome: ");
    scanf("%s", rubrica.cognome);

    do
    {
        printf("Inserisci il numero: ");
        scanf("%d", rubrica.numeroTel);
    }
    while (strlen(rubrica.numeroTel) != 10);
    fprintf(stream, "%s %s %d", rubrica.nome, rubrica.cognome, rubrica.numeroTel);
}

void rimuoviContatto(FILE *stream, char contenutoStream[100][100], int l){

}

int main(int argc, char * argv[]){ 
    FILE* stream; 
    int lunghezzaStream;
    char risposta;
    char contenutoStream[100][100];

    if (argc != 2 && argc != 4)
    {
        printf("Errore negli argomenti");
        exit(0);
    }
    stream = fopen(argv[1], "r+");
    if (stream == NULL)
    {
        printf("File di input inesistente");
        exit(1);
    }

    printf("Menù della rubrica");
    printf("Premi 1 mostrare la rubrica a video\n2 per aggiungere un contatto alla rubrica\n3 per eliminare un contatto dalla rubrica");
    scanf("%a", &risposta);
    switch(risposta){       
        case 1:
            mostraRubrica(stream, contenutoStream, lunghezzaStream);
            break;
        case 2:
            aggiuntaContatto(stream, contenutoStream, lunghezzaStream);
            break;
        case 3: 
            rimuoviContatto(stream, contenutoStream, lunghezzaStream);
            break;
        default:
            printf("Devi inserire solo 1, 2 o 3");
            break;
    }
    
    return 0; 
}