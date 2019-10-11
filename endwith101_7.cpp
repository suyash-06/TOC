#define max 100
main()
{
 char str[max],f='a';
 int i;
 printf("enter the string to be checked: ");
 scanf("%s",str);
 for(i=0;str[i]!='\0';i++)
 {
  switch(f)
  {
   case 'a': if(str[i]=='1') f='b';
    else if(str[i]=='0') f='a';
   break;
   case 'b': if(str[i]=='0') f='c';
    else if(str[i]=='1') f='b';
   break;
   case 'c': if(str[i]=='1') f='d';
    else if(str[i]=='0') f='a';
   break;
   case 'd': if(str[i]=='0') f='a';
    else if(str[i]=='1') f='a';
   break;
  }
 }
 if(f=='d') printf("\nString is accepted as it reached the final state %c at the end.",f);
 else printf("\nString is not accepted as it reached %c which is not the final state.",f); 
}
