#include <stdio.h>
// Above is the preprocessor directive. It runs before compilation (#).
// # is for 'start here'
// include - copy paste another file's code in mine
// <stdio.h> - Brings a standard library input output header file that contains functions like the printf for input and scanf for output

int main() { // The main function is where the execution of the code begins. Everything is compiled but execution starts at the main() function.
    // char grade; // this is char type for declaring single characters
    char myName[50]; // in C, we refer a string as a series/array of characters; therefore, we have to declare a size in square brackets
    char greetingsResponse[50];
    int age; // this is int type
    float salary; // the float type is for numbers with about two decimal places
    double pi = 3.1423858; // double type is for for numbers with bigger decimals

    printf("Enter your name: "); // the printf() inbuilt function is used for displaying output
    scanf("%s", myName); // the scanf() inbuilt function is meant for accepting user input
    printf("Hello %s", myName);
    scanf("%s", greetingsResponse);
    printf("\nHow are you today!\n");
    printf("Its been long meeeehn 😅. BTW how old are you? ");
    scanf("%d", &age);
    printf("\nOoh, so you're only %d", age);
    printf(" years old");
    return 0;


}

int greetings() {
    printf("Hello world!\n");
}
