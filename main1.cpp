//Calculator menu
#include <iostream>
using namespace std;

int add(int, int);
int substract(int, int);
int multiply(int, int);
int divide(int, int);
int module(int, int);
void mainMenu();
int choice;
char yes;
int a, b;

int main()
{

    do {
        mainMenu();
        cin >> choice;
        cout << "Enter your two numbers:" << endl;
        cin >> a >> b;
        switch (choice) {
        case 1: {
            cout << "Sum is " << add(a, b) << "\n";
            break;
        }
        case 2: {
            cout << "Substract is " << substract(a, b) << "\n";
            break;
        }
        case 3: {
            cout << "Multiplication is " << multiply(a, b) << "\n";
            break;
        }
        case 4: {
            cout << "Division is " << divide(a, b) << "\n";
            break;
        }
        case 5: {
            cout << "Module is " << module(a, b) << "\n";
            break;
        }
        default:
            cout << "Input the number from 1 to 5 ";
            break;
        }

        cout << "\n Press y or Y to continue:";
        cin >> yes;
    } while (yes == 'y' || yes == 'Y');

    system("PAUSE");
    return EXIT_SUCCESS;
}

void mainMenu()
{

    cout << "MENU" << endl;
    cout << "\t 1. Add" << endl;
    cout << "\t 2. Subtract" << endl;
    cout << "\t 3. Multiply" << endl;
    cout << "\t 4. Divide" << endl;
    cout << "\t 5. Modulus" << endl;
    cout << "Enter your choice (the number of menu):" << endl;
}

int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    try {
        if (b == 0)
            throw 123;
    }
    catch (int i) {
        cout << "Error - " << i << " divide by 0!" << endl;
        cout << "\n Press y or Y to continue:";
        cin >> yes;
        if (yes == 'y' || yes == 'Y') {
            main();
        }
    }
    return a / b;
}
int module(int a, int b)
{
    try {
        if (b == 0)
            throw 123;
    }
    catch (int i) {
        cout << "Error - " << i << " divide by 0!" << endl;
        cout << "\n Press y or Y to continue:";
        cin >> yes;
        if (yes == 'y' || yes == 'Y') {
            main();
        }
    }
    return a % b;
}
