#include <iostream>
using namespace std;


void IntroCul() {
   
    cout << " ---------------- Calculator Project ---------------- " << endl;
}

void ReadNum(float &a , float &b) {


    cout << "Enter the First Number: " << endl;
    cin >> a;

    cout << "Enter the Second Number: " << endl;
    cin >> b;

}

void CalculationProcess(float a , float b) {

    int Num;

    cout << "Choose an operation:\n";
    cout << "1. Addition\n\n";
    cout << "2. Subtraction\n\n";
    cout << "3. Division\n\n";
    cout << "4. Multiplication\n\n";
    cin >> Num;

    switch (Num)
    {
        case 1:
            cout << a << " + " << b << " is = " << a + b << endl;
            break;
        case 2:
            cout << a << " - " << b << " is = " << a - b << endl;
            break;
        case 3:
            cout << a << " / " << b << " is = " << a / b << endl;
            break;
        case 4:
            cout << a << " * " << b << " is = " << a * b << endl;
            break;
    default:
        cout << "Invald Input" << endl;
        break;
    }
    
}

int main()
{

    IntroCul();

    float a, b;
    char Choice;

    do {

        ReadNum(a, b);
        CalculationProcess(a, b);

        cout << "Do you want to continue (y/n)! " << endl;
        cin >> Choice;

    } while (Choice == 'y' || Choice == 'Y');

    return 0;
}


