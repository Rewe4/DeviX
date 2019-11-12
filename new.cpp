#include <iostream>
using namespace std;

int main(){
  float num1{0}, num2{0};
  char ans{'y'}, opt{'0'};
  bool b{1};

  cout << "V1.1\nWelcome To Calculator App\n\n ";
  while(ans == 'y' || ans == 'Y'){

  cout << "Enter Your First Number\t";
    cin >> num1;
    while(b){
      cout << "\nType Your opt(+,-,*,/,=)\t";
        cin >> opt;
      if(opt != '='){
      cout << "\nTypa a Number\t";
        cin >> num2;

        if(opt == '+'){
          num1 += num2;
        }
        else if(opt == '-'){
          num1 -= num2;
        }
        else if(opt == '*'){
          num1 *= num2;
        }
        else if(opt == '/'){
          num1 /= num2;
        }
        else {
          cout << "\n\n\aError\nCalculator Restarting...";
          ans = 'y';
        }
      }
      else{
        cout << "\nYour Answer =\t" << num1;
        b = false;
        cout << "\n\nRestart Again?(y/n)";
          cin >> ans;
        cout << "\n\n";
      }
    }
  }
  cout << "\nThank You for using ;)...";

  return 0;
}
