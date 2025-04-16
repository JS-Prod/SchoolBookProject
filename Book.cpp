#include "Book.h"
#include <iostream>
#include <string>

//test comment

Book::Book(string t, string a, int i) {
	title = t;
	author = a;
	isbn = i;
	isAvailable = true;
}

void Book::setBookDetails() {
	cout << "Enter title: ";
	getline(cin, title);

	cout << "Enter author: ";
	getline(cin, author);

	cout << "Enter ISBN: ";
	cin >> isbn;

	isAvailable = true; 
}

void Book::displayBookDetails() {
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "ISBN: " << isbn << endl;
	cout << "Available: " << isAvailable << endl;
}

void Book::borrowBook() {
	isAvailable = false;
}

void Book::returnBook() {
	isAvailable = true;
}