#pragma once
#include <iostream>

using namespace std;

class Book {
public:
	string title;
	string author;
	int isbn;
	bool isAvailable;

	Book(string title, string author, int isbn);

	void setBookDetails();
	void displayBookDetails();
	void borrowBook();
	void returnBook();
};