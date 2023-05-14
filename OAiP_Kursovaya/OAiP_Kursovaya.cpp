#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "rus"); //вызов функции настройки локализации

    const int mLength = 10; //размерность массива
    int mass[mLength];      //массив

    std::cout << "Элементов массива: " << mLength << "\n";          //вывод на экран сообщения
    std::cout << "Введите целые числа массива для сортировки:\n";   //вывод на экран сообщения
    for (int i = 0; i < mLength; i++)   //цикл для ввода элементов массива
    {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> mass[i];    //ввод элементов массива с клавиатуры
    }

    //вывод введенного массива
    std::cout << "Введенный массив: ";
    for (int i = 0; i < mLength; i++) std::cout << mass[i] << " ";
    std::cout << "\n";

    const double factor = 1.247; // Фактор уменьшения
    int step = mLength - 1;      //шаг сортировки
    int temp;                    //временная переменная

    //сортировка расчёской
    while (step >= 1) {
        for (int i = 0; i + step < mLength; ++i) {
            if (mass[i] > mass[i + step]) {
                temp = mass[i];
                mass[i] = mass[i + step];
                mass[i + step] = temp;
            }
        }
        step /= factor;
    }
    //конечная сортировка пузырьком
    for (size_t idx_i = 0; idx_i + 1 < mLength; ++idx_i) {
        for (size_t idx_j = 0; idx_j + 1 < mLength - idx_i; ++idx_j) {
            if (mass[idx_j + 1] < mass[idx_j]) {
                temp = mass[idx_j];
                mass[idx_j] = mass[idx_j + 1];
                mass[idx_j + 1] = temp;
            }
        }
    }

    //вывод отсортированного массива
    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < mLength; i++) std::cout << mass[i] << " ";
    std::cout << "\n";
}