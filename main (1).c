#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 101

int getLength(char s[])
{
  int counter = 0;
  for(int i=0; s[i] != '\0' ;i++)
  {
    counter++;
  }
  return counter;
}

int is_equal(char s1[], char s2[])
{
  for( int i=0; s1[i] != '\0'; i++)
  {
    if (s1[i] == s2[i])
    {
      continue;
    }
    else if (s1[i] != s2[i])
    {
      return 0;
    }
  }
  return 1;
}

void str_copy(char dest[], char source[])
{
  int i=0;
  for (i=0; source[i] !='\0'  ;i++)
  {
    dest[i] = source[i];
  }

  dest[i] = '\0';
}

void swap(char *a, char *b)
{
char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void str_reverse(char s[])
{
    int size = getLength(s);
     for (int i=0; i <size/2; i++)
   {
     swap(&s[i], &s[size - 1 - i]);
   }
}

int main(void) {

  char s1[MAX_LENGTH];
  char s2[MAX_LENGTH];
  char x;


  printf("Enter a string: ");
  scanf("%[^\n]s", s1);

  while((x=getchar() != '\n') && x != EOF); //loop to discard \n from last input and not to skip the next input

  printf("Enter another string: ");
  scanf("%[^\n]s", s2);


  printf("\nThe length of your first string is %d\n", getLength(s1));
  printf("The length of your second string is %d\n", getLength(s2));

  if(is_equal(s1, s2)==1)
  {
    printf("You entered two identical strings.\n");
  }
  else
  {
    printf("Your strings are different.\n");
  }

  return 0;
}