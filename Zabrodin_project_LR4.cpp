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
    cout << "Введите целое число Q: ";
    cin >> Q;
    do {
        cout << "Введите натуральное число P (меньше Q): ";
        cin >> P;
        if (P <= 0 || P >= Q) {
            cout << "Ошибка: P должно быть натуральным числом и меньше Q. Попробуйте снова.\n";
        }
    } while (P <= 0 || P >= Q);
}

void findRemainder() {

}

void findQuotient() {
    // Здесь будет реализация нахождения целой части
}
