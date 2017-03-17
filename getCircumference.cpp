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
   
	virtual int getCircumference() = 0;

protected:
   int width;
   int height;
   
};
 
 
// Derived classes
class Rectangle: public Shape {

public:
   int getArea() { 
      return (width * height); 
   }
   
   int getCircumference() {
	   return (width * 2 + height * 2); 
   }
};


 
// Main program 
int main(void) {
   Rectangle Rect;
   
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   // Print the area of the object.
   cout << "Result Rectangle area: " << Rect.getArea() << endl;
   cout << "Result Rectangle circumference: " << Rect.getCircumference() << endl;

   
   return 0;
}



