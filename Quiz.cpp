#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int option,score=0;
    char name [50]; char opt,reply;
    system("cls");
    system("color 3f");

    cout<<"\t\t\t==================================\n";
    cout<<"\t\t\t*******Welcome to quiz game*******\n";
    cout<<"\t\t\t==================================\n";

    cout<<"Enter your name :";
    gets(name);

    cout<<"\nWelcome\t"<<name<<endl;

    main:
    cout<<"\n1. Start Quiz\n";
    cout<<"2. View Score\n";
    cout<<"3. Quit Game\n\n";

    cout<<"select one option from above\n";
    cin>>option;

    while(option<1 or option>3)
    {
        cout<<"Enter a valid option: ";
        cin>>option;
    }

 getch();
      system("cls");

    switch(option)
    {
    case 1:


    cout<<"Q1.What is the capital city of Bangladesh?\n";
    cout<<"\n A.Dhaka \n B.Sylhet \n C.Mymensing \n D.Barishal\n" ;
    cout<<"Enter correct option: ";
    cin>>opt;


    while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='a' or opt=='A')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option A ";
      }

      getch();
      system("cls");


      cout<<"Q2.What is the national fruit of Bangladesh?\n";
      cout<<"\n A.Mango \n B.Banana \n C.Jack-Fruit \n D.Dragon\n" ;
      cout<<"Enter correct option: ";
      cin>>opt;

      while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='c' or opt=='C')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option C";
      }

      getch();
      system("cls");


      cout<<"Q3.What is the national game of Bangladesh?\n";
      cout<<"\n A.Cricket \n B.Football \n C.Badminton \n D.Ha-Du_Du\n" ;
      cout<<"Enter correct option: ";
      cin>>opt;

      while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}


    if(opt=='d' or opt=='D')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option D";
      }
      getch();
      system("cls");


      cout<<"Q4.Rajshahi is famous for what?\n";
    cout<<"\n A.Mango \n B.Fish \n C.Rice \n D.Milk\n" ;
    cout<<"Enter correct option: ";
    cin>>opt;

    while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='a' or opt=='A')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option A";
      }

      getch();
      system("cls");

      cout<<"Q5.What year did Bangladesh finally become independent and gain the name it has today??\n";
    cout<<"\n A.1971 \n B.1972 \n C.1988 \n D.1980\n" ;
    cout<<"Enter correct option: ";
    cin>>opt;

    while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='a' or opt=='A')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option D";
      }

      getch();
      system("cls");

      cout<<"Q6.On which continent is Bangladesh located???\n";
    cout<<"\n A.Asia \n B.Africa \n C.Europe \n D.Australia\n" ;
    cout<<"Enter correct option: ";
    cin>>opt;

    while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='a' or opt=='A')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option D";
      }

      getch();
      system("cls");


      cout<<"Q7.Bangladesh is completely surrounded by which country ????\n";
    cout<<"\n A.Pakistan \n B.India \n C.Australia \n D.Canada\n" ;
    cout<<"Enter correct option: ";
    cin>>opt;

    while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='b' or opt=='B')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option D";
      }

      getch();
      system("cls");


      cout<<"Q8.What is the national flower of Bangladesh? ????\n";
    cout<<"\n A.Rose \n B.Tulip \n C.Water lily \n D.None \n" ;
    cout<<"Enter correct option: ";
    cin>>opt;

    while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='c' or opt=='C')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option D";
      }

      getch();
      system("cls");

       cout<<"Q9.What is the Time Zone of Bangladesh ?????\n";
    cout<<"\n A.Utc + 5 \n B.Utc + 6 \n C.Utc + 8 \n D.Utc + 4 \n" ;
    cout<<"Enter correct option: ";
    cin>>opt;

    while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='b' or opt=='B')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option D";
      }

      getch();
      system("cls");

       cout<<"Q10.What is the main religion practiced in Bangladesh? ?????\n";
    cout<<"\n A.Islam \n B.Buddha \n C.Cristian \n D.Hindu \n" ;
    cout<<"Enter correct option: ";
    cin>>opt;

    while(opt!='a' and opt!='b' and opt!='c' and opt!='d' and opt!='A' and opt!='B' and opt!='C' and opt!='D' )

{
    cin.clear();
    cout<<"Enter a valid option like a,b,c,d or A,B,C,D : ";
    cin>>opt;
}

    if(opt=='a' or opt=='A')
    {
        cout<<"correct option !";
        score=score+2;
    }
      else
      {
          cout<<"wrong Answer ! correct answer is option D";
      }

      getch();
      system("cls");

      cout<<"\nThe test is over!! To know result please press 2 ! ";


    cout<<"\n\n1. Start Quiz\n";
    cout<<"2. View score\n";
    cout<<"3. Quit Game\n\n";
    cout<<"select one option from above\n";
    cin>>option;

     while(option<1 or option>3)
    {
        cout<<"Enter a valid option: ";
        cin>>option;
    }

    case 2:
       cout<<"total score: 20\n" ;
       cout<<"obtain score:"<<score;

      if(score<14)

        cout<<"\n\nOPPS !!! You have failed.... \nBetter luck next time";


     else

          cout<<"\n\nCONGRATULATIONS !!!\nYou have won the game ";


       getch();
       system("cls");

       cout<<"\n\n1. Start Quiz\n";
       cout<<"2. View score\n";
       cout<<"3. Quit Game\n\n";

       cout<<"select one option from above\n";
       cin>>option;

        while(option<1 or option>3)
    {
        cout<<"Enter a valid option: ";
        cin>>option;
    }

      break;


    case 3:
     cout<<"do you want to exit the quiz (Y/N) : "  ;
       cin>>reply;

       if(reply=='Y' or reply=='y')
       {
           break;
       }
           else
           {
               goto main;
           }
           break;
    }

getch();
}

