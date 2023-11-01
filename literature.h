#pragma once
// ��������� �����
typedef struct {
	char last_name[22];
	char initials[6];
	char biography[302];
} Author;
// ��������� ����
typedef struct {
	char name[42];
	char description[302];
} Genre;
// ��������� ��������
typedef struct {
	char name[32];
	char address[102];
	char phone_num[22];
	char email[42];
} Publisher;
// ��������� �����
typedef struct {
	char author_last_name[22];
	char author_initials[6];
	char title[72];
	char genre_name[42];
	int page_count;
} Book;
// ��������� ������
typedef struct {
	char publisher_name[32];
	char title[72];
	char frequency[32];
	int page_count;
	float price;
} Magazine;
// ������� �������� ������
void createAuthor(Author* author);
// ������� ������ ���������� �� ������
void printAuthorInfo(Author author);
// ������� �������� �����
void createGenre(Genre* genre);
// ������� ������ ���������� � �����
void printGenreInfo(Genre genre);
// ������� �������� ��������
void createPublisher(Publisher* publisher);
// ������� ������ ���������� �� ��������
void printPublisherInfo(Publisher publisher);
// ������� �������� �����
void createBook(Book* book);
// ������� ������ ���������� � �����
void printBookInfo(Book book);
// ������� ������ ���� �� �������� � ������
void findBooksByTitleAndAuthor(Book books[300], int book_count, char* book_title, char* author_last_name);
// ������� ������ ���� �� ������
void findBooksByAuthor(Book books[300], int book_count, char* author_last_name);
// ������� ������ ���� �� �����
void findBooksByGenre(Book books[300], int book_count, char* genre_name);
// ������� �������� �������
void createMagazine(Magazine* magazine);
// ������� ������ ���������� � �������
void printMagazineInfo(Magazine magazine);
// ������� ������ �������� �� ��������
void findMagazinesByPublisher(Magazine magazines[300], int magazine_count, char* publisher_name);