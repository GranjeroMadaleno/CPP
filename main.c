#include <stdio.h>

void nohagonada(void){
    return;
}

void sumar(int i, int j){
    printf("%d\n", i, j);
}

int getNumer(){
    return 2;
}

int main(){
    int i = 2;
    sumar(i, getNumero());
    return 0;
}