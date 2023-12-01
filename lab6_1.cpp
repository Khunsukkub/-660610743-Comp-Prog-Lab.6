#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> num;

    int input;

    while(true){
        cout << "Enter an integer: ";
        cin >> input;
        num.push_back(input);
        if(input == 0){
            break;
        }
    }

    int i = 0 , sumE = 0 , sumO = 0;
    
    while(i < num.size()){
        if(num[i]%2 == 0){
            sumE += 1;
        } else{
            sumO += 1;
        }
        i++;
    }

    cout << "#Even numbers = " << sumE-1 << endl;
    cout << "#Odd numbers = " << sumO << endl;
    return 0;

}
