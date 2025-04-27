/*
Basic Data Types
- Integer (int) – Stores whole numbers (e.g., 5, -10).
- Floating-point (float, double) – Stores decimal numbers (e.g., 3.14, -0.005).
- Character (char) – Stores a single character (e.g., 'A', 'z').
- Void (void) – Represents "no type," often used for functions that don’t return a value.
*/

/*
Derived Data Types
- Arrays – Collection of elements of the same type.
- Pointers – Stores memory addresses.
- Structures (struct) – Groups different types of variables.
- Unions (union) – Similar to structures but shares memory among members.
*/

/*
Modifiers
- Signed & Unsigned – Determines whether a variable can store negative values.
- Short & Long – Adjusts the storage size of integer types.
*/

#include <stdio.h>

// Defining a structure called Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Creating a variable of type Student
    struct Student student1 = {"Alice", 101, 89.5};

    // Displaying the values
    printf("Name: %s\n", student1.name);
    printf("Roll No: %d\n", student1.roll_no);
    printf("Marks: %.2f\n", student1.marks);

    // average of three numbers
    int num1=55,num2=87,num3=65;
    float result;
    result= (float) (num1+num2+num3) / 3;
    printf("The avg num is %.2f \n", result);
    return 0;
}

