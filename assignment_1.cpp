#include <iostream>

using namespace std;

int main()
{
    // notes sometimes I use printf because like a console.log in javascript, its easy
    // Variables
    int num;
    int num1 ;
    int num2 ;
    int num3 ;
    int width;
    int height;
    int perimeter;
    int area ;
    int i;
    int month;
    int sec, h, m, s;
    char en;
    int days, years, weeks;
    //Assignment 1
    cin >> num ;
    cout <<num ;
    // Assignment 2
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3 ;
    cout <<num1 + num2 + num3;
    // Assignment 3
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3 ;
   float average = num1 + num2 + num3;
    cout <<average /3;
    // Assignment 4
    cin >> width ;
    cin >> height ;
    perimeter = width * 2 + height * 2;
    cout << "perimeter = " <<perimeter << endl ;
    area = width * height;
    cout <<"area = " <<area <<endl;
    // Assignment 5
  cin >> days ;
    // Converts days to years, weeks and days
    years = days/365;
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);
    // Assignment 6
    //loops test
    for (i=1; i<=100; i++){
    if (i%3==0 && i%4==0){
        cout <<i <<" yes \t";
    }
    else {
        cout <<i<<" no\t";
    }
    };
    //Assignment 7
    cin >> num;
    if (num <0) {
        cout << "Negative";
    }else{
    cout <<"positive";
    };
    //Assignment 8


    //Assignment 9
    cin >> month;
   switch (month) {
  case 1:
    cout << "January";
    break;
  case 2:
    cout << "February";
    break;
  case 3:
    cout << "March";
    break;
  case 4:
    cout << "April";
    break;
  case 5:
    cout << "May";
    break;
  case 6:
    cout << "June";
    break;
  case 7:
    cout << "July";
    break;
  case 8:
    cout << "August";
    break;
  case 9:
    cout << "September";

    break;
  case 10:
    cout <<"October";
    break;
  case 11:
    cout <<"October";
    break ;
  case 12:
    cout <<"December";
    break;
    default:
   cout << "no month";
};
  //Assignment 10
	printf("Input seconds: ");
	scanf("%d", &sec);

	h = (sec/3600);

	m = (sec -(3600*h))/60;

	s = (sec -(3600*h)-(m*60));

	printf("H:M:S - %d:%d:%d\n",h,m,s);
	// Assignment 11
		cin >> num;
    num%2 == 0? cout<< "even" <<endl: cout << "odd" ;
   // Assignment 12
   cin >>en;
   if (en == 'a' || en == 'e' || en == 'i' || en == 'o' || en == 'u' )
   cout <<en<< " is a Vowel" << endl;
   else
   cout <<en<< " is a Consonant" << endl;

     // Assignment 13 I found the solution in the stackoverflow
cout << "Enter the first number: ";
    cin>>num1;
    cout << "Enter the second number: ";
    cin>>num2;
    cout << "Enter the third number: ";
    cin>>num3;

    cout<<"\n\nThe max number is: ";
    if((num1>num2)&&(num1>num3)){
        cout<<num1;
    }
    else if(num2>num3){
       cout<<num2;
    }
    else{
        cout<<num3;
    }

    cout<<"\n\nThe min number is: ";
    if((num1<num2)&&(num1<num3)){
        cout<<num1;
    }
    else if(num2<num3){
        cout<<num2;
    }
    else{
        cout<<num3;
    }

    return 0;
}
