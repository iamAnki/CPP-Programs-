#include<stdio.h>
struct book
{char title[30];
char author [30];
int price;
};
void main ()
{
struct book b[2];
int i;
FILE *fp;
fp=fopen("BOOK_FL.txt","w");
printf("enter title, author, price\n");
for (i=0;i<2;i++)
{
printf("enter title\n");
scanf("%s",&b[i].title);
printf("enter author\n");
scanf("%s",&b[i].author);
printf("enter price\n");
scanf("%d",&b[i].price);
}
printf("data entered is \n");
for (i=0;i<2;i++)
{
fprintf(fp," \ntitle\n");
fprintf(fp,"%s",b[i].title);
fprintf(fp," \nauthor\n");
fprintf(fp,"%s",b[i].author);
fprintf(fp," \nprince\n");
fprintf(fp,"%d",b[i].price);
}
printf("data is in file\n");
fclose(fp);
}
