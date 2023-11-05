#include "literature.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Author author_static, * author_dynamic = new Author("Шолохов", "М.А.", "Родился 24 мая 1905 года на хуторе Кружилин в станице Вёшенской Российской империи.");
	Genre genre_static, * genre_dynamic = new Genre("Драма", "Текст в драме представлен в виде реплик персонажей и авторских ремарок. Как правило, он разбит на действия и явления.");
	Publisher publisher_static, * publisher_dynamic = new Publisher("МИФ", "Москва, м. Пушкинская, Тверская, Чеховская, Большой Козихинский пер., д. 7, стр. 2, 2-й этаж, оф. 24", "+7 (499) 110-19-42", "support@m-i-f.ru");
	Book books_static[4], * books_dynamic = new Book[4];
	Magazine magazines_static[4], * magazines_dynamic = new Magazine[4];
	string title1 = "Война и мир", author_last_name1 = "Толстой", genre_name1 = "Роман", publisher_name1 = "АСТ";
	string title2 = "Мцыри", author_last_name2 = "Лермонтов", genre_name2 = "Драма", publisher_name2 = "Фэшн Пресс";
	// Работа со статическим объектом автора
	author_static.enterAuthorData();
	author_static.getAuthorData();
	// Работа с динамическим объектом автора
	author_dynamic->getAuthorData();
	// Работа со статическим объектом жанра
	genre_static.setGenreData("Повесть", "Прозаический жанр, занимающий по объёму текста промежуточное место между романом и рассказом, тяготеющий к хроникальному сюжету, воспроизводящему естественное течение жизни.");
	genre_static.getGenreData();
	// Работа с динамическим объектом жанра
	genre_dynamic->getGenreData();
	// Работа со статическим объектом издателя
	publisher_static.enterPublisherData();
	publisher_static.getPublisherData();
	// Работа с динамическим объектом издателя
	publisher_dynamic->getPublisherData();
	// Работа со статическим массивом объектов книг
	for (int i = 0; i < 4; i++) {
		books_static[i].enterBookData();
	}
	findBooksByTitleAndAuthor(books_static, 4, title1, author_last_name1);
	findBooksByAuthor(books_static, 4, author_last_name1);
	findBooksByGenre(books_static, 4, genre_name1);
	// Работа с динамическим массивом объектов книг
	for (int i = 0; i < 4; i++) {
		(books_dynamic + i)->enterBookData();
	}
	findBooksByTitleAndAuthor(books_dynamic, 4, title2, author_last_name2);
	findBooksByAuthor(books_dynamic, 4, author_last_name2);
	findBooksByGenre(books_dynamic, 4, genre_name2);
	// Работа со статическим массивом объектов журналов
	for (int i = 0; i < 4; i++) {
		magazines_static[i].enterMagazineData();
	}
	findMagazinesByPublisher(magazines_static, 4, publisher_name1);
	// Работа с динамическим массивом объектов журналов
	for (int i = 0; i < 4; i++) {
		(magazines_dynamic + i)->enterMagazineData();
	}
	findMagazinesByPublisher(magazines_dynamic, 4, publisher_name2);
	_getch();
	delete author_dynamic;
	delete genre_dynamic;
	delete publisher_dynamic;
	delete[] books_static;
	delete[] books_dynamic;
	delete[] magazines_static;
	delete[] magazines_dynamic;
	return 0;
}