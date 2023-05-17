#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Введите количество чисел: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    std::cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    // Сортируем массив чисел по возрастанию
    std::sort(numbers.begin(), numbers.end());

    if (n >= 2) {
        // Второе по величине число будет на позиции n - 2
        int secondLargest = numbers[n - 2];
        std::cout << "Второе по величине число: " << secondLargest << '\n';
    }
    else {
        std::cout << "Недостаточно чисел для определения второго по величине числа.\n";
    }

    return 0;
}
