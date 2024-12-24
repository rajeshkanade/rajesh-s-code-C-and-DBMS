#include<stdio.h>
#include<string.h>
void copyToAnotherString(char *str , char *str2){
    while(*str != '\0'){
        *str2 = *str;
        *str2++;
        *str++;
    }
    *str2 = '\0';

}

void concatTwoString(char *str , char *str2){{
    while(*str != '\0'){
        *str++;
    }
   
    while(*str2 != '\0'){
        *str = *str2;
        *str++;
        *str2++;

    }
    *str = '\0';

}

}

void countNumberOccurence(char *str, char searchChar){
    int count = 0;
    while(*str != '\0'){
        if(searchChar == *str){
            count ++;
        }
        *str++;
    }
    printf("%c character in string has occurred %d times",searchChar,count); 
}

void changeAllOccurenceToAnotherChar(char *str, char searchChar, char replaceChar){
    while(*str != '\0'){
        if(searchChar == *str){
           *str = replaceChar;
        }
        *str++;
    }
}
int main()
{
    char str[50];
    char str2[50]; 
    char str3[50];
    printf("Enter the string : ");
    scanf("%s",str);
    
    int ch;
    char searchChar , replaceChar;
    do{
        printf("\n0. Exit");
        printf("\n1. Copy one string to another.");
        printf("\n2. Concatenate two strings.");
        printf("\n3. Count number of occurrences of a character in the string.");
        printf("\n4. Replace all occurrences of a character by another.");
        printf("\n\nEnter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 : 
        copyToAnotherString(str,str2);
        printf("Copied String is : %s",str2);
            break;
        case 2 :
        printf("Enter Second String : ");
        scanf("%s",str2);
        concatTwoString(str,str2);
        printf("\nConcatinated String is : ");
        puts(str);
        break;
        case 3 : 
        printf("Enter the letter to be count in string : ");
        scanf(" %c",&searchChar);
        countNumberOccurence(str,searchChar);
        break;
        case 4: 
        printf("Enter the character to be search : ");
        scanf(" %c",&searchChar);
        printf("Enter the character to be replace : ");
        scanf(" %c",&replaceChar);
        changeAllOccurenceToAnotherChar(str,searchChar,replaceChar);
        printf("The replace character string is : %s",str);
        break;
        default: 
        printf("Enter the valid choice ...");
            break;
        }
    }while(ch != 0);
    return 0;
}