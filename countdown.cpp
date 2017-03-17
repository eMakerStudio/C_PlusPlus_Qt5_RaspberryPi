#include <iostream>
#include <unistd.h> // needed for sleep()
#include <iomanip> // needed for setw() - width

using namespace std;

int main()
  {
	  int count = 10;
	  while (count > -1) {
		  cout <<  setw(8) << count << endl;
		  sleep(1);
		  count--;
	  }
	  cout << " " << endl;
	  cout << "Ready for Start" << endl;
	  return 0;
  }

