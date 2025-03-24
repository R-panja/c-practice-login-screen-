#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


struct account{
    char first_name[100];
    char last_name[100];
    char username[100];
    char phone[100];
    char gender[100];
    char dob[100];
    char password[100];
};



int menu(){
    int choice;
    printf("main menu\n");
    printf("signup\n");
    printf("login\n");
    printf("forgot password\n");
    printf("change password\n");
    printf("delete password\n");
    printf("exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    return choice;

    
}

void takepassword(char password[]) {
    int i = 0;
    char ch;
    
    printf("Enter password: ");
    while (1) {
        ch = getch();  // Read character without echoing it
        if (ch == 13) { // ASCII value of Enter key
            password[i] = '\0';
            break;
        } else {
            password[i++] = ch;
            printf("*");  // Print '*' for each character entered
        }
    }
    printf("\n");
}

void signup(){
    struct account u;
    char password2[100];
    printf("CREATE NEW ACCOUNT");
    printf("ENTER YOUR FIRST NAME");
    scanf("%s",u.first_name);
    printf("ENTER YOUR last NAME");
    scanf("%s",u.last_name);
    printf("ENTER YOUR username");
    scanf("%s",u.username);
    printf("ENTER YOUR phonenumber");
    scanf("%s",u.phone);
    printf("ENTER YOUR gender");
    scanf("%s",u.gender);
    printf("ENTER YOUR dob");
    scanf("%s",u.dob);
    printf("ENTER YOUR password");
    takepassword(u.password);
    start:
    printf("confirm password");
    scanf("%s",password2);

    int compare = strcmp(u.password,password2);
if(compare==0){
    printf("sign up sucessful");
}
else{
    printf("wrong password");
    goto start;
}

}











int main(){
    while(1){  // infinite loop 
        switch(menu()){
            case 1:
                signup();
                break;
            case 2:
               // login();
                break;
            case 3:
               // forgot();
                break;
             case 4:
               // changepassword();
                break;
            case 5:
                //deletepassword();
                break;
            case 6:
                exit(0);
            default:
                printf("invalid choice");
                break;
        }
    
    }
    
    return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    






































  