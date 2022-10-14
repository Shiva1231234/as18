Assignment =18
Question =1
/*
#include<stdio.h>
#include<string.h>
int main()
{
char str[1000]="ramayan";
input(str);
}
void input(char b[]);
{
int i;
for(i=0;str[i];i++);
printf("the length of string is %d",i);
}
*\
*\
Question =2
/*
#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
input(str);
}
void input(char b[])
{
int i;
printf("enter your strings");
fgets(b,1000,stdin);
strrev(str);
printf("the reverse string is %s",str);
}
*\
Question =3
/*
#include<stdio.h>
#include<string.h>
int main()
{
char str1[1000],str2[1000];
input(str1,str2);
}
void input(char b[], char c[])
{
int value;
printf("enter your string");
fgets(b,1000,stdin);
printf("enter your string");
fgets(c,1000,stdin);
 value =  strcmp(b,c);
if(value == 0)
{

    printf("string are equal");
}
else
{
    printf("string are not equal");
}
}
*\
*\
Qustion =4
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    input(str);
    }
    void input(char b[])
    {
    printf("enter your string\n");
    fgets(b,1000,stdin);
    strupr(b);
    printf("%s",b);
}
*\
Question =5
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    input(str);
    }
    void input(char b[])
    {
    printf("enter your string\n");
    fgets(b,1000,stdin);
    strlwr(b);
    printf("%s",b);
}
*\
Question =6
/*
/*
#include<string.h>
int main()
{
char str[1000]="rana";
int i;
for(i=0;str[i];i++);

if((str[i]>='a' && str[i]<='z')&&(str[i]>='0' && str[i]<='9'))
{
printf("the string is alphanumeric");

}
else
{
printf("the string is not alphanumeric");

}
}
*\
Question=7
/*
/*
#include<stdio.h>
#include<string.h>
int main()
{
char str[1000];
input(str);
}
void input(char b[])
{
int i,l;
printf("enter your string: ");
gets(b);
l=strlen(b);
for(i=0;i<l/2;i++)
{

    if(b[i]!=b[l-1-i])
    {

        printf("string is not palindrome");
        break;
    }
}
    if (i==l/2)
    {
        printf("string is palindrome");
    }
}
*\
Question =8
/*
#include<stdio.h>
#include<string.h>
int main()
{
char str[1000]="rana";
int i,count=0;
for(i=0;str[i];i++);
{
count = strlen(str);
printf("words of the string is %d",count);
}
}
*\
Question =10
/*
#include <stdio.h>
#include <string.h>

int findRepeatFirstN2(char* s)
{
    // this is O(N^2) method
    int p = -1, i, j;
    for (i = 0; i < strlen(s); i++) {
        for (j = i + 1; j < strlen(s); j++) {
            if (s[i] == s[j]) {
                p = i;
                break;
            }
        }
        if (p != -1)
            break;
    }

    return p;
}

// Driver code
int main()
{
    char str[] = "geeksforgeeks";
    int pos = findRepeatFirstN2(str);
    if (pos == -1)
        printf("Not found");
    else
        printf("%c", str[pos]);
    return 0;
}
*\

