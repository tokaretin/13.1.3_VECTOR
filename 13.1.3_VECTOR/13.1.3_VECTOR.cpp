/*Задание 3
Пользователь вводит с клавиатуры число n, а затем -- n целых чисел. 
Необходимо отыскать второе по величине из этих чисел и вывести на экран.*/

// 1-й пример выполнения кода
/*
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of digits: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    std::cout << "Enter " << n << " integer numbers:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    // Сортируем массив чисел по возрастанию
    std::sort(numbers.begin(), numbers.end());

    if (n >= 2) {
        // Второе по величине число будет на позиции n - 2
        int secondLargest = numbers[n - 2];
        std::cout << "Second largest number of: " << secondLargest << '\n';
    }
    else {
        std::cout << "Insufficient numbers to determine the second largest number.\n";
    }

    return 0;
}
*/


// 2-й пример выполнения кода
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of digits: ";
    std::cin >> n;

    std::vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sort vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\nНаибольшее 2-е число: " << numbers[n - 2];

    return 0;
}

/*Давайте разберем эту конструкцию по частям:

const auto& num - это объявление переменной num, которая будет хранить 
значение каждого элемента вектора numbers. auto позволяет компилятору 
самостоятельно определить тип переменной num, и здесь он будет соответствовать 
типу элементов вектора (в данном случае int). const указывает, что значение 
переменной num будет константным и не может быть изменено внутри цикла. 
& означает, что num будет ссылкой на элемент вектора, что позволяет избежать 
копирования значений.

: - это разделитель, который указывает на начало цикла for-each.

numbers - это контейнер (в данном случае вектор), через элементы которого 
будет проходить цикл.

В теле цикла выводится значение каждого элемента num с помощью 
std::cout << num << " ";. Здесь std::cout представляет поток вывода 
(стандартный вывод), << используется для добавления значения num в поток, 
а " " добавляет пробел между значениями для более удобного чтения.

Таким образом, этот цикл позволяет последовательно перебрать все элементы 
вектора numbers и вывести их на экран, разделяя пробелами.*/
