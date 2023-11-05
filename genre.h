#pragma once
#include <string>
using namespace std;
// Класс жанр
class Genre {
private:
	string name;
	string description;
public:
	Genre(); // Конструктор без параметров
	Genre(string name); // Конструктор с 1 параметром
	Genre(string name, string description); // Конструктор со всеми параметрами
	void setGenreData(string name, string description); // Сеттер
	void enterGenreData(); // Метод для пользовательского ввода данных
	void getGenreData(); // Геттер
};