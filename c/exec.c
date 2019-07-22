#include<stdlib.h>
#include<stdio.h>
#include"echohash.c"

void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 7; j >= 0; j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
        // printf(" ");
    }
    puts("");
}

int main(int argc, char const *argv[])
{
    char *inp = "amirnimaalirezasinakiarashalirezamirnimaalirezasinakiarashalirez";
    void* input = (void *)inp;
    void* hash = malloc(64);
    memset(hash, 0, 64);
    
    echohash(hash, input);
    printBits(64 , hash);
    printf("\n");
    printBits(64 , input);
}


