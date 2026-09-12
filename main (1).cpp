/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    
    string name;
    double firstnum , secondnum;
    
    double addition, difference, multipication, division;
    
    cout << "Enter name:";
    cin >> name;
    
    cout << "Enter firstnum :";
    cin >> firstnum;
    
    cout << " Enter secondnum :";
    cin >> secondnum;
    
    addition = firstnum+secondnum;
    difference = firstnum-secondnum;
    multipication = firstnum*secondnum;
    division = firstnum/secondnum;
    
    if (secondnum==0) { 
        cout << " Error undefined cannot divide by zero " << endl;
        return 0;
    }
    
    cout << endl;
    
    cout << "=====Calculator====" << endl;
    cout << " Name :" << name <<  endl;
    cout << " Addition :" << addition<< endl;
    cout << " Difference :" << difference <<endl;
    cout << " Multipication :" << multipication << endl;

    return 0;
}