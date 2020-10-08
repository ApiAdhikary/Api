#include<iostream>
#include<windows.h>
#include<conio.h>


using namespace std;


void ADD()
{

    system("cls");
    system("color 0A");
    cout << "WELCOME TO ADDITION" << endl;
    cout << "HOW ELEMENTS YOU TAKE IT:" << endl;
    int a ;
    cin >> a ;
    double b [100] ;
    for(int i=0 ; i<100 ; i++)
    {
        b [i] = 0 ;
    }
    cout << "ENTER THE NUMBERS:" << endl;
    for(int i=1 ; i<=a ; i++)
    {
        cin >> b [i] ;
    }
    for(int i=1 ; i<=a ; i++)
    {
        b [i] = b [i] + b [i-1] ;
    }
    cout << "ADDITION:" << b [a] << endl;
}

void SUB()
{
    system("cls");
    system("color 0B");

    cout << "WELCOME TO SUBTRACTION" << endl;
    cout << "ENTER TWO NUMBERS:" << endl;
    double a , b ;
    cin >> a >> b ;
    cout << "SUBTRACTION:" << a-b << endl;

}

void MUL()
{
    system("cls");
    system("color 0C");

    cout << "WELCOME TO MULTIPLICATION" << endl;
    cout << "ENTER TWO NUMBERS:" << endl;
    double a , b ;
    cin >> a >> b ;
    cout << "MULTIPLICATION:" << a*b << endl;

}

void DIV()
{
    system("cls");
    system("color 0D");

    cout << "WELCOME TO DIVISION" << endl;
    cout << "ENTER TWO NUMBERS:" << endl;
    double a , b ;
    cin >> a >> b ;
    cout << "DIVISION:" << a/b << endl;

}

void SQR()
{
    system("cls");
    system("color 0E");

    cout << "WELCOME TO SQUARE" << endl;
    cout << "ENTER THE NUMBER:" << endl;
    double a ;
    cin >> a  ;
    cout << "SQUARE:" << a*a << endl;

}

void QUB()
{
    system("cls");
    system("color 0F");

    cout << "WELCOME TO QUBE" << endl;
    cout << "ENTER THE NUMBER:" << endl;
    double a ;
    cin >> a ;
    cout << "QUBE:" << a*a*a << endl;

}

void PER()
{
    system("cls");
    system("color 07");

    cout << "WELCOME TO PERCENTAGE" << endl;
    cout << "ENTER THE NUMBER:" << endl;
    double a ;
    cin >> a  ;
    cout << "ENTER THE PERCENTAGE NUMBER:" << endl;
    double b ;
    cin >> b ;
    cout << "PERCENTAGE:" << a*b/100 <<  "%" <<endl;

}


void display()
{
   cout << "-------------------------CASIO-------------------------" << endl;
   cout << "\n\n\n" << endl;
   cout << "-------------------------PRESS 1 FOR ADDITION-------------------------" << endl;
   cout << "-------------------------PRESS 2 FOR SUBTRACTION-------------------------" << endl;
   cout << "-------------------------PRESS 3 FOR MULTIPLE-------------------------" << endl;
   cout << "-------------------------PRESS 4 FOR DIVISION-------------------------" << endl;
   cout << "-------------------------PRESS 5 FOR SQUARE-------------------------" << endl;
   cout << "-------------------------PRESS 6 FOR QUBE-------------------------" << endl;
   cout << "-------------------------PRESS 7 FOR PERCENTAGE-------------------------" << endl;
   cout << "-------------------------PRESS 8 FOR OFF-------------------------" << endl;
   cout << "\n\n" << endl;

}


void all()
{

    int x ;
    cout << "ENTER THE KEY:" << endl;
    cin >> x ;

    switch (x)
          {
          case 1 :
            {
                ADD();
                cout << "PLEASE TAKE TO NEXT STEP:" << endl;
                getch();
                system("cls");

                display();
                all();
                break ;
            }

            case 2 :
            {
                SUB();
                cout << "PLEASE TAKE TO NEXT STEP:" << endl;
                getch();
                system("cls");
                display();
                all();
                break ;
            }

            case 3:
            {
                MUL();
                cout << "PLEASE TAKE TO NEXT STEP:" << endl;
                getch();
                system("cls");
                display();
                all();
                break ;
            }

            case 4 :
            {
                DIV();
                cout << "PLEASE TAKE TO NEXT STEP:" << endl;
                getch();
                system("cls");
                display();
                all();
                break ;
            }

            case 5 :
            {
                SQR();
                cout << "PLEASE TAKE TO NEXT STEP:" << endl;
                getch();
                system("cls");
                display();
                all();
                break ;
            }

            case 6 :
            {
                QUB();
                cout << "PLEASE TAKE TO NEXT STEP:" << endl;
                getch();
                system("cls");
                display();
                all();
                break ;
            }

            case 7 :
            {
                PER();
                cout << "PLEASE TAKE TO NEXT STEP:" << endl;
                getch();
                system("cls");
                display();
                all();
                break ;
            }

            case 8 :
            {
                system ("cls") ;
                cout << "\t\t\t\tCASIO" << endl;
                break ;

            }

            default :
               {

                cout << "MATH ERROR\nPRESS RIGHT BUTTON" << endl;

                all();


               }








          }

}

int main()
{
    system("color 0e");
    display();
    all();

    return 0 ;
}
