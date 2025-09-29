# 📁 Gestione concorrente di richieste di hashing SHA-256 tramite IPC System V con scheduling

**STATO: in lavorazione**

## DESCRIZIONE
Elaborato per l'esame di Sistemi Operativi [Anno 2025].  

L’obiettivo è quello di realizzare un server che permetta multiple computazioni di impronte SHA-256.  
Un client invia l’informazione di file di input al server e riceve l’impronta risultante appena computata.

**Obiettivi:**
- Implementare server che riceve richieste ed invia risposte, usando code di messaggi  
  Implementare client che invia richiesta e riceve risposta, usando code di messaggi  
  Trasferire il file da client a server attraverso memoria condivisa

- Istanziare processi distinti per elaborare richieste multiple concorrenti  
  Introdurre un limite al numero di processi in esecuzione, modificabile dinamicamente da un secondo client  
  Schedulare le richieste pendenti in ordine di dimensione del file  
  Utilizzare almeno un semaforo per sincronizzare il flusso di comunicazione e/o processamento

- Offrire multipli algoritmi di schedulazione delle richieste pendenti (p.e. FCFS), configurabile alla partenza del server  
  Implementare un meccanismo di interrogazione del server sul suo stato corrente di richieste pendenti ed in processamento  
  
