#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Human {
    int m;
};

int main(void) {
    struct Human person;
    person.m = 2 * 6; // Инициализация после создания структуры
    printf("m = %d\n", person.m);
    printf("I am old");
}