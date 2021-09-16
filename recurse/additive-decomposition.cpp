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

void decompseNumberRepeated(int number,  int curDecomposeNumber, 
                              int* decompositions,int decompositionCount) {
    if (curDecomposeNumber == 0) {
        // Get one decompostion
        printOutput(number, decompositions, decompositionCount);
    }
    else {
        for (int i = 1; i <= curDecomposeNumber; i++)
        {
            decompositions[decompositionCount] = i;
            decompseNumberRepeated(number, curDecomposeNumber - i, 
                                     decompositions, decompositionCount + 1);
        }
        
    }           
}

void decompseNumberNotRepeated(int number,  int curDecomposeNumber, 
                              int* decompositions,int decompositionCount) {
    if (curDecomposeNumber == 0) {
        // Get one decompostion
        printOutput(number, decompositions, decompositionCount);
    }
    else {
        int startIndex = decompositionCount > 0 ? decompositions[decompositionCount - 1] : 1;
        for (int i = startIndex; i <= curDecomposeNumber; i++)
        {
            decompositions[decompositionCount] = i;
            decompseNumberNotRepeated(number, curDecomposeNumber - i, 
                                     decompositions, decompositionCount + 1);
        }
        
    }           
}

int main()
{
    int n,m;
	cin>>n>>m;
	int number = n;
	int* decompostions = new int[n];
	if(m==1)
		decompseNumberRepeated(number, n, decompostions, 0);
	else if(m==2)
		decompseNumberNotRepeated(number, n, decompostions, 0);
    
    delete decompostions;
	return 0;
}