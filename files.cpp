#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
ifstream input_file("data.input"); // open the input file
if (!input_file.is_open()) { // check for successful opening
cout << "Input file could not be opened! Terminating!" << endl;
return 1;
}
ofstream output_file("data.output"); // open the output file
if (!output_file.is_open()) { // check for successful opening
cout << "Output file could not be opened! Terminating!" << endl;
return 1;
}
// read as long as the stream is good - any problem, just quit.
// output is each number times two on a line by itself
int number;
while (input_file >> number) {
	output_file << number * 2 << endl;
 }
input_file.close();
output_file.close();
cout << "Done!" << endl;
return 0;
}

