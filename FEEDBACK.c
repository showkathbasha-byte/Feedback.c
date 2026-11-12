#include<stdio.h>
int main()
{
 char ch;
 FILE*fp;
 fp=fopen("feedback.txt","w");
 if(fp==NULL)
 {
   printf("file opening fail\n");
   return 0;
 }
 fprintf(fp,"feedback about the c programming");
 fprintf(fp,"1.it is easy to understand\n");
 fprintf(fp,"2.it is very usefull\n");
 fprintf(fp,"3.it is an easy understandable language\n");
 fprintf(fp,"4.it is basic for all the other languages\n");
 fprintf(fp,"5.c is easy to learn and fun to practice")
 fclose(fp);
 fp=fopen("feedback.txt","a");
 if(fp==NULL)
 {
  printf("file opening fail\n");
  return 0;
 }
 fprintf(fp,"feedback about the c sir");
 fprintf(fp,"1.he clears the doubts very simple and understandable\n");
 fprintf(fp,"2.he takes the class clearly and well\n");
 fprintf(fp,"3.he is a humble person\n");
 fprintf(fp,"4.he is a very kind person\n");
 fprintf(fp,"5.he maintain's equality among students\n");
 fclose(fp);
 fp=fopen("feedback.txt","r");
 if(fp==NULL)
  {
    printf("file opening failed\n");
    return 0;
  }
  while((ch=fgetc(fp))!=EOF)
  {
   printf("%c",ch);
  }
  fclose(fp);
  return 0;
  }
