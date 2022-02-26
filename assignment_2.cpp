#include <iostream>
using namespace std;

int main()
{
    // Variables
   int i,x,n,sum,sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10;
        float avg ;
   /*1. Write a program that print from 1 to 10
   Output: 1 2 3 4 5 6 7 8 9 10*/
     for (i = 0; i <11; i++)
     {
         cout<<i<<endl;
     };
     //                                            down
    //===============================================================================================================
    /* 2. Write a program that print from 10 to 1
    Output:
    10 9 8 7 6 5 4 3 2 1*/
    for(i=10; i>0;i--) {
    cout<<i<<endl;
    };
    //                                              down
    //============================================================================================================
     /* 3. Write a program that takes an integer from the user then print the sum of(1 up ton).
    Example
    Input 5
    Output: 15
    Hint: sum = 1+2+3+4+5=15*/
      cout << "Enter a positive integer: ";
        cin >> n;
     for (int i = 1; i <= n; i++) {
        cout <<i << endl ;     
        cout << i * sum <<endl ;
        }
        //                                         
    //==============================================================================================================
    /* 4 Write a program to read 10 numbers from the user then print the average.
    Example
    Input 5 3 2 6 7 1 10 9 8 4
    Output 5.5*/
      cout << "Enter a positive integer: ";
        cin >> sum1;
        cin >> sum2;
        cin >> sum3;
        cin >> sum4;
        cin >> sum5;
        cin >> sum6;
        cin >> sum7;
        cin >> sum8;
        cin >> sum9;
        cin >> sum10;
     avg = sum1 + sum2 + sum3 + sum4 + sum5 + sum6 + sum7 + sum8 + sum9 + sum10 ;
     cout<< avg /10;
    //===============================================================================================================
    /* 5. Write a program i to display the multiplication table of a given integer
    Example
    Input 5
    Output
    1*5 = 5
    2*5 = 10
    ...
    ...
    12*5 = 60*/
     cout<<"enter number display:";
      cin >> n;
     for (i = 1; i <13; ++i)
     {
         cout<<i<<"*"<<n<<" = "<<n*i<<endl;
       
     }
    //===============================================================================================================
    /* 6. Write a program to print alphabets from a to z
    Output:
    a b c d .... Z*/
    
    //===============================================================================================================
    /* 7. Write a program that allows to user to insert infinite integers until he
    insert negative number then print summation of all integers
    Example
    Input 5 7 8 3 -2 1
    Output 25*/
    //===============================================================================================================
    /* 8. Write a program that allows to user to insert infinite integers until he
    insert negative number then print the max integer.
    Example
    Input 5 3 8 7 9 4 -1
    Output 9*/
    //===============================================================================================================
    /* 9. Write a program to input a number and calculate its factorial.
    Input: 5
    Output:
    The factorial is: 120
    Hint: factorial of 5 is 1*2*3*4*5 =120*/
     cin>>n;
    for (i =1;i<=n; i++){
    sum = sum * i;
    cout<<sum<<endl;
    };
     cout << "factorial is "<<n<<"= "<<sum<<endl;
    //                                  Done
    
    //===============================================================================================================
    /* 10.Write a program to find the power of a number.
    Input
    Input base: 2
    Input exponent: 5
    Output:
    2^5 = 32 */
    return 0;
}
