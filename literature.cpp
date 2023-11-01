#define _CRT_SECURE_NO_WARNINGS
#include "literature.h"
#include <iostream>
#include <Windows.h>
#include <string.h>
// Функция создания автора
void createAuthor(Author* author) {
	// Ввод фамилии автора
	do {
		puts("\nВведите фамилию автора (не более 20 символов):");
		fgets((*author).last_name, 22, stdin);
	} while (strlen((*author).last_name) < 2);
	(*author).last_name[strlen((*author).last_name) - 1] = '\0';
	// Ввод инициалов автора
	do {
		puts("Введите инициалы автора (не более 4 символов):");
		fgets((*author).initials, 6, stdin);
	} while (strlen((*author).initials) < 3);
	(*author).initials[strlen((*author).initials) - 1] = '\0';
	// Ввод биографии автора
	do {
		puts("Введите биографию автора (не более 300 символов, одной строкой):");
		fgets((*author).biography, 302, stdin);
	} while (strlen((*author).biography) < 2);
	(*author).biography[strlen((*author).biography) - 1] = '\0';
	// Сообщение о создании автора
	printf("\nАвтор %s %s был успешно создан!\n", (*author).last_name, (*author).initials);
}
// Функция вывода информации об авторе
void printAuthorInfo(Author author) {
	puts("\nИнформация об авторе:");
	printf("Фамилия: %s\n", author.last_name);
	printf("Инициалы: %s\n", author.initials);
	printf("Биография: %s\n", author.biography);
}
// Функция создания жанра
void createGenre(Genre* genre) {
	// Ввод названия жанра
	do {
		puts("\nВведите название жанра (не более 40 символов):");
		fgets((*genre).name, 42, stdin);
	} while (strlen((*genre).name) < 2);
	(*genre).name[strlen((*genre).name) - 1] = '\0';
	// Ввод описания жанра
	do {
		puts("Введите описание жанра (не более 300 символов, одной строкой):");
		fgets((*genre).description, 302, stdin);
	} while (strlen((*genre).description) < 2);
	(*genre).description[strlen((*genre).description) - 1] = '\0';
	// Сообщение о создании жанра
	printf("\nЖанр \"%s\" был успешно создан!\n", (*genre).name);
}
// Функция вывода информации о жанре
void printGenreInfo(Genre genre) {
	puts("\nИнформация о жанре:");
	printf("Название: %s\n", genre.name);
	printf("Описание: %s\n", genre.description);
}
// Функция создания издателя
void createPublisher(Publisher* publisher) {
	// Ввод названия издателя
	do {
		puts("\nВведите название издателя (не более 30 символов):");
		fgets((*publisher).name, 32, stdin);
	} while (strlen((*publisher).name) < 2);
	(*publisher).name[strlen((*publisher).name) - 1] = '\0';
	// Ввод адреса издателя
	do {
		puts("Введите адрес издателя (не более 100 символов):");
		fgets((*publisher).address, 102, stdin);
	} while (strlen((*publisher).address) < 2);
	(*publisher).address[strlen((*publisher).address) - 1] = '\0';
	// Ввод номера телефона издателя
	do {
		puts("Введите номер телефона издателя (не более 20 символов):");
		fgets((*publisher).phone_num, 22, stdin);
	} while (strlen((*publisher).phone_num) < 2);
	(*publisher).phone_num[strlen((*publisher).phone_num) - 1] = '\0';
	// Ввод электронной почты издателя
	do {
		puts("Введите электронную почту издателя (не более 40 символов):");
		fgets((*publisher).email, 42, stdin);
	} while (strlen((*publisher).email) < 2);
	(*publisher).email[strlen((*publisher).email) - 1] = '\0';
	// Сообщение о создании издателя
	printf("\nИздатель \"%s\" был успешно создан!\n", (*publisher).name);
}
// Функция вывода информации об издателе
void printPublisherInfo(Publisher publisher) {
	puts("\nИнформация об издателе:");
	printf("Название: %s\n", publisher.name);
	printf("Адрес: %s\n", publisher.address);
	printf("Номер телефона: %s\n", publisher.phone_num);
	printf("Электронная почта: %s\n", publisher.email);
}
// Функция создания книги
void createBook(Book* book) {
	// Ввод фамилии автора
	do {
		puts("\nВведите фамилию автора (не более 20 символов):");
		fgets((*book).author_last_name, 22, stdin);
	} while (strlen((*book).author_last_name) < 2);
	(*book).author_last_name[strlen((*book).author_last_name) - 1] = '\0';
	// Ввод инициалов автора
	do {
		puts("Введите инициалы автора (не более 4 символов):");
		fgets((*book).author_initials, 6, stdin);
	} while (strlen((*book).author_initials) < 3);
	(*book).author_initials[strlen((*book).author_initials) - 1] = '\0';
	// Ввод названия книги
	do {
		puts("Введите название книги (не более 70 символов):");
		fgets((*book).title, 72, stdin);
	} while (strlen((*book).title) < 2);
	(*book).title[strlen((*book).title) - 1] = '\0';
	// Ввод названия жанра
	do {
		puts("Введите название жанра (не более 40 символов):");
		fgets((*book).genre_name, 42, stdin);
	} while (strlen((*book).genre_name) < 2);
	(*book).genre_name[strlen((*book).genre_name) - 1] = '\0';
	// Ввод кол-ва страниц
	puts("Введите кол-во страниц c 1 по 30000:");
	while ((scanf("%d", &((*book).page_count)) != 1) || ((*book).page_count < 1) || ((*book).page_count > 30000)) {
		while (getchar() != '\n');
		puts("Ошибка. Введите кол-во страниц c 1 по 30000:");
	}
	while (getchar() != '\n');
	// Сообщение о создании книги
	printf("\nКнига \"%s\" была успешно создана!\n", (*book).title);
}
// Функция вывода информации о книге
void printBookInfo(Book book) {
	puts("\nИнформация о книге:");
	printf("Фамилия автора: %s\n", book.author_last_name);
	printf("Инициалы автора: %s\n", book.author_initials);
	printf("Название книги: %s\n", book.title);
	printf("Название жанра: %s\n", book.genre_name);
	printf("Кол-во страниц: %d\n", book.page_count);
}
// Функция поиска книг по названию и автору
void findBooksByTitleAndAuthor(Book books[300], int book_count, char* book_title, char* author_last_name) {
	Book found_books[300];
	int j = 0;
	char book_title_copy[72] = "", book_author_last_name_copy[22] = "";
	for (int i = 0; i < book_count; i++) { // Цикл поиска нужных книг
		// Создание копий полей структуры для поиска (чтобы не портить их первоначальный вид ф-ей _strlwr())
		strcpy(book_title_copy, books[i].title);
		strcpy(book_author_last_name_copy, books[i].author_last_name);
		// Сравнение заданных значений полей и полей из массива книг
		if ((strcmp(_strlwr(book_title_copy), _strlwr(book_title)) == 0) && (strcmp(_strlwr(book_author_last_name_copy), _strlwr(author_last_name)) == 0)) {
			found_books[j] = books[i]; // Добавление книги в массив найденных книг
			++j;
		}
	}
	// Вывод найденных книг если они есть
	if (j) {
		printf("\nНайдено %d книг автора %s с названием \"%s\":\n", j, found_books[0].author_last_name, found_books[0].title);
		for (int k = 0; k < j; k++) {
			printf("\nКнига %d\n\n", (k + 1));
			printBookInfo(found_books[k]);
			printf("-------------------------\n");
		}
	}
	// Иначе вывод сообщения об их отсутствии
	else {
		puts("\nНичего не найдено!");
	}
}
// Функция поиска книг по автору
void findBooksByAuthor(Book books[300], int book_count, char* author_last_name) {
	Book found_books[300];
	int j = 0;
	char book_author_last_name_copy[22] = "";
	for (int i = 0; i < book_count; i++) {
		strcpy(book_author_last_name_copy, books[i].author_last_name);
		if (strcmp(_strlwr(book_author_last_name_copy), _strlwr(author_last_name)) == 0) {
			found_books[j] = books[i];
			++j;
		}
	}
	if (j) {
		printf("\nНайдено %d книг автора %s:\n", j, found_books[0].author_last_name);
		for (int k = 0; k < j; k++) {
			printf("Книга %d\n\n", (k + 1));
			printBookInfo(found_books[k]);
			printf("-------------------------\n");
		}
	}
	else {
		puts("\nНичего не найдено!");
	}
}
// Функция поиска книг по жанру
void findBooksByGenre(Book books[300], int book_count, char* genre_name) {
	Book found_books[300];
	int j = 0;
	char book_genre_name_copy[22] = "";
	for (int i = 0; i < book_count; i++) {
		strcpy(book_genre_name_copy, books[i].genre_name);
		if (strcmp(_strlwr(book_genre_name_copy), _strlwr(genre_name)) == 0) {
			found_books[j] = books[i];
			++j;
		}
	}
	if (j) {
		printf("\nНайдено %d книг жанра %s:\n", j, found_books[0].genre_name);
		for (int k = 0; k < j; k++) {
			printf("Книга %d\n\n", (k + 1));
			printBookInfo(found_books[k]);
			printf("-------------------------\n");
		}
	}
	else {
		puts("\nНичего не найдено!");
	}
}
// Функция создания журнала
void createMagazine(Magazine* magazine) {
	// Ввод названия издателя
	do {
		puts("\nВведите название издателя (не более 30 символов):");
		fgets((*magazine).publisher_name, 32, stdin);
	} while (strlen((*magazine).publisher_name) < 2);
	(*magazine).publisher_name[strlen((*magazine).publisher_name) - 1] = '\0';
	// Ввод названия журнала
	do {
		puts("Введите название журнала (не более 70 символов):");
		fgets((*magazine).title, 72, stdin);
	} while (strlen((*magazine).title) < 2);
	(*magazine).title[strlen((*magazine).title) - 1] = '\0';
	// Ввод периодичности
	do {
		puts("Введите периодичность (не более 30 символов):");
		fgets((*magazine).frequency, 32, stdin);
	} while (strlen((*magazine).frequency) < 2);
	(*magazine).frequency[strlen((*magazine).frequency) - 1] = '\0';
	// Ввод кол-ва страниц
	puts("Введите кол-во страниц c 1 по 160:");
	while ((scanf("%d", &((*magazine).page_count)) != 1) || ((*magazine).page_count < 1) || ((*magazine).page_count > 160)) {
		while (getchar() != '\n');
		puts("Ошибка. Введите кол-во страниц c 1 по 160:");
	}
	while (getchar() != '\n');
	// Ввод цены
	puts("Введите цену c 0 по 30000:");
	while ((scanf("%f", &((*magazine).price)) != 1) || ((*magazine).price < 0.0f) || ((*magazine).price > 30000.0f)) {
		while (getchar() != '\n');
		puts("Ошибка. Введите цену c 0 по 30000:");
	}
	while (getchar() != '\n');
	// Сообщение о создании журнала
	printf("\nЖурнал \"%s\" был успешно создан!\n", (*magazine).title);
}
// Функция вывода информации о журнале
void printMagazineInfo(Magazine magazine) {
	puts("\nИнформация о журнале:");
	printf("Издатель: %s\n", magazine.publisher_name);
	printf("Название журнала: %s\n", magazine.title);
	printf("Периодичность: %s\n", magazine.frequency);
	printf("Кол-во страниц: %d\n", magazine.page_count);
	printf("Цена: %.2f\n", magazine.price);
}
// Функция поиска журналов по издателю
void findMagazinesByPublisher(Magazine magazines[300], int magazine_count, char* publisher_name) {
	Magazine found_magazines[300];
	int j = 0;
	char magazine_publisher_name_copy[32] = "";
	for (int i = 0; i < magazine_count; i++) {
		strcpy(magazine_publisher_name_copy, magazines[i].publisher_name);
		if (strcmp(_strlwr(magazine_publisher_name_copy), _strlwr(publisher_name)) == 0) {
			found_magazines[j] = magazines[i];
			++j;
		}
	}
	if (j) {
		printf("\nНайдено %d журналов издателя %s:\n", j, found_magazines[0].publisher_name);
		for (int k = 0; k < j; k++) {
			printf("Журнал %d\n\n", (k + 1));
			printMagazineInfo(found_magazines[k]);
			printf("-------------------------\n");
		}
	}
	else {
		puts("\nНичего не найдено!");
	}
}