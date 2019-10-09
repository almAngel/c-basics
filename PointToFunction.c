#include "conio.h"
#include "stdio.h"
#include "ctype.h"

void hello() {
    printf("%s", "Hello ");
}

void world() {
    printf("%s", "World!");
}

int main()
{
    // THIS IS MY DELEGATE
    void(*anonymV[2])(void);

    // STORE INSIDE DELEGATE ARRAY
    anonymV[0] = &hola;
    anonymV[1] = &mundo;

    for (int i = 0; i < sizeof(anonymV); i++)
    {
        anonymV[i]();
    }
    
    return 0;
}
