#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void show()
{
    cout << "----------------------CASIO-----------------------" << endl;
    cout << "\n\n\n" << endl;
    cout << "----------------------1.ADDITION------------------" << endl;
    cout << "----------------------2.SUBTRACTION---------------" << endl;
    cout << "----------------------3.MULTUPICATION-------------" << endl;
    cout << "----------------------4.DIVISION------------------" << endl;
    cout << "----------------------5.SQUARE--------------------" << endl;
    cout << "----------------------6.QUBE----------------------" << endl;
    cout << "----------------------7.PERCENTAGE----------------" << endl;
    cout << "----------------------8.OFF-----------------------" << endl;
    cout << "\n" << endl;
}

void add()
{
    system("cls") ;
    system("color 0A") ;
    cout << "WLCOME TO ADDITION" << endl ;
    cout << "HOW ELEMANT'S YOU CAN TAKE IT:" << endl ;
    double a [100] ;
        for(int i=0 ; i<100 ; i++)
    {
        a [i] = 0 ;
    }
    int b ;
    cin >> b ;

    cout << "TAKE THE NUMBER STEP BY STEP:" <<  endl;
    for(int i=1 ; i<=b ; i++)
    {
        cin >> a [i] ;
    }
    for(int i=1 ; i<=b ; i++)
    {
        a [i] = a [i-1] + a [i] ;
    }

    cout << "ADDITION: " << a [b] <<endl ;


}

double sub()
{
    cout << "ENTER TWO NUMBER'S:" << endl;
    double a , b ;
    cin >> a >> b ;
    return a-b ;
}

void mul()
{
    system("cls") ;
    system("color 0C") ;
    cout << "WELCOME TO MULTIPLICATION" << endl ;
    cout << "ENTER TWO NUMBER'S:" << endl;
    double a , b ;
    cin >> a >> b ;
    cout << "MULTIPLICATION:" << a*b << endl ;
}

void div()
{
    system("cls") ;
    system("color 0D") ;
    cout << "WELCOME TO DIVISION" << endl ;
    cout << "ENTER TWO NUMBER'S:" << endl;
    double a , b ;
    cin >> a >> b ;
    cout << "DIVISION:" << a/b << endl ;
}

void sqr()
{
    system("cls") ;
    system("color 0E") ;
    cout << "WELCOME TO SQUARE" << endl ;
    cout << "ENTER THE NUMBER:" << endl;
    double a ;
    cin >> a ;
    cout << "SQUARE:" << a*a << endl ;
}

void qb()
{
    system("cls") ;
    system("color 0F") ;
    cout << "WELCOME TO QUBE" << endl ;
    cout << "ENTER THE NUMBER:" << endl;
    double a ;
    cin >> a ;
    cout << "QUBE:" << a*a*a << endl ;
}


void per()
{
    system("cls") ;
    system("color 0e") ;
    cout << "WELCOME TO PERCENTAGE" << endl ;
    cout << "ENTER THE NUMBER:" << endl;
    double a ;
    cin >> a ;
    cout << "ENTER THE PERCENTAGE NUMBER:" << endl;
    double b ;
    cin >> b ;
    cout << "MULTIPLICATION:" << a*b/100 << endl ;
}

void OPAR_T()
{
    cout << "ENTER THE KEY:" << endl ;
    int k ;
    cin >> k ;

    switch (k)
        {
            case 1 :
                {
                    add();
                    cout << "PLEASE PRESS TO TAKE NEXT STEP" << endl;
                    getch() ;
                    system("cls") ;
                    show() ;
                    OPAR_T() ;
                    break ;

                }

            case 2 :
                {
                    system("cls") ;
                    system("color 0B") ;
                    cout << "WELCOME TO SUBTRACTION" << endl ;
                    cout << "SUBTRACTION:" << sub() << endl ;
                    getch() ;
                    system("cls") ;
                    show() ;
                    OPAR_T() ;
                    break ;

                }

                case 3 :
                {
                    mul();
                    cout << "PLEASE PRESS TO TAKE NEXT STEP" << endl;
                    getch() ;
                    system("cls") ;
                    show() ;
                    OPAR_T() ;
                    break ;

                }

                case 4 :
                {
                    div();
                    cout << "PLEASE PRESS TO TAKE NEXT STEP" << endl;
                    getch() ;
                    system("cls") ;
                    show() ;
                    OPAR_T() ;
                    break ;

                }

                case 5 :
                {
                    sqr();
                    cout << "PLEASE PRESS TO TAKE NEXT STEP" << endl;
                    getch() ;
                    system("cls") ;
                    show() ;
                    OPAR_T() ;
                    break ;

                }

                case 6 :
                {
                    qb();
                    cout << "PLEASE PRESS TO TAKE NEXT STEP" << endl;
                    getch() ;
                    system("cls") ;
                    show() ;
                    OPAR_T() ;
                    break ;

                }

                case 7 :
                {
                    per();
                    cout << "PLEASE PRESS TO TAKE NEXT STEP" << endl;
                    getch() ;
                    system("cls") ;
                    show() ;
                    OPAR_T() ;
                    break ;

                }
                case 8 :
                {
                 system("cls") ;
                 system("color 07") ;
                 cout << "CASIO" <<  endl;
                 getch () ;
                 cout << "GOOD BYE" << endl;
                break ;
                }

                default :
                    {
                        system("cls") ;
                 system("color 0c") ;

                       cout << "MATH ERROR\nPRESS RIGHT KEY." << endl ;
                       getch() ;
                       OPAR_T() ;
                    }

        }
}

int main()
{
    system("color 08") ;
    show() ;
    OPAR_T() ;

    return 2 ;
}
