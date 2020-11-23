//Write a C++ program (using function) to sort 10 integer values
#include <iostream>
using namespace std;

int sort();

int array[10];
int main()
{

    cout << "Please, input 10 integers" << endl;
    for (int counter = 0; counter < 10; counter++) {
        cout << "Array [" << counter << "]" << endl;
        cin >> array[counter];
    }
    sort();
    return 0;
}

int sort()
{
    for (int i = 0; i < 10 - 1; i++) {
        int min_index = i;
        for (int next_index = i + 1; next_index < 10; next_index++) {
            if (array[next_index] < array[min_index])
                min_index = next_index;
        }
        swap(array[i], array[min_index]);
    }
    cout << "The sorted array is ";
    for (int counter = 0; counter < 10; ++counter)
        cout << array[counter] << "\t";

    return 0;
}
