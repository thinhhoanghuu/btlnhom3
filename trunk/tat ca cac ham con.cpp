
/* Ham 1*/
int record(FILE *f)
{
	int i;
  	char c;
  	if (f==NULL) return 0;
  	else
		{
      	i=0;
      	do
        		{
          		c = fgetc(f);
          		if (c=='\n') i++;
          		if (c==EOF) break;
        		}	while (1);
      	return i;
    	}
}


/* Ham 2*/
void time_slot(char ch, char *str2)
{
	switch(ch)
  		{
    		case 'I':
       			strcpy(str2, "13.30 - 15.30");
       			break;

    		case 'G':
       			strcpy(str2, "7.30 - 9.30");
       			break;

    		case 'H':
       			strcpy(str2, "9.30 - 11.30");
       			break;

    		case 'K':
       			strcpy(str2, "15.30 - 17.30");
       			break;

    		case 'M':
       			strcpy(str2, "19.30 - 21.30");
       			break;

    		case 'L':
       			strcpy(str2, "17.30 - 19.30");
       			break;
  		}
}


/* Ham 3*/
void chuan_hoa_xau(char *str)
{
	int i,j,n;

 	n=strlen(str);
 	do
   	{
    		if (str[0]==' ')
      		{
       			for (i=0; i<n-1; i++)
         			str[i]=str[i+1];
       			str[n-1]='\0';
       			n--;
      		}
      }	while (str[0]==' ');
 	if (str[0]>96 && str[0]<123)
   	str[0]=str[0]-32;

 	i=1;
 	do
   	{
    		if (str[i]==' ' && str[i+1]==' ')
      		{
       			for (j=i; j<n-1; j++)
               	str[j]=str[j+1];
       			str[n-1]='\0';
       			n--;
      		}
    		else i++;
      }	while (i<n-1);
 	if (str[n-1]==' ')
   	str[--n]='\0';

 	i=0;
 	do
   	{
    		if (str[i]==' ' && str[i+1]>96 && str[i+1]<123)
         	str[i+1]=str[i+1]-32;
    		i++;
      }	while (i<n-1);

 	i=0;
   do
   	{
    		if (str[i]>64 && str[i]<91 && str[i+1]>64 && str[i+1]<91)
      		str[i+1]=str[i+1]+32;
    		if (str[i]>96 && str[i]<123 && str[i+1]>64 && str[i+1]<91)
      		str[i+1]=str[i+1]+32;
    		i++;
   	}	while (i<n-1);
}


/* Ham 4*/
int kiem_tra_ten_lop(char str[7])
{
	int j;
 	if (strlen(str)!=6) return 0;
 	if (str[0]!='C' && str[0]!='T') return 0;
 	if (str[5]!='L' && str[5]!='G' && str[5]!='H' && str[5]!='I' && str[5]!='K' && str[5]!='M')
   return 0;
 	j=1;
 	do
   	{
     		if (str[j]<48 || str[j]>57)
       		{
        			return 0;
        			break;
       		}
     		else j++;
   	}	while (j<=4);
 	return 1;
}







