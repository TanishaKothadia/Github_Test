/*
Programmer : Tanisha Kothadia
Aim : Manage books in a library
Date : 27-10-25
*/

#include <stdio.h>
#include <conio.h>
#define max_books 100
char books[max_books][100] = {"Let us C","C programming","C++"};
int totalBooks = 3;

void displayBooks();
int getTotalBooks();
void borrowBook(char bookName[]);
float calculateFine(int daysLate);

int main()
{
    int ch;
    char name[100];
    int daysLate;

    do
    {
        printf("1. Display list of available books\n");
        printf("2. Get total number of books\n");
        printf("3. Borrow a book\n");
        printf("4. Calculate fine for overdue book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1 : displayBooks();
                     break;

            case 2 : printf("Total number of books: %d\n", getTotalBooks());
                     break;

            case 3 :
                     break;

            case 4:
                printf("Enter number of days overdue: ");
                scanf("%d", &daysLate);
                printf("Fine Amount: Rs. %.2f\n", calculateFine(daysLate));
                break;

            case 5 : printf("Exiting system...Goodbye!\n");
                     break;

            default : printf("Invalid choice. Please try again.\n");
        }

        }

    }
}
