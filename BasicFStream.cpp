#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	int x;

ofstream my_file;
// creates and open datafile.txt for appending data
my_file.open("datafile.txt"); 
cin >> x; // takes one integer as user input
my_file << x;
my_file.close();

return 0;
} 


