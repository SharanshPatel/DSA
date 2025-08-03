
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


/*  PATTERN6
   This function prints a pyramid pattern of asterisks.
   For example, if N = 5, the output will be:
       * 
      * * 
     * * * 
    * * * * 
   * * * * *
*/
void pattern6(int N)
{
      for(int i=1;i<=2*N-1;i++){
          
          int stars = i;
          
          if(i>N) stars = 2*N-i;
          
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
        
          cout<<endl;
      }
}

/*  PATTERN7
   This function prints a pattern with numbers and spaces.
   For example, if N = 5, the output will be:
   1        1
   1 2    2 1
   1 2 3 3 2 1
   1 2 3 4 4 3 2 1
   1 2 3 4 5 5 4 3 2 1
*/
void pattern7(int N)
{
      int spaces = 2*(N-1);

      for(int i=1;i<=N;i++){
          
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          for(int j=i;j>=1;j--){
              cout<<j;
          }

          cout<<endl;

          spaces-=2;
      }
}

/*  PATTERN8
   This function prints a pattern of increasing numbers.
   For example, if N = 5, the output will be:
   1 
   1 2 
   1 2 3 
   1 2 3 4 
   1 2 3 4 5
*/

void pattern8(int N)
{
      int num =1;
      
      for(int i=1;i<=N;i++){
          
          for(int j=1;j<=i;j++){
              cout<<num<<" ";
              num =num+1;
          }

          cout<<endl;
          
      }
}



void pattern9(int N)
{

      int iniS = 0;
      for(int i=0;i< N;i++){

          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }

          for(int j=0;j<iniS;j++){
              cout<<" ";
          }

          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          iniS+=2;
          
          cout<<endl;
      }
      
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          iniS-=2;
          cout<<endl;
      }
      
}



int main() {
    int N = 5;
    pattern5(N);
    return 0;
}

