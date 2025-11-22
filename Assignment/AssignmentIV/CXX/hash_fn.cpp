#include "hash_fn.hpp"

int myHashInt(int key, int m) {
	if(m <= 0) return -1; 
    unsigned int hash = (unsigned int)key * 41 + 17;
    hash ^= (key * 59 + 19); 
    int index = (int)(hash % m);
    return index;
}

int myHashString(const std::string& str, int m) {
  if (m <= 0 || str.empty()) return -1;
   
    const int a = 31;  
    const int b = 17;  

    unsigned long long hash = 0;
    for (char c : str) {
        hash = (hash + a * static_cast<unsigned char>(c) + b) % m;
    }

    return static_cast<int>(hash);
}
