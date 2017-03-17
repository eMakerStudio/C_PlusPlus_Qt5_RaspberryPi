#include <iostream>
using namespace std;

int add(int a, int b); // declare function add

int main()
{
int a;
int b;

int result = add(5,6); // call function add
cout << "The result is: " << result << endl;
return 0;
}

// define funcion add
int add(int a, int b) {
return a+b;
}


