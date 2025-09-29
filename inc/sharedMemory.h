#ifndef SHAREDMEMORY_H      // per evitare inclusioni multiple (include guard)
#define SHAREDMEMORY_H

#include <stdlib.h>
#include <sys/types.h> 


struct shmemStruct {
    size_t path_len; //dimensione path
    //key di segmento di memoria?
    char path[256]; //path del file ///////////////////PERCHE CAZZO SE NON USO 256 MI DA <SERVER> Shared memory error: Invalid argument

};

void printShmem(struct shmemStruct *mem);


#endif