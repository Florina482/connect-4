#include <iostream>
using namespace std;
const int RANDURI = 6;
const int COLOANE = 7;

char tabla[RANDURI][COLOANE];

void creare_tabla() {
    for (int i = 0; i < RANDURI; i++) {
        for (int j = 0; j < COLOANE; j++) {
            cout << tabla[i][j] << " ";
        }
        cout << endl;
    }
}

bool este_posibila_miscarea(int coloana) {
    return tabla[0][coloana] == '-';
}

void realizare_miscare(int coloane, char jucator) {
    for (int i = RANDURI-1; i >= 0; i--) {
        if (tabla[i][coloane] == '-') {
            tabla[i][coloane] = jucator;
            break;
        }
    }
}

bool a_castigat(char jucator) {
    for (int i = 0; i < RANDURI; i++) {
        for (int j = 0; j <= COLOANE-4; j++) {
            if (tabla[i][j] == jucator && tabla[i][j+1] == jucator &&
                tabla[i][j+2] == jucator && tabla[i][j+3] == jucator) {
                return true;
            }
        }
    }


    for (int i = 0; i <= RANDURI-4; i++) {
        for (int j = 0; j < COLOANE; j++) {
            if (tabla[i][j] == jucator && tabla[i+1][j] == jucator &&
                tabla[i+2][j] == jucator && tabla[i+3][j] == jucator) {
                return true;
            }
        }
    }
    for (int i = 0; i <= RANDURI-4; i++) {
        for (int j = 0; j <= COLOANE-4; j++) {
            if (tabla[i][j] == jucator && tabla[i+1][j+1] == jucator &&
                tabla[i+2][j+2] == jucator && tabla[i+3][j+3] == jucator) {
                return true;
            }
            if (tabla[i][j+3] == jucator && tabla[i+1][j+2] == jucator &&
                tabla[i+2][j+1] == jucator && tabla[i+3][j] == jucator) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    for (int i = 0; i < RANDURI; i++) {
        for (int j = 0; j < COLOANE; j++) {
            tabla[i][j] = '-';
        }
    }
    char jucator = 'X';
    while (true) {
        creare_tabla();
        cout << "Jucatorul " << jucator << " - alege o coloana: ";
        int coloana;
        cin >> coloana;
        coloana--;
        if (este_posibila_miscarea(coloana)) {
            realizare_miscare(coloana, jucator);
            if (a_castigat(jucator)) {
                creare_tabla();
                cout << "Jucatorul " << jucator << " castiga!" << endl;
                break;
            }
            jucator = (jucator == 'X') ? 'O' : 'X';
        } else {
            cout << "miscare imposibila - incercati din nou." << endl;
        }
    }

    return 0;
}
