#include <iostream>
#include <string>

bool isPalindrome(long long num)
{
    std::string strNum = std::to_string(num);
    int length = strNum.length();

    for (int i = 0; i < length / 2; i++)
    {
        if (strNum[i] != strNum[length - i - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    long long num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    if (isPalindrome(num1) || isPalindrome(num2))
    {
        std::cout << "Одно из чисел - палиндром" << std::endl;
    }
    else
    {
        std::cout << "Нет палиндромов" << std::endl;
    }

    return 0;
}
