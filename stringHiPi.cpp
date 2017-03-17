#include <iostream>
#include <string>

using namespace std;

int main()
{
string helloRpi("Hello Raspberry Pi");
string hello = helloRpi.substr(6, 9);

cout << helloRpi << endl;
cout << hello << endl;

return 0;
}

