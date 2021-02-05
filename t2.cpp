#include <iostream>
using namespace std;
int main()
{
char grade;

cout<<"Enter your grade (A-F) : ";
cin>>grade;


switch( grade )
{
	case 'A' : cout << "Your score 80-100 points"<<endl;
	break;

	case 'B' : cout << "Your score 70-79 points"<<endl;
	break;

	case 'C' : cout << "Your score 60-69 points"<<endl;
	break;

	case 'D' : cout << "Your score 50-59 points"<<endl;
	break;

	case 'F' : cout << "Your score 0-49 points"<<endl;
	break;

	default: cout << "Please enter character (A-F) only,Thank you"<<endl;
}


return 0;
}
