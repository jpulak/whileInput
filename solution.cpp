//program for using while loop and outputting respective results

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    //initializing vars
    
    int num;
    int positive = 0;
    int negative = 0;
    int product = 1;
    int sum = 0;
    
    //first statement
    
    cout << "Enter a whole number [enter 0 to end input]: ";
    cin >> num;
    
    // if/else statement for starting while loop
    
    if (num != 0)
    {
        
        // add in first input
        
        if (num > 0)
        {
            positive += 1;
            sum += num;
        }
        else if (num < 0)
        {
            negative += 1;
            product *= num;
        }
        
        // while loop for rest of number
        
        while (num != 0)
        {
            cout << "Enter another whole number [enter 0 to end input]: ";
            cin >> num;
            if (num > 0)
            {
                positive += 1;
                sum += num;
            }
            else if (num < 0)
            {
                negative += 1;
                product *= num;
            }
        }
        
        //output final results
        
        cout << endl;
        
        //positives
        
        if (positive > 0)
        {
            if (positive == 1)
            {
                cout << positive << " positive number was entered. It was a " << sum << "." << endl << endl;   
            }
            else
            {
                cout << positive << " positive numbers were entered. Their sum was " << sum << "." << endl << endl;
            }
        }
        else
        {
            cout << "No positive numbers were entered." << endl << endl;
        }
        
        //negatives
        
        if (negative > 0)
        {
            if (negative == 1)
            {
               cout << negative << " negative number was entered. It was a " << product << "." << endl;
            }
            else
            {
               cout << negative << " negative numbers were entered. Their product was " << product << "." << endl;
            }
        }
        else
        {
            cout << "No negative numbers were entered." << endl;
        }
    }
    else
    {
        cout << "No positive numbers were entered." << endl << endl;
        cout << "No negative numbers were entered." << endl;
    }
    return 0;
}
