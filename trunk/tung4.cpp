#include<iostream.h>
#include<string.h>
#include<conio.h>
int hanoi(char *str)
{
    int dem = 0;
    for(int i=0;i<40;i++)
    {
        if(str[i]==' ')
            dem++;
    }
    return dem+1;
}
void nhap(char *&str)
{
    str =  new char[40];
    cout<<"nhap chuoi: ";
    cin.getline(str,40);
}

void main()
{
    char *str;
    nhap(str);
    cout<<"co tat ca: "<<hanoi(str)<<" chu";
    cout<<endl;
    getch();
}

/*
#include<iostream.h>
#include<string.h>
#include<ctype.h>
char prevCh(char *str)
{
    int leng = strlen(str);
    for(int i=0;i<leng;i++)
    {

        str[0] = toupper(str[0]);
        if((str[i]!=' ')&&(str[i-1]==' '))
        {
            str[i] = toupper(str[i]);/* ham toupper dung de bien           chu thuong thanh chu hoa --> nam trong thu vien ctype.h */
            cout.put(str[i]);
        }
        else
            cout.put(str[i]);
    }
    return 1;
}
void nhap(char *&str)
{
    str =  new char[40];
    cout<<"nhap chuoi: ";
    cin.getline(str,40);
}

main()
{
    char *str;
    nhap(str);
    prevCh(str);
    cout<<endl;
    return 1;
}
*/
