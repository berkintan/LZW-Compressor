#include "HashMap.h"

HashMap::HashMap() {
    capacity = 65536;
    size = 0;
    table = new HashNode*[capacity];
    for (int i = 0; i < capacity; i++) {
        table[i] = NULL;
    }
    dummy = new HashNode("", -1);


}

int HashMap::hashCode(string key) {
    int hash = 0;
    int index;
    for (int i = 0; i < key.length(); i++) {
        hash = (hash + (int)key[i]) % capacity;
    }
    return hash;
}

void HashMap::insert(string key, int value)
 {
    int index = hashCode(key);
    while (table[index] != NULL )
 }