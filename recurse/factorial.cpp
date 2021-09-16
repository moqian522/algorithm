#include <iostream>

using namespace std;

int factorialbyRecurse(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n*factorialbyRecurse(n-1);
    }
}

int factorial(int n) {
    int ret = n;
    while (n > 1) {
        --n;
        ret = ret * n;
    }
    return ret;
}
int main()
{
    cout << "Hello World" << endl;
}