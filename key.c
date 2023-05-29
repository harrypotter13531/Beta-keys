#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define KEY_LENGTH 18

char generateRandomChar() {
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int numChars = sizeof(characters) - 1;
    return characters[rand() % numChars];
}

void generateBetaKey(char *key, int length) {
    int i;
    for (i = 0; i < length; i++) {
        key[i] = generateRandomChar();
    }
    key[length] = '\0';
}

int main() {
    srand(time(NULL));
    
    char betaKey[KEY_LENGTH + 1];
    generateBetaKey(betaKey, KEY_LENGTH);
    
    printf("Generated BETA key: %s\n", betaKey);
    
    return 0;
}

// defines the Algorithm code to Generate a Beta Key for games and a normal webpage