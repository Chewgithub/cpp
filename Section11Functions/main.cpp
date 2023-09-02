#include <iostream>
#include <string>
using namespace std;

//to use pass-by reference, "&" is added to the front of variable name
void scale_num(int &num);


void print_array(const int numbers[], size_t size_of_numbers){
    for (size_t i = 0; i < size_of_numbers; i++)
    {
        cout<<numbers[i]<<endl;
        
    }

    //Can't modify numbers since its a constant
    // numbers[0]=4;


    int num=1000;
    scale_num(num);
    cout<<"num: "<<num;
}




int main() {
    int num[] {1,2,3,4,5};
    print_array(num,5);

    return 0;
}



void scale_num(int &num){
    if (num>100){
        num=100;
    }
}