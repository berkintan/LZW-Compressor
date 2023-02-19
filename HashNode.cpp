#include "HashNode.h"

HashNode::HashNode(string key, int value) {
    this->key = 0;
    this->value = 0;
}

string *HashNode::getKey() {
    return key;
}

int *HashNode::getValue() {
    return value;
}

// void HashNode::setValue(int value) {
//     this->value = value;
// }
