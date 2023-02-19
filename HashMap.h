#include "HashNode.h"

class HashMap {
    private:
        int capacity;
        HashNode **table;
        int size;
        HashNode *dummy;
    public:
        HashMap();
        int hashCode(string key);
        void insert(string key, int value);
        int search(string key);
        // void remove(string key);
        int getSize();
        bool isEmpty();
        void display();
        bool contains(string key);
        ~HashMap();
        
};