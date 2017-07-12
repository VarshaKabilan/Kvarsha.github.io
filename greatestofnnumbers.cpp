#include <iostream>
using namespace std;
   int main() {
     int no;
     cout << "Enter the number of elements out of which you want to find the greatest: ";
     cin >> no;
     int arr[no];
     int i;
     cout << "Enter the numbers:  ";
      for ( i =  0; i < no; i ++)
          cin >> arr[i];

     int greatest = arr[0];
       for ( i = 0; i < no; i ++){
            if (arr[i] > greatest)
                greatest = arr[i];
        }
 cout << greatest;
}

