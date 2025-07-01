#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    char name[100];
    int die1 = rand() % 6 + 1; 
    int die2 = rand() % 6 + 1;
    printf("What is your name?\n");
    fgets(name, sizeof(name),stdin);
    printf("Hello, %s!\n", name);
    printf("Rolling the dice...\n");
    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", die1 + die2);
    if(die1+die2>7) {
        printf("%s won!\n",name);
    }
    else printf("%s lost!\n",name);

    return 0;
}
