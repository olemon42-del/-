#include <iostream>
#include <cmath> 
using namespace std;
int main() {
long long total_memory = 0; 

//ЧАСТИНА 1:
int a, b;
double result_div;
cout << "Арифметичні обчислення\n";
cout << "Введіть два цілих числа (a, b): ";
cin >> a >> b;

// Результати
cout << "\nСума: " << a + b << endl;
cout << "Різниця: " << a - b << endl;
cout << "Добуток: " << a * b << endl;
// Частка:
result_div = (a * 1.0) / b; 
cout << "Частка: " << result_div << endl; 

//ЧАСТИНА 2
int length_int, width_int;
cout << "\nОбчислення прямокутника \n";
cout << "Введіть довжину та ширину (цілі числа): ";
cin >> length_int >> width_int;

double length_d = length_int; 
double width_d = width_int;
cout << "Площа: " << length_d * width_d << endl;
cout << "Периметр: " << 2 * (length_d + width_d) << endl;

// ВИВЕДЕННЯ ПАМ'ЯТІ 
cout << "\nІнформація про пам'ять\n";
// Виведення та підрахунок для a
 cout << "a (int): Адреса: " << &a << ", Обсяг: " << sizeof(a) << " байт\n";
total_memory += sizeof(a);
// Виведення для b
cout << "b (int): Адреса: " << &b << ", Обсяг: " << sizeof(b) << " байт\n";
total_memory += sizeof(b);
// Виведення для result_div
cout << "result_div (double): Адреса: " << &result_div << ", Обсяг: " << sizeof(result_div) << " байт\n";
total_memory += sizeof(result_div);
// Виведення для length_d
 cout << "length_d (double): Адреса: " << &length_d << ", Обсяг: " << sizeof(length_d) << " байт\n";
total_memory += sizeof(length_d);
    // Виведення та підрахунок для width_d
cout << "width_d (double): Адреса: " << &width_d << ", Обсяг: " << sizeof(width_d) << " байт\n";
total_memory += sizeof(width_d);
 // ЗАГАЛЬНИЙ ПІДСУМОК 
cout << "\n ЗАГАЛЬНИЙ ОБСЯГ ПАМ'ЯТІ: " << total_memory << " байт ***\n";

    return 0;
}