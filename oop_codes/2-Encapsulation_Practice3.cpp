#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int copies;

public:
    Book(string Title, string Author, int Copies = 0)
    {
        title = Title;
        author = Author;
        if (Copies >= 0)
            copies = Copies;
        else
            copies = 0;
    }

    void addCopies(int n)
    {
        if (n >= 0)
        {
            cout << "Copies Successfully added" << endl;
            copies += n;
        }
        else
        {
            cout << "You cant enter a negative number" << endl;
        }
    }

    void borrowBook(int n)
    {
        if (copies >= n)
        {
            cout << "Copies Successfully deducted" << endl;
            copies -= n;
        }
        else
        {
            cout << "Not enough copies are available" << endl;
        }
    }

    int getCopies()
    {
        return copies;
    }
};

int main()
{
    Book b1 = Book("PROCOM", "FAST", 46);
    Book b2 = Book("Einstein", "Kamran");

    b1.addCopies(65);
    cout << "Number of copies are " << b1.getCopies() << endl;
    b2.addCopies(-23);
    cout << "Number of copies are " << b2.getCopies() << endl;

    b1.borrowBook(54);
    b2.borrowBook(43);

    cout << "Number of copies are " << b1.getCopies() << endl;
    cout << "Number of copies are " << b2.getCopies() << endl;
}