#include<stdio.h>
 #include<string.h>

  struct book{
    int book_id;
    char book_title[100];
    char book_author[100];
    char book_genre[100];
    char book_publisher[100];
    int book_publication_year;
    int book_price;
  }b[100];

  int main()
  {

    int n;
    printf("Enter total number of books :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Enter book_id :");
        scanf("%d",&b[i].book_id);

        printf("Enter book_title :");
        scanf("%s",&b[i].book_title);

        printf("Enter book_author :");
        scanf("%s",&b[i].book_author);

        printf("Enter book_genre :");
        scanf("%s",&b[i].book_genre);

        printf("Enter book_publisher :");
        scanf("%s",&b[i].book_publisher);

        printf("Enter book_publication_year :");
        scanf("%d",&b[i].book_publication_year);

        printf("Enter book_price :");
        scanf("%d",&b[i].book_price);

    } printf("\n");


      for(int i=0; i<n; i++){
        printf("book id is : %d\n", b[i].book_id);
        printf("book title is : %s\n", b[i].book_title);  
        printf("book author is : %s\n", b[i].book_author);
        printf("book genre id is : %s\n", b[i].book_genre);
        printf("book publisher is : %s\n", b[i].book_publisher);
        printf("book publication year is : %d\n", b[i].book_publication_year);
        printf("book price is : %d\n", b[i].book_price);


        printf("\n\n");
      }

    }