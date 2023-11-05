#pragma once
#include <string>
using namespace std;
// Класс журнал
class Magazine {
private:
	string publisher_name;
	string title;
	string frequency;
	int page_count;
	float price;
public:
	Magazine(); // Конструктор без параметров
	Magazine(string title); // Конструктор с 1 параметром
	Magazine(string publisher_name, string title, string frequency, int page_count, float price); // Конструктор со всеми параметрами
	void setMagazineData(string publisher_name, string title, string frequency, int page_count, float price); // Сеттер
	void enterMagazineData(); // Метод для пользовательского ввода данных
	void getMagazineData(); // Геттер
	bool isPublisherNamesSame(string publisher_name); // Метод для сравнения названий издателя
};
// Функция поиска журналов по издателю
void findMagazinesByPublisher(Magazine magazines[], int magazine_count, string publisher_name);