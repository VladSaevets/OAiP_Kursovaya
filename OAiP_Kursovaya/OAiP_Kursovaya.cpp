#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "rus"); //вызов функции настройки локализации

    const int mLength = 10; //размерность массива
    int mass[mLength];      //массив

    std::cout << "Элементов массива: " << mLength << "\n";
    std::cout << "Введите целые числа массива для сортировки:\n";   //вывод на экран сообщения
    for (int i = 0; i < mLength; i++)
    {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> mass[i];    //ввод элементов массива с клавиатуры
    }

    std::cout << "Введенный массив: ";
    for (int i = 0; i < mLength; i++) std::cout << mass[i] << " ";
    std::cout << "\n";
}