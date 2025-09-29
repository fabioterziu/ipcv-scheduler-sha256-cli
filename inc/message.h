#ifndef MESSAGE_H      // per evitare inclusioni multiple (include guard)
#define MESSAGE_H
#define SIMPLEMSG_SIZE 256 // Dimensione del messaggio semplice

#include <stdlib.h>
#include <sys/types.h> 

//struttura per il file
struct msgStruct {
    long mtype;                // Tipo del messaggio (richiesto da msgget/msgsnd/msgrcv)
    char text[SIMPLEMSG_SIZE];
};

void printMessage1(struct msgStruct *msg);
void printMessage2(struct msgStruct *msg);
void printMessage3(struct msgStruct *msg);
void printMessage4(struct msgStruct *msg);



#endif