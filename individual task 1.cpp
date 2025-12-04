#include <iostream>   //Библиотека ввода-вывода
#include <cmath>      //Математические функции
#include <iomanip>    //Библиотека манипуляторов
using namespace std;

int main()
{
    double x;  //Входное значение
    cout << "Введите значение x: ";
    cin >> x;
    //Проверка корректности
    (x + 1 < 0) && (cout << "Ошибка: выражение под первым корнем отрицательное") << endl;
    (x - 1 < 0) && (cout << "Ошибка: выражение под вторым корнем отрицательное") << endl;
    //Вычисление выражения
    double result = sin(sqrt(x + 1)) - sin(sqrt(x - 1));
    //Вывод результата с 4 знаками после запятой
    cout << setprecision(4);
    cout << "Результат выражения sin√(x+1) - sin√(x-1) = " << fixed << result << endl;
    
    return 0;
}

