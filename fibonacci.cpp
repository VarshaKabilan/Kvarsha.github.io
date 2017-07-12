# include <iostream>
  using namespace std;
  int main(){
   int first = 0;
   int second = 1;
   int sum;
   int limit;
   cout << "Enter the limit: ";
   cin >> limit;
   int i = 0;
   while (i < limit){
     if (i <= 1)
        cout << i<< " ";
     else {
        sum = first + second;
        first = second;
        second = sum;
        cout << " " << sum;
     }
    i ++;
  }
  cout<<"\n";
}

