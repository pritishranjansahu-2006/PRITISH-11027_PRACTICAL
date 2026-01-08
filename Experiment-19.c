//Program using string functions (strlen, strcpy, strcat, strcmp)
#include<stdio.h>
#include<string.h>
int main(){
char s1[50],s2[50],s3[50];
printf("Enter first string:");
gets(s1);
printf("Enter second string:");
gets(s2);
printf("Length of first string:%d\n",strlen(s1));
printf("Length of second string:%d\n",strlen(s2));
strcpy(s3,s1);
printf("Copied string:%s\n",s3);
strcat(s1,s2);
printf("Concatenated string:%s\n",s1);
if(strcmp(s1,s2)==0){
printf("Strings are equal");
}else{
printf("Strings are not equal");
}
return 0;
}
