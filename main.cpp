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
	char title1[72] = "����� � ���", author_last_name1[22] = "�������", genre_name1[42] = "�����", publisher_name1[32] = "���";
	char title2[72] = "�����", author_last_name2[22] = "���������", genre_name2[42] = "�����", publisher_name2[32] = "���� �����";
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
	findBooksByTitleAndAuthor(books_static, 4, title1, author_last_name1);
	findBooksByAuthor(books_static, 4, author_last_name1);
	findBooksByGenre(books_static, 4, genre_name1);
	// ������ � ������������ �������� �������� ����
	for (int i = 0; i < 4; i++) {
		createBook(books_dynamic + i);
	}
	findBooksByTitleAndAuthor(books_dynamic, 4, title2, author_last_name2);
	findBooksByAuthor(books_dynamic, 4, author_last_name2);
	findBooksByGenre(books_dynamic, 4, genre_name2);
	// ������ �� ����������� �������� �������� ��������
	for (int i = 0; i < 4; i++) {
		createMagazine(&(magazines_static[i]));
	}
	findMagazinesByPublisher(magazines_static, 4, publisher_name1);
	// ������ � ������������ �������� �������� ��������
	for (int i = 0; i < 4; i++) {
		createMagazine(magazines_dynamic + i);
	}
	findMagazinesByPublisher(magazines_dynamic, 4, publisher_name2);
	_getch();
	return 0;
}