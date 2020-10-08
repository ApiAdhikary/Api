#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

class stck
{
    char a [5] ;
    int tos ;
public:
    void init()
    {
        tos = 0 ;
    }
    void push(char x)
    {
        if(tos == 5)
        {
            cout << "STACK IS FULL." << endl;
            return ;
        }
        a [tos] = x ;
        cout << "PUSH ALL OBJECT'S:" << a [tos] << endl;
        tos++ ;
    }
    char pop()
    {
        if(tos == 0)
        {
            cout << "STACK IS EMPTY." << endl;
            return 2 ;
        }
        tos--;
        return a [tos] ;
    }
}obj1,obj2;

int main()
{
    system("color 0F") ;

    obj1.init() ;
    obj2.init() ;

    cout << "\t\t\t\t\tPUSH STATEMENT'S" << endl;

    getch() ;

    obj1.push('A') ;
    obj2.push('a') ;
    obj1.push('B') ;
    obj2.push('b') ;
    obj1.push('C') ;
    obj2.push('c') ;
    obj1.push('D') ;
    obj2.push('d') ;
    obj1.push('E') ;
    obj2.push('e') ;

    getch() ;

    cout << "\t\t\t\t\tPOP STATEMENT'S" << endl;

    getch() ;


    cout << "\t\t\t\tOBJECT'S 1 POP" << endl;

    getch();



    for(int i=0 ; i<5 ; i++)
    {
        cout << "OBJ1 POP:" << obj1.pop() << endl;
    }

    getch() ;

    cout << "\t\t\t\tOBJECT'S 2 POP" << endl;

    getch();




    for(int i=0 ; i<5 ; i++)
    {
        cout << "OBJ2 POP:" << obj2.pop() << endl;
    }
    getch();

    system("cls") ;

    cout << "\t\t\t\t\tTHANK YOU" << endl;

    return 0;
}

