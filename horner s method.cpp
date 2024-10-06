#include <iostream> 
using namespace std; 
int horner(int poly[], int n, int x) 
{ 
    int result = poly[0];      for (int i=1; i<n; i++) 
        result = result*x + poly[i]; 
  
    return result; 
} 
int main() 
{ 
 	cout<<"Deepansh Jain :"<<endl;     int poly[4]; 
    cout<<"Enter coefficients(4) of polynomial:\n";     for(int i=3;i>=0;i--){ 
        cin>>poly[i]; 
    } 
    cout<<"\nPolynomial is: \n";     int n = sizeof(poly)/sizeof(poly[0]); 
    for (int i=n-1; i>=0; i--) 
    { 
       cout << poly[i];        if (i != 0) 
        cout << "x^" << i ;        if (i <= n-1 && i!=0)        cout << " + "; 
    }     int x; 
    cout<<"\n\nEnter the value of x for which you want to evaluate the polynomial: "; cin>>x;     cout << "\nValue of polynomial is " << horner(poly, n, x);     return 0; 
} 

