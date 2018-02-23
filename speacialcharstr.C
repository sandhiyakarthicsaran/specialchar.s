#include<stdio.h>
int main()
{
int count=0,i,n;
char str[57]="helloworld.2123!@#";
n=strlen(str);
for(i=1;i<=n;i++)
{
if(str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='%')
count=count+1;
}
printf("%d\n",count);
return 0;
}
