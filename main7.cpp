#include <iostream>
#include <ctime>
using namespace std;
int* pointer_sort_function(int* pointer, int size);
int main()
{

    srand(time(NULL));
    int n = 10;
    cout << "The array is" << endl;

    int* array = new int[n];
    for (int counter = 0; counter < n; counter++) {
        array[counter] = rand() % 100;
    }

    for (int counter = 0; counter < n; counter++) {
        cout << array[counter] << "\t";
    }
    cout << endl;

    int* pointer = pointer_sort_function(array, n);
    cout << "The sorted array is" << endl;
    for (int counter = 0; counter < n; counter++)
        cout << *(pointer + counter) << "\t";
    cout << endl;
    return 0;
}
int* pointer_sort_function(int* pointer, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (*(pointer + j) < *(pointer + i)) {
                int temp = *(pointer + j);
                *(pointer + j) = *(pointer + i);
                *(pointer + i) = temp;
            }
    return pointer;
}
