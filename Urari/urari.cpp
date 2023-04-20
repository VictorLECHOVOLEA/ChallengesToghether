#include <iostream>
#include <string>

using namespace std;

int main() {

	// enum urareDeSarbatori {
	// 	Hristos_A_Inviat,
	// 	Craciun_Fericit,
	// 	La_Multi_Ani,
	// 	Un_An_Nou_Fericit
	// };

	// urareDeSarbatori urare = Hristos_A_Inviat;

	string input;
	cout << "Introduceti urarea de sarbatori: ";
	getline(cin, input);

	if (input == "Hristos A Inviat") {
		cout << "Adevarat A-nviat";
	}
	else if (input == "Craciun Fericit") {
		cout << "Sarbatori Fericite";
	}
	else if (input == "La Multi Ani") {
		cout << "Multumesc Frumos";
	}
	else if (input == "Un An Nou Fericit") {
		cout << "Multa sanatate";
	}
	else {
		cout << "Urarea nu este valabila";
	}
}

/*
====================
Accepted Inputs:
Hristos A Inviat
Craciun Fericit
La Multi Ani
Un An Nou Fericit

*/


/*
====================
BUGS:
lowercase
semne de punctuatie
variante multiple - "Hristos" sau "Cristos"
=====
Bugs Sample:

Introduceti urarea de sarbatori: Hristos a inviat
Urarea nu este valabila

Introduceti urarea de sarbatori: Craciun fericit
Urarea nu este valabila

Introduceti urarea de sarbatori: La multi ani!
Urarea nu este valabila

Introduceti urarea de sarbatori: un an nou fericit 
Urarea nu este valabila
*/