#include <iostream>
#include <string>
#include "Book.h"

int main()
{
    Book books[5] = {
        Book("To Kill a Mockingbird", "Harper Lee", 1),
        Book("The Great Gatsby", "F. Scott Fitzgerald", 2),
        Book("Pride and Prejudice", "Jane Austin", 3),
        Book("1984", "George Orwell", 4),
        Book("Moby Dick", "Herman Melville", 5)
    }; 
    int query;
    while (true) {
        cout << "To checkout a book enter its ISBN (0 to exit):" << endl;
        cin >> query;

        if (query == 0) {
            cout << "Exiting program.";
            exit(0);
        }
        if (query > 0 && query < 6) {
            for (int i = 0; i < 5; i++) {
                if (books[i].isbn == query) {
                    if (books[i].isAvailable == 1) {
                        books[i].borrowBook();
                        cout << "Successfully checked out: " << books[i].title << " by " << books[i].author << endl;
                    }
                    else cout << "Error: Book unavaialble for checkout." << endl;
                }
            }
        }
        else cout << "Invalid ISBN: " << query << endl;
    }
   
}

