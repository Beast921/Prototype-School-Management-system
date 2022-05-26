#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<stdlib.h>
void border();
void delay(long);
void load();
class student
{
 long grno,pno,sno;
 char name[20],sec,adrs[30],gend[10],dob[12],grp[15],cpr[11];
 char mname[20],fname[20],pmail[30],nation[20],smail[30];
 int clas,age,marks[5],a,b,c,d,val;
 float perc;
 float calc();
 void personal();
 void schol();
 void other();
 char*remark();
 public:
 student();
 void input();
 void enter();
 void display();
 void modscr();
 void report();
 void momo(int);
 long retgr();
 char*retname();
 int retclas();
 char retsec();
};
char*student::remark()
{
 if(perc>84)
  return "Very Good!!";
 else if(perc>69)
  return "Good!";
 else if(perc>33)
  return "Can Do Better.";
 else
  return "Failed.";
}
void student::report()
{
 load();
 clrscr();
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
 cout<<"                              STUDENT REPORT CARD                             \n"  ;
 cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
 cout<<"   NAME:"<<name<<endl;
 cout<<"   GR NO:"<<grno<<endl;
 cout<<"   CLASS:"<<clas<<endl;
 cout<<"   SECTION:"<<sec<<endl;
 cout<<"   AGE:"<<age<<endl;
 cout<<"   DOB:"<<dob<<endl;
 cout<<"               _______________________________________________ \n";
 cout<<"               |      SUBJECTS       |       MARKS SCORED     |\n";
 cout<<"               |---------------------|------------------------|\n";
 cout<<"               |                     |                        |\n";
 cout<<"               |                     |                        |\n";
 cout<<"               |                     |                        |\n";
 cout<<"               |                     |                        |\n";
 cout<<"               |                     |                        |\n";
 cout<<"               |_____________________|________________________|\n";
 cout<<"\n   Average Score: "<<perc<<'%';
 cout<<"\n   REMARKS --> "<<remark()<<"\n";
 cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
 gotoxy(19,13);
 cout<<"English";
 if(strcmpi(grp,"science")==0)
  {
  gotoxy(19,14);
  cout<<"Physics";
  gotoxy(19,15);
  cout<<"Chemistry";
  gotoxy(19,16);
  cout<<"Mathematics";
  gotoxy(19,17);
  cout<<"Computer science";
  }
 else if(strcmpi(grp,"commerce")==0)
  {
  gotoxy(19,14);
  cout<<"Accounts";
  gotoxy(19,15);
  cout<<"Economics";
  gotoxy(19,16);
  cout<<"Mathematics";
  gotoxy(19,17);
  cout<<"Business Studies";
  }
 else if(strcmpi(grp,"humanities")==0)
 {
  gotoxy(19,14);
  cout<<"Psychology";
  gotoxy(19,15);
  cout<<"Sociology";
  gotoxy(19,16);
  cout<<"Marketing";
  gotoxy(19,17);
  cout<<"Home Science";
  }
 for(int i=0;i<=4;i++)
 {
 gotoxy(48,i+13);
 cout<<marks[i];
 }
 gotoxy(28,25);
 cout<<"Press Enter to continue.";
 ag:
 if(getch()!=13)
  goto ag;
}
float student::calc()
{
 float avg=0.0;
 int total=0;
 for(int i=0;i<5;i++)
  total+=marks[i];
 avg=total/5.0;
 return avg;
}
student::student()
{
 a=0,b=0,c=0,d=0,val=0;
 for(int i=0;i<5;i++)
  marks[i]=0;
 perc=0.0;
}
long student::retgr()
{
 return grno;
}
char*student::retname()
{
 return name;
}
int student::retclas()
{
 return clas;
}
char student::retsec()
{
 return sec;
}
void student::personal()
{
 clrscr();
 border();
 gotoxy(32,3);
 cout<<"PERSONAL DETAILS";
 gotoxy(32,4);
 cout<<"----------------";
 gotoxy(18,6);
 cout<<"============================================";
 gotoxy(18,7);
 cout<<"||                                        ||";
 gotoxy(18,8);
 cout<<"||                                        ||";
 gotoxy(18,9);
 cout<<"|| GR. NUMBER      :                      ||";
 gotoxy(18,10);
 cout<<"|| NAME OF STUDENT :                      ||";
 gotoxy(18,11);
 cout<<"|| AGE             :                      ||";
 gotoxy(18,12);
 cout<<"|| DATE OF BIRTH   :                      ||";
 gotoxy(18,13);
 cout<<"|| GENDER          :                      ||";
 gotoxy(18,14);
 cout<<"|| NAME OF MOTHER  :                      ||";
 gotoxy(18,15);
 cout<<"|| NAME OF FATHER  :                      ||";
 gotoxy(18,16);
 cout<<"|| CPR NUMBER      :                      ||";
 gotoxy(18,17);
 cout<<"|| NATIONALITY     :                      ||";
 gotoxy(18,18);
 cout<<"||                                        ||";
 gotoxy(18,19);
 cout<<"||                                        ||";
 gotoxy(18,20);
 cout<<"============================================";
 gotoxy(39,9);
 cin>>grno;
 gotoxy(39,10);
 gets(name);
 gotoxy(39,11);
 cin>>age;
 gotoxy(39,12);
 gets(dob);
 gotoxy(39,13);
 gets(gend);
 gotoxy(39,14);
 gets(mname);
 gotoxy(39,15);
 gets(fname);
 gotoxy(39,16);
 gets(cpr);
 gotoxy(39,17);
 gets(nation);
 a=1;
}
void student::schol()
{
 clrscr();
 border();
 gotoxy(32,3);
 cout<<"SCHOLASTIC DETAILS";
 gotoxy(32,4);
 cout<<"------------------";
 gotoxy(18,7);
 cout<<"=============================================";
 gotoxy(18,8);
 cout<<"||                                         ||";
 gotoxy(18,9);
 cout<<"||                                         ||";
 gotoxy(18,10);
 cout<<"||    COURSE GROUP    :                    ||";
 gotoxy(18,11);
 cout<<"||                                         ||";
 gotoxy(18,12);
 cout<<"||    CLASS           :                    ||";
 gotoxy(18,13);
 cout<<"||                                         ||";
 gotoxy(18,14);
 cout<<"||    SECTION         :                    ||";
 gotoxy(18,15);
 cout<<"||                                         ||";
 gotoxy(18,16);
 cout<<"||                                         ||";
 gotoxy(18,17);
 cout<<"=============================================";
 gotoxy(42,10);
 gets(grp);
 gotoxy(42,12);
 cin>>clas;
 gotoxy(42,14);
 cin>>sec;
 b=1;
}
void student::other()
{
 clrscr();
 border();
 gotoxy(34,3);
 cout<<"OTHER DETAILS";
 gotoxy(34,4);
 cout<<"-------------";
 gotoxy(16,6);
 cout<<"=================================================";
 gotoxy(16,7);
 cout<<"||                                             ||";
 gotoxy(16,8);
 cout<<"||                                             ||";
 gotoxy(16,9);
 cout<<"||   ADDRESS       :                           ||";
 gotoxy(16,10);
 cout<<"||                                             ||";
 gotoxy(16,11);
 cout<<"||   STUDENT                                   ||";
 gotoxy(16,12);
 cout<<"||   PHONE NUMBER  :                           ||";
 gotoxy(16,13);
 cout<<"||   E-MAIL ID     :                           ||";
 gotoxy(16,14);
 cout<<"||                                             ||";
 gotoxy(16,15);
 cout<<"||   PARENT                                    ||";
 gotoxy(16,16);
 cout<<"||   PHONE NUMBER  :                           ||";
 gotoxy(16,17);
 cout<<"||   EMAIL-ID      :                           ||";
 gotoxy(16,18);
 cout<<"||                                             ||";
 gotoxy(16,19);
 cout<<"||                                             ||";
 gotoxy(16,20);
 cout<<"=================================================";
 gotoxy(37,9);
 gets(adrs);
 gotoxy(37,12);
 cin>>sno;
 gotoxy(37,13);
 gets(smail);
 gotoxy(37,16);
 cin>>pno;
 gotoxy(37,17);
 gets(pmail);
 c=1;
}
void student::input()
{
 char ch;
 load();
 inscr:
 clrscr();
 border();
 gotoxy(35,25);
 cout<<"PRESS N-NEXT";
 gotoxy(34,3);
 cout<<"NEW ADMISSION";
 gotoxy(34,4);
 cout<<"-------------";
 gotoxy(17,7);
 cout<<"===============================================";
 gotoxy(17,8);
 cout<<"||                                           ||";
 gotoxy(17,9);
 cout<<"||                                           ||";
 gotoxy(17,10);
 cout<<"||   1.PERSONAL DETAILS                      ||";
 gotoxy(17,11);
 cout<<"||                                           ||";
 gotoxy(17,12);
 cout<<"||   2.SCHOLASTIC DETAILS                    ||";
 gotoxy(17,13);
 cout<<"||                                           ||";
 gotoxy(17,14);
 cout<<"||   3.OTHER DETAILS                         ||";
 gotoxy(17,15);
 cout<<"||                                           ||";
 gotoxy(17,16);
 cout<<"||                                           ||";
 gotoxy(17,17);
 cout<<"===============================================";
 if(a)
 {
  gotoxy(48,10);
  cout<<"(Done)";
 }
 else
 {
  ag1:
  ch=getch();
  if(ch=='n'||ch=='N')
  {
	personal();
	goto inscr;
  }
  else
	goto ag1;
 }
 if(b)
 {
  gotoxy(48,12);
  cout<<"(Done)";
 }
 else
 {
  ag2:
  ch=getch();
  if(ch=='n'||ch=='N')
  {
	schol();
	goto inscr;
  }
  else
	goto ag2;
 }
 if(c)
 {
  gotoxy(48,14);
  cout<<"(Done)";
 }
 else
 {
  ag3:
  ch=getch();
  if(ch=='n'||ch=='N')
  {
  other();
  goto inscr;
  }
  else
	goto ag3;
 }
 ag4:
 ch=getch();
 if(ch=='n'||ch=='N')
  goto fin;
 else
  goto ag4;
 fin:
}
void student::enter()
{
 clrscr();
 border();
 gotoxy(33,3);
 cout<<"MARKS DETAILS";
 gotoxy(33,4);
 cout<<"-------------";
 gotoxy(17,7);
 cout<<"===============================================";
 gotoxy(17,8);
 cout<<"||                                           ||";
 gotoxy(17,9);
 cout<<"||                                           ||";
 gotoxy(17,10);
 cout<<"||   ENTER MARKS IN-                         ||";
 gotoxy(17,11);
 cout<<"||                                           ||";
 gotoxy(17,12);
 cout<<"||   ENGLISH          :                      ||";
 if(strcmpi(grp,"science")==0)
 {
  gotoxy(17,13);
  cout<<"||   PHYSICS          :                      ||";
  gotoxy(17,14);
  cout<<"||   CHEMISTRY        :                      ||";
  gotoxy(17,15);
  cout<<"||   MATHS            :                      ||";
  gotoxy(17,16);
  cout<<"||   COMPUTER SCIENCE :                      ||";
 }
 if(strcmpi(grp,"commerce")==0)
 {
  gotoxy(17,13);
  cout<<"||   ACCOUNTANCY      :                      ||";
  gotoxy(17,14);
  cout<<"||   ECONOMICS        :                      ||";
  gotoxy(17,15);
  cout<<"||   MATHS            :                      ||";
  gotoxy(17,16);
  cout<<"||   BUSINESS STUDIES :                      ||";
 }
 if(strcmpi(grp,"humanities")==0)
 {
  gotoxy(17,13);
  cout<<"||   PSYCHOLOGY       :                      ||";
  gotoxy(17,14);
  cout<<"||   SOCIOLOGY        :                      ||";
  gotoxy(17,15);
  cout<<"||   MARKETING        :                      ||";
  gotoxy(17,16);
  cout<<"||   HOME SCIENCE     :                      ||";
 }
 gotoxy(17,17);
 cout<<"||                                           ||";
 gotoxy(17,18);
 cout<<"||                                           ||";
 gotoxy(17,19);
 cout<<"===============================================";
 for(int i=0;i<5;i++)
 {
  gotoxy(41,12+i);
  cin>>marks[i];
 }
 val=1;
 perc=calc();
}
void student::momo(int i)
{
 gotoxy(5,i);
 cout<<grno;
 gotoxy(13,i);
 cout<<name;
 gotoxy(25,i);
 cout<<clas;
 gotoxy(33,i);
 cout<<sec;
 gotoxy(38,i);
 cout<<dob;
 gotoxy(51,i);
 cout<<age;
 gotoxy(57,i);
 cout<<grp;
 gotoxy(71,i);
 cout<<perc<<'%';
}
void student::display()
{
 gotoxy(7,9);
 cout<<"Name: "<<name;
 gotoxy(58,9);
 cout<<"GR. Number: "<<grno;
 gotoxy(7,10);
 cout<<"Class: "<<clas;
 gotoxy(30,10);
 cout<<"Section: "<<sec;
 gotoxy(58,10);
 if(strcmpi(grp,"science")==0)
  cout<<setw(17)<<"Group: Science";
 else if(strcmpi(grp,"commerce")==0)
  cout<<setw(17)<<"Group: Commerce";
 else if(strcmpi(grp,"humanities")==0)
  cout<<setw(17)<<"Group: Humanities";
 gotoxy(7,11);
 cout<<"Age: "<<age;
 gotoxy(50,11);
 cout<<"Date Of Birth: "<<dob;
 gotoxy(7,12);
 cout<<"Gender: "<<gend;
 gotoxy(29,12);
 cout<<"Nation: "<<nation;
 gotoxy(54,12);
 cout<<"CPR Number: "<<cpr;
 gotoxy(7,13);
 cout<<"Father's Name: "<<fname;
 gotoxy(51,13);
 cout<<"Mother's Name: "<<mname;
 gotoxy(7,14);
 cout<<"Parent- Phone Number: "<<pno;
 gotoxy(42,14);
 cout<<"E-Mail: "<<pmail;
 gotoxy(7,15);
 cout<<"Student- Phone Number: "<<sno;
 gotoxy(43,15);
 cout<<"E-Mail: "<<smail;
 gotoxy(7,16);
 cout<<"Address: "<<adrs;
 gotoxy(7,17);
 cout<<"-------------------------------------------------------------------";
 gotoxy(7,18);
 cout<<"| Subjects | English  ";
 gotoxy(7,19);
 cout<<"|  Marks   |          |          |          |          |          |";
 gotoxy(7,20);
 cout<<"-------------------------------------------------------------------";
 gotoxy(29,18);
 if(strcmpi(grp,"science")==0)
  cout<<"| Physics  |   Chem   |   Math   |   C.S.   |";
 else if(strcmpi(grp,"commerce")==0)
  cout<<"| Accounts |   Eco    |   Math   |   B.S.   |";
 else if(strcmpi(grp,"humanities")==0)
  cout<<"|  Psych   |  Socio   |  Market  |   H.S.   |";
 for(int i=0;i<5;++i)
 {
  gotoxy(23+11*i,19);
  cout<<marks[i];
 }
 gotoxy(7,21);
 cout<<"Percentage: "<<perc<<"%";
}
void student::modscr()
{
 a=0,b=0,c=0,d=0;
 ag:
 load();
 clrscr();
 border();
 gotoxy(30,3);
 cout<<"ENTER THE NEW DETAILS:";
 gotoxy(17,6);
 cout<<"===============================================";
 gotoxy(17,7);
 cout<<"||                                           ||";
 gotoxy(17,8);
 cout<<"||                                           ||";
 gotoxy(17,9);
 cout<<"||     1.PERSONAL DETAILS                    ||";
 gotoxy(17,10);
 cout<<"||                                           ||";
 gotoxy(17,11);
 cout<<"||     2.SCHOLASTIC DETAILS                  ||";
 gotoxy(17,12);
 cout<<"||                                           ||";
 gotoxy(17,13);
 cout<<"||     3.OTHER DETAILS                       ||";
 gotoxy(17,14);
 cout<<"||                                           ||";
 gotoxy(17,15);
 cout<<"||     4.MARKS DETAILS                       ||";
 gotoxy(17,16);
 cout<<"||                                           ||";
 gotoxy(17,17);
 cout<<"||                                           ||";
 gotoxy(17,18);
 cout<<"===============================================";
 gotoxy(20,25);
 cout<<"PRESS W,S-NAVIGATE, ENTER-CHOOSE, D-DONE.";
 if(a)
 {
  gotoxy(48,9);
  cout<<"(Updated)";
 }
 if(b)
 {
  gotoxy(48,11);
  cout<<"(Updated)";
 }
 if(c)
 {
  gotoxy(48,13);
  cout<<"(Updated)";
 }
 if(d)
 {
  gotoxy(48,15);
  cout<<"(Updated)";
 }
 gotoxy(20,9);
 cout<<"-->";
 int i=0;
 char ch;
 cur:
 ch=getch();
 if(ch=='w'||ch=='W')
 {
  gotoxy(20,9+2*i);
  cout<<"   ";
  if(i>0)
	i--;
  gotoxy(20,9+2*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(ch=='s'||ch=='S')
 {
  gotoxy(20,9+2*i);
  cout<<"   ";
  if(i<3)
	i++;
  gotoxy(20,9+2*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(ch==13)
 {
  if(i==0)
  {
	personal();
	a=1;
	goto ag;
  }
  if(i==1)
  {
	schol();
	b=1;
	goto ag;
  }
  if(i==2)
  {
	other();
	c=1;
	goto ag;
  }
  if(i==3)
  {
	enter();
	d=1;
	goto ag;
  }
 }
 else
 if(ch=='d'||ch=='D')
  goto fin;
 else
  goto cur;
 fin:
}
void border()
{
 int i;
 for(i=1;i<=80;i++)
 {
	gotoxy(i,1);
	cout<<"/";
	gotoxy(i,24);
	cout<<"/";
 }
 for(i=1;i<24;i++)
 {
  gotoxy(1,i);
  cout<<"//";
  gotoxy(79,i);
  cout<<"//";
 }
}
void bord()
{
 int i;
 for(i=1;i<=80;i++)
 {
	gotoxy(i,1);
	cout<<"=";
	gotoxy(i,24);
	cout<<"=";
 }
 for(i=1;i<24;i++)
 {
  gotoxy(1,i);
  cout<<"||";
  gotoxy(79,i);
  cout<<"||";
 }
}
void delay(long n)
{
 long i,j;
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
  }
}
void load()
{
 int i,j=0,a,t;
 for(i=0,a=81;i<=40,a>=41;i++,a--)
 {
  delay(700);
  for(t=0;t<=25;t++)
  {
	gotoxy(i,j+t);
	cout<<"X";
	gotoxy(a,j+t);
	cout<<"X";
  }
 }
 delay(700);
 for(i=40,a=41;i>=0,a<81;i--,a++)
 {
  delay(700);
  for(t=0;t<=25;t++)
  {
	gotoxy(i,j+t);
	cout<<" ";
	gotoxy(a,j+t);
	cout<<" ";
  }
 }
}
void admis()
{
 again:
 char c;
 student s;
 ofstream fil;
 fil.open("student.dat",ios::app|ios::binary);
 s.input();
 fil.write((char*)&s,sizeof(s));
 clrscr();
 border();
 gotoxy(33,9);
 cout<<"Admission Done.";
 gotoxy(27,12);
 cout<<"Enter one more student?";
 gotoxy(27,14);
 cout<<"Go to home page.";
 gotoxy(20,25);
 cout<<"PRESS- W,S TO NAVIGATE, ENTER TO CHOOSE.";
 gotoxy(23,12);
 cout<<"-->";
 int i=0;
 cur:
 c=getch();
 if(c=='w'||c=='W')
 {
  gotoxy(23,14);
  cout<<"   ";
  gotoxy(23,12);
  cout<<"-->";
  i=0;
  goto cur;
 }
 else
 if(c=='s'||c=='S')
 {
  gotoxy(23,12);
  cout<<"   ";
  gotoxy(23,14);
  cout<<"-->";
  i=1;
  goto cur;
 }
 else
 if(c==13)
 {
  if(i==1)
	goto fin;
  else
	goto again;
 }
 else
  goto cur;
 fin:
 fil.close();
}
void srchtab()
{
 int i;
 gotoxy(4,5);
 for(i=0;i<=73;++i)
  cout<<"=";
 for(i=6;i<=22;++i)
 {
  gotoxy(4,i);
  cout<<"||";
  gotoxy(76,i);
  cout<<"||";
 }
 gotoxy(4,7);
 cout<<"||  SEARCH:";
 gotoxy(76,7);
 cout<<"||";
 gotoxy(4,23);
 for(i=0;i<=73;++i)
  cout<<"=";
}
int srchname()
{
 clrscr();
 border();
 int p=0;
 char name[20];
 student s;
 ifstream fin;
 fin.open("student.dat",ios::in|ios::binary);
 gotoxy(33,3);
 cout<<"SEARCH BY NAME";
 gotoxy(33,4);
 cout<<"--------------";
 srchtab();
 gotoxy(17,7);
 gets(name);
 gotoxy(26,25);
 cout<<"PRESS H-HOME, R-SEARCH AGAIN";
 while(fin.read((char*)&s,sizeof(s)))
 {
  if(strcmpi(name,s.retname())==0)
  {
	s.display();
	p++;
  }
 }
 if(p==0)
 {
  gotoxy(30,13);
  cout<<"NO MATCHING RESULTS!";
 }
 fin.close();
 char c;
 skrr:
 gotoxy(55,25);
 c=getch();
 if(c=='h'||c=='H')
  return 0;
 else
  if(c=='r'||c=='R')
	return 1;
  else
	goto skrr;
}
int srchgr()
{
 clrscr();
 border();
 int p=0;
 long grno;
 student s;
 ifstream fin;
 fin.open("student.dat",ios::in|ios::binary);
 gotoxy(31,3);
 cout<<"SEARCH BY GR. NUMBER";
 gotoxy(31,4);
 cout<<"--------------------";
 srchtab();
 gotoxy(17,7);
 cin>>grno;
 gotoxy(26,25);
 cout<<"PRESS H-HOME, R-SEARCH AGAIN";
 while(fin.read((char*)&s,sizeof(s)))
 {
  if(grno==s.retgr())
  {
	s.display();
	p++;
  }
 }
 if(p==0)
 {
  gotoxy(30,13);
  cout<<"NO MATCHING RESULTS!";
 }
 fin.close();
 char c;
 skrr:
 gotoxy(55,25);
 c=getch();
 if(c=='h'||c=='H')
  return 0;
 else
  if(c=='r'||c=='R')
	return 1;
  else
	goto skrr;
}
int srchclas()
{
 clrscr();
 border();
 student s;
 int i,clas,p=0;
 ifstream file;
 file.open("student.dat",ios::in|ios::binary);
 gotoxy(33,3);
 cout<<"SEARCH BY CLASS";
 gotoxy(33,4);
 cout<<"---------------";
 gotoxy(8,7);
 cout<<"Search: ";
 cin>>clas;
 gotoxy(3,9);
 cout<<"----------------------------------------------------------------------------";
 gotoxy(3,10);
 cout<<"| GR No |   Name   | Class | Sec |    DOB.    | Age |   Group    | Average |";
 gotoxy(3,11);
 cout<<"|-------|----------|-------|-----|------------|-----|------------|---------|";
 for(i=12;i<22;++i)
 {
  gotoxy(3,i);
  cout<<"|       |          |       |     |            |     |            |         |";
 }
 gotoxy(3,i);
 cout<<"----------------------------------------------------------------------------";
 gotoxy(26,25);
 cout<<"PRESS H-HOME, R-SEARCH AGAIN";
 i=12;
 while(file.read((char*)&s,sizeof(s)))
 {
  if(clas==s.retclas())
  {
	s.momo(i);
	i++;
	p++;
  }
 }
 if(p==0)
 {
  gotoxy(30,13);
  cout<<"NO MATCHING RESULTS!";
 }
 file.close();
 char c;
 skrr:
 gotoxy(55,25);
 c=getch();
 if(c=='h'||c=='H')
  return 0;
 else
  if(c=='r'||c=='R')
	return 1;
  else
	goto skrr;
}
void srch()
{
 re:
 load();
 clrscr();
 border();
 gotoxy(20,25);
 cout<<"PRESS- W,S TO NAVIGATE, ENTER TO CHOOSE.";
 gotoxy(37,3);
 cout<<"SEARCH";
 gotoxy(37,4);
 cout<<"------";
 gotoxy(18,7);
 cout<<"=============================================";
 gotoxy(18,8);
 cout<<"||                                         ||";
 gotoxy(18,9);
 cout<<"||                                         ||";
 gotoxy(18,10);
 cout<<"||     BY NAME                             ||";
 gotoxy(18,11);
 cout<<"||                                         ||";
 gotoxy(18,12);
 cout<<"||     BY GR. NUMBER                       ||";
 gotoxy(18,13);
 cout<<"||                                         ||";
 gotoxy(18,14);
 cout<<"||     BY CLASS                            ||";
 gotoxy(18,15);
 cout<<"||                                         ||";
 gotoxy(18,16);
 cout<<"||                                         ||";
 gotoxy(18,17);
 cout<<"=============================================";
 gotoxy(21,10);
 cout<<"-->";
 int i=0;
 char c;
 cur:
 c=getch();
 if(c=='w'||c=='W')
 {
  gotoxy(21,10+2*i);
  cout<<"   ";
  if(i>0)
	i--;
  gotoxy(21,10+2*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(c=='s'||c=='S')
 {
  gotoxy(21,10+2*i);
  cout<<"   ";
  if(i<2)
	i++;
  gotoxy(21,10+2*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(c==13)
 {
  if(i==0)
	if(srchname())
	 goto re;
  if(i==1)
	if(srchgr())
	 goto re;
  if(i==2)
	if(srchclas())
	 goto re;
 }
 else
  goto cur;
}
void modify()
{
 char a;
 long grno;
 int q=0,p=0,recno=0;
 student s;
 fstream mod;
 mod.open("student.dat",ios::in|ios::out|ios::binary);
 ag:
 load();
 clrscr();
 border();
 gotoxy(33,3);
 cout<<"UPDATE DETAILS.";
 gotoxy(33,4);
 cout<<"---------------";
 gotoxy(14,6);
 cout<<"Enter the G.R. No: ";
 cin>>grno;
 while(mod.read((char*)&s,sizeof(s)))
 {
  recno++;
  if(grno==s.retgr())
  {
	p++;
	gotoxy(14,8);
	cout<<"CURRENT DETAILS:";
	s.display();
	break;
  }
  else
	q=1;
 }
 if(q)
 {
  gotoxy(30,12);
  cout<<"NO MATCHING RESULTS.";
 }
 gotoxy(21,25);
 cout<<"PRESS R-SEARCH AGAIN, N-NEXT, H-HOME.";
 re:
 a=getch();
 if(a=='r'||a=='R')
  goto ag;
 else
  if(a=='h'||a=='H')
	goto fin;
 else
  if(a=='n'||a=='N')
  {
	if(p)
	goto cont;
  }
 else
  goto re;
 cont:
 s.modscr();
 mod.seekp((recno-1)*sizeof(s));
 mod.write((char*)&s,sizeof(s));
 fin:
 mod.close();
}
void mentry()
{
 ag:
 student s;
 char x,c;
 long grno;
 fstream fil;
 re:
 fil.open("student.dat",ios::in|ios::out|ios::binary);
 int p=0,i=0,recno=0;
 load();
 clrscr();
 border();
 gotoxy(35,3);
 cout<<"MARK ENTRY";
 gotoxy(35,4);
 cout<<"----------";
 gotoxy(17,6);
 cout<<"ENTER GR. NUMBER: ";
 cin>>grno;
 while(fil.read((char*)&s,sizeof(s)))
 {
  recno++;
  if(grno==s.retgr())
	goto dis;
 }
 gotoxy(30,13);
 cout<<"NO MATCHING RESULTS!";
 goto nxt;
 dis:
 gotoxy(17,8);
 cout<<"===============================================";
 gotoxy(17,9);
 cout<<"||                                           ||";
 gotoxy(17,10);
 cout<<"||                                           ||";
 gotoxy(17,11);
 cout<<"||   NAME:                                   ||";
 gotoxy(17,12);
 cout<<"||                                           ||";
 gotoxy(17,13);
 cout<<"||   GR. NUMBER:                             ||";
 gotoxy(17,14);
 cout<<"||                                           ||";
 gotoxy(17,15);
 cout<<"||   CLASS:           SECTION:               ||";
 gotoxy(17,16);
 cout<<"||                                           ||";
 gotoxy(17,17);
 cout<<"||                                           ||";
 gotoxy(17,18);
 cout<<"===============================================";
 gotoxy(28,11);
 cout<<s.retname();
 gotoxy(34,13);
 cout<<s.retgr();
 gotoxy(29,15);
 cout<<s.retclas();
 gotoxy(48,15);
 cout<<s.retsec();
 p=1;
 nxt:
 gotoxy(22,25);
 cout<<"PRESS R-SEARCH AGAIN, N-NEXT, H-HOME.";
 fil.close();
 purr:
 x=getch();
 if(x=='r'||x=='R')
  goto re;
 else
  if(x=='n'||x=='N')
  {
	if(p)
	 s.enter();
  }
 else
  if(x=='h'||x=='H')
	goto fin;
 else
  goto purr;
 fil.seekp((recno-1)*sizeof(s));
 fil.write((char*)&s,sizeof(s));
 clrscr();
 border();
 gotoxy(23,10);
 cout<<"ENTER MARKS FOR ANOTHER STUDENT.";
 gotoxy(23,13);
 cout<<"MAIN MENU.";
 gotoxy(46,25);
 cout<<"PRESS W,S-NAVIGATE, ENTER-CHOOSE.";
 gotoxy(19,10);
 cout<<"-->";
 cur:
 c=getch();
 if(c=='w'||c=='W')
 {
  gotoxy(19,10+3*i);
  cout<<"   ";
  if(i>0)
	i--;
  gotoxy(19,10+3*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(c=='s'||c=='S')
 {
  gotoxy(19,10+3*i);
  cout<<"   ";
  if(i<2)
	i++;
  gotoxy(19,10+3*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(c==13)
 {
  if(i==0)
	goto ag;
  if(i==1)
	goto fin;
 }
 else
  goto cur;
 fin:
}
void rep()
{
 load();
 clrscr();
 border();
 long grno;
 student s;
 ifstream fin;
 fin.open("student.dat",ios::in|ios::binary);
 gotoxy(34,3);
 cout<<"REPORT CARD";
 gotoxy(34,4);
 cout<<"-----------";
 gotoxy(20,12);
 cout<<"Enter the GR No. of student: ";
 cin>>grno;
 while(fin.read((char*)&s,sizeof(s)))
 {
  if(s.retgr()==grno)
  {
	s.report();
	break;
  }
 }
 fin.close();
}
void conso()
{
 load();
 clrscr();
 border();
 int i;
 student s;
 char a;
 ifstream fin;
 fin.open("student.dat",ios::in|ios::binary);
 gotoxy(31,3);
 cout<<"CONSOLIDATE SHEET";
 gotoxy(31,4);
 cout<<"-----------------";
 gotoxy(3,5);
 cout<<"----------------------------------------------------------------------------";
 gotoxy(3,6);
 cout<<"| GR No |   Name   | Class | Sec |    DOB.    | Age |   Group    | Average |";
 gotoxy(3,7);
 cout<<"|-------|----------|-------|-----|------------|-----|------------|---------|";
 for(i=8;i<22;++i)
 {
  gotoxy(3,i);
  cout<<"|       |          |       |     |            |     |            |         |";
 }
 gotoxy(3,i);
 cout<<"----------------------------------------------------------------------------";
 gotoxy(33,25);
 cout<<"Press H-Home.";
 i=8;
 while(fin.read((char*)&s,sizeof(s)))
 {
  s.momo(i);
  i++;
 }
 fin.close();
 xy:
 gotoxy(50,25);
 a=getch();
 if(a=='h'||a=='H')
  goto ff;
 else
  goto xy;
 ff:
}
void result()
{
 re:
 load();
 clrscr();
 border();
 gotoxy(37,3);
 cout<<"RESULT";
 gotoxy(37,4);
 cout<<"------";
 gotoxy(17,7);
 cout<<"===============================================";
 gotoxy(17,8);
 cout<<"||                                           ||";
 gotoxy(17,9);
 cout<<"||                                           ||";
 gotoxy(17,10);
 cout<<"||                                           ||";
 gotoxy(17,11);
 cout<<"||                Mark Entry                 ||";
 gotoxy(17,12);
 cout<<"||                                           ||";
 gotoxy(17,13);
 cout<<"||                Report Card                ||";
 gotoxy(17,14);
 cout<<"||                                           ||";
 gotoxy(17,15);
 cout<<"||                                           ||";
 gotoxy(17,16);
 cout<<"||                                           ||";
 gotoxy(17,17);
 cout<<"===============================================";
 gotoxy(20,25);
 cout<<"Press W,S-Navigate, Enter-Select, H-Home.";
 gotoxy(31,11);
 cout<<"-->";
 int i=0;
 char c;
 cur:
 c=getch();
 if(c=='w'||c=='W')
 {
  gotoxy(31,11+2*i);
  cout<<"   ";
  if(i>0)
	i--;
  gotoxy(31,11+2*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(c=='s'||c=='S')
 {
  gotoxy(31,11+2*i);
  cout<<"   ";
  if(i<2)
	i++;
  gotoxy(31,11+2*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(c=='H'||c=='h')
  goto fin;
 else
 if(c==13)
 {
  if(i==0)
  {
	mentry();
	goto re;
  }
  if(i==1)
  {
	rep();
	goto re;
  }
 }
 else
  goto cur;
 fin:
}
void logbox()
{
 int i;
 for(i=22;i<=56;i++)
 {
  gotoxy(i,18);
  cout<<'_';
 }
 for(i=5;i<=18;i++)
 {
  gotoxy(22,i);
  cout<<'|';
  gotoxy(56,i);
  cout<<'|';
 }
 for(i=22;i<=56;i++)
 {
  gotoxy(i,5);
  cout<<'_';
 }
}
void menu()
{
 ag:
 load();
 clrscr();
 border();
 gotoxy(36,3);
 cout<<"MAIN MENU";
 gotoxy(36,4);
 cout<<"---------";
 gotoxy(20,25);
 cout<<"PRESS- W,S TO NAVIGATE, ENTER TO CHOOSE.";
 gotoxy(18,6);
 cout<<"============================================";
 gotoxy(18,7);
 cout<<"||                                        ||";
 gotoxy(18,8);
 cout<<"||                                        ||";
 gotoxy(18,9);
 cout<<"||            1.NEW ADMISSION             ||";
 gotoxy(18,10);
 cout<<"||                                        ||";
 gotoxy(18,11);
 cout<<"||            2.SEARCH                    ||";
 gotoxy(18,12);
 cout<<"||                                        ||";
 gotoxy(18,13);
 cout<<"||            3.RESULTS                   ||";
 gotoxy(18,14);
 cout<<"||                                        ||";
 gotoxy(18,15);
 cout<<"||            4.MODIFY                    ||";
 gotoxy(18,16);
 cout<<"||                                        ||";
 gotoxy(18,17);
 cout<<"||            5.CONSOLIDATE               ||";
 gotoxy(18,18);
 cout<<"||                                        ||";
 gotoxy(18,19);
 cout<<"||            6.LOG OUT                   ||";
 gotoxy(18,20);
 cout<<"||                                        ||";
 gotoxy(18,21);
 cout<<"||                                        ||";
 gotoxy(18,22);
 cout<<"============================================";
 gotoxy(28,9);
 cout<<"-->";
 int i=0;
 char c;
 cur:
 c=getch();
 if(c=='w'||c=='W')
 {
  gotoxy(28,9+2*i);
  cout<<"   ";
  if(i>0)
	i--;
  gotoxy(28,9+2*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(c=='s'||c=='S')
 {
  gotoxy(28,9+2*i);
  cout<<"   ";
  if(i<5)
	i++;
  gotoxy(28,9+2*i);
  cout<<"-->";
  goto cur;
 }
 else
 if(c==13)
 {
  if(i==0)
  {
	admis();
	goto ag;
  }
  if(i==1)
  {
	srch();
	goto ag;
  }
  if(i==2)
  {
	result();
	goto ag;
  }
  if(i==3)
  {
	modify();
	goto ag;
  }
  if(i==4)
  {
	conso();
	goto ag;
  }
  if(i==5)
  {
	load();
	gotoxy(35,12);
	cout<<"LOGGED OUT.";
	gotoxy(69,20);
	cout<<"Project by:";
	gotoxy(69,21);
	cout<<"Chirag";
	gotoxy(69,22);
	cout<<"Rupesh";
	gotoxy(69,23);
	cout<<"Abhijit";
	gotoxy(69,24);
	cout<<"Aswin";
	exit(0);
  }
 }
 else
  goto cur;
}
void load2()
{
 int a=40,b=9;
 clrscr();
 bord();
 gotoxy(29,7);
 cout<<"LOGGING IN. PLEASE WAIT....";
 gotoxy(37,14);
 cout<<"Loading";
 gotoxy(a,b);
 for(int j=0;j<5;j++)
 {
  for(int i=0;i<5;i++)
  {
	gotoxy(a+i,b+i);
	delay(700);
	if(j%2!=0)
	cout<<' ';
	else
	cout<<'*';
  }
  a+=i,b+=i;
  for(i=0;i<5;i++)
  {
	gotoxy(a-i,b+i);
	delay(700);
	if(j%2!=0)
	cout<<' ';
	else
	cout<<'*';
  }
  a-=i,b+=i;
  for(i=0;i<5;i++)
  {
	gotoxy(a-i,b-i);
	delay(700);
	if(j%2!=0)
	cout<<' ';
	else
	cout<<'*';
  }
  a-=i,b-=i;
  for(i=0;i<5;i++)
  {
	gotoxy(a+i,b-i);
	delay(700);
	if(j%2!=0)
	cout<<' ';
	else
	cout<<'*';
  }
  a+=i,b-=i;
 }
 clrscr();
 border();
 gotoxy(27,12);
 cout<<"Press any key to continue:";
 getch();
}
void login()
{
 char a[20];
 char uname[20];
 int j=0;
 again:
 clrscr();
 bord();
 gotoxy(26,3);
 cout<<"WELCOME TO THE INDIAN SCHOOL";
 gotoxy(26,4);
 for(int u=0;u<28;u++)
  cout<<'-';
 logbox();
 gotoxy(31,7);
 cout<<setw(17)<<"ENTER LOGIN INFO";
 gotoxy(29,10);
 cout<<"Username: ";
 gotoxy(29,12);
 cout<<"Password: ";
 gotoxy(39,10);
 gets(uname);
 gotoxy(39,12);
 for(int i=0,c=0;i<=15;i++,c++)
 {
  bspace:
  a[i]=getch();
  if(a[i]==8)
  {
	if(c!=0)
	{
	 i--;
	 c--;
	 gotoxy(39+c,12);
	 cout<<" ";
	 gotoxy(39+c,12);
	}
	goto bspace;
  }
  if(a[i]==13)
  {
	a[i]='\0';
	break;
  }
  cout<<'*';
 }
 j++;
 gotoxy(31,14);
 if(strcmp(a,"password")==0)
 {
  load2();
 }
 else
 {
  gotoxy(29,14);
  cout<<" Login Unsuccessful.";
  gotoxy(29,15);
  cout<<"     Try Again?";
  if(j%5==0)
  {
	gotoxy(27,16);
	cout<<"Need Help? Ask Developer.";
  }
  getch();
  goto again;
 }
}
void main()
{
 login();
 menu();
}
