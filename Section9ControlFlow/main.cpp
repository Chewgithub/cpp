#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    vector<int> numbers{};
    char choice{};

    while (true)
    {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest numbers" << endl;
        cout << "L - Display the largest numbers" << endl;
        cout << "Q - Quit" << endl
             << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'p' or choice == 'P')
        {
            cout << "[";
            for (auto num : numbers)
            {
                cout << " " << num;
            }
            cout << " ]";

            if (numbers.size() == 0)
            {
                cout << " - the list is empty";
            }

            cout << endl
                 << endl;
        }

        else if (choice == 'a' or choice == 'A')
        {
            int entered_num;
            cout << "Enter an integer to add to the list: ";
            cin >> entered_num;
            numbers.push_back(entered_num);
            cout << entered_num << " added" << endl
                 << endl;
        }

        else if (choice == 'm' or choice == 'M')
        {
            if (numbers.size() == 0)
            {
                cout << "Unable to determine the mean - list is empty" << endl
                     << endl;
            }
            else
            {
                float mean_value{0};
                float total{0};

                for (auto num : numbers)
                {
                    total += num;
                }
                cout << setprecision(2);
                mean_value = total / numbers.size();

                cout << "The mean is : " << mean_value << endl
                     << endl;
            }
        }

        else if (choice == 's' or choice == 'S')
        {

            int current;

            if (numbers.size() == 0)
            {
                cout << "Unable to determine the smallest number - list is empty" << endl
                     << endl;
            }
            else
            {
                current = numbers[0];
                for (auto num : numbers)
                {
                    if (num < current)
                    {
                        current = num;
                    }
                }
                cout << current << endl
                     << endl;
            }
        }

        else if (choice == 'l' or choice == 'L')
        {

            int current;
            if (numbers.size() == 0)
            {
                cout << "Unable to determine the largest number - list is empty" << endl
                     << endl;
            }
            else
            {
                current = numbers[0];
                for (auto num : numbers)
                {
                    if (num > current)
                    {
                        current = num;
                    }
                }
                cout << current << endl
                     << endl;
            }
        }
        else if (choice == 'q' or choice == 'Q')
        {
            cout << "Goodbye";
            break;
        }

        else
        {
            cout << "\n\nUnknown selection, please try again" << endl
                 << endl;
        }
    }

    return 0;
}
