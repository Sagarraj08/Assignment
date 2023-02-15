#include<stdio.h>
#include<conio.h>
void main()
{
char alphabet;
clrscr();
printf("Enter Alphabet to know Vowel or Consonant ");
scanf("%c",&alphabet);
switch (alphabet)
{
case 'a': alphabet;
printf("%c is Vowel");
break;
case 'A': alphabet;
printf("%c is Vowel");
break;
case 'E': alphabet;
printf("%c is Vowel");
break;
case 'e': alphabet;
printf("%c is Vowel");
break;
case 'i': alphabet;
printf("%c is Vowel");
break;
case 'I': alphabet;
printf("%c is Vowel");
break;
case 'o': alphabet;
printf("%c is Vowel");
break;
case 'O': alphabet;
printf("%c is Vowel");
break;
case 'u': alphabet;
printf("%c is Vowel");
break;
case 'U': alphabet;
printf(" is Vowel");
break;
default :alphabet;
printf("%c is Consonant");
break;
}
getch();
}