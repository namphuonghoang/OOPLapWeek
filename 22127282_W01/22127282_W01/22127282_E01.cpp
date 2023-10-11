#include "Function.h"
int main() {
    Fraction f1, f2, result;
    int choice;
    cout << "Fraction Calculator Menu:" << endl;
    cout << "1. Input Fraction" << endl;
    cout << "2. Output Fractions" << endl;
    cout << "3. Add Fractions" << endl;
    cout << "4. Subtract Fractions" << endl;
    cout << "5. Multiply Fractions" << endl;
    cout << "6. Divide Fractions" << endl;
    cout << "7. Reduce Fraction" << endl;
    cout << "8. Compare Fractions" << endl;
    cout << "9. Check if Fraction is Positive" << endl;
    cout << "10. Check if Fraction is Negative" << endl;
    cout << "11. Check if Fraction is Zero" << endl;
    cout << "0. Exit" << endl;


        while (1)
        {
            cout << "Enter your choice: ";
            cin >> choice;
            if (choice == 0)
            {
                cout << "Thanks for using";
                break;
            }
            else if(choice == 1)
                { 
                    int c;
                    cout << "1.Input Fraction 1" << endl;
                    cout << "2.Input Fraction 2"<<endl;
                    cout << "0. Exit" << endl;
                    cout << "Enter your choice: ";
                    cin >> c;
                    if (c == 1) Input(f1);
                    if (c == 2) Input(f2);
                    cout << endl;
                }
            else if (choice == 2)
            {
                int c;
                cout << "1.Output Fraction 1" << endl;
                cout << "2.Output Fraction 2" << endl;
                cout << "3.Output Fraction result" << endl;
                cout << "0. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> c;
                if (c == 1) 
                {
                    cout << "Fraction 1:"; Output(f1);
                }
                if (c == 2)
                {
                    cout << "Fraction 2:"; Output(f2);
                }
                if (c == 3)
                {
                    cout << "Fraction result:"; Output(result);
                }
                cout << endl;

            }       
            else if (choice == 3)
            {
                result = Add2Fractions(f1, f2);
                cout << "Fraction result:";
                Output(result);
                cout << endl;

            }
            else if (choice == 4)
            {
                result = Substract2Fractions(f1, f2);
                cout << "Fraction result:";
                Output(result);
                cout << endl;

            }
            else if (choice == 5)
            {
                result = Multiply2Fractions(f1, f2);
                cout << "Fraction result:";
                Output(result);
                cout << endl;

            }
            else if (choice == 6)
            {
                result = Divide2fractions(f1, f2);
                cout << "Fraction result:";
                Output(result);
                cout << endl;

            }
            else if (choice == 7)
            {
                int c;
                cout << "1.Reduce Fraction 1" << endl;
                cout << "2.Reduce Fraction 2" << endl;
                cout << "3.Reduce Fraction result" << endl;
                cout << "0. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> c;
                if (c == 1)
                {
                    Reduce(f1);
                    cout << "Fraction 1:"; Output(f1);
                }
                if (c == 2)
                {
                    Reduce(f2);
                    cout << "Fraction 2:"; Output(f2);
                }
                if (c == 3)
                {
                    Reduce(result);
                    cout << "Fraction result:"; Output(result);
                }
                cout << endl;

            }
            else if (choice == 8)
            {
                int cmp = Compare(f1, f2);
                if (cmp == -1)
                    cout << "Fraction 1 is less than Fraction 2" << endl;
                else if (cmp == 0)
                    cout << "Fraction 1 is equal to Fraction 2" << endl;
                else
                    cout << "Fraction 1 is greater than Fraction 2" << endl;
                cout << endl;

            }
            else if (choice == 9)
            {
                int c;
                cout << "1.Check Fraction 1" << endl;
                cout << "2.Check Fraction 2" << endl;
                cout << "3.Check Fraction result" << endl;
                cout << "0. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> c;
                if (c == 1)
                {
                    if (IsPositive(f1))
                        cout << "Fraction 1 is positive" << endl;
                    else
                        cout << "Fraction 1 is not positive" << endl;
                }
                if (c == 2)
                {
                    if (IsPositive(f2))
                        cout << "Fraction 2 is positive" << endl;
                    else
                        cout << "Fraction 2 is not positive" << endl;
                }
                if (c == 3)
                {
                    if (IsPositive(result))
                        cout << "Fraction result is positive" << endl;
                    else
                        cout << "Fraction result is not positive" << endl;
                }
                cout << endl;

            }
            else if (choice == 10)
            {
                int c;
                cout << "1.Check Fraction 1" << endl;
                cout << "2.Check Fraction 2" << endl;
                cout << "3.Check Fraction result" << endl;
                cout << "0. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> c;
                if (c == 1)
                {
                    if (IsNegative(f1))
                        cout << "Fraction 1 is negative" << endl;
                    else
                        cout << "Fraction 1 is not negative" << endl;
                }
                if (c == 2)
                {
                    if (IsNegative(f2))
                        cout << "Fraction 2 is negative" << endl;
                    else
                        cout << "Fraction 2 is not negative" << endl;
                }
                if (c == 3)
                {
                    if (IsNegative(result))
                        cout << "Fraction result is Negative" << endl;
                    else
                        cout << "Fraction result is not Negative" << endl;
                }
                cout << endl;

            }
            else if (choice == 11)
            {
                int c;
                cout << "1.Check Fraction 1" << endl;
                cout << "2.Check Fraction 2" << endl;
                cout << "3.Check Fraction result" << endl;
                cout << "0. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> c;
                if (c == 1)
                {
                    if (IsZero(f1))
                        cout << "Fraction 1 is zero" << endl;
                    else
                        cout << "Fraction 1 is not zero" << endl;
                }
                if (c == 2)
                {
                    if (IsNegative(f2))
                        cout << "Fraction 2 is zero" << endl;
                    else
                        cout << "Fraction 2 is not zero" << endl;
                }
                if (c == 3)
                {
                    if (IsNegative(result))
                        cout << "Fraction result is zero" << endl;
                    else
                        cout << "Fraction result is not zero" << endl;
                }
                cout << endl;

            }
            else cout << "Invalid choice. Please enter a valid option. \n" << endl;
        
        } 

    return 0;
}