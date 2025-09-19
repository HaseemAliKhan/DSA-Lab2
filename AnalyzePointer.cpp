#include<iostream>
using namespace std;

    void analyze_pointer(int *ptr) 
    {
        // Printing the memory location:
        cout<<"The memory location pointed by the pointer is: "<<ptr<<endl;

        // Printing the value of the integer which the pointer is pointing to:
        cout<< "The value of integer which the pointer is pointing to, is: "<<*ptr<<endl;

    }

int main(){


    int iValue = 45;
    int *ivalue = new int(33);

    // Using the reference operator—& to pass the value to analyze_pointer:
    cout<<"By Passing the Address of the integer variable:\n";
    analyze_pointer(&iValue);

    // Passing the pointer directly to the function:
    cout<<"By passing the pointer variable:\n";
    analyze_pointer(ivalue);
    

    return 0;
}