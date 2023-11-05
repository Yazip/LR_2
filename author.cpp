#include <iostream>
#include <string>
#include "author.h"
using namespace std;
// Конструктор без параметров
Author::Author() {
	last_name = "";
	initials = "";
	biography = "";
}
// Конструктор с 1 параметром
Author::Author(string last_name) {
	this->last_name = last_name;
}
// Конструктор со всеми параметрами
Author::Author(string last_name, string initials, string biography) {
	Author::setAuthorData(last_name, initials, biography);
}
// Сеттер
void Author::setAuthorData(string last_name, string initials, string biography) {
	this->last_name = last_name;
	this->initials = initials;
	this->biography = biography;
}
// Метод для пользовательского ввода данных
void Author::enterAuthorData() {
	cout << endl;
	cout << "Введите фамилию автора:" << endl;
	getline(cin, last_name);
	cout << "Введите инициалы автора:" << endl;
	getline(cin, initials);
	cout << "Введите биографию автора:" << endl;
	getline(cin, biography);
	cout << endl;
	cout << "Автор " << last_name << " " << initials << " был успешно создан!" << endl;
}
// Геттер
void Author::getAuthorData() {
	cout << endl;
	cout << "Информация об авторе:" << endl;
	cout << "Фамилия: " << last_name << endl;
	cout << "Инициалы: " << initials << endl;
	cout << "Биография: " << biography << endl;
}