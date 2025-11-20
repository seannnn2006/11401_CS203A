#include "hash_fn.h"

int myHashInt(int key, int m) {
    if (m <= 0) return -1;

    int hash = key * 97 + 103;
    int index = hash % m;
    if (index < 0) index += m;

    return index;
}

int myHashString(const char* str, int m) {
    if (m <= 0 || str == NULL || strlen(str) == 0) return -1;

    const int a = 31;
    const int b = 17;

    unsigned long long hash = 0;

    
    for (int i = 0; str[i] != '\0'; i++) {
        hash = (hash + a * (unsigned char)str[i] + b) % m;
    }

    return (int)hash;
}
