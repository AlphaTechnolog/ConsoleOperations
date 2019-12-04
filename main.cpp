#include <iostream>
#include <string>

using namespace std;

int main()
{
    // I starting the next code
    double num1 = 0,
        num2 = 0,
        result = 0;

    string operatorOfOperation = "";

    cout << "Write the your operation form:" << endl;
    cout << "Example: 2 + 2" << "\n" << endl;

    cout << "Your operation: ";
    cin >> num1 >> operatorOfOperation >> num2;

    if (operatorOfOperation == "+")
    {
        cout << "\n" << num1 << " " << operatorOfOperation << " " << num2 << " = " << num1 + num2;
    }
    else if (operatorOfOperation == "-")
    {
        cout << "\n" << num1 << " " << operatorOfOperation << " " << num2 << " = " << num1 - num2;
    }
    else if (operatorOfOperation == "*")
    {
        cout << "\n" << num1 << " " << operatorOfOperation << " " << num2 << " = " << num1 * num2;
    }
    else if (operatorOfOperation == "/")
    {
        if (num1 == 0 || num2 == 0)
        {
            if (num1 == 0)
            {
                while (num1 == 0)
                {
                    cout << "\nWrite a valid first number: ";
                    cin >> num1;
                }
            }

            if (num2 == 0)
            {
                while (num2 == 0)
                {
                    cout << "\nWrite a valid second number: ";
                    cin >> num2;
                }
            }
        }
        cout << "\n" << num1 << " " << operatorOfOperation << " " << num2 << " = " << num1 / num2;
    }
    else
    {
        cout << "\n" << "Error: Your operator for this operation has been is not valid" << endl;
    }

    // Not close the console in the application final
    cout << "\n\n" << "Press a key and then press enter to exit to this application... ";

    cin.ignore();
    cin.get();

    return 0;
}
