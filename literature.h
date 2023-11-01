#pragma once
// Структура автор
typedef struct {
	char last_name[22];
	char initials[6];
	char biography[302];
} Author;
// Структура жанр
typedef struct {
	char name[42];
	char description[302];
} Genre;
// Структура издатель
typedef struct {
	char name[32];
	char address[102];
	char phone_num[22];
	char email[42];
} Publisher;
// Структура книга
typedef struct {
	char author_last_name[22];
	char author_initials[6];
	char title[72];
	char genre_name[42];
	int page_count;
} Book;
// Структура журнал
typedef struct {
	char publisher_name[32];
	char title[72];
	char frequency[32];
	int page_count;
	float price;
} Magazine;
// Функция создания автора
void createAuthor(Author* author);
// Функция вывода информации об авторе
void printAuthorInfo(Author author);
// Функция создания жанра
void createGenre(Genre* genre);
// Функция вывода информации о жанре
void printGenreInfo(Genre genre);
// Функция создания издателя
void createPublisher(Publisher* publisher);
// Функция вывода информации об издателе
void printPublisherInfo(Publisher publisher);
// Функция создания книги
void createBook(Book* book);
// Функция вывода информации о книге
void printBookInfo(Book book);
// Функция поиска книг по названию и автору
void findBooksByTitleAndAuthor(Book books[300], int book_count, char* book_title, char* author_last_name);
// Функция поиска книг по автору
void findBooksByAuthor(Book books[300], int book_count, char* author_last_name);
// Функция поиска книг по жанру
void findBooksByGenre(Book books[300], int book_count, char* genre_name);
// Функция создания журнала
void createMagazine(Magazine* magazine);
// Функция вывода информации о журнале
void printMagazineInfo(Magazine magazine);
// Функция поиска журналов по издателю
void findMagazinesByPublisher(Magazine magazines[300], int magazine_count, char* publisher_name);