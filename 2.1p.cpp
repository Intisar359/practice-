#include <iostream>
using namespace std;

int main(){
int a= 5, b=3;
cout<< "Before swap a="<<a<<",b="<<b<<endl;

int* ptrA= &a;
int* ptrB= &b;
int temp= *ptrA;
*ptrA= *ptrB;
*ptrB= temp;


 cout<<"After swap a="<<a<<",b="<<b<<endl;

 return 0;


}
