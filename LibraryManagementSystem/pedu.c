// C program for the E-library
// Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Create Structure of Library


int main()
{
   	char username[20];
    char userpwd[20];
    int login=0;

    printf("Enter your username : ");
    fgets(username, 20, stdin);
    username[strcspn(username, "\n")] = 0; // Remove newline character

    printf("Enter your password : ");
    fgets(userpwd, 20, stdin);
    userpwd[strcspn(userpwd, "\n")] = 0; // Remove newline character

    printf("\n\nPress any key to continue");
    getchar(); // Use getchar() instead of getch()

    if(strcmp(username, "kath") == 0 && strcmp(userpwd, "ford") == 0)
    {
        printf("\n\nLogged In Successful");
        login=1;
    }
    else
    {
        login=0;
        printf("\n\nIncorrect username or password");
    }


	
	// Iterate the loop
	if(login==1);
		{
			struct library{
				char book_name[50];
				char author[50];
				int book_id;
				int pages;
				float price;
			};
			struct library lib[100];
			char ar_nm[20];
			int bk_id;

			// Keep the track of the number of
			// of books available in the library
			int i, input, count;

			i = input = count = 0;

		do
			{
			printf("\n\n********######WELCOME TO E-LIBRARY#####********\n");

			printf("\n\n1. Add book information");
			printf("\n2. Display book information");
			printf("\n3. Search for a book by Author");
			printf("\n4. Number of books in the library");
			printf("\n5. Exit");

			printf("\n\nEnter one of the above: ");
			scanf("%d", &input);

			// Process the input
			switch (input) {

			// Add book
			case 1:
				
				printf("Enter book name = ");
				scanf("%s", &lib[i].book_name);

				printf("Enter book id = ");
				scanf("%d", &lib[i].book_id);

				printf("Enter author name = ");
				scanf("%s", &lib[i].author);

				printf("Enter pages = ");
				scanf("%d", &lib[i].pages);

				printf("Enter price = ");
				scanf("%f", &lib[i].price);

				count++;
				break;

			// Print book information
			case 2:

				printf("Enter the Book ID to display information:");
					scanf("%d",&bk_id);

				for (i = 0; i <= count; i++)
					{
					if(bk_id==lib[i].book_id)
						{
					printf("you have entered the following information\n");

					printf("Book name = %s",
						lib[i].book_name);

					printf("\nAuthor name = %s",
						lib[i].author);

					printf("\nPages = %d",
						lib[i].pages);

					printf("\nPrice = %f",
						lib[i].price);
						}
				}
				break;

			// Take the author name as input
			case 3:
				printf("Enter author name : ");
				scanf("%s", ar_nm);
				for (i = 0; i <= count; i++) {

					if (strcmp(ar_nm,lib[i].author)== 0)
					{
					printf("Book name = %s\n",
						lib[i].book_name);

					printf("Book Id=%d",
						lib[i].book_id);

					printf("\nAuthor name = %s",
						lib[i].author);

					printf("\nPages = %d",
						lib[i].pages);

					printf("\nPrice = %f\n\n",
						lib[i].price);
					}
					else{
						printf(" No such book found");
					}
				}
				break;

			// Print total count
			case 4:
				printf("\n No of books in library: %d",count);
				break;

			//exit
			case 5:
				exit(0);
				break;

			default:
				printf("Invalid Input");
			}
		}while(input!=5);
		}
	return 0;
}

