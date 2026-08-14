#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void randomaizer(pair<int, int> casino, int num1, int num2, int cash) {
    srand(time(nullptr));
    cout << "press eny key to roll" << endl;
    cin.get();
    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    casino.first = num1;
    casino.second = num2;
    cout << "your number 1 = " << casino.first << endl;
    cout << "your number 2 = " << casino.second << endl;
    if(casino.first == casino.second) {
        cout << "congratulations!" << endl;
        if(casino.first == 1) {
            cout << "your cash: " << cash + 50 << endl;
        }
        else {
            cout << "your cash: " << cash + 40 << endl;        
        }
    }
    else {
        cout << "no lucky!" << endl;
    }
}

int main() {
pair<int, int> casik;
int numb1, numb2;
int cash = 250;
string input;
cout << "1.press r to roll(50 cash)" << endl;
cout << "2.press q to exit" << endl;
cout << "3.press s to see cash" << endl;
cout << "4.cash = " << cash;
while(true) {
cout << "[INPUT]!user~> ";
cin >> input;
if(input == "r") {
if(cash <= 49) {
cout << "you are don't have cash! exit!" << endl;
}
else {
cout << "cash withdrawn press any key to start to roll, cash: " << cash - 50 << endl;
cin.get();
randomaizer(casik, numb1, numb2, cash);
cash -= 50;
}

}
else if(input == "q") {
break;
}
else if(input == "s") {
cout << "cash: " << cash << endl;

}
else {
cout << "incorrect command!" << endl;
}
}



}


