#include <iostream>
using namespace std;

int main()
{
int x;
cout << "Please enter an integer: ";
cin >> x;

switch(x) {
            case 1:
                  cout << "x is 1\n";
                  break;
            case 2:
            case 3:
                  cout << "x is 2 or 3\n";
                  break;
            default:
                  cout << "x is not 1, 2, or 3" << endl;
}

return 0;
}

