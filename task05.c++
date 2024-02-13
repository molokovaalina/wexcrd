#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Задаем размер массивов
    const int size = 5;
    
    // Инициализируем два массива случайными числами
    std::vector<int> arr1(size);
    std::vector<int> arr2(size);
    
    std::cout << "Первый массив: ";
    for (int i = 0; i < size; ++i) {
        arr1[i] = rand() % 10; // Генерируем случайное число от 0 до 9
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout << "Второй массив: ";
    for (int i = 0; i < size; ++i) {
        arr2[i] = rand() % 10; // Генерируем случайное число от 0 до 9
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
    
    // Создаем третий массив, заполняя его максимальными значениями из двух исходных массивов
    std::vector<int> arr3(size);
    
    for (int i = 0; i < size; ++i) {
        arr3[i] = std::max(arr1[i], arr2[i]);
    }
    
    // Выводим третий массив
    std::cout << "Третий массив (максимальные значения): ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
