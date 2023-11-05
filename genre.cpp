#include <iostream>
#include <string>
#include "genre.h"
using namespace std;
// Конструктор без параметров
Genre::Genre() {
	name = "";
	description = "";
}
// Конструктор с 1 параметром
Genre::Genre(string name) {
	this->name = name;
}
// Конструктор со всеми параметрами
Genre::Genre(string name, string description) {
	Genre::setGenreData(name, description);
}
// Сеттер
void Genre::setGenreData(string name, string description) {
	this->name = name;
	this->description = description;
}
// Метод для пользовательского ввода данных
void Genre::enterGenreData() {
	cout << endl;
	cout << "Введите название жанра:" << endl;
	getline(cin, name);
	cout << "Введите описание жанра:" << endl;
	getline(cin, description);
	cout << endl;
	cout << "Жанр " << name << " был успешно создан!" << endl;
}
// Геттер
void Genre::getGenreData() {
	cout << endl;
	cout << "Информация о жанре:" << endl;
	cout << "Название: " << name << endl;
	cout << "Описание: " << description << endl;
}