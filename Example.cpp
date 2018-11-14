#include <iostream.h>

using namespace std;

int main(){
  
  //initialize
  Properties<double> bla([](double value) -> double {
		cout << "setter called: " << value;
		return value;
	}, [](double value) -> double{ 
		Serial.println("getter called");
		return value;
	});
  
  //set
	bla = 10;
  //get
	double x = bla.val();
	cout << "get: << x;
  
  return 0;
}
