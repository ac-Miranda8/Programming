//Anne Clarisse Miranda
//BSCE 1-1
//Performance Task 1

#include<stdio.h>
#include <iostream>

using namespace std;


int main()
{
    int number;
    int n;

    cout << "Enter range of numbers : ";
    cin >> n; 
	cout << "Enter 5 consecutive numbers :";
	cin >> n;


    while (n <= 47) 
    {
        for(number = n; number <= n; number++) 
        {
            if(number % 2 !=0)
            {
                cout << "The odd numbers are:" <<number << endl; 
            }
        }

        for(number = n;number <= n; number++) 
        {
            if(number % 2 ==0)  
            {
                cout <<"The even numbers are:" <<number <<endl; 
            }
        }

        n++;
    }

    return 0; 
}