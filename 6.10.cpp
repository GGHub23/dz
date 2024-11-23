#include<Windows.h>
#include<iostream>
#include<iomanip>
#include<cmath>


void check(int a,int sum123,int sum456);
void replace(int number);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0;
    int a = 0;
    int sum123 = 0;
    int sum456 = 0;
    int number;
    std::cout << "Введите шестизначное число\n";
    std::cin >> a;
    if (a < 100000 || a>999999)
    {
        std::cout << "Ошибка\n";
        return(0);
    }
    check(a, sum123, sum456);
    std::cout << "------------------------------------\n";
    std::cout << "Введите четырёхзначное число\n";
    std::cin >> number;
    if (number < 1000 || number > 9999)
    {
        std::cout << "Ошибка\n";
        return(0);
    }
    replace(number);
    std::cout << "------------------------------------\n";
    std::cout << "Введите 7 целых чисел \n";
    for (int i = 0; i < 7; ++i) {
        std::cin >> one;
        if (one > two) {
            two = one;
        }
    }

    std::cout << "Максимальное число: " << two << "\n";
    return 0;
}
//1
void check(int a,int sum123,int sum456)
{
        sum123 = a % 10 + (a / 10) % 10 + (a / 100) % 10;
        sum456 = (a / 1000) % 10 + (a / 10000) % 10 + (a / 100000) % 10;
    
    if (sum123 == sum456)
    {
        std::cout << sum123 << "\t" << sum456 << "\n" << "Ваше число счастливое!" << "\n";
    }
    else
    {
        std::cout << sum123 << "\t" << sum456 << "\n" << "Ваше число не счастливое" << "\n";
    }



}
//2
void replace(int number)
{
    int b;
    int digits[4];
    b= abs(number);
        for (int i = 0; b != 0; b /= 10, i++)
            digits[i] = b % 10;
        b = digits[2] * 1000 + digits[3] * 100 + digits[0] * 10 + digits[1];
        std::cout << (number > 0 ? b : b * -1)<<"\n";
    

}
//3
