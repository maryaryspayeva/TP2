// Pascal triangle
#include <iostream>
using namespace std;
void pascal_triangle(int);

int size;
int main()
{
    cout << "Please, input the size of Pascal triangle" << endl;
    cin >> size;
    pascal_triangle(size);

    return 0;
}
void pascal_triangle(int size)
{
    int array[size][size];
    cout << "Pascal triangle is " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j || j == 0) {
                array[i][j] = 1;
            }
            else {
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
            }
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}
