#include <iostream>
#include <iomanip>
#include <fstream>
#include "HashMap.h"


using namespace std;

void compress(ifstream& fp_in, ofstream& fp_out, HashMap* codes) {

    for(unsigned int i = 0; i < 256; i++) {
        codes->insert(string(1, i), i);
    }

    unsigned int next_code = 257;
    string currentString;
    char character;

    while(fp_in >> character) {

        cout << character << endl;

    }
    



}

int main() {

    ifstream fp_in;
    ofstream fp_out;

    HashMap* codes = new HashMap();

    fp_in.open("data.txt", ios::in);
    fp_out.open("deneme.txt", ios::out);
    
    char character;
    if (fp_in.is_open()) {

    for(unsigned int i = 0; i < 256; i++) {
        codes->insert(string(1, i), i);
    }

    unsigned int next_code = 257;
    string currentString;
    char character;

    while(fp_in >> character) {
        
        if (codes->contains(currentString) == 1) {
            currentString = currentString + character; 
        } else {
            fp_out << codes->search(currentString);
            codes->insert(currentString, next_code);
            next_code++;
            currentString = character;
        }

    }

    fp_out << codes->search(currentString) << " ";

    
        
       
    }
    
    fp_in.close();
    fp_out.close();
    delete codes;
    return 0;
}



