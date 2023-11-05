#pragma once
#include <string>
using namespace std;
// Класс издатель
class Publisher {
private:
	string name;
	string address;
	string phone_num;
	string email;
public:
	Publisher(); // Конструктор без параметров
	Publisher(string name); // Конструктор с 1 параметром
	Publisher(string name, string address, string phone_num, string email); // Конструктор со всеми параметрами
	void setPublisherData(string name, string address, string phone_num, string email); // Сеттер
	void enterPublisherData(); // Метод для пользовательского ввода данных
	void getPublisherData(); // Геттер
};