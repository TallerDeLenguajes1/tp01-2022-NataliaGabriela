#include <stdio.h>

int main(){
    
    printf("HOLA MUNDO\n");
    int var1=5, *p_var,tama;
    p_var=&var1;
    printf("Contenido del Puntero: %p\n", p_var);
    printf("Dirección de memoria almacenada: %p\n", p_var);
    printf("Dirección de memoria de la variable: %p\n", &var1);
    printf("Dirección de memoria del puntero: %p\n", &p_var);
    tama=sizeof(var1);
    printf("Tamaño: %d\n",tama);

    
    getchar();
    return 0;
}