#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
int x;
srand((unsigned int) time(NULL));
int num = (rand() % 10) + 1;

  cout << "Guess the number: " << endl;
  cin >> x;
  cout << "My number was " << num << endl;
  cout << "You guessed: " << x << endl;

       return 0;
}
