#include <iostream>
#include <vector>   

using namespace std;
// 1 dollar is 100cents
// 1 quarter is 25cents
// 1 dime is 10cents
// 1 nickel is 5cents
// 1 pennies is 1cents


int main() {
    int cents {0};
    cout<<"Enter an amount in cents: ";
    cin>>cents;
    cout<<"You can provide change as follows:"<<endl;

    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    

    int dollar_num {0};
    int quarter_num {0};
    int dime_num {0};
    int nickel_num {0};
    int pennies_num {0};
    int remainder {0};

    dollar_num=cents/dollar;
    remainder=cents%dollar;

    quarter_num=remainder/quarter;
    remainder=remainder%quarter;

    dime_num=remainder/dime;
    remainder=remainder%dime;

    nickel_num=remainder/nickel;
    remainder=remainder%nickel;

    pennies_num=remainder;

    cout<<"dollars: "<<dollar_num<<endl;
    cout<<"quarter: "<<quarter_num<<endl;
    cout<<"dime: "<<dime_num<<endl;
    cout<<"nickel: "<<nickel_num<<endl;
    cout<<"pennies: "<<pennies_num<<endl;

    
    
    return 0;
}

