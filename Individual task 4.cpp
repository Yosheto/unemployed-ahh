#include <iostream>
using namespace std;
//Программа, которая нечётное число заменяет на 0,а чётное число уменьшает в 2 раза
int f(int x)
{
    return (x%2)?0:x/2;
}
int main()
{
    //Пример работы программы
    cout << "f(10) = " << f(10) << endl;
    cout << "f(5) = " << f(5) << endl;
    return 0;
}
