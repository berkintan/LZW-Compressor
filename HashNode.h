#include <string>

using namespace std;

class HashNode {

    private:
        string* key;
        int* value;

    public: 

        HashNode(string key, int value);
        string* getKey();
        int* getValue();
        //void setValue(int value);
};