#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char hola[23] = "Urphr hvshud hq Yhurqd";
    int i = 0;
    int ip = 0;
    while (i < strlen(hola)){
        if (hola[i] > 68 && hola[i] < 91)
            hola[i] -= 3;
        else if (hola[i] > 99)
            hola[i] -= 3;
        else if (hola[i] < 65)
            ip++;
        else
            hola[i] += 23;
        i++;
    }
    printf("%s\n", hola);
    return 0;
}