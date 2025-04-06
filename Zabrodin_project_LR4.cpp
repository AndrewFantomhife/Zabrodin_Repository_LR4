#include <iostream>
using namespace std;

// Заготовка методов
void inputNumbers();
void findRemainder();
void findQuotient();

int main() {
    int choice;
    do {
        // Меню
        cout << "Меню:\n";
        cout << "1. Ввести целые числа Q и P\n";
        cout << "2. Найти остаток от деления Q на P\n";
        cout << "3. Найти целую часть от деления Q на P\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        // Обработка выбора
        switch (choice) {
            case 1:
                inputNumbers();
                break;
            case 2:
                findRemainder();
                break;
            case 3:
                findQuotient();
                break;
            case 0:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}

// Заготовка методов (пока пустые)
void inputNumbers() {
    // Здесь будет реализация ввода чисел
}

void findRemainder() {
    // Здесь будет реализация нахождения остатка
}

void findQuotient() {
    if (P == 0) {
        cout << "Сначала введите числа Q и P через пункт меню 1.\n";
        return;
    }
    int quotient = Q / P;
    cout << "Целая часть от деления " << Q << " на " << P << " равна: " << quotient << "\n";
}
