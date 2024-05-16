#include<stdio.h>
 #include<string.h>

  struct book{
    int car_id;
    char car_company[100];
    int car_model;
    int car_year;
    char car_color[100];
    int car_price;
    int car_mileage;
  }c[100];

 int main()
 {

    int n;
    printf("Enter total number of car :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Enter car_id :");
        scanf("%d",&c[i].car_id);

        printf("Enter car_company :");
        scanf("%s",&c[i].car_company);

        printf("Enter car_model :");
        scanf("%d",&c[i].car_model);

        printf("Enter car_year :");
        scanf("%d",&c[i].car_year);

        printf("Enter car_color :");
        scanf("%s",&c[i].car_color);

        printf("Enter car_price :");
        scanf("%d",&c[i].car_price);

        printf("Enter car_mileage :");
        scanf("%d",&c[i].car_mileage);

    } printf("\n");


      for(int i=0; i<n; i++){
        printf("car id is : %d\n", c[i].car_id);
        printf("car company is : %s\n", c[i].car_company);  
        printf("car model is : %d\n", c[i].car_model);
        printf("car year is : %d\n", c[i].car_year);
        printf("car color is : %s\n", c[i].car_color);
        printf("car price is : %d\n", c[i].car_price);
        printf("car mileage is : %d\n", c[i].car_mileage);


        printf("\n\n");
      }

    }