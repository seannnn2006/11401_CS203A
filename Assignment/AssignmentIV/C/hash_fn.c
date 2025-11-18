#include "hash_fn.h"
#include <stdio.h>
#include <string.h>

int myHashInt(int key, int m) {
    if (m <= 0) return -1; 
    int index = key % m;
    if (index < 0) index = (index + m) % m; 
    return index;
}

int myHashString(const char* str, int m) {
    if (m <= 0) return -1; 
    if (str == NULL || strlen(str) == 0) return -1; 

    unsigned long sum = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        sum += (unsigned long)str[i];
    }

    int index = (int)(sum % m);
    if (index < 0) index = (index + m) % m; 
    return index;
}
