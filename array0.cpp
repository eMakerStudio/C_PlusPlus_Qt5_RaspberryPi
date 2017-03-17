/*********************************
* Takes 4 integers from user input
* and print the 4 integers out to
* the standard output - terminal
**********************************/

#include <iostream>
using namespace std;

int main() {

int arr[4];
cout << "Please enter 4 integers:" << endl;

for(int i = 0; i < 4; i++)
cin >> arr[i];

cout << "Thr result is:";

cout << " " << arr[0]+arr[1];

cout << endl;
return 0;
 }


