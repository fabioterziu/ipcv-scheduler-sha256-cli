#ifndef ERREXIT_H //Serve a evitare inclusioni multiple di questo header nel progetto
#define ERREXIT_H //Se _ERREXIT_HH non è definito, definiscilo e includi il contenuto; altrimenti lo ignora


/* •   È una funzione di supporto per gestire gli errori di sistema.
   •   Quando chiami errExit("qualcosa"), stampa il messaggio d’errore relativo all’ultima chiamata di sistema fallita (tipo msgget, msgctl, ecc.).
   •   Dopo aver stampato l’errore, termina il programma.
*/


// Dichiara la funzione errExit che prende in input una stringa (messaggio d’errore da stampare)
void errExit(const char *msg);
//Fine del blocco di protezione da inclusioni multiple.
#endif
