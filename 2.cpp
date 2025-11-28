#include <iostream> 
using namespace std; 
int main() 
{ 
    int x=3, y=4; //инициализация переменных
    cout<<++x<<"\t"<<--y<<endl; //операция вывода
    cout<<x++<<" \t"<<y--<<endl; //операция вывода текущего значения
    cout<<x<<"\t"<<y<<endl; //операция вывод финальных значений
   return 0; 
}
