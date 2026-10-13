#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class the_editor {
    public:
        unordered_map<string, string> comms;
        string comm1;
        string name;
        string command;
        void home() {
            cout << "1.add 'name' 'comm'\n";
            cout << "2.explain 'name'\n";
            cout << "3.list\n";
            cout << "4.remove 'name'\n";
            cout << "5.exit\n";
        while(true) {
            cout << "[command]::> ";
            cin >> comm1 ;
            if(comm1 == "add") {
                cin >> name >> command;
                comms[name] = command;
            }
            else if(comm1 == "explain") {
                cin >> name;
                comms.find(name);
                if(comms.find(name) != comms.end()) {
                    cout << "file not found" << endl;
                }
                else {
                cout << "name:>  " <<comms[name] << endl;
            }
                
            }
            else if(comm1 == "list") {
                for(auto x  : comms) {
        
                    cout << " |-- " << x.first << " => " << x.second << endl;
        

                
                }
            
            }
            else if(comm1 == "remove") {
                cin >> name;
                comms.erase(name);
                if(!comms.erase(name)) {
                    cout << "file not found to remove" << endl;
                }
                else {
                    cout << "file remove!" << endl;
                }
            }
            else if(comm1 == "exit") {
                break;
            }
            else {
                cout << "incorrect command" << endl;
            }
        }
        }
};

int main() {
the_editor reductor;
reductor.home();


return 0;
}
