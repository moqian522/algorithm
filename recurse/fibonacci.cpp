#include <iostream>

using namespace std;

int fibonacci_recurse(int n) {
   if (n < 1) {
       return 0;
   }

   if (n == 1 || n == 2) {
       return 1;
   }
   return fibonacci_recurse(n-1) + fibonacci_recurse(n-2);
}

int fibonacci_loop(int n) {
   if (n < 1) {
       return 0;
   }

   int first = 1;
   int second = 1;
   int ret = first;

   while (n > 2){
       ret = first + second;
       first = second;
       second = ret;
       --n;
   }

   return ret;
}

int fibonacci_recurse_optimized( int n, int first, int second) {
   if (n < 1) {
       return 0;
   }

   if (n == 1) {
       return first;
   }
   else if (n == 2) {
       return second;
   }
   else {
       return fibonacci_recurse_optimized(n - 1, second, first + second);
   }
}
int main()
{
    int n;
    cin >> n;
    cout << "Loop "<< n << ":" << fibonacci_loop(n) << endl;
    cout << "Recurse " << n << ":"  << fibonacci_recurse(n) << endl;
    cout << "Recurse optimized " << n << ":" << fibonacci_recurse_optimized(n, 1, 1) << endl;
}