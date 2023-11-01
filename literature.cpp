#define _CRT_SECURE_NO_WARNINGS
#include "literature.h"
#include <iostream>
#include <Windows.h>
#include <string.h>
// ������� �������� ������
void createAuthor(Author* author) {
	// ���� ������� ������
	do {
		puts("\n������� ������� ������ (�� ����� 20 ��������):");
		fgets((*author).last_name, 22, stdin);
	} while (strlen((*author).last_name) < 2);
	(*author).last_name[strlen((*author).last_name) - 1] = '\0';
	// ���� ��������� ������
	do {
		puts("������� �������� ������ (�� ����� 4 ��������):");
		fgets((*author).initials, 6, stdin);
	} while (strlen((*author).initials) < 3);
	(*author).initials[strlen((*author).initials) - 1] = '\0';
	// ���� ��������� ������
	do {
		puts("������� ��������� ������ (�� ����� 300 ��������, ����� �������):");
		fgets((*author).biography, 302, stdin);
	} while (strlen((*author).biography) < 2);
	(*author).biography[strlen((*author).biography) - 1] = '\0';
	// ��������� � �������� ������
	printf("\n����� %s %s ��� ������� ������!\n", (*author).last_name, (*author).initials);
}
// ������� ������ ���������� �� ������
void printAuthorInfo(Author author) {
	puts("\n���������� �� ������:");
	printf("�������: %s\n", author.last_name);
	printf("��������: %s\n", author.initials);
	printf("���������: %s\n", author.biography);
}
// ������� �������� �����
void createGenre(Genre* genre) {
	// ���� �������� �����
	do {
		puts("\n������� �������� ����� (�� ����� 40 ��������):");
		fgets((*genre).name, 42, stdin);
	} while (strlen((*genre).name) < 2);
	(*genre).name[strlen((*genre).name) - 1] = '\0';
	// ���� �������� �����
	do {
		puts("������� �������� ����� (�� ����� 300 ��������, ����� �������):");
		fgets((*genre).description, 302, stdin);
	} while (strlen((*genre).description) < 2);
	(*genre).description[strlen((*genre).description) - 1] = '\0';
	// ��������� � �������� �����
	printf("\n���� \"%s\" ��� ������� ������!\n", (*genre).name);
}
// ������� ������ ���������� � �����
void printGenreInfo(Genre genre) {
	puts("\n���������� � �����:");
	printf("��������: %s\n", genre.name);
	printf("��������: %s\n", genre.description);
}
// ������� �������� ��������
void createPublisher(Publisher* publisher) {
	// ���� �������� ��������
	do {
		puts("\n������� �������� �������� (�� ����� 30 ��������):");
		fgets((*publisher).name, 32, stdin);
	} while (strlen((*publisher).name) < 2);
	(*publisher).name[strlen((*publisher).name) - 1] = '\0';
	// ���� ������ ��������
	do {
		puts("������� ����� �������� (�� ����� 100 ��������):");
		fgets((*publisher).address, 102, stdin);
	} while (strlen((*publisher).address) < 2);
	(*publisher).address[strlen((*publisher).address) - 1] = '\0';
	// ���� ������ �������� ��������
	do {
		puts("������� ����� �������� �������� (�� ����� 20 ��������):");
		fgets((*publisher).phone_num, 22, stdin);
	} while (strlen((*publisher).phone_num) < 2);
	(*publisher).phone_num[strlen((*publisher).phone_num) - 1] = '\0';
	// ���� ����������� ����� ��������
	do {
		puts("������� ����������� ����� �������� (�� ����� 40 ��������):");
		fgets((*publisher).email, 42, stdin);
	} while (strlen((*publisher).email) < 2);
	(*publisher).email[strlen((*publisher).email) - 1] = '\0';
	// ��������� � �������� ��������
	printf("\n�������� \"%s\" ��� ������� ������!\n", (*publisher).name);
}
// ������� ������ ���������� �� ��������
void printPublisherInfo(Publisher publisher) {
	puts("\n���������� �� ��������:");
	printf("��������: %s\n", publisher.name);
	printf("�����: %s\n", publisher.address);
	printf("����� ��������: %s\n", publisher.phone_num);
	printf("����������� �����: %s\n", publisher.email);
}
// ������� �������� �����
void createBook(Book* book) {
	// ���� ������� ������
	do {
		puts("\n������� ������� ������ (�� ����� 20 ��������):");
		fgets((*book).author_last_name, 22, stdin);
	} while (strlen((*book).author_last_name) < 2);
	(*book).author_last_name[strlen((*book).author_last_name) - 1] = '\0';
	// ���� ��������� ������
	do {
		puts("������� �������� ������ (�� ����� 4 ��������):");
		fgets((*book).author_initials, 6, stdin);
	} while (strlen((*book).author_initials) < 3);
	(*book).author_initials[strlen((*book).author_initials) - 1] = '\0';
	// ���� �������� �����
	do {
		puts("������� �������� ����� (�� ����� 70 ��������):");
		fgets((*book).title, 72, stdin);
	} while (strlen((*book).title) < 2);
	(*book).title[strlen((*book).title) - 1] = '\0';
	// ���� �������� �����
	do {
		puts("������� �������� ����� (�� ����� 40 ��������):");
		fgets((*book).genre_name, 42, stdin);
	} while (strlen((*book).genre_name) < 2);
	(*book).genre_name[strlen((*book).genre_name) - 1] = '\0';
	// ���� ���-�� �������
	puts("������� ���-�� ������� c 1 �� 30000:");
	while ((scanf("%d", &((*book).page_count)) != 1) || ((*book).page_count < 1) || ((*book).page_count > 30000)) {
		while (getchar() != '\n');
		puts("������. ������� ���-�� ������� c 1 �� 30000:");
	}
	while (getchar() != '\n');
	// ��������� � �������� �����
	printf("\n����� \"%s\" ���� ������� �������!\n", (*book).title);
}
// ������� ������ ���������� � �����
void printBookInfo(Book book) {
	puts("\n���������� � �����:");
	printf("������� ������: %s\n", book.author_last_name);
	printf("�������� ������: %s\n", book.author_initials);
	printf("�������� �����: %s\n", book.title);
	printf("�������� �����: %s\n", book.genre_name);
	printf("���-�� �������: %d\n", book.page_count);
}
// ������� ������ ���� �� �������� � ������
void findBooksByTitleAndAuthor(Book books[300], int book_count, char* book_title, char* author_last_name) {
	Book found_books[300];
	int j = 0;
	char book_title_copy[72] = "", book_author_last_name_copy[22] = "";
	for (int i = 0; i < book_count; i++) { // ���� ������ ������ ����
		// �������� ����� ����� ��������� ��� ������ (����� �� ������� �� �������������� ��� �-�� _strlwr())
		strcpy(book_title_copy, books[i].title);
		strcpy(book_author_last_name_copy, books[i].author_last_name);
		// ��������� �������� �������� ����� � ����� �� ������� ����
		if ((strcmp(_strlwr(book_title_copy), _strlwr(book_title)) == 0) && (strcmp(_strlwr(book_author_last_name_copy), _strlwr(author_last_name)) == 0)) {
			found_books[j] = books[i]; // ���������� ����� � ������ ��������� ����
			++j;
		}
	}
	// ����� ��������� ���� ���� ��� ����
	if (j) {
		printf("\n������� %d ���� ������ %s � ��������� \"%s\":\n", j, found_books[0].author_last_name, found_books[0].title);
		for (int k = 0; k < j; k++) {
			printf("\n����� %d\n\n", (k + 1));
			printBookInfo(found_books[k]);
			printf("-------------------------\n");
		}
	}
	// ����� ����� ��������� �� �� ����������
	else {
		puts("\n������ �� �������!");
	}
}
// ������� ������ ���� �� ������
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
		printf("\n������� %d ���� ������ %s:\n", j, found_books[0].author_last_name);
		for (int k = 0; k < j; k++) {
			printf("����� %d\n\n", (k + 1));
			printBookInfo(found_books[k]);
			printf("-------------------------\n");
		}
	}
	else {
		puts("\n������ �� �������!");
	}
}
// ������� ������ ���� �� �����
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
		printf("\n������� %d ���� ����� %s:\n", j, found_books[0].genre_name);
		for (int k = 0; k < j; k++) {
			printf("����� %d\n\n", (k + 1));
			printBookInfo(found_books[k]);
			printf("-------------------------\n");
		}
	}
	else {
		puts("\n������ �� �������!");
	}
}
// ������� �������� �������
void createMagazine(Magazine* magazine) {
	// ���� �������� ��������
	do {
		puts("\n������� �������� �������� (�� ����� 30 ��������):");
		fgets((*magazine).publisher_name, 32, stdin);
	} while (strlen((*magazine).publisher_name) < 2);
	(*magazine).publisher_name[strlen((*magazine).publisher_name) - 1] = '\0';
	// ���� �������� �������
	do {
		puts("������� �������� ������� (�� ����� 70 ��������):");
		fgets((*magazine).title, 72, stdin);
	} while (strlen((*magazine).title) < 2);
	(*magazine).title[strlen((*magazine).title) - 1] = '\0';
	// ���� �������������
	do {
		puts("������� ������������� (�� ����� 30 ��������):");
		fgets((*magazine).frequency, 32, stdin);
	} while (strlen((*magazine).frequency) < 2);
	(*magazine).frequency[strlen((*magazine).frequency) - 1] = '\0';
	// ���� ���-�� �������
	puts("������� ���-�� ������� c 1 �� 160:");
	while ((scanf("%d", &((*magazine).page_count)) != 1) || ((*magazine).page_count < 1) || ((*magazine).page_count > 160)) {
		while (getchar() != '\n');
		puts("������. ������� ���-�� ������� c 1 �� 160:");
	}
	while (getchar() != '\n');
	// ���� ����
	puts("������� ���� c 0 �� 30000:");
	while ((scanf("%f", &((*magazine).price)) != 1) || ((*magazine).price < 0.0f) || ((*magazine).price > 30000.0f)) {
		while (getchar() != '\n');
		puts("������. ������� ���� c 0 �� 30000:");
	}
	while (getchar() != '\n');
	// ��������� � �������� �������
	printf("\n������ \"%s\" ��� ������� ������!\n", (*magazine).title);
}
// ������� ������ ���������� � �������
void printMagazineInfo(Magazine magazine) {
	puts("\n���������� � �������:");
	printf("��������: %s\n", magazine.publisher_name);
	printf("�������� �������: %s\n", magazine.title);
	printf("�������������: %s\n", magazine.frequency);
	printf("���-�� �������: %d\n", magazine.page_count);
	printf("����: %.2f\n", magazine.price);
}
// ������� ������ �������� �� ��������
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
		printf("\n������� %d �������� �������� %s:\n", j, found_magazines[0].publisher_name);
		for (int k = 0; k < j; k++) {
			printf("������ %d\n\n", (k + 1));
			printMagazineInfo(found_magazines[k]);
			printf("-------------------------\n");
		}
	}
	else {
		puts("\n������ �� �������!");
	}
}