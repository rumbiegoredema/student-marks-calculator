/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{ 
    string name;
double mark1, mark2, mark3;
double total1, average;
    
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter your first mark:";
    cin >> mark1;
    
    cout << "Enter your second mark: ";
    cin >> mark2;
    
    cout << "Enter your third mark: ";
    cin >> mark3;
    
    total1 = mark1 + mark2 + mark3;
    average = total1 / 3;
    
    
    string result; 
    
    if ( average >= 50)
    { 
        result = " Pass!!";
    } 
    else 
    { 
        result = " Fail";
    }
    
    cout << endl;
    cout << "==== Student Results =====" << endl;
    cout << "Name :" << name << endl; 
    cout << "Total : " << total1 << endl;
    cout << "Average : " << average << "%" << endl;
    cout << " Result :" << result << endl;
    
    
    
    
    
    

    return 0;
}