#include <iostream>

using namespace std;

int main(void){
    while (true){
    int operation = 0;
    float input = 0;
    float sinput = 0;
    float output = 0;
    float change = 0;

    cout << "enter a function" << endl << "1:Addition" << endl << "2:Subtraction" << endl << "3:Multiplication" << endl << "4:Division" << endl << "5:Exponent" << endl <<"Enter a number here to choose:";
    cin >> operation;
    cout << "Enter the first value for the function:";
    cin >> input;
    cout << "Enter the second value for the funciton:";
    cin >> sinput;
    if (operation==1){
    output = input + sinput;
    } 
    if (operation==2){
    output = input - sinput;   
    } 
    if (operation==3){
    output = input * sinput;
    } 
    if (operation==4){
    output = input / sinput;    
    } 
    if (operation==5){
        change = input;
        for (int num=1; num < sinput; num++){
            input = input * change;
        }
        output = input;
    }  
    cout << "The result is:" << output;
    cout << endl;
    }
    return 0;
    
}