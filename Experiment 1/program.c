#include <stdio.h> 
int length(char[]); 
void compare(char[], char[]); 
void palindrom(char[]); 
void substring(char[], char[]); 
void copy(char[], char[]); 
void reverse(char[]); 
void displayMenu(); 
 
int i, j; 
 
int main() 
{ 
    int choice; 
    char str[50]; 
    char str2[50]; 
    int exit = 0; 
 
    displayMenu(); 
 
    do 
    { 
        printf("\nENTER CHOICE (7 for Display Menu): "); 
        scanf("%d", &choice); 
 
        if (!(choice == 7 || choice == 8)) 
        { 
            printf("Enter String: "); 
            scanf("%s", str); 
        } 
 
        switch (choice) 
        { 
            case 1: 
                printf("Length of the String is %d\n", length(str)); 
                break; 
 
            case 2: 
                printf("Enter second String: "); 
                scanf("%s", str2); 
                copy(str, str2); 
                break; 
 
            case 3: 
                reverse(str); 
                break; 
 
            case 4: 
                palindrom(str); 
                break; 
 
            case 5: 
                printf("Enter substring: "); 
                scanf("%s", str2); 
                substring(str, str2); 
                break; 
 
            case 6: 
                printf("Enter second String: "); 
                scanf("%s", str2); 
                compare(str, str2); 
                break; 
 
            case 7: 
                displayMenu(); 
                break; 
 
            case 8: 
                exit = 1; 
                printf("Program Ended.\n"); 
                break; 
 
            default: 
                printf("Invalid Choice!\n"); 
        } 
 
    } while (exit == 0); 
 
    return 0; 
} 
 
void displayMenu() 
{ 
    printf("\n<<-----------MENU------------->>\n"); 
    printf("1. Length\n"); 
    printf("2. Copy String\n");2 
    printf("3. Reverse String\n"); 
    printf("4. Check Palindrome\n"); 
    printf("5. Check Substring\n"); 
    printf("6. Compare Strings\n"); 
    printf("7. Display Menu\n"); 
    printf("8. Exit\n"); 
} 
 
int length(char a[]) 
{ 
    int len = 0; 
 
    while (a[len] != '\0') 
    { 
        len++; 
    } 
 
    return len; 
} 
 
void copy(char str1[], char str2[]) 
{ 
    i = 0; 
 
    while (str2[i] != '\0') 
    { 
        str1[i] = str2[i]; 
        i++; 
    } 
 
    str1[i] = '\0'; 
 
    printf("Copied String = %s\n", str1); 
} 
 
void reverse(char str[]) 
{ 
    int len = length(str); 
    printf("Reversed String = "); 
 
    i = len - 1; 
    while (i >= 0) 
    { 
        printf("%c", str[i]); 
        i--; 
    } 
 
    printf("\n"); 
} 
 
void palindrom(char str[]) 
{ 
    int len = length(str); 
    int flag = 1; 
 
    i = 0; 
    j = len - 1; 
 
    while (i < j) 
    { 
        if (str[i] != str[j]) 
        { 
            flag = 0; 
            break; 
        } 
        i++; 
        j--; 
    } 
 
    if (flag) 
        printf("String is Palindrome.\n"); 
    else 
        printf("String is Not Palindrome.\n"); 
} 
 
void substring(char str[], char sub[]) 
{ 
    int found = 0; 
 
    i = 0; 
    while (str[i] != '\0') 
    { 
        j = 0; 
 
        while (sub[j] != '\0' && str[i + j] == sub[j]) 
        { 
            j++; 
        } 
 
        if (sub[j] == '\0') 
        { 
            found = 1; 
            break; 
        } 
 
        i++; 
    } 
 
    if (found) 
        printf("Substring Found.\n"); 
    else 
        printf("Substring Not Found.\n"); 
} 
 
void compare(char str1[], char str2[]) 
{ 
    i = 0; 
 
    while (str1[i] != '\0' && str2[i] != '\0') 
    { 
        if (str1[i] != str2[i]) 
        { 
            printf("Strings are Not Equal.\n"); 
            return; 
        } 
        i++; 
    } 
 
    if (str1[i] == '\0' && str2[i] == '\0') 
        printf("Strings are Equal.\n"); 
    else 
        printf("Strings are Not Equal.\n"); 
} 
