#include<iostream>
using namespace std;
#include<fstream>
int menu();
void write();
void read();
void appen();
void write()
{   ofstream fout;
  char a[100];
  cout<<"enter something to write"<<endl;
  cin>>a;
    fout.open("anju.txt",ios::out);
    fout<<a;
    fout.close();
}
void read()
{
    ifstream fin;
    fin.open("anju.txt",ios::in);
    if(!fin)
    {
        cout<<"file not found";
}
else
{   cout<<"Anju contain ----"<<endl;    
    char ch;
    ch=fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
}
}
void appen()
{  string s;
    ofstream fout;
    cout<<"enter a line to append";
    cin>>s;
    fout.open("anju.txt",ios::app);
    fout<<s;
    fout.close();
}
int  menu()
{ int a;
    cout<<"enter 1 to write in anju file";
    cout<<"enter 2 to read in anju file";
    cout<<"enter 3 to append in anju file";
    cout<<"enter 4 for exit";
    cin>>a;
    return a;
}
int main()
{
    int b;
      while(true)
{
    b=menu();
    switch(b)
    {
        case 1 :
        {
            write();
            break ;
        }
        case 2 :
        {
            read();
            break;
        }
        case  3 :
        {
            appen();
            break;
        }
        case 4 :
        exit(0);
       default {
       cout<<"invalid ";
       }
    }
} 

    return 0;
}