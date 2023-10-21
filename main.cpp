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
	char title[72] = "����� � ���", author_last_name[22] = "�������", genre_name[22] = "�����", publisher_name[32] = "���";
	// ������ �� ����������� ���������� ������
	createAuthor(&author_static);
	printAuthorInfo(author_static);
	// ������ � ������������ ���������� ������
	createAuthor(author_dynamic);
	printAuthorInfo(*author_dynamic);
	// ������ �� ����������� ���������� �����
	createGenre(&genre_static);
	printGenreInfo(genre_static);
	// ������ � ������������ ���������� �����
	createGenre(genre_dynamic);
	printGenreInfo(*genre_dynamic);
	// ������ �� ����������� ���������� ��������
	createPublisher(&publisher_static);
	printPublisherInfo(publisher_static);
	// ������ � ������������ ���������� ��������
	createPublisher(publisher_dynamic);
	printPublisherInfo(*publisher_dynamic);
	// ������ �� ����������� �������� �������� ����
	for (int i = 0; i < 4; i++) {
		createBook(&(books_static[i]));
	}
	findBooksByTitleAndAuthor(books_static, 4, title, author_last_name);
	findBooksByAuthor(books_static, 4, author_last_name);
	findBooksByGenre(books_static, 4, genre_name);
	// ������ � ������������ �������� �������� ����
	for (int i = 0; i < 4; i++) {
		createBook(books_dynamic + i);
	}
	findBooksByTitleAndAuthor(books_dynamic, 4, title, author_last_name);
	findBooksByAuthor(books_dynamic, 4, author_last_name);
	findBooksByGenre(books_dynamic, 4, genre_name);
	// ������ �� ����������� �������� �������� ��������
	for (int i = 0; i < 4; i++) {
		createMagazine(&(magazines_static[i]));
	}
	findMagazinesByPublisher(magazines_static, 4, publisher_name);
	// ������ � ������������ �������� �������� ��������
	for (int i = 0; i < 4; i++) {
		createMagazine(magazines_dynamic + i);
	}
	findMagazinesByPublisher(magazines_dynamic, 4, publisher_name);
	_getch();
	return 0;
}