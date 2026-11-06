#include <stdio.h>

// A Hotel Room Booking System should have the following:
// Variables: name(client's name), nights(integer), room(string), guests(integer), price(float), total(float)
// Room type may be either single(price = 100), double(price = 200) or suite(price = 300)

int main() {
    char name[50], room[50];
    int nights, guests;
    float price;
    // float total = price * guests;

    printf("***** Hotel Room Booking System *****\n");
    printf("Enter your full name: \n");
    // scanf("%s", name, "\n"); // To allow writing of words with space, we avoid using scanf() and instead use ...
    fgets(name, 50, stdin);
        // fgets(); where name is the variable name, 50 is the maximum size of array of characters, and stdin is the standard input where the program expects you to type
        // fgets(where to store, how many letters, where to read)
        // fgets was made not only for keyboard but also to read from any source, so you need to tell it which source; by stdin
        // fgets can be used in 2 different ways: 1. read from keyboard(stdin) 2. read from a text file(myFile).

    printf("Enter your room type(single/double/suite): \n");
    scanf("%s", room, "\n");
    printf("Enter the no. of nights to spend: \n");
    scanf("%d", &nights, "\n");
    printf("Enter no. of heads to board: \n");
    scanf("%d", &guests);

    if (room == "single") {
        price = 100;
    } else if (room == "double") {
        price = 200;
    } else if (room == "suite") {
        price = 300;
    } else {
        printf("Invalid Choice!!!\n");
    }

    // float Price = price;

    float total = price * guests * nights;
    printf("*****BOOKING SUMMARY*****\n");
    printf("Full Name: %s\n", name);
    printf("Room Type: %s\n", room);
    printf("No. of nights: %d\n", nights);
    printf("No. of guests: %d\n", guests);
    printf("Price: %.2f", price);
    printf(" per head in all nights\n");
    printf("Totals: %.2f\n", total);
}