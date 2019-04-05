#include <stdio.h>

void italy();
void brazil();
void argentina();

int main(){
    
    italy();
    
    return 0;
}

void italy(){
    printf("I am in Italy\n");
    brazil();
}

void brazil(){
    printf("I am in Brazil\n");
    argentina();
}

void argentina(){
    printf("I am in Argentina\n");
}