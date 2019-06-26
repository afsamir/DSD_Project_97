#include<stdlib.h>
#include<stdio.h>
#include"echohash.c"
int main(int argc, char const *argv[])
{
    char* input = "input";
    char* hash = malloc(500);
    
    echohash(hash, input);
    printf("%s", hash );
}

