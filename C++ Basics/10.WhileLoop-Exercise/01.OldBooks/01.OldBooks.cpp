#include <iostream>

using namespace std;

int main()
{
    string book;
    getline(cin, book);

    int counter = 0;
    bool isBookFound = false;

    string currentBook;
    getline(cin, currentBook);

    while (true)
    {
        counter++;
        if (currentBook == book)
        {
            cout << "You checked " << counter - 1 << " books and found it." << endl;
            isBookFound = true;
            break;
        }
        if (currentBook == "No More Books")
        {
            break;
        }

        getline(cin, currentBook);
    }

    if (!isBookFound)
    {
        cout << "The book you search is not here!" << endl;
        cout << "You checked " << counter - 1 << " books.";
    }


    return 0;
}
