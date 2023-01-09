#include <stdio.h>
#include<conio.h>

void swap(char *x, char *y)
{
char temp = *x;
*x = *y;
*y = temp;
}
void reverse(char *str, int k)
{
static int i = 0;
if (*(str + k) == '\0') {
return;
}
reverse(str, k + 1);

if (i <= k) {
swap(&str[i++], &str[k]);
}
}
int main()
{
char str[] = "Tops Technologies";

reverse(str, 0);
printf("Reverse of the given string is %s", str);
getch();
return 0;
}