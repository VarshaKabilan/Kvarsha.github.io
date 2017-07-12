# include <iostream>
using namespace std;
  int main() {
   int num;
   cout << "Enter a number";
   cin >> num;
   int rev = 0;
   int n = num;
   while (n > 0){
       if (n % 10 == 0)
         cout << "0";
       rev = rev * 10 + n % 10;
       n /= 10;
   }
  cout << rev << endl;
  if (num == rev)
     cout << "Palindrome" << endl;
  else
      cout << "Not Palindrome" << endl;
}

