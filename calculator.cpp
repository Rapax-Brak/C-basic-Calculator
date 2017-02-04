#include <iostream>

using namespace std;

int main()
{
   int n, count;
   float addi, avg, sub, mul, divi;

   addi = 0;
   cout << "How many numbers?  ";
   cin >> n;

   int a;
   for (count=1; count<=n; count++) {
        cout << "Enter Number:  ";
        cin >> a;
        addi = addi + a;
        sub = addi - a;
        mul = addi * a;
        divi = addi / a;
        avg = addi / n;
   }
   cout << "Addition " << addi << endl;
   cout << "Subtraction " << sub << endl;
   cout << "Multiply " << mul << endl;
   cout << "Divide " << divi << endl;
   cout << "The average is  " << avg << endl;
   std::cin.get();
   return 0;
 }
