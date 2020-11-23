//Write a C++ program that will prompt the user to input ten integer values
#include <iostream>
using namespace std;

int min_max();
int frequency();
int sort();

int array[10];
int main()
{

    cout << "Please, input 10 integers" << endl;
    for (int counter = 0; counter < 10; counter++) {
        cout << "Array [" << counter << "]" << endl;
        cin >> array[counter];
    }
    min_max();
    frequency();
    sort();
    return 0;
}

int min_max()
{
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < 10; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    cout << "The greatest value is " << max << endl;
    cout << "The smallest value is " << min << endl;

    return 0;
}

int frequency()
{
    int num = array[0];
    int max_frq = 1;
    for (int i = 0; i < 10 - 1; i++) {
        int frq = 1;
        for (int k = i + 1; k < 10; k++)
            if (array[i] == array[k])
                frq++;
        if (frq > max_frq) {
            max_frq = frq;
            num = array[i];
        }
    }

    if (max_frq > 1) {
        cout << "The value " << num << " occurs " << max_frq << " times" << '\n';
    }
    else {
        cout << "All values are unique!\n";
    }
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
