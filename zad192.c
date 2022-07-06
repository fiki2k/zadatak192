/*  Program treba pretvorit string u broj. */

#include<stdio.h>
#include<ctype.h>
void f(char *s, int *num);
int main()
{
        char str[10];
        int broj;
        printf("Unesi neki string od brojeva :");
        gets(str);
        broj=0;
        f(str, &broj);
        printf("\nPretvaranje stringa [ \" %s \" ] u broj = %d \n",str,broj);

        printf("\nUnesi neki string brojeva :");
        gets(str);
        broj=0;
        f(str, &broj);
        printf("\nPretvaranje stringa  [ \" %s \" ] u broj = %d \n",str,broj);

        return 0;

}

void f(char *s, int *pbroj)
{
    if(*s=='\0' || !isdigit(*s))  // isdigit naredba argumentu vrijednost vraca u integeru.
        return;
        *pbroj = (*pbroj)*10 + *s-'0';
    return f(s+1, pbroj);
}

