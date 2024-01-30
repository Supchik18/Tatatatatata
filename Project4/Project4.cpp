#include <iostream>
#include <cmath>

// Функция для сложения двух чисел
double добавить(double a, double b) {
    return a + b;
}

// Функция для вычитания двух чисел
double вычесть(double a, double b) {
    return a - b;
}

// Функция для деления двух чисел
double делить(double a, double b) {
    return a / b;
}

// Функция для умножения двух чисел
double умножить(double a, double b) {
    return a * b;
}

// Функция для возведения числа в степень
double возвестиВСтепень(double a, double b) {
    return pow(a, b);
}

// Функция для нахождения квадратного корня числа
double квадратныйКорень(double a) {
    return sqrt(a);
}

// Функция для нахождения 1 процента от числа
double одинПроцент(double a) {
    return a / 100;
}

// Функция для вычисления факториала числа
double факториал(double a) {
    double result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}

int main(){
    setlocale(LC_ALL, "Russian");
    int выбор;
    double число1, число2;

    do {
        // Выводим меню
        std::cout << "Выберите функцию калькулятора:" << std::endl;
        std::cout << "1. Сложение" << std::endl;
        std::cout << "2. Вычитание" << std::endl;
        std::cout << "3. Частное" << std::endl;
        std::cout << "4. Произведение" << std::endl;
        std::cout << "5. Возведение в степень" << std::endl;
        std::cout << "6. Нахождение квадратного корня" << std::endl;
        std::cout << "7. Нахождение 1 процента от числа" << std::endl;
        std::cout << "8. Найти факториал числа" << std::endl;
        std::cout << "9. Выйти из программы" << std::endl;

        std::cin >> выбор;

        switch (выбор) {
        case 1:
            std::cout << "Введите первое число: ";
            std::cin >> число1;
            std::cout << "Введите второе число: ";
            std::cin >> число2;
            std::cout << "Результат: " << добавить(число1, число2) << std::endl;
            break;
        case 2:
            std::cout << "Введите первое число: ";
            std::cin >> число1;
            std::cout << "Введите второе число: ";
            std::cin >> число2;
            std::cout << "Результат: " << вычесть(число1, число2) << std::endl;
            break;
        case 3:
            std::cout << "Введите первое число: ";
            std::cin >> число1;
            std::cout << "Введите второе число: ";
            std::cin >> число2;
            std::cout << "Результат: " << делить(число1, число2) << std::endl;
            break;
        case 4:
            std::cout << "Введите первое число: ";
            std::cin >> число1;
            std::cout << "Введите второе число: ";
            std::cin >> число2;
            std::cout << "Результат: " << умножить(число1, число2) << std::endl;
            break;
        case 5:
            std::cout << "Введите число: ";
            std::cin >> число1;
            std::cout << "Введите степень: ";
            std::cin >> число2;
            std::cout << "Результат: " << возвестиВСтепень(число1, число2) << std::endl;
            break;
        case 6:
            std::cout << "Введите число: ";
            std::cin >> число1;
            std::cout << "Результат: " << квадратныйКорень(число1) << std::endl;
            break;
        case 7:
            std::cout << "Введите число: ";
            std::cin >> число1;
            std::cout << "Результат: " << одинПроцент(число1) << std::endl;
            break;
        case 8:
            std::cout << "Введите число: ";
            std::cin >> число1;
            std::cout << "Результат: " << факториал(число1) << std::endl;
            break;
        case 9:
            std::cout << "Выход из программы..." << std::endl;
            break;
        default:
            std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
            break;
        }
    } while (выбор != 9);

    return 0;
}