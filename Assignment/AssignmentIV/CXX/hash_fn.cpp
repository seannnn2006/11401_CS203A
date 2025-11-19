#include "hash_fn.hpp"

int myHashInt(int key, int m) {
    int hash = key * 97 + 103;
    return hash % m;
}

int myHashString(const std::string& str, int m) {
  if(m <= 0) return -1;
  if(str.empty()) return -1;

  unsigned long sum = 0;
  for(char c : str){
    sum += static_cast<unsigned long>(c);
  }

  int index = static_cast<int>(sum % m);
  if(index < 0)index = (index + m) % m;
  return index;
}

