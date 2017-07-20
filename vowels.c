#include<stdio.h>
int main()
{
char c;
int touppercase,tolowercase;
printf("Enter the alphabet");
scanf("%c",&c);
tolowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
touppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(touppercase||tolowercase)
printf("%c",vowels);
else
printf("%c",constant);
}
