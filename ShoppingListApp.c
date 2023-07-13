#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

/*
    Shopping List App

    1- Print the list of products on screen
    2- Print the products that user selected, their prices & their total price
*/

int userChoice;

void funcSpace(){
    printf("\n");
}

void funcCharSpace(){
    printf("\n--------");
}

int main()
{
    while (userChoice != 20){
        srand(time(0));

        printf("\t\t\t\t==========*Welcome To Shopping List App*==========");

        funcSpace();

        printf("\nA.FOODS");
        funcCharSpace();
        printf("\n1.Chicken");
        printf("\n2.Rice");
        printf("\n3.Meat");
        printf("\n4.Spaghetti");
        printf("\n5.Soap");

        funcSpace();

        printf("\nB.SALADS");
        funcCharSpace();
        printf("\n6.Salad 1");
        printf("\n7.Salad 2");
        printf("\n8.Salad 3");
        printf("\n9.Salad 4");
        printf("\n10.Salad 5");

        funcSpace();

        printf("\nC.DRINKS");
        funcCharSpace();
        printf("\n11.Cola");
        printf("\n12.Cola Zero");
        printf("\n13.Fanta");
        printf("\n14.Sprite");
        printf("\n15.Ayran");

        funcSpace();

        printf("\nD.DESSERTS");
        funcCharSpace();
        printf("\n16.Baklava");
        printf("\n17.Sutlac");
        printf("\n18.Ýzmir Bomb");
        printf("\n19.Tulumba");
        printf("\n20.Lokum");

        funcSpace();
        printf("\nPlease select the option: ");
        scanf("%d", &userChoice);

    }


    return 0;
}
