#include "literature.h"
#include <iostream>
#include <conio.h>
#include <malloc.h>
#include <Windows.h>
int main() {
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Author author_static = {}, * author_dynamic = {};
	Genre genre_static = {}, * genre_dynamic = {};
	Publisher publisher_static = {}, * publisher_dynamic = {};
	Book books_static[4], * books_dynamic = (Book*)calloc(4, sizeof(Book));
	Magazine magazines_static[4], * magazines_dynamic = (Magazine*)calloc(4, sizeof(Magazine));
	char title[72] = "Война и мир", author_last_name[22] = "Толстой", genre_name[22] = "Роман", publisher_name[32] = "АСТ";
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
	findBooksByTitleAndAuthor(books_static, 4, title, author_last_name);
	findBooksByAuthor(books_static, 4, author_last_name);
	findBooksByGenre(books_static, 4, genre_name);
	// Работа с динамическим массивом структур книг
	for (int i = 0; i < 4; i++) {
		createBook(books_dynamic + i);
	}
	findBooksByTitleAndAuthor(books_dynamic, 4, title, author_last_name);
	findBooksByAuthor(books_dynamic, 4, author_last_name);
	findBooksByGenre(books_dynamic, 4, genre_name);
	// Работа со статическим массивом структур журналов
	for (int i = 0; i < 4; i++) {
		createMagazine(&(magazines_static[i]));
	}
	findMagazinesByPublisher(magazines_static, 4, publisher_name);
	// Работа с динамическим массивом структур журналов
	for (int i = 0; i < 4; i++) {
		createMagazine(magazines_dynamic + i);
	}
	findMagazinesByPublisher(magazines_dynamic, 4, publisher_name);
	_getch();
	return 0;
}