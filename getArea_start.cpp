#include <iostream>
 
using namespace std;
 
// Base class
class Shape  {

public:
   // pure virtual function providing interface framework.
   virtual int getArea() = 0;
	
   void setWidth(int w) {
      width = w;
   }
	
   void setHeight(int h) {
      height = h;
   }
	
protected:
   int width;
   int height;
};
 




