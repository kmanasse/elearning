#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // Variables to store the coefficients of the quadratic equation
    double a, b, c;

    // Input the values for a, b, and c
    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;
    cout << "Enter a value for c: ";
    cin >> c;

    // Calculate the discriminant
    double discriminant = (b * b) - (4 * a * c);
    
    	
    // Calculate the roots using the quadratic formula
    double root1 = (-b - sqrt(discriminant)) / (2 * a);
    double root2 = (-b + sqrt(discriminant)) / (2 * a);
   

    	cout << "root1 is " << root1 << endl;
    	cout << "root2 is " << root2 <<endl;
     	
	

    


}

