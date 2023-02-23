#include <stdio.h>
#include <string.h>
void main()
{
    int choice, count = 0, length = 0, i, j;
    int num_char=0, num_space=0, num_digit=0;
    int vowel_count = 0, consonsnt_count = 0;
    char c;
    char str[100], str2[100] , temp[100];
    printf(" Main Menu:\n");
    printf("\n1. Reverse a string");
    printf("\n2. concatenation.....");
    printf("\n3. palindrome...");
    printf("\n4. string copy....");
    printf("\n5. length of the string....");
    printf("\n6. frequency of character in a string...");
    printf("\n7. find number of vowels and consonants...");
    printf("\n8. find number of blank spaces and digits..\n");

    printf("\n please enter your choice number: ");
    scanf("%d", &choice);
     printf("enter name :");
    //scanf("%s", str);
    getchar();
    gets(str);
    if (choice == 1)
    {
        printf("enter name :");
        scanf("%s", str);
        strrev(str);
        printf("reverse string is:  %s", str);
    }
    else if (choice == 2)
    {
        printf("enter name :");
        scanf("%s", str);

        printf("enter name :");
        scanf("%s", str2);

        strcat(str, str2);
        printf("concatenation is : %s", str);
    }
    else if (choice == 3)
    {
        strcpy(temp,str);
        strrev(str);

        if(strcmp(str,temp)==0)
        {
            printf("it is pelindrome");
        }
        else 
        {
            printf("it is not pelindrome"); 
        }
    }
    else if (choice == 4)
    {
        printf("enter name :");
        scanf("%s", str);
        printf("enter name :");
        getchar();
        gets(str2);
        strcpy(str2, str);
        printf("name of 2 person is :%s", str2);
    }
    else if (choice == 5)
    {
        printf("enter name :");
        scanf("%s", str);
        printf("%d", strlen(str));
    }
    else if (choice == 6)
    {
        printf("enter name :");
        scanf("%s", str);
        for (c = 'a'; c <= 'z'; c++)
        {
            count = 0;
            for (int i = 0; str[i] != 0; i++)
            {
                if (c == str[i])
                    count++;
            }
            if (count > 0)
                printf("%c fount in%d times\n", c, count);
        }
    }
    else if (choice == 7)
    {
        printf("enter any string : \n");
        scanf("%s", str);

        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' ||
                str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                vowel_count = vowel_count + 1;
            else
                consonsnt_count = consonsnt_count + 1;
        }
        printf("\n Vowelcount is : %d", vowel_count);
        printf("\n consonant count is : %d", consonsnt_count);
    }
    else if(choice ==8)
    {
        // printf("enter name :");
        // scanf("%s", str);
        for (int i=0; str[i]!='\0';i++)
        {
            num_char++;
            if(str[i]>='0'&&str[i]<='9')
            num_digit++;

            if(str[i]==' '||str[i]=='\t')
            num_space++;
        }
        printf("number of character is : %d\n",num_char);
        printf("number of blank space is : %d\n",num_space);
        printf("number of digit is : %d\n",num_digit);

    }
}
