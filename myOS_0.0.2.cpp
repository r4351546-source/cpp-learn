#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

void nio() {
    
    #define RESET   "\033[0m"
    #define GREEN   "\033[1;32m"
    #define CYAN    "\033[1;36m"
    #define YELLOW  "\033[1;33m"
    #define BLUE    "\033[1;34m"
    #define MAGENTA "\033[1;35m"

    std::cout << CYAN << "  ████████  ████████ " << GREEN << "  root" << RESET << "@" << GREEN << "tfos\n";
    std::cout << CYAN << "     ██     ██       " << RESET << "  -------------\n";
    std::cout << CYAN << "     ██     ██████   " << YELLOW << "  OS: " << RESET << "T-FOS v0.1 (Terminal-Friendly)\n";
    std::cout << CYAN << "     ██     ██       " << YELLOW << "  Shell: " << RESET << "TH-Shell (Custom Engine)\n";
    std::cout << CYAN << "     ██     ██       " << YELLOW << "  Host: " << RESET << "emulator\n";
    std::cout << CYAN << "                     " << YELLOW << "  Architecture: " << RESET << "C++ Bare Logic\n\n";
    
    
    std::cout << "  " << "███ " << GREEN << "███ " << YELLOW << "███ " << BLUE << "███ " << MAGENTA << "███ " << CYAN << "███" << RESET << "\n\n";
}

void TF_os_main() {
    string login = "user"; 
    string password;
    string command;
    string dop_comm;
    string shell = "TH-Shell(C++architecture)";
    string namefold;
    vector<string> folders;

    while (true) {
        
        cout << "\033[1;32m" << login << "@T-FOS\033[0m[\033[1;34mtyping\033[0m]:> ";
        
        if (!(cin >> command)) {
            break; 
        }

        
        if (command == "reg") {
            cin >> dop_comm;
            if (dop_comm == "-u") {
                cin >> login >> password;
                cout << "[SUCCESS] User " << login << " registered successfully!\n";
            } else {
                cout << "[ERROR] Invalid reg argument. Use: reg -u <user> <pass>\n";
            }
        }
    
        else if (command == "niofh") {
            nio();
        }
        
        else if (command == "-help-") {
            cout << "--- T-FOS Help Menu ---\n";
            cout << "  niofh        - show system info & logo\n";
            cout << "  reg -u u p   - register new user\n";
            cout << "  folcr <name> - create folder\n";
            cout << "  lsc          - list all folders\n";
            cout << "  whoa -u      - show current user\n";
            cout << "  whoa -t      - show shell type\n";
            cout << "  exit / quit  - exit T-FOS\n";
        }

        else if (command == "folcr") {
            cin >> namefold;
            folders.push_back(namefold);
            cout << "[OK] Folder '" << namefold << "' created.\n";
        }
        
        else if (command == "lsc") {
            cout << "--- Folders list ---\n";
            if (folders.empty()) {
                cout << " (no folders created yet)\n";
            } else {
                for (auto x : folders) {
                    cout << " . " << x << endl;
                }
            }
        }
        
        else if (command == "whoa") {
            cin >> dop_comm;
            if (dop_comm == "-u") {
                cout << "Current user: " << login << "\n";
            } else if (dop_comm == "-t") {
                cout << "Current shell: " << shell << "\n";
            } else {
                cout << "[ERROR] Unknown option for whoa. Use -u or -t\n";
            }
        }
        
        else if (command == "exit" || command == "quit") {
            cout << "Shutting down T-FOS... Goodbye!\n";
            exit(0);
        }
        
        else {
            cout << "[ERROR] Command not found: '" << command << "'. Type -help- for info.\n";
        }
    }
}

int main() {


    cout << "=== Welcome to T-FOS v0.0.1 (C++ Core) ===\n\n";
    TF_os_main();

    return 0;
}
