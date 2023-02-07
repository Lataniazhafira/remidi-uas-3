/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   
    int number;
    
    cout<< "number :"; cin>> number;
    
    if(number>0){
        cout<<"positif"<<endl;
    }
    else if(number<0){
        cout<<"negatif"<<endl;
    }
    else {
    cout<<"zero"<<endl;
    }
     return 0;
    
}
    