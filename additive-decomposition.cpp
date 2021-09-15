#include <iostream>

using namespace std;

void printOutput(int number, int* decompositions,int decompositionCount) {
    if (NULL == decompositions || decompositionCount < 1) {
        cout << "Please check you implementation." << endl;
    }
    cout << number << "=";
    int i = 0;
    for (; i < decompositionCount - 1; i++) {
        cout << decompositions[i] << "+";
    }
    cout << decompositions[i] << endl;
}

void decompseNumberDuplicated(int number,  int curDecomposeNumber, 
                              int* decompositions,int decompositionCount) {
    if (curDecomposeNumber == 0) {
        // Get one decompostion
        printOutput(number, decompositions, decompositionCount);
    }
    else {
        for (int i = 1; i < curDecomposeNumber; i++)
        {
            decompositions[decompositionCount] = i;
            decompseNumberDuplicated(number, curDecomposeNumber - i, 
                                     decompositions, decompositionCount + 1);
        }
        
    }           
}

int main()
{
    cout << "Hello World" << endl;
}