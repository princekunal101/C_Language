#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct user
{
  char phone[20];
  char acc[50];
  char pswd[50];
  float balance;
};

void main()
{
  struct user _user;
  int opt;
  FILE *fp;
  char filename[50];

  printf("\nWhat do you want to do?");
  printf("\nRegister to your account");
  printf("\nLogin to an account");
  printf("\nYour choice: ");
  scanf("%d", &opt);

  if (opt == 1)
  {
    system("cls");
    printf("Enter your account no: ");
    scanf("%s", _user.acc);

    printf("Enter your phone no: ");
    scanf("%s", _user.phone);

    printf("Enter your password: ");
    scanf("%s", _user.pswd);
    _user.balance = 0;
    strcpy(filename, _user.phone);

    fp = fopen(strcat(filename, ".txt"), "w");
    fwrite(&_user, sizeof(struct user), 3, fp);
    if (fwrite != 0)
    {
      printf("Account successfuly registered");
    }
    else
    {
      printf("something went worng please try again");
    }
  }
}