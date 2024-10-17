#include <windows.h>
#include <iostream>
#include "Novikov.h"  

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   
    cout << "Сумма = " << Sum(2.8, 3.3) << endl;
    cout << "Разность = " << Sub(10, 4) << endl;
    cout << "Произведение = " << Mul(7, 3) << endl;
    cout << "Частное = " << Div(10, 2) << endl;
    cout << "Частное (деление на ноль) = " << Div(10, 0) << endl;  

    return 0;
}
