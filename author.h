#pragma once
#include <string>
using namespace std;
// Класс автор
class Author {
private:
	string last_name;
	string initials;
	string biography;
public:
	Author(); // Конструктор без параметров
	Author(string last_name); // Конструктор с 1 параметром
	Author(string last_name, string initials, string biography); // Конструктор со всеми параметрами
	void setAuthorData(string last_name, string initials, string biography); // Сеттер
	void enterAuthorData(); // Метод для пользовательского ввода данных
	void getAuthorData(); // Геттер
};