#include <iostream>

using namespace std;

#define SIZ 6
int rear = - 1 ;
int front = - 1 ;
char A [SIZ] ;

bool isFull()
{
    if(rear == front - 1 && rear == SIZ - 1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

void enQueue(char value)
{
    if(isFull())
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        if(front == - 1)
            front = 0 ;
           rear = (rear + 1)%SIZ ;
           A [rear] = value ;
    }
}

bool isEmpty()
{
    if(front == -1)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

char deQueue()
{
    if(isEmpty())
    {
        cout << "UNDERFLOW!!" << endl ;
        return -1 ;
    }
    else
    {
        if(front == rear)
        {

            front = - 1 ;
            rear = - 1 ;
        }
        else
        {
            front = (front + 1)%SIZ ;
        }


    }
     return A [front] ;
}

void dis()
{
    if(isEmpty())
    {
        cout << "EMPTY!!" << endl ;
    }
    else
    {
        cout << "FRONT: " << front << endl ;
        cout << "CICULAR QUEUE : [ " ;

        for(int i = front ; i<=rear ; i=(i+1)%SIZ)
        {
            cout << A [i] << " " ;
        }
        cout << " ] " << endl ;
        cout << "REAR: " << rear << endl ;
    }
}



int main()
{
    int key = 0 ;
    while(true)
    {
        cout << "1.INSERT 2.DELETE 3.SHOW 4.EXITS" << endl ;
        cout << "TAKE THE KEY: " ;
        cin >> key ;

      switch (key)
        {
          case 1 :
                  char elemants ;
                  cout << "INSRERT ALL: " ;
                  cin >> elemants ;
                  enQueue(elemants) ;

                  break ;

          case 2 :
                   cout << "DELETE ALL: " << deQueue() << endl ;

                   break ;

          case 3 :
                  dis() ;

                  break ;

          case 4 :
                  return 0 ;
        }

    }

  return 0 ;
}
