
#include <iostream>
using namespace std;

/*  PATTERN1
   This function prints a square pattern of asterisks.
   For example, if N = 5, the output will be:
   * * * * *
   * * * * *
   * * * * *
   * * * * *
   * * * * *
*/
void pattern1(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

/*  PATTERN2
   This function prints a right-angled triangle pattern of asterisks.
   For example, if N = 5, the output will be:
   * 
   * * 
   * * * 
   * * * * 
   * * * * *
*/
void pattern2(int N)
{
    for (int i = 0;i < N; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*  PATTERN3
   This function prints a right-angled triangle pattern of numbers.
   For example, if N = 5, the output will be:
   1 
   2 2 
   3 3 3 
   4 4 4 4 
   5 5 5 5 5
*/
void pattern3(int N)
{
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout << i << " ";
        }
        cout<<endl ;
    }
}

/*  PATTERN4
   This function prints an inverted right-angled triangle pattern of asterisks.
   For example, if N = 5, the output will be:
   * * * * *
   * * * *
   * * *
   * *
   *
*/
void pattern4(int N)
{
    for(int i=0; i<=N; i++)
    {
        for(int j=N; j>=i; j--)
        {
            cout << "*" << " ";
        }
        cout<<endl ;
    }
}

/*  PATTERN5
   This function prints an inverted right-angled triangle pattern of numbers.
   For example, if N = 5, the output will be:
   0 0 0 0 0 
   1 1 1 1 
   2 2 2 
   3 3 
   4
*/
void pattern5(int N)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N-i; j++)
        {
            cout << i << " ";
        }
        cout<<endl ;
    }
}



int main() {
    int N = 5;
    pattern5(N);
    return 0;
}

