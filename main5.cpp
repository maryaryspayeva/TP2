//Pointer : max value
#include <iostream>
using namespace std;
int max_function(int);

int size;
int main()
{
    cout << "Enter number of data values:";
    cin >> size;
    max_function(size);
    return 0;
}

int max_function(int size)
{
    int array[size];

    for (int counter = 1; counter <= size; counter++) {
        cout << "Enter value " << counter << " : ";
        cin >> array[counter];
    }
    int max = array[1];
    for (int counter = 1; counter <= size; counter++) {
        if (max < array[counter]) {
            max = array[counter];
        }
    }
    int* pointer = &max;
    cout << "The maximum value is " << *pointer << endl;
    return 0;
}
