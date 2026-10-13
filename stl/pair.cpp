#include <iostream>

using namespace std;
pair<string, int> stats;
void my_func(string name, int old) {
    cout << "hello!" << endl;
    cout <<"your name: ";
    cin >> name;
    cout << "years old: ";
    cin >> old;
    stats.first = name;
    stats.second = old;
    cout << "your name a " << stats.first << endl;
    cout << "you a " << stats.second << " years old" << endl;
}

int main() {
    string reall_name;
    int reall_old;
    my_func(reall_name, reall_old);

    return 0;
}
