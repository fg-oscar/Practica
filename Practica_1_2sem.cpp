
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

float rhombusArea(float a, float b) {
    float c;

    c = (a * b) / 2;

    return c;
}
void OddEven(int n) {
    if (n % 2 == 0) {
        cout << "El Numero es par " <<endl;
    }
    else {
        cout << "El Numero es impar " << endl;
    }
    system("pause");
}
int Fibonacci(int a) {
    if (a > 1) {
        return Fibonacci(a - 1) + Fibonacci(a + -2);
    }
    else
    {
        if (a == 0) {
            return 0;
        }
        if (a == 1) {
            return 1;
        }
    }
}
int Factorial(int a) {
    if (a == 0) {
        a = 1;
    }
    else {
        a = a * Factorial(a - 1);
    }
    return a;
}
int main()
{
    bool flag = false;
    float a, b;
    int c;
    char op= '0';
    do {
        system("cls");
        cout << "\n\ta.- Area de Rombo";
        cout << "\n\tb.- Par o Impar";
        cout << "\n\tc.- Fibonacci";
        cout << "\n\td.- Factorial";
        cout << "\n\tx.- S A L I R";
        cout << "\n\t\tO P C I O  N: ";
        cin >> op;
        switch (op)
        {
        case 'a':
            system("cls");
            cout << "\n\tArea de Rombo\n";
            cout << "Digite la primer diagonal: ";
            cin >> a;
            cout << "Digite la segunda diagonal: ";
            cin >> b;
            cout << "El area del rombo es: " << rhombusArea(a, b) << endl;
            system("pause");
            break;
        case 'b':
            system("cls");
            cout << "\n\tPar o Impar\n";
            cout << "Digite un numero entero: ";
            cin >> c;
            OddEven(c);
            break;
        case 'c':
            system("cls");
            cout << "\n\tFibonacci\n";
            cout << "Digite el largo de la serie: ";
            cin >> c;
            for (int i = 1; i <= c; i++) {
                cout << Fibonacci(i) << " ";
            }
            cout << endl;
            system("pause");
            break;
        case 'd':
            system("cls");
            cout << "\n\tFactorial\n";
            cout << "Digite un numero entero para encontrar su factorial : ";
            cin >> c;
            cout << "El factorial de "<< c << " es: " << Factorial(c) << endl;
            system("pause");
            break;
        case 'x':
            cout << "Gracias vuelva pronto (Y) " << endl;
            flag = true;
            break;
        default:
            cout << "Opcion no valida intenta con minuscula" << endl;
            system("pause");
            break;
        }
    } while (flag != true);
    system("pause");
    return 0;
}
