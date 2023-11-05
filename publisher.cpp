#include <iostream>
#include <string>
#include "publisher.h"
using namespace std;
// Конструктор без параметров
Publisher::Publisher() {
	name = "";
	address = "";
	phone_num = "";
	email = "";
}
// Конструктор с 1 параметром
Publisher::Publisher(string name) {
	this->name = name;
}
// Конструктор со всеми параметрами
Publisher::Publisher(string name, string address, string phone_num, string email) {
	Publisher::setPublisherData(name, address, phone_num, email);
}
// Сеттер
void Publisher::setPublisherData(string name, string address, string phone_num, string email) {
	this->name = name;
	this->address = address;
	this->phone_num = phone_num;
	this->email = email;
}
// Метод для пользовательского ввода данных
void Publisher::enterPublisherData() {
	cout << endl;
	cout << "Введите название издателя:" << endl;
	getline(cin, name);
	cout << "Введите адрес издателя:" << endl;
	getline(cin, address);
	cout << "Введите номер телефона издателя:" << endl;
	getline(cin, phone_num);
	cout << "Введите электронную почту издателя:" << endl;
	getline(cin, email);
	cout << endl;
	cout << "Издатель " << name << " был успешно создан!" << endl;
}
// Геттер
void Publisher::getPublisherData() {
	cout << endl;
	cout << "Информация об издателе:" << endl;
	cout << "Название: " << name << endl;
	cout << "Адрес: " << address << endl;
	cout << "Номер телефона: " << phone_num << endl;
	cout << "Электронная почта: " << email << endl;
}