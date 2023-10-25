#include <stdio.h>
#include <string.h>
// Problem 2: Write a function to find the length of a string using pointers.

int main(void)
{

//   let me solve it using predefined string function and my own string formular, first then i will figure out how to do it using pointers.

///////////////////////////////////////////////////////
// char student_name[20] = {"kelly"};
// char student_count = strlen(student_name);
// printf("the name of the student is %s and it has %d characters in it.\n", student_name, student_count);

///////////////////////////////////////////////////////
//  USING WHILE LOOP.
// Problem 2: Write a function to find the length of a string using pointers.

// char student_name[20] = {"kelly"};
// int student_count = 0, i;


// while(student_name[i] != '\0')
// {
// 	i++; student_count = i;
// }
//  USING FOR LOOP.

// for(i = 0; student_name[i] != '\0'; i++)
// {
// 	student_count++;
// }

// printf("the name of the student is %s and it has %d characters in it.\n", student_name, student_count);


///////////////////////////////////////////////////////
// USING POINTERS.
// Problem 2: Write a function to find the length of a string using pointers.


// char student_name[20] = {"kelly"};
// int student_count = 0, i;

// char *ptr = student_name;


// while(ptr[i] != '\0')
// {
// i++;
// 	student_count++;
// }

// printf("the name of the student is %s and it has %d characters in it.\n", student_name, student_count);



    char *str = "hello";
	char **btr = &str;
	char **ftr = &str;

	char ***dtr = &btr;
	char ****etr = &dtr;
	char *****gtr = &etr;
	// char ******gtr = &ftr;

// printf("Pointer value: %p\n", (void *)btr);


  	printf("Pointer value: %p\n", str);

    printf("Pointer value: %p\n", *btr); // Print the pointer value
    printf("Pointer value: %p\n", (void *)str);
    printf("Pointer value: %p\n", (void *)*ftr);

    printf("Pointer value: %p\n", *dtr);
    printf("Pointer value: %p\n",   *etr);
    printf("Pointer value: %p\n",   gtr);
    // printf("Pointer value: %p\n", (void *)gtr);













	// Print the pointer value


// 0x10dcaff9a

return 0;
}