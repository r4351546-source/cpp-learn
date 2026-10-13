#include <iostream>
#include <string>
#include <windows.h>
#include <clocale>
#include <chrono>
#include <thread>


using namespace std;

//--------------------------------------------------------------------------------------------------------
// а це, функція тадея для бою з юрою після бою з ольгою яремчій
//--------------------------------------------------------------------------------------------------------
void tadenext() {

}
//--------------------------------------------------------------------------------------------------------
// БІМ БАМ
// ця функція не буде робитися
// на цей момент я ще не вмію працювати з ними так, як вимагається щоб її зробити
//--------------------------------------------------------------------------------------------------------



//----------------------------------------------------
//початок(int main() {})
//----------------------------------------------------
int main()  {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "Ukranian");
	

	std::cout << "choose your fighter:\n" << endl;
	std::cout << "1.tadey" << endl;
	std::cout << "2.yura" << endl;
	cout << "3.bogdan" << endl;
	cout << "4.roma" << endl;
	cout << "5.olga yaremchuk" << endl;
	cout << "6.denys" << std::endl;
	

	//----------------------------------------------------
	// початок статистик 
	//----------------------------------------------------

		int avtoritet = 0;
		int reputation = 0;
		int zhyr;
		int absurd;
	
	//----------------------------------------------------
	// кінець статистик 
	//----------------------------------------------------
	int b;

	cin >> b;
	
	//----------------------------------------------------
	//  перший блок початок:БОЙОВИЙ ШЛЯХ ТАДЕУША
	//----------------------------------------------------
	if (b == 1) {
		cout << "твій боєць тадей, він жирна бомба і потребує легкого скілу(number 1)" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "твоi стати:" << endl;
		zhyr = 98;
		absurd = 2;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "твій авторитет у Бродах:" << avtoritet << endl;
		cout << "твоя репутація у Бродах:" << reputation << endl;
		cout << "твій жир(кг):" << zhyr << endl;
		cout << "твій рівень тупізму:" << absurd << "\n" << endl;
		int tadey;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "з ким ти хочеш битися?(вибери номер бійця зверху 2 або 3)" << endl;
		cin >> tadey;
		if (tadey == 2) {
			cout << "ти програв юрі! якщо б в тебе б був би противогаз до можливо ти б виграв, але не точно" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "твоi стати:" << endl;
			zhyr = 95;
			absurd = 0;
			avtoritet = -1;
			reputation = -1;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "твій авторитет у Бродах:" << avtoritet << endl;
			cout << "твоя репутація у Бродах:" << reputation << endl;
			cout << "твій жир(кг):" << zhyr << endl;
			cout << "твій рівень тупізму:" << absurd << "\n" << endl;
			this_thread::sleep_for(chrono::seconds(4));
			cout << "ти опозорився на всі Броди" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "тепер над тобою всі сміються" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "ти просто лузер!" << endl;
			this_thread::sleep_for(chrono::seconds(4));

		}
		else if (tadey == 3) {
			cout << "ти задавив богдана своїм жиром і виграв, мої вітання!\n" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "твоi стати:" << endl;
			zhyr = 99;
			absurd = 3;
			avtoritet = 1;
			reputation = 1;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "твій авторитет у Бродах:" << avtoritet << endl;
			cout << "твоя репутація у Бродах:" << reputation << endl;
			cout << "твій жир(кг):" << zhyr << endl;
			cout << "твій рівень тупізму:" << absurd << "\n" << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "твій наступний бій проти ольги яремчук\n " << endl;
			this_thread::sleep_for(chrono::seconds(3));

			cout << "1 день до твого бою, що будеш робити?\n" << endl;
			this_thread::sleep_for(chrono::milliseconds(150));
			cout << "1)поїм багета з торгового центру 'орися' " << endl;
			this_thread::sleep_for(chrono::milliseconds(150));
			cout << "2)подзвонити до ольги яремчук і говорити що англійська непотрібна для життя на її прикладі те що вона стала простою вчителькою" << endl;
			this_thread::sleep_for(chrono::milliseconds(150));
			cout << "3)запхати голову в морозильник на дві години" << endl;
			cin >> tadey;

			if (tadey == 1) {
				cout << "ти просто смачно поїв, підтримав форму жиру щоб завтра виграти" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				cout << "твоi стати:" << endl;
				zhyr = 103;
				absurd = 4;
				avtoritet = 1;
				reputation = 1;
				this_thread::sleep_for(chrono::seconds(1));
				cout << "твій авторитет у Бродах:" << avtoritet << endl;
				cout << "твоя репутація у Бродах:" << reputation << endl;
				cout << "твій жир(кг):" << zhyr << endl;
				cout << "твій рівень тупізму:" << absurd << "\n" << endl;
				this_thread::sleep_for(chrono::seconds(3));
				cout << "бам! вже наступив день бою проти ольги яремчук, лишилося 20 хвилин, тобі страшно бо ти вже уявив як ольга яремчук кидає в тебе зошит з двійкою і кричить на тебе" << endl;
				cout << "твої дії:" << endl;
				cout << "1)збігати швиденько за багетом поїсти його по дорозі і прибігти на місце бою" << endl;// це теж допрограмуй, а іменно що з тадеєм після його ударів
				cout << "2)нічого не робити" << endl; //допрограмуй рано ранковий я, дебіл, бо це ти ще навіть не починав програмувати
				cin >> tadey;

				if (tadey == 1) {
					cout << "лишилося 2 хвилини до бою, ти збігав в орисю і поів багет по дорозі назад і почуваєш себе впевненіше" << endl;
					cout << "твоi стати:" << endl;
					zhyr = 109;
					absurd = 5;
					avtoritet = 1;
					reputation = 2;
					this_thread::sleep_for(chrono::seconds(1));
					cout << "tvій авторитет у Бродах:" << avtoritet << endl;
					cout << "tvоя репутація у Бродах:" << reputation << endl;
					cout << "tvій жир(кг):" << zhyr << endl;
					cout << "tvій рівень тупізму:" << absurd << "\n" << endl;
					this_thread::sleep_for(chrono::seconds(3));
					cout << "ВЖЕ ПОЧАВСЯ БІЙ! ВИБЕРИ ЩО ХОЧЕШ ВИКОРИСТОВУВАТИ:" << endl;
					this_thread::sleep_for(chrono::seconds(1));
					cout << "1.міні удар животоm(використовує мінмум енергії і використовується і близі)" << endl;
					cout << "2.монстр удар животом(використовує максимум енергії але можна вдарити будь де і твій живіт нанесе сильний удар противнику)" << endl;

					cin >> tadey;
					if (tadey == 1) {
						cout << "ти промахнувся, і ще чомусь тебе стало трошки тошнити" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						cout << "вибери свої наступні дії:" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						cout << "1)просто стояти і приймати погрози і двійки від ольги яремчук" << endl;
						cout << "2)спробувати повоздуханити що ти зараз виграєш і різко пригнути пузом на неї" << endl;
						cin >> tadey;
						if (tadey == 1) {
							cout << "ти стояв так до кінця бою, і ти програв" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "твоi стати:" << endl;
							zhyr = 110;
							absurd = 4;
							avtoritet = 0;
							reputation = 0;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "твій авторитет у Бродах:" << avtoritet << endl;
							cout << "твоя репутація у Бродах:" << reputation << endl;
							cout << "твій жир(кг):" << zhyr << endl;
							cout << "твій рівень тупізму:" << absurd << "\n" << endl;
							this_thread::sleep_for(chrono::seconds(3));

						}
						else if (tadey == 2) {
							cout << "ти пригнув на ольгу яремчук...." << endl;
							this_thread::sleep_for(chrono::seconds(4));
							cout << "ти дуже довго пригав, і за цей час ольга встигла відійти" << endl;
							this_thread::sleep_for(chrono::seconds(4));
							cout << "ти програв..." << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "твоi стати:" << endl;
							zhyr = 110;
							absurd = 4;
							avtoritet = 0;
							reputation = 0;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "твій авторитет у Бродах:" << avtoritet << endl;
							cout << "твоя репутація у Бродах:" << reputation << endl;
							cout << "твій жир(кг):" << zhyr << endl;
							cout << "твій рівень тупізму:" << absurd << "\n" << endl;
							this_thread::sleep_for(chrono::seconds(3));
						}


					}
					else if (tadey == 2) {
						cout << "ти попав по ользі яремчук, але вона почала погрожувати тобі не атестацією, ти злякався + тебе тошнить від багета і втебе немає енергії, ольга яремчук наступає і виписує тобі одинички в журнал" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "тебе дуже тошнить через багет, твої дії:" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "просто стояти" << endl;
						cout << "нападати" << endl;
						cin >> tadey;
						if (tadey == 1) {
							cout << "ти програв" << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "твоi стати:" << endl;
							zhyr = 110;
							absurd = 4;
							avtoritet = 0;
							reputation = 0;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "твій авторитет у Бродах:" << avtoritet << endl;
							cout << "твоя репутація у Бродах:" << reputation << endl;
							cout << "твій жир(кг):" << zhyr << endl;
							cout << "твій рівень тупізму:" << absurd << "\n" << endl;
							this_thread::sleep_for(chrono::seconds(3));
						}
						else if (tadey == 2) {
							cout << "ти вже фізично не можеш нападати просто стояти" << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "ти програв!" << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "твоi стати:" << endl;
							zhyr = 110;
							absurd = 4;
							avtoritet = 0;
							reputation = 0;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "твій авторитет у Бродах:" << avtoritet << endl;
							cout << "твоя репутація у Бродах:" << reputation << endl;
							cout << "твій жир(кг):" << zhyr << endl;
							cout << "твій рівень тупізму:" << absurd << "\n" << endl;
							this_thread::sleep_for(chrono::seconds(3));
						}

					}
				}
				else if (tadey == 2) {
					cout << "ти спокійно почекав на бій" << endl;
					this_thread::sleep_for(chrono::seconds(2));
					cout << "почався бій, вибирай що будеш використовувати:" << endl;
					cout << "1)пригнути щучкою на ольгу яремчук" << endl;
					cout << "2)почати воздуханити" << endl;
					cout << "3)втікти" << endl;
					this_thread::sleep_for(chrono::seconds(1));
					cin >> tadey;
					if (tadey == 1) {
						cout << "ольга яремчук відійшла, і почала погрожувати низькою 51" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "ти злякався, а ольга продовжує погрожувати" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "ти програв!" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "твоi стати:" << endl;
						zhyr = 110;
						absurd = 4;
						avtoritet = 0;
						reputation = 0;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твій авторитет у Бродах:" << avtoritet << endl;
						cout << "твоя репутація у Бродах:" << reputation << endl;
						cout << "твій жир(кг):" << zhyr << endl;
						cout << "твій рівень тупізму:" << absurd << "\n" << endl;
						this_thread::sleep_for(chrono::seconds(3));
					}
					else if (tadey == 2) {
						cout << "на ольгу яремчук це ніяк не вплинуло, ти просто просрав час поки ольга тебе значно виграє, ти дуже близько щоб програти" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						cout << "ти програв!" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "твоi стати:" << endl;
						zhyr = 110;
						absurd = 4;
						avtoritet = 0;
						reputation = 0;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твій авторитет у Бродах:" << avtoritet << endl;
						cout << "твоя репутація у Бродах:" << reputation << endl;
						cout << "твій жир(кг):" << zhyr << endl;
						cout << "твій рівень тупізму:" << absurd << "\n" << endl;
						this_thread::sleep_for(chrono::seconds(3));
					}
					else if (tadey == 3) {
						this_thread::sleep_for(chrono::seconds(1));
						cout << "ти реально?" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "ти - великий тадей злякався ольги яремчук?молодець, +позор на всі Броди і всі будуть над тобою сміятися" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						this_thread::sleep_for(chrono::seconds(3));
						cout << "твоi стати:" << endl;
						zhyr = 110;
						absurd = 4;
						avtoritet = -1;
						reputation = -1;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твій авторитет у Бродах:" << avtoritet << endl;
						cout << "твоя репутація у Бродах:" << reputation << endl;
						cout << "твій жир(кг):" << zhyr << endl;
						cout << "твій рівень тупізму:" << absurd << "\n" << endl;
						this_thread::sleep_for(chrono::seconds(3));


					}


				}
			}

			else if (tadey == 2) {
				cout << "ти получив ефект 'впевненість' до кінця завтрашнього дня, але ольга яремчук таке не прощає " << endl;
				this_thread::sleep_for(chrono::seconds(2));
				//це теж треба допрограмувати
				cout << "лишилося 2 години до бою, твої дії:" << endl;
				cout << "1)піти знову вимахуватися перед ольгою яремчук " << endl;
				cout << "2)нічого не робити просто чекати бою" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				cin >> tadey;
				if (tadey == 1) {
					cout << "ти пішов її бісити під вікна знову" << endl;
					this_thread::sleep_for(chrono::seconds(2));
					cout << "ой! ти вже її остаточно довів, вона вийшла з лопатою і йде до тебе, твої дії, треба діяти швидко:" << endl;
					cout << "1)почати втікати" << endl;
					cout << "2)стояти на місці" << endl;
					cout << "3)вибачитися" << endl;
					cin >> tadey;
					if (tadey == 1) {
						cout << "ти пробіг не більше 10 секунд бо змучився, це фіаско бро..." << endl;
						this_thread::sleep_for(chrono::seconds(2));
						cout << "стоп..." << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "ольга не побігла за тобою, тобі повезло, вітаю, до бою доживеш" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "стій... чому вона сідає в свій жигуль?" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "вона, ВОНА ЇДЕ НА ТЕБЕ, ЩО ТОБІ РОБИТИ?" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						cout << "ну тадей ти тупий, ну це гейм овер, ну навіщо ти пішов її знов злити?" << endl;

						this_thread::sleep_for(chrono::seconds(3));
						cout << "твоi стати:" << endl;
						zhyr = 109;
						absurd = 4;
						avtoritet = 0;
						reputation = 0;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твій авторитет у Бродах:" << avtoritet << endl;
						cout << "твоя репутація у Бродах:" << reputation << endl;
						cout << "твій жир(кг):" << zhyr << endl;
						cout << "твій рівень тупізму:" << absurd << "\n" << endl;
						this_thread::sleep_for(chrono::seconds(3));
					}
					else if (tadey == 2) {
						cout << "ну окей, ти просто стоїш поки ольга яремчук наближається" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						cout << "стій, чому перед очами все біле?" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "твоi стати:" << endl;
						zhyr = 110;
						absurd = 4;
						avtoritet = 0;
						reputation = 0;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твій авторитет у Бродах:" << avtoritet << endl;
						cout << "твоя репутація у Бродах:" << reputation << endl;
						cout << "твій жир(кг):" << zhyr << endl;
						cout << "твій рівень тупізму:" << absurd << "\n" << endl;
						this_thread::sleep_for(chrono::seconds(3));
					}
					else if (tadey == 3) {
						this_thread::sleep_for(chrono::seconds(1));
						cout << "ну вона тебе все рівно грохнула лопатою, вона таке не вибачає" << endl;

						this_thread::sleep_for(chrono::seconds(3));
						cout << "твоi стати:" << endl;
						zhyr = 110;
						absurd = 4;
						avtoritet = 0;
						reputation = 0;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твій авторитет у Бродах:" << avtoritet << endl;
						cout << "твоя репутація у Бродах:" << reputation << endl;
						cout << "твій жир(кг):" << zhyr << endl;
						cout << "твій рівень тупізму:" << absurd << "\n" << endl;
						this_thread::sleep_for(chrono::seconds(3));
					}

				}
				else if (tadey == 2) {
					this_thread::sleep_for(chrono::seconds(1));
					cout << "ти просто спокійно дочекався бою" << endl;
					this_thread::sleep_for(chrono::seconds(1));
					cout << "почався бій, вибирай що хочеш використовувати:\n" << endl;
					cout << "1)просто дивитися на ольгу з поглядом як в дебіла, тим самим попробувати її налякати" << endl;
					cout << "2)зразу нападати" << endl;
					cout << "3)почати її знову бісити" << endl;
					int omegat;
					cin >> omegat;
					if (omegat == 1) {
						cout << "ти ну нафіг! спрацювало, вона злякалася" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твої наступні дії:" << endl;
						cout << "1)добивати(пузом)" << endl;
						cout << "2)добивати(поглядом)" << endl;
						cout << "3)нічого не робити" << endl;
						cin >> omegat;
						if (omegat == 1) {
							this_thread::sleep_for(chrono::seconds(1));
							cout << "ш... ШО?" << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "я... як це сталося?" << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "вітаю! ти виграв! і всі Броди тебе тепер називають легендою, це крута кличка" << endl;
							this_thread::sleep_for(chrono::seconds(4));
							cout << "твоi стати:" << endl;
							zhyr = 110;
							absurd = 6;
							avtoritet = 2;
							reputation = 3;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "твій авторитет у Бродах:" << avtoritet << endl;
							cout << "твоя репутація у Бродах:" << reputation << endl;
							cout << "твій жир(кг):" << zhyr << endl;
							cout << "твій рівень тупізму:" << absurd << "\n" << endl;
							this_thread::sleep_for(chrono::seconds(3));

						}
						else if (omegat == 2) {
							this_thread::sleep_for(chrono::seconds(1));
							cout << "ш... ШО?" << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "я... як це сталося?" << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "вітаю! ти виграв! і всі Броди тебе тепер називають легендою, це крута кличка" << endl;
							this_thread::sleep_for(chrono::seconds(4));
							this_thread::sleep_for(chrono::seconds(4));
							cout << "твоi стати:" << endl;
							zhyr = 110;
							absurd = 6;
							avtoritet = 2;
							reputation = 3;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "твій авторитет у Бродах:" << avtoritet << endl;
							cout << "твоя репутація у Бродах:" << reputation << endl;
							cout << "твій жир(кг):" << zhyr << endl;
							cout << "твій рівень тупізму:" << absurd << "\n" << endl;
							this_thread::sleep_for(chrono::seconds(3));

						}
						else if (omegat == 3) {
							this_thread::sleep_for(chrono::seconds(2));
							cout << "просто..." << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "тадей, ти такий тупий" << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "ну сфігалі ти стояв?" << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "ти міг добити, тупий, реально" << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "ольга яремчук зла, твої дії:" << endl;
							cout << "1)побігти прямо на ольгу яремчук і пригнути пузом на неї" << endl;
							cout << "2)чекати на її першу атаку в виді погроз про низьку 51 або двійок в твій зошит з англійської мови і різко пригнути на неї пузом" << endl;
							cin >> omegat;
							if (omegat == 1) {
								cout << "ну то ти лузер" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "вона встигла відйти і поставити двійку в зошит за погану атаку" << endl;
								this_thread::sleep_for(chrono::seconds(3));
								cout << "ти програв! ну то було понятно" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "ну і нафіг ти просто стояв і нічого не робив" << endl;
								this_thread::sleep_for(chrono::seconds(3));
								cout << "так би в тебе були б великі шанси на перемогу" << endl;
								this_thread::sleep_for(chrono::seconds(3));
								cout << "тупий" << endl;

								this_thread::sleep_for(chrono::seconds(4));
								cout << "твоi стати:" << endl;
								zhyr = 108;
								absurd = 3;
								avtoritet = 0;
								reputation = 0;
								this_thread::sleep_for(chrono::seconds(1));
								cout << "твій авторитет у Бродах:" << avtoritet << endl;
								cout << "твоя репутація у Бродах:" << reputation << endl;
								cout << "твій жир(кг):" << zhyr << endl;
								cout << "твій рівень тупізму:" << absurd << "\n" << endl;
								this_thread::sleep_for(chrono::seconds(3));
							}
							else if (omegat == 2) {
								this_thread::sleep_for(chrono::seconds(2));
								cout << "ти не зміг відповісти на її дуже серйозні атаки" << endl;
								this_thread::sleep_for(chrono::seconds(3));
								cout << "та й взагалі" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "це була погана тактика" << endl;
								this_thread::sleep_for(chrono::seconds(3));
								cout << "ти програв" << endl;
								this_thread::sleep_for(chrono::seconds(3));
								cout << "твоi стати:" << endl;
								zhyr = 108;
								absurd = 3;
								avtoritet = 0;
								reputation = 0;
								this_thread::sleep_for(chrono::seconds(1));
								cout << "твій авторитет у Бродах:" << avtoritet << endl;
								cout << "твоя репутація у Бродах:" << reputation << endl;
								cout << "твій жир(кг):" << zhyr << endl;
								cout << "твій рівень тупізму:" << absurd << "\n" << endl;
								this_thread::sleep_for(chrono::seconds(3));

							}
						}

					}
					else if (omegat == 2) {
						this_thread::sleep_for(chrono::seconds(2));
						cout << "ти її задавив! це легендарна подія!" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "ти тепер легенда Бродів" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "твоi стати:" << endl;
						zhyr = 112;
						absurd = 6;
						avtoritet = 3;
						reputation = 3;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твій авторитет у Бродах:" << avtoritet << endl;
						cout << "твоя репутація у Бродах:" << reputation << endl;
						cout << "твій жир(кг):" << zhyr << endl;
						cout << "твій рівень тупізму:" << absurd << "\n" << endl;
						this_thread::sleep_for(chrono::seconds(3));

					}
					else if (omegat == 3) {
						this_thread::sleep_for(chrono::seconds(2));
						cout << "ольга яремчук таке не оцінила" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						cout << "вона подзвонила твоїм батькам" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "твій ефект 'впевненість' зразу пропав" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "і ти получив новий ефект, 'страх'" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "ти програв! це була погана ідея як на мене" << endl;
						this_thread::sleep_for(chrono::seconds(5));
						cout << "твоi стати:" << endl;
						zhyr = 108;
						absurd = 3;
						avtoritet = 0;
						reputation = 0;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "твій авторитет у Бродах:" << avtoritet << endl;
						cout << "твоя репутація у Бродах:" << reputation << endl;
						cout << "твій жир(кг):" << zhyr << endl;
						cout << "твій рівень тупізму:" << absurd << "\n" << endl;
						this_thread::sleep_for(chrono::seconds(3));
					}
				}
			}
			else if (tadey == 3) {
				cout << "ти вирішив що будеш битися не тільки пузом, а і ще своєю головою-льодяником" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				//і це
				int moroz;

				cout << "вже ніч, що будеш робити:" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				cout << "1)сидіти в компі всю ніч" << endl;
				cout << "2)запхати голову в морозильник знову до початку дня" << endl;
				this_thread::sleep_for(chrono::seconds(2));
				cin >> moroz;
				if (moroz == 1)
				{
					this_thread::sleep_for(chrono::seconds(2));
					cout << "5 година ранку, ти сидиш на крiслі за компом, кричиш на тімейтів в мікрофон" << endl;
					this_thread::sleep_for(chrono::seconds(4));
					cout << "і тут ти чуєш кроки в сторону своєї кімнати " << endl;
					cout << "твої дії:" << endl;
					cout << "1)швидко виключити комп і пригнути в ліжко" << endl;
					cout << "2)грати далі" << endl;
					cin >> moroz;
					if (moroz == 1) {
						cout << "це твоя мама просто вийшла попити води, вона пройшла повз твоєї кімнати" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "але ти коли пригнув в ліжко, ти вже не зміг сісти назад за комп" << endl;
						this_thread::sleep_for(chrono::seconds(3));
						cout << "ти заснув..." << endl;
						this_thread::sleep_for(chrono::seconds(4));
						cout << "вже ранок" << endl;
						this_thread::sleep_for(chrono::seconds(1));
						cout << "що будеш робити:\n" << endl;
						this_thread::sleep_for(chrono::seconds(2));
						cout << "1)поїсти(дуже багато)" << endl;
						cout << "2)заморозити голову, да знов" << endl;
						cin >> moroz;
						if (moroz == 1) {
							cout << "єма ти наївся! аж круглим став" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "УВАГА! ВАШ ПОТОЧНИЙ ПОКАЗНИК ЖИРУ ЗБІЛЬШИВСЯ" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							zhyr = 142;
							cout << "ваш поточний жир(кг):" << zhyr << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "єма" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "ну то так поворот" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "організатор боїв повідомив що бої переносяться в гараж" << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "причина цьому, це те що буде дуже сильна гроза" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "ладно, що будеш робити?" << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "1)піду в гараж поки ще немає зливи, і по дорозі візьму три багета з торгового центру орисі" << endl;
							cout << "2)просто піду в гараж" << endl;
							int zluva;
							cin >> zluva;
							if (zluva == 1) {
								zhyr = 178;
								cout << "------" << endl;
								cout << "УВАГА!" << endl;
								cout << "------" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "-------------------" << endl;
								cout << "ВАШ ЖИР ЗБІЛЬШИВСЯ" << endl;
								cout << "-------------------" << endl;
								cout << "ваш поточний жир:" << zhyr << endl;
								cout << "ти прийшов в гараж, з'їв багети і..." << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "ухх ніфіга собі" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "та ти вже круглий" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "прям як м'ячик" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "так м'ячик, точніше боєць" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "вставай" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "через 5 хвилин бій" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "ти чуєш як гримить грім і через призакриті двері гаража бачиш огроменну зливу" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "тадей!" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "вже бій, треба битися" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "тадей, вибирай що будеш робити" << endl;
								this_thread::sleep_for(chrono::seconds(1));
								cout << "почався бій, вибирай що хочеш використовувати:\n" << endl;
								cout << "1)просто дивитися на неї як на дебіла" << endl;
								cout << "2)зразу нападати" << endl;
								cout << "3)використати удар головою" << endl;

								cin >> zluva;
								if (zluva == 1) {
									cout << "ти ну нафіг! спрацювало, вона злякалася" << endl;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твої наступні дії:" << endl;
									cout << "1)добивати(пузом)" << endl;
									cout << "2)добивати(головою)" << endl;
									cout << "3)нічого не робити" << endl;
									cin >> zluva;
									if (zluva == 1) {
										this_thread::sleep_for(chrono::seconds(1));
										cout << "ш... ШО?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "я... як це сталося?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "вітаю! ти виграв! і всі Броди тебе тепер називають легендою, це крута кличка" << endl;
										this_thread::sleep_for(chrono::seconds(4));
										cout << "твоi стати:" << endl;
										zhyr = 180;
										absurd = 6;
										avtoritet = 2;
										reputation = 3;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "твій авторитет у Бродах:" << avtoritet << endl;
										cout << "твоя репутація у Бродах:" << reputation << endl;
										cout << "твій жир(кг):" << zhyr << endl;
										cout << "твій рівень тупізму:" << absurd << "\n" << endl;
										this_thread::sleep_for(chrono::seconds(3));

									}
									else if (zluva == 2) {
										this_thread::sleep_for(chrono::seconds(1));
										cout << "ш... ШО?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "я... як це сталося?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "вітаю! ти виграв! і всі Броди тебе тепер називають легендою гаража, це крута кличка" << endl;
										this_thread::sleep_for(chrono::seconds(4));
										this_thread::sleep_for(chrono::seconds(4));
										cout << "твоi стати:" << endl;
										zhyr = 180;
										absurd = 6;
										avtoritet = 2;
										reputation = 3;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "твій авторитет у Бродах:" << avtoritet << endl;
										cout << "твоя репутація у Бродах:" << reputation << endl;
										cout << "твій жир(кг):" << zhyr << endl;
										cout << "твій рівень тупізму:" << absurd << "\n" << endl;
										this_thread::sleep_for(chrono::seconds(3));

									}
									else if (zluva == 3) {
										this_thread::sleep_for(chrono::seconds(2));
										cout << "просто..." << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "тадей, ти такий тупий" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ну сфігалі ти стояв?" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ти міг добити, тупий, реально" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ольга яремчук зла, твої дії:" << endl;
										cout << "1)побігти прямо на ольгу яремчук і пригнути пузом на неї" << endl;
										cout << "2)чекати на її першу атаку в виді погроз про низьку 51 або двійок в твій зошит з англійської мови і різко пригнути на неї пузом" << endl;
										cin >> zluva;
										if (zluva == 1) {
											cout << "ну то ти лузер" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "вона встигла відйти і поставити двійку в зошит за погану атаку" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "ти програв! ну то було понятно" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "ну і нафіг ти просто стояв і нічого не робив" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "так би в тебе були б великі шанси на перемогу" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "тупий" << endl;

											this_thread::sleep_for(chrono::seconds(4));
											cout << "твоi стати:" << endl;
											zhyr = 178;
											absurd = 3;
											avtoritet = 0;
											reputation = 0;
											this_thread::sleep_for(chrono::seconds(1));
											cout << "твій авторитет у Бродах:" << avtoritet << endl;
											cout << "твоя репутація у Бродах:" << reputation << endl;
											cout << "твій жир(кг):" << zhyr << endl;
											cout << "твій рівень тупізму:" << absurd << "\n" << endl;
											this_thread::sleep_for(chrono::seconds(3));
										}
										else if (zluva == 2) {
											this_thread::sleep_for(chrono::seconds(2));
											cout << "ти не зміг відповісти на її дуже серйозні атаки" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "та й взагалі" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "це була погана тактика" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "ти програв" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "твоi стати:" << endl;
											zhyr = 178;
											absurd = 3;
											avtoritet = 0;
											reputation = 0;
											this_thread::sleep_for(chrono::seconds(1));
											cout << "твій авторитет у Бродах:" << avtoritet << endl;
											cout << "твоя репутація у Бродах:" << reputation << endl;
											cout << "твій жир(кг):" << zhyr << endl;
											cout << "твій рівень тупізму:" << absurd << "\n" << endl;
											this_thread::sleep_for(chrono::seconds(3));

										}
									}

								}
								else if (zluva == 2) {
									this_thread::sleep_for(chrono::seconds(2));
									cout << "ти її вирубив своєю головою! це легендарна подія!" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "ти тепер легенда Бродів" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "твоi стати:" << endl;
									zhyr = 180;
									absurd = 6;
									avtoritet = 3;
									reputation = 3;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твій авторитет у Бродах:" << avtoritet << endl;
									cout << "твоя репутація у Бродах:" << reputation << endl;
									cout << "твій жир(кг):" << zhyr << endl;
									cout << "твій рівень тупізму:" << absurd << "\n" << endl;
									this_thread::sleep_for(chrono::seconds(3));

								}
								else if (zluva == 3) {
									this_thread::sleep_for(chrono::seconds(2));
									cout << "ольга яремчук таке не оцінила" << endl;
									this_thread::sleep_for(chrono::seconds(2));
									cout << "вона подзвонила твоїм батькам" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "твій ефект 'впевненість' зразу пропав" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "і ти получив новий ефект, 'страх'" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "ти програв! це була погана ідея як на мене" << endl;
									this_thread::sleep_for(chrono::seconds(5));
									cout << "твоi стати:" << endl;
									zhyr = 177;
									absurd = 3;
									avtoritet = 0;
									reputation = 0;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твій авторитет у Бродах:" << avtoritet << endl;
									cout << "твоя репутація у Бродах:" << reputation << endl;
									cout << "твій жир(кг):" << zhyr << endl;
									cout << "твій рівень тупізму:" << absurd << "\n" << endl;
									this_thread::sleep_for(chrono::seconds(3));
								}
							}
							else if (zluva == 2) {
								this_thread::sleep_for(chrono::seconds(2));
								cout << "ти просто прийшов в гараж і випадково заснув" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "вставай" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "через 5 хвилин бій" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "ти чуєш як гримить грім і через призакриті двері гаража бачиш огроменну зливу" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "тадей!" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "вже бій, треба битися" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "тадей, вибирай що будеш робити" << endl;
								this_thread::sleep_for(chrono::seconds(1));
								cout << "почався бій, вибирай що хочеш використовувати:\n" << endl;
								cout << "1)просто дивитися на неї як на дебіла" << endl;
								cout << "2)зразу нападати" << endl;
								cout << "3)використати удар головою" << endl;

								cin >> zluva;
								if (zluva == 1) {
									cout << "ти ну нафіг! спрацювало, вона злякалася" << endl;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твої наступні дії:" << endl;
									cout << "1)добивати(пузом)" << endl;
									cout << "2)добивати(головою)" << endl;
									cout << "3)нічого не робити" << endl;
									cin >> zluva;
									if (zluva == 1) {
										this_thread::sleep_for(chrono::seconds(1));
										cout << "ш... ШО?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "я... як це сталося?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "вітаю! ти виграв! і всі Броди тебе тепер називають легендою, це крута кличка" << endl;
										this_thread::sleep_for(chrono::seconds(4));
										cout << "твоi стати:" << endl;
										zhyr = 180;
										absurd = 6;
										avtoritet = 2;
										reputation = 3;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "твій авторитет у Бродах:" << avtoritet << endl;
										cout << "твоя репутація у Бродах:" << reputation << endl;
										cout << "твій жир(кг):" << zhyr << endl;
										cout << "твій рівень тупізму:" << absurd << "\n" << endl;
										this_thread::sleep_for(chrono::seconds(3));

									}
									else if (zluva == 2) {
										this_thread::sleep_for(chrono::seconds(1));
										cout << "ш... ШО?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "я... як це сталося?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "вітаю! ти виграв! і всі Броди тебе тепер називають легендою гаража, це крута кличка" << endl;
										this_thread::sleep_for(chrono::seconds(4));
										this_thread::sleep_for(chrono::seconds(4));
										cout << "твоi стати:" << endl;
										zhyr = 180;
										absurd = 6;
										avtoritet = 2;
										reputation = 3;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "твій авторитет у Бродах:" << avtoritet << endl;
										cout << "твоя репутація у Бродах:" << reputation << endl;
										cout << "твій жир(кг):" << zhyr << endl;
										cout << "твій рівень тупізму:" << absurd << "\n" << endl;
										this_thread::sleep_for(chrono::seconds(3));

									}
									else if (zluva == 3) {
										this_thread::sleep_for(chrono::seconds(2));
										cout << "просто..." << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "тадей, ти такий тупий" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ну сфігалі ти стояв?" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ти міг добити, тупий, реально" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ольга яремчук зла, твої дії:" << endl;
										cout << "1)побігти прямо на ольгу яремчук і пригнути пузом на неї" << endl;
										cout << "2)чекати на її першу атаку в виді погроз про низьку 51 або двійок в твій зошит з англійської мови і різко пригнути на неї пузом" << endl;
										cin >> zluva;
										if (zluva == 1) {
											cout << "ну то ти лузер" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "вона встигла відйти і поставити двійку в зошит за погану атаку" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "ти програв! ну то було понятно" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "ну і нафіг ти просто стояв і нічого не робив" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "так би в тебе були б великі шанси на перемогу" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "тупий" << endl;

											this_thread::sleep_for(chrono::seconds(4));
											cout << "твоi стати:" << endl;
											zhyr = 178;
											absurd = 3;
											avtoritet = 0;
											reputation = 0;
											this_thread::sleep_for(chrono::seconds(1));
											cout << "твій авторитет у Бродах:" << avtoritet << endl;
											cout << "твоя репутація у Бродах:" << reputation << endl;
											cout << "твій жир(кг):" << zhyr << endl;
											cout << "твій рівень тупізму:" << absurd << "\n" << endl;
											this_thread::sleep_for(chrono::seconds(3));
										}
										else if (zluva == 2) {
											this_thread::sleep_for(chrono::seconds(2));
											cout << "ти не зміг відповісти на її дуже серйозні атаки" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "та й взагалі" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "це була погана тактика" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "ти програв" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "твоi стати:" << endl;
											zhyr = 178;
											absurd = 3;
											avtoritet = 0;
											reputation = 0;
											this_thread::sleep_for(chrono::seconds(1));
											cout << "твій авторитет у Бродах:" << avtoritet << endl;
											cout << "твоя репутація у Бродах:" << reputation << endl;
											cout << "твій жир(кг):" << zhyr << endl;
											cout << "твій рівень тупізму:" << absurd << "\n" << endl;
											this_thread::sleep_for(chrono::seconds(3));

										}
									}

								}
								else if (zluva == 2) {
									this_thread::sleep_for(chrono::seconds(2));
									cout << "ти її вирубив своєю головою! це легендарна подія!" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "ти тепер легенда Бродів" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "твоi стати:" << endl;
									zhyr = 180;
									absurd = 6;
									avtoritet = 3;
									reputation = 3;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твій авторитет у Бродах:" << avtoritet << endl;
									cout << "твоя репутація у Бродах:" << reputation << endl;
									cout << "твій жир(кг):" << zhyr << endl;
									cout << "твій рівень тупізму:" << absurd << "\n" << endl;
									this_thread::sleep_for(chrono::seconds(3));

								}
								else if (zluva == 3) {
									this_thread::sleep_for(chrono::seconds(2));
									cout << "ольга яремчук таке не оцінила" << endl;
									this_thread::sleep_for(chrono::seconds(2));
									cout << "вона подзвонила твоїм батькам" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "твій ефект 'впевненість' зразу пропав" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "і ти получив новий ефект, 'страх'" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "ти програв! це була погана ідея як на мене" << endl;
									this_thread::sleep_for(chrono::seconds(5));
									cout << "твоi стати:" << endl;
									zhyr = 177;
									absurd = 3;
									avtoritet = 0;
									reputation = 0;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твій авторитет у Бродах:" << avtoritet << endl;
									cout << "твоя репутація у Бродах:" << reputation << endl;
									cout << "твій жир(кг):" << zhyr << endl;
									cout << "твій рівень тупізму:" << absurd << "\n" << endl;
									this_thread::sleep_for(chrono::seconds(3));
								}
							}
						}
						else if (moroz == 2) {
							this_thread::sleep_for(chrono::seconds(1));
							cout << "та нє" << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "я ж пошуткував" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "ладно..." << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "тадей! вже ранок, а ти свою голову ше досі в морозильнику тримаєш, хвате" << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "єма" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "ну то так поворот" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "організатор боїв повідомив що бої переносяться в гараж" << endl;
							this_thread::sleep_for(chrono::seconds(3));
							cout << "причина цьому, це те що буде дуже сильна гроза" << endl;
							this_thread::sleep_for(chrono::seconds(2));
							cout << "ладно, що будеш робити?" << endl;
							this_thread::sleep_for(chrono::seconds(1));
							cout << "1)піду в гараж поки ще немає зливи, і по дорозі візьму три багета з торгового центру орисі" << endl;
							cout << "2)просто піду в гараж" << endl;
							int zluva;
							cin >> zluva;
							if (zluva == 1) {
								zhyr = 178;
								cout << "------" << endl;
								cout << "УВАГА!" << endl;
								cout << "------" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "-------------------" << endl;
								cout << "ВАШ ЖИР ЗБІЛЬШИВСЯ" << endl;
								cout << "-------------------" << endl;
								cout << "ваш поточний жир:" << zhyr << endl;
								cout << "ти прийшов в гараж, з'їв багети і..." << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "ухх ніфіга собі" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "та ти вже круглий" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "прям як м'ячик" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "так м'ячик, точніше боєць" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "вставай" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "через 5 хвилин бій" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "ти чуєш як гримить грім і через призакриті двері гаража бачиш огроменну зливу" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "тадей!" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "вже бій, треба битися" << endl;
								this_thread::sleep_for(chrono::seconds(2));
								cout << "тадей, вибирай що будеш робити" << endl;
								this_thread::sleep_for(chrono::seconds(1));
								cout << "почався бій, вибирай що хочеш використовувати:\n" << endl;
								cout << "1)просто дивитися на неї як на дебіла" << endl;
								cout << "2)зразу нападати" << endl;
								cout << "3)використати удар головою" << endl;

								cin >> zluva;
								if (zluva == 1) {
									cout << "ти ну нафіг! спрацювало, вона злякалася" << endl;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твої наступні дії:" << endl;
									cout << "1)добивати(пузом)" << endl;
									cout << "2)добивати(головою)" << endl;
									cout << "3)нічого не робити" << endl;
									cin >> zluva;
									if (zluva == 1) {
										this_thread::sleep_for(chrono::seconds(1));
										cout << "ш... ШО?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "я... як це сталося?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "вітаю! ти виграв! і всі Броди тебе тепер називають легендою, це крута кличка" << endl;
										this_thread::sleep_for(chrono::seconds(4));
										cout << "твоi стати:" << endl;
										zhyr = 180;
										absurd = 6;
										avtoritet = 2;
										reputation = 3;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "твій авторитет у Бродах:" << avtoritet << endl;
										cout << "твоя репутація у Бродах:" << reputation << endl;
										cout << "твій жир(кг):" << zhyr << endl;
										cout << "твій рівень тупізму:" << absurd << "\n" << endl;
										this_thread::sleep_for(chrono::seconds(3));

									}
									else if (zluva == 2) {
										this_thread::sleep_for(chrono::seconds(1));
										cout << "ш... ШО?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "я... як це сталося?" << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "вітаю! ти виграв! і всі Броди тебе тепер називають легендою гаража, це крута кличка" << endl;
										this_thread::sleep_for(chrono::seconds(4));
										this_thread::sleep_for(chrono::seconds(4));
										cout << "твоi стати:" << endl;
										zhyr = 180;
										absurd = 6;
										avtoritet = 2;
										reputation = 3;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "твій авторитет у Бродах:" << avtoritet << endl;
										cout << "твоя репутація у Бродах:" << reputation << endl;
										cout << "твій жир(кг):" << zhyr << endl;
										cout << "твій рівень тупізму:" << absurd << "\n" << endl;
										this_thread::sleep_for(chrono::seconds(3));

									}
									else if (zluva == 3) {
										this_thread::sleep_for(chrono::seconds(2));
										cout << "просто..." << endl;
										this_thread::sleep_for(chrono::seconds(1));
										cout << "тадей, ти такий тупий" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ну сфігалі ти стояв?" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ти міг добити, тупий, реально" << endl;
										this_thread::sleep_for(chrono::seconds(3));
										cout << "ольга яремчук зла, твої дії:" << endl;
										cout << "1)побігти прямо на ольгу яремчук і пригнути пузом на неї" << endl;
										cout << "2)чекати на її першу атаку в виді погроз про низьку 51 або двійок в твій зошит з англійської мови і різко пригнути на неї пузом" << endl;
										cin >> zluva;
										if (zluva == 1) {
											cout << "ну то ти лузер" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "вона встигла відйти і поставити двійку в зошит за погану атаку" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "ти програв! ну то було понятно" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "ну і нафіг ти просто стояв і нічого не робив" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "так би в тебе були б великі шанси на перемогу" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "тупий" << endl;

											this_thread::sleep_for(chrono::seconds(4));
											cout << "твоi стати:" << endl;
											zhyr = 178;
											absurd = 3;
											avtoritet = 0;
											reputation = 0;
											this_thread::sleep_for(chrono::seconds(1));
											cout << "твій авторитет у Бродах:" << avtoritet << endl;
											cout << "твоя репутація у Бродах:" << reputation << endl;
											cout << "твій жир(кг):" << zhyr << endl;
											cout << "твій рівень тупізму:" << absurd << "\n" << endl;
											this_thread::sleep_for(chrono::seconds(3));
										}
										else if (zluva == 2) {
											this_thread::sleep_for(chrono::seconds(2));
											cout << "ти не зміг відповісти на її дуже серйозні атаки" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "та й взагалі" << endl;
											this_thread::sleep_for(chrono::seconds(2));
											cout << "це була погана тактика" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "ти програв" << endl;
											this_thread::sleep_for(chrono::seconds(3));
											cout << "твоi стати:" << endl;
											zhyr = 178;
											absurd = 3;
											avtoritet = 0;
											reputation = 0;
											this_thread::sleep_for(chrono::seconds(1));
											cout << "твій авторитет у Бродах:" << avtoritet << endl;
											cout << "твоя репутація у Бродах:" << reputation << endl;
											cout << "твій жир(кг):" << zhyr << endl;
											cout << "твій рівень тупізму:" << absurd << "\n" << endl;
											this_thread::sleep_for(chrono::seconds(3));

										}
									}

								}
								else if (zluva == 2) {
									this_thread::sleep_for(chrono::seconds(2));
									cout << "ти її вирубив своєю головою! це легендарна подія!" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "ти тепер легенда Бродів" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "твоi стати:" << endl;
									zhyr = 180;
									absurd = 6;
									avtoritet = 3;
									reputation = 3;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твій авторитет у Бродах:" << avtoritet << endl;
									cout << "твоя репутація у Бродах:" << reputation << endl;
									cout << "твій жир(кг):" << zhyr << endl;
									cout << "твій рівень тупізму:" << absurd << "\n" << endl;
									this_thread::sleep_for(chrono::seconds(3));

								}
								else if (zluva == 3) {
									this_thread::sleep_for(chrono::seconds(2));
									cout << "ольга яремчук таке не оцінила" << endl;
									this_thread::sleep_for(chrono::seconds(2));
									cout << "вона подзвонила твоїм батькам" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "твій ефект 'впевненість' зразу пропав" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "і ти получив новий ефект, 'страх'" << endl;
									this_thread::sleep_for(chrono::seconds(3));
									cout << "ти програв! це була погана ідея як на мене" << endl;
									this_thread::sleep_for(chrono::seconds(5));
									cout << "твоi стати:" << endl;
									zhyr = 177;
									absurd = 3;
									avtoritet = 0;
									reputation = 0;
									this_thread::sleep_for(chrono::seconds(1));
									cout << "твій авторитет у Бродах:" << avtoritet << endl;
									cout << "твоя репутація у Бродах:" << reputation << endl;
									cout << "твій жир(кг):" << zhyr << endl;
									cout << "твій рівень тупізму:" << absurd << "\n" << endl;
									this_thread::sleep_for(chrono::seconds(3));
								}
							}
						}


					}


				}
			}
		}
	}
	//----------------------------------------------------
	// КІНЕЦЬ БОЙОВОГО ШЛЯХА ТАДЕОНА
	//----------------------------------------------------



	


	return 0;
}


