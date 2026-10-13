#include <iostream>
#include <string>

using namespace std;

class bankUser {
    protected:
        string password;
        string checkword;
            float summ;
    public:
            void user() {
                cout << "hello user! for using this bank, please registry" << endl;
                cout << "choose 1 for regstry" << endl;
                cout << "choose 2 to exit" << endl;
                int x;
                cin >> x;
                if(x == 1) {
                    string usernick;
                    cout << "username:";
                    cin >> usernick;
                    cout << "hello the user" << usernick << endl;
                    cout << "password:";
                    cin >> password;
                    cout << "agree password:";
                        cin >> checkword;
                        while(password != checkword) {
                            cout << "ERROR:251" << endl << "try again:";
                            cin >> checkword;
                        }
                        cout << "congratulations! you are registred in my bank" << endl;
                }
                if(x == 2) {
                    exit(0);
                }
            }

};

int main() {
bankUser usig;
usig.user();
return 0;
}
