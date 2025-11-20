#include <iostream>
#include <string> 
using namespace std;
int main() {
int age;
int salary;
cout << "=== Завдання 4: Перевірка відповідності кандидата ===\n";
cout << "Введіть Ваш вік: ";
cin >> age;
cout << "Введіть бажану зарплату: ";
cin >> salary;
// ЧАСТИНА 1:
if (age > 20 && salary > 400 && salary < 1000) {
cout << "\nWe will consider your position.\n";
// ЧАСТИНА 2: ЗБІР ДОДАТКОВИХ ДАНИХ
string first_name, last_name, desired_position;
cout << "Будь ласка, введіть додаткові дані:\n";
cout << "Ваше ім'я: ";
cin >> first_name; 
cout << "Ваше прізвище: ";
cin >> last_name;
cout << "Бажана посада (одне слово): ";
cin >> desired_position;
// Виведення зібраних даних
cout << "\n--- Резюме кандидата ---\n";
cout << "Повне ім'я: " << first_name << " " << last_name << endl;
cout << "Вік: " << age << endl;
cout << "Заявлена зарплата: " << salary << endl;
cout << "Бажана посада: " << desired_position << endl;
cout << "------------------------\n";     
    } else {
        cout << "\nYou are not suitable.\n";
    }
    return 0;
}