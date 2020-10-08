#include<stdio.h>
#include <iostream>
#include<stdlib.h>
#include <windows.h>
#include <conio.h>
using namespace std ;
struct node
{
    int data ;
    node *next ;
};
node *front = NULL ;
node *rear = NULL ;

void enQueue(int item)
{
    node *curr = new node ;
    if(curr == NULL)
    {
        cout << "OVERFLOW!!" << endl ;
    }
    else
    {
        curr->data = item ;
        if(front == NULL)
        {
            front = curr ;
            rear = curr ;
            front->next = curr ;
            rear->next = curr ;
        }
        else
        {
            rear->next = curr ;
            rear = curr ;
            rear->next = NULL ;
        }
    }
}

int deQueue()
{
    node *curr = front ;
    if(front == NULL)
    {
        cout << "UNDERFLOW!!" << endl ;
    }
    else
    {
        curr = front ;
        front = front->next ;
        free(curr) ;
        cout << "DELETE: " << curr->data << endl ;
    }
    return 0 ;
}

void show()
{
    node *curr = front ;
    cout << "QUEUE: [ " ;
    while(curr != NULL)
    {
        cout << curr->data << "->" ;
        curr = curr->next ;
    }
    cout << " NULL ]" << endl ;
}

node *sear(int s_key)
{
    node *curr = front ;
    while(curr != NULL)
    {
        if(s_key == curr->data)
        {
            return curr ;
        }
        curr = curr->next ;
    }
    return NULL ;
}

int avarage()
{
    int sum = 0 , count = 0 ;
    double avg = 0 ;
    node *curr = front ;
    while(curr != NULL)
    {
        sum = curr->data + sum ;
        count++ ;
        curr = curr->next ;
    }
    cout << "SUM: " << sum << endl ;
    avg = (double)sum/count ;
    cout << "AVERAGE: " << avg << endl;
}

int main()
{
    int elem , n ;
    cout << "ENTER THE QUEUE NODE'S: " ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++)
    {
        cout << "ELEMANT'S: [ " << i << " ] = " ;
        cin >> elem ;
        enQueue(elem) ;
    }
    int key = 0 ;
    while(true)
    {

        cout << "1.INSERT 2.DELETE 3.SHOW 4.AVERAGE 5.SEARCHING 6.EXITS" << endl ;
        cout << "TAKE THE KEY: " ;
        cin >> key ;
        if(key == 1)
        {
            cout << "INSERT: " ;
            cin >> elem ;
            enQueue(elem);
        }
        else if(key == 2)
        {
            cout << deQueue() << endl ;
        }
        else if(key == 3)
        {
            show() ;
        }
        else if(key == 4)
        {
            avarage() ;
        }
        else if(key == 5)
        {
            cout << "ENTER THE VALUE OF SEARCHING: " ;
            cin >> elem ;
            sear(elem) ;
            if(sear(elem)==NULL) cout << "NOT FOUND!!" << endl ;
            else cout << "FOUND!!" << endl ;
        }
        else
        {
            return 0 ;
        }
    }
    return 0 ;
}
