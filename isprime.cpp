# include <iostream>
 using namespace std;
  int main(){
   int count = 0;
   int num;
   cout << "Enter a number:  ";
   cin >> num;
   int i,j;
   for(i = 1; i <= num; i ++){
        if (num % i == 0)
          count ++;
     }
  if (count == 2)
    cout<< "Prime"<< endl;
  else
    cout<< "Not Prime"<< endl;
   }

