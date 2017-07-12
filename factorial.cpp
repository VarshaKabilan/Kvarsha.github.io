# include <iostream>
  using namespace std;
  int main(){
    int num;
    int fact = 1;
    cout << "Enter a number";
    cin >> num;
    while(num > 0){
        fact *= num;
         num --;
      }
    cout << "The factorial is : "<< fact << "\n";
}

