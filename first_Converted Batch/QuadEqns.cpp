#include<iostream>
#include<cmath>
using namespace std;
int main() {
   int a, b, c;
   cin>>a>>b>>c;

   float d, x1, x2;
   if (a == 0) {
      cout << "This is not a quadratic equation, enter the coefficients again.";
   }else {
      d = b*b - 4*a*c;
      if (d > 0) {
         x1 = (-b - sqrt(d)) / (2*a);
         x2 = (-b + sqrt(d)) / (2*a);
         cout << "Real and Distinct" << endl<<x1<<" "<<x2;
      } else if (d == 0) {
		 x2 = (-b + sqrt(d)) / (2*a);
         cout << "Real and Equal" << endl<<x2<<" "<<x2;
      }else {
         cout<<"Imaginary Roots";
      }
   }
   return 0;
}