#include <stdio.h>
#include "pole.h"
#include "obj.h"

int main() {
    int a;
    scanf("%d", &a);
    printf("Pole kwadratu: %d\n", pole(a));
    printf("Objetosc szescianu: %d\n", obj(a));
}
