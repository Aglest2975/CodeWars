#include <iostream>
#include <string>
using namespace std;

int main()
{
int x;
cout << "Enter an integer"<< endl;
cin >> x;
string str_number = "\""+to_string(x)+"\"";
cout << x << " --> "<<str_number<< endl;
    return 0;
}
