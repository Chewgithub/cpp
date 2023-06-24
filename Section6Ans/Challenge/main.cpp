#include <iostream>

using namespace std;

int main(){
    cout << "Hello, welcome to Chew's Carpet Cleaning Service" << endl;
    int arr[10] {0};
    cout <<arr;

    cout << "\nHow many large rooms would you like cleaned? ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    cout << "\nHow many small rooms would you like cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    double  price_per_small_room {25};
    double  price_per_large_room {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days


    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;

    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;

    double total_price_exclude_tax {0.0};
    total_price_exclude_tax=(number_of_small_rooms * price_per_small_room)+(number_of_large_rooms*price_per_large_room);

    cout << "Cost : $" << total_price_exclude_tax << endl;
    cout << "Tax: $" << total_price_exclude_tax * sales_tax << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << (total_price_exclude_tax) + (total_price_exclude_tax * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;

    return 0;
}