#include "hash_fn.h"
//hash function經由copilot提供方法進行改編

int myHashInt(int key, int m) {
    if(m <= 0) return -1; 
    unsigned int hash = (unsigned int)key * 41 + 17;
    hash ^= (key * 59 + 19); 
    int index = (int)(hash % m);
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
