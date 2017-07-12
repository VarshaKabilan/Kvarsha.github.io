# include <iostream>
using namespace std;
 int main(){
  int start, end;
  cout<< "Enter the range";
  cin >> start >> end;
  int i, j, count = 0;
  for ( i = start; i <= end; i++ ){
    for ( j = 1; j <= i; j ++ ){
       if ( i % j == 0)
         count ++;
       }
      if (count == 2)
        cout << " "<<i;
     count = 0;
  }
  cout << "\n";
}

