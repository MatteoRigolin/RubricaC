#include <stdio.h>

typedef struct
{
    char nome[20];
    char cognome[20];
    int numeroTel;
} Rubrica_T;

void mostraRubrica(){

}

void aggiungiContatto(){

}

void rimuoviContatto(){

}

int main(int argc, char * argv[]){ 
    FILE* stream; 
    char risposta;
    printf("Menù della rubrica");
    printf("Premi 1 mostrare la rubrica a video\n2 per aggiungere un contatto alla rubrica\n3 per eliminare un contatto dalla rubrica");
    scanf("%a", &risposta);
    if (risposta=="1"){
        mostraRubrica();
    }
    else if(risposta=="2"){
        aggiungiContatto();
    }
    else if (risposta=="3"){
        rimuoviContatto();
    }  
    return 0; 
}
