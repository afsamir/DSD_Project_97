#include<stdlib.h>
#include<stdio.h>
#include"echohash.c"

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}

int main(int argc, char const *argv[])
{
    uint16_t inp = 1;
    void* input = &inp;
    void* hash = malloc(500);
    
    echohash(hash, input);
    printBits(strlen(hash) , hash);
    printf("\n");
    printBits(strlen(input) , input);
}


