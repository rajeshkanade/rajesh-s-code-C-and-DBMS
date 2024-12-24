#include<stdio.h>
void usingSecondWhile(char *str){
     printf("\nPrinted using while loop 2 : ");
    while(*str != '\0'){
        printf("%c",*str);
       (str)++;
    }

}
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s",&str);
    str[3] = '\0';
    printf("Entered String is %s",str);

    printf("\nPrinted Using for Loop : ");
    for(int i = 0 ; str[i] != '\0' ; i++){
        printf("%c",str[i]);
    }
    printf("\nPrinted using while loop : ");
    int i = 0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
   usingSecondWhile(str);
    return 0;
}