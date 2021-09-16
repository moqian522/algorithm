#include <iostream>
#include <string>

using namespace std;

int move(int n, string from, string to){
    int count = 1;
    cout << "Move " << n << " from " << from << " to " << to << endl;
    return count;
}

int hanoi(unsigned int n, string from, string assist, string to) {
    int count = 0;
    if (n == 0) {
        return -1;
    }
    if (n == 1) {
        count += move(1, from, to);
    }
    else {
        count += hanoi(n-1, from, to, assist);
        count += move(n, from, to);
        count += hanoi(n-1, assist, from, to);
    }
    return count;
}

int main()
{
    unsigned int n = 0;
    cin >> n;
    int count = hanoi(n, "A", "B", "C");
    cout << "I moved " << count << " steps." << endl;
}