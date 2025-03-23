#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch; 
    int i;
    char password [100];
    char saved_password[100];
    start:
    i=0;
    while (1){
        ch=getch();// getch() is a function in C used to get a single character input from the user without displaying it on the screen and without requiring the Enter key.
    if(ch==13){ // aschi value of enter is 13 
        password[i]='\0'; // if user press enter than terminate string with \0
        break;
              }
    else{
        password[i++]=ch; // i++ and not ++i because array starts from 0th index and it will store first then increase the index.
        printf("*"); // whenever user types * is printed

        }
    }
    printf("you entered %s as password \n",password);
FILE *ptr;
ptr=fopen("password.txt","r");
fscanf(ptr,"%s",saved_password);
fclose(ptr);
int compare = strcmp(password,saved_password);
if(compare==0){
    printf("login sucessful");
}
else{
    printf("wrong password");
}
goto start;

    return 0;
}