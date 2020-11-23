//Write a program to accept five integer values from keyword
#include <iostream>
using namespace std;
void pointer_array();
int main()
{

    pointer_array();
    return 0;
}

void pointer_array()
{
    int array[5];
    int* pointer = array;
    cout << "Enter 5 integer values" << endl;
    for (int counter = 0; counter < 5; counter++) {
        cout << "Enter value " << counter << " : ";
        cin >> *(pointer + counter);
    }
    cout << "\n" << endl;

    cout << "Elements of array:" << endl;
    for (int counter = 0; counter < 5; counter++) {
        cout << *(pointer + counter) << "\t";
    }
}
