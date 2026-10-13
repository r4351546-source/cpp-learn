#include <iostream>
#include <string>
#include <cstdlib>
#include <random>
#include <vector>
#include <chrono>
#include <thread>


using namespace std;


class player {
public:
int hp;
int damage;
int xp;


void pplayerS() {
vector<string> status {
    "god",
    "special",
    "simple"
    
};
 random_device rd;
 mt19937 gen(rd());
 uniform_int_distribution<size_t> distrib(0, status.size() - 1);
 size_t randomIndex = distrib(gen);
 cout << "your status:" << status[randomIndex] << endl;
 
 if(status[randomIndex] == "god") {
        hp = 130;
  xp = 100;//100/1000 lvl 1
  damage = 20;
  if(xp >= 1000 && xp <= 3000) {
    hp = 150;
    damage = 25;
cout << "you reached lvl 2! your stats:" << endl;
cout << "hp:" << hp << endl;
cout << "damage:" << damage << endl;

}
if(xp >= 3000 && xp <= 5000) {
hp = 150;
    damage = 30;
    cout << "my congratulations! you reached level 3, your new stats:" << endl;
    cout << "hp:" << hp << endl;
    cout << "damage:" << damage << endl;

}
if(xp >= 5000 && xp <= 10000) {
    hp = 170;
    damage = 40;
    cout << "oooooh, you are a really profesional, your new stats:" << endl;
    cout << "hp:" << hp << endl;
    cout << "damage" << damage << endl;
}
if(xp >= 10000) {
    hp = 210;
    damage = 55;
    cout << "you are very good, your last stats:" << endl;
cout << "hp:" << hp << endl;
cout << "damage:" << damage << endl; 
}
 }
 else if(status[randomIndex] == "special") {
hp = 115;
  xp = 100;//100/1000 lvl 1
  damage = 15;
  if(xp >= 1000 && xp <= 3000) {
hp = 125;
damage = 20;
cout << "you are reached level 2! your stats:" << endl;
cout << "hp:" << hp << endl;
cout << "damage:" << damage << endl;
  }
  if(xp >= 3000 && xp <= 5000) {
  hp = 130;
  damage = 25;
  cout << "congratulations, your level 3, your new stats:" << endl;
  cout << "hp:" << hp << endl;
  cout << "damage:" << damage << endl;
  }
  if(xp >= 5000 && xp <= 10000) {
      hp = 135;
      damage = 30;
      cout << "you are a proffesional! you reached level 4, your new stats:" << endl;
      cout << "hp:" << hp << endl;
      cout << "damage:" << damage << endl;
  }
  if(xp >= 10000) {
hp = 143;
damage = 36;
cout << "you are a god in this game, your final stats:" << endl;
cout << "hp:" << hp << endl;
cout << "damage:" << damage << endl;

  }
 }
if(status[randomIndex] = "simple") {

}
}

};




class magic {
public:


void magia() {
int mxp;
int mdamage;
vector<string> magics {
    "fire(1lvl)",
    "wind(1lvl)",
    "ice(1lvl)"
};
 random_device rd;
 mt19937 gen(rd());
 uniform_int_distribution<size_t> distrib(0, magics.size() - 1);
 size_t randomIndex = distrib(gen);
 cout << "your magic:" << magics[randomIndex] << endl;
 if(magics[randomIndex] == "fire(1lvl)") {
mdamage = 40;
 }
else if(magics[randomIndex] == "wind(1lvl)") {
mdamage = 25;
}
else if(magics[randomIndex] == "ice(1lvl)") {
mdamage = 30;
}
 if(mxp >= 150 && mxp <= 300) {
if(magics[randomIndex] == "fire(1lvl)") {
mdamage = 45;
}
else if(magics[randomIndex] == "wind(1lvl)") {
mdamage = 25; 
}
cout << "your magic are reached level 2" << mdamage << endl;
 }
}

};

class weapon {
public:

void weapons() {
    int damage;

vector<string> weapons {
    "sword",
    "axe",
    "mace"
};
 random_device rd;
 mt19937 gen(rd());
 uniform_int_distribution<size_t> distrib(0, weapons.size() - 1);
 size_t randomIndex = distrib(gen);
 string imps;
 cout << "press any key to roll weapon" << endl;
 cin >> imps;
 cout << "your weapon:" << weapons[randomIndex] << endl;
if(weapons[randomIndex] == "sword") {
    damage = 65;
}
}
};

class lobbyAGame : public player , magic , weapon  {
public:
player playM;
magic gameM;
weapon randomM;
void ALL() {

}

 
};



int main() {

    return 0;
}
