#include <iostream>

using namespace std;

int main()
{
  int num;
  cout << "Enter a number"<<endl;
  cin >> num;
  int absnum = abs(num);
  int num1 = absnum/10;
  int num2 = absnum%10;
  cout << num1+num2<<" "<<endl;
    return 0;
}
