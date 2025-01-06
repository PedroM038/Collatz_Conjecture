#include <iostream>
using namespace std;

unsigned long long int collatzIterative(unsigned long long int n) {
    unsigned long long int step = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        step++;
    }
    return step;
}

unsigned long long int collatzRecursive(unsigned long long int n, unsigned long long int step = 0) {
    if (n == 1) {
        return 0;
    }

    if (n % 2 == 0) {
        return 1 + collatzRecursive(n / 2, step++);
    } else {
        return 1 + collatzRecursive(3 * n + 1, step++);
    }
}

int main(void) {
    unsigned long long int n;
    int choice;
    while (true) {
        cout << "\n";
        cout << "Menu:\n";
        cout << "1. Usar algoritmo iterativo\n";
        cout << "2. Usar algoritmo recursivo\n";
        cout << "3. Sair\n";
        cout << "\n";
        cout << "Escolha uma opção: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number: ";
                cin >> n;
                cout << "Number of steps to reach 1 (Iterative): " << collatzIterative(n) << endl;
                break;
            case 2:
                cout << "Enter a number: ";
                cin >> n;
                cout << "Number of steps to reach 1 (Recursive): " << collatzRecursive(n) << endl;
                break;
            case 3:
                return 0;
            default:
                cout << "Opção inválida. Tente novamente.\n";
                break;
        }
    }

    return 0;
}
