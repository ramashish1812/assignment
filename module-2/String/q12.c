//12. Write a program in C to find the number of times a given word 'is' appears in the given string.
#include<stdio.h>
#include<string.h>

int ces(char arr[]) 
{
    int count = 0;
    char *ptr = arr;
    
    while ((ptr = strstr(ptr, "is")) != NULL) 
	{
        count++;         
        ptr++;             
    }
    return count;
}

int main() 
{
    char name[100];
    printf("Enter the line: ");
    fgets(name, sizeof(name), stdin);
    
    int result = ces(name);
    printf("\nThe word 'is' appears %d times in the given line.", result);
    
    return 0;
}

