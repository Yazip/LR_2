#include "literature.h"
#include <iostream>
#include <conio.h>
#include <malloc.h>
#include <Windows.h>
int main() {
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Author author_static = {}, * author_dynamic = (Author*)malloc(sizeof(Author));
	Genre genre_static = {}, * genre_dynamic = (Genre*)malloc(sizeof(Genre));
	Publisher publisher_static = {}, * publisher_dynamic = (Publisher*)malloc(sizeof(Publisher));
	Book books_static[4], * books_dynamic = (Book*)calloc(4, sizeof(Book));
	Magazine magazines_static[4], * magazines_dynamic = (Magazine*)calloc(4, sizeof(Magazine));
	char title1[72] = "Война и мир", author_last_name1[22] = "Толстой", genre_name1[42] = "Роман", publisher_name1[32] = "АСТ";
	char title2[72] = "Мцыри", author_last_name2[22] = "Лермонтов", genre_name2[42] = "Драма", publisher_name2[32] = "Фэшн Пресс";
	// Работа со статической структурой автора
	createAuthor(&author_static);
	printAuthorInfo(author_static);
	// Работа с динамической структурой автора
	createAuthor(author_dynamic);
	printAuthorInfo(*author_dynamic);
	// Работа со статической структурой жанра
	createGenre(&genre_static);
	printGenreInfo(genre_static);
	// Работа с динамической структурой жанра
	createGenre(genre_dynamic);
	printGenreInfo(*genre_dynamic);
	// Работа со статической структурой издателя
	createPublisher(&publisher_static);
	printPublisherInfo(publisher_static);
	// Работа с динамической структурой издателя
	createPublisher(publisher_dynamic);
	printPublisherInfo(*publisher_dynamic);
	// Работа со статическим массивом структур книг
	for (int i = 0; i < 4; i++) {
		createBook(&(books_static[i]));
	}
	findBooksByTitleAndAuthor(books_static, 4, title1, author_last_name1);
	findBooksByAuthor(books_static, 4, author_last_name1);
	findBooksByGenre(books_static, 4, genre_name1);
	// Работа с динамическим массивом структур книг
	for (int i = 0; i < 4; i++) {
		createBook(books_dynamic + i);
	}
	findBooksByTitleAndAuthor(books_dynamic, 4, title2, author_last_name2);
	findBooksByAuthor(books_dynamic, 4, author_last_name2);
	findBooksByGenre(books_dynamic, 4, genre_name2);
	// Работа со статическим массивом структур журналов
	for (int i = 0; i < 4; i++) {
		createMagazine(&(magazines_static[i]));
	}
	findMagazinesByPublisher(magazines_static, 4, publisher_name1);
	// Работа с динамическим массивом структур журналов
	for (int i = 0; i < 4; i++) {
		createMagazine(magazines_dynamic + i);
	}
	findMagazinesByPublisher(magazines_dynamic, 4, publisher_name2);
	_getch();
	return 0;
}