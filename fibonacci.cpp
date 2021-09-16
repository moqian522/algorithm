#include <iostream>

using namespace std;

int fibonacci_recurse(int n) {
   if (n < 1) {
       return 0;
   }

   if (n == 1 || n== 2) {
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
   int ret = 0;

   while (n > 2){
       ret = first + second;
       first = second;
       second = ret;
       --n;
   }

   return ret;
}

int fibonacci_recurse_optimized(int first, int second, int n) {
   if (n < 1) {
       return 0;
   }

   if (n == 1) {
       return first;
   }
   else if (n == 2) {
       return second;
   }
   else if (n == 3) {
       return first + second;
   }
   else {
       return fibonacci_recurse_optimized(second, first + second, n - 1);
   }
}
int main()
{
    cout << "Hello World" << endl;
}