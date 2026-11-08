
/*
Se consideră o aplicație pentru gestiunea studenților, având atributele : nume(char*), id(const int) și medie(float).

Cerințe :
	1. Definiți clasa Student cu atributele corespunzătoare.
	2. Implementați constructorul default și constructorul cu parametri.
	3. Implementați metoda get pentru atributul constant.
	4. Implementați metoda set pentru atributul alocat dinamic.
	5. Supraîncărcați operatorul = .
	6. Implementați o metodă de afișare și destructorul.
	*/

/*
#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
    char* nume;
    const int id;
    float medie;

    Student() : id(0) {
        nume = nullptr;
        medie = 0;
    }

    Student(const char* n, int i, float m) : id(i) {
        nume = new char[strlen(n) + 1];
        strcpy(nume, n);
        medie = m;
    }

    ~Student() {
        delete[] nume;
    }

    int getId() {
        return id;
    }

    void setNume(const char* n) {
        char* copie = new char[strlen(n) + 1];
        strcpy(copie, n);
        delete[] nume;
        nume = copie;
    }

    Student& operator=(const Student& s) {
        if (this != &s) {
            if (s.nume != nullptr)
                setNume(s.nume);
            else {
                delete[] nume;
                nume = nullptr;
            }
            medie = s.medie;
        }
        return *this;
    }

    void afisare() {
        cout << (nume ? nume : "") << " " << id << " " << medie << endl;
    }
};

int main() {
    Student s1("Ana", 1, 9.5);
    Student s2("Ion", 2, 8);

    s1.afisare();
    s2.afisare();

    cout << s1.getId() << endl;

    s1.setNume("Maria");
    s1 = s2;
    s1.afisare();

    return 0;
}
*/



/*
Se consideră o aplicație pentru gestionarea mașinilor, având atributele: marca (string), anFabricatie (int) și pret (float).

Cerințe:
1. Definiți clasa Masina cu atribute private.
2. Implementați constructorul default și constructorul cu parametri.
3. Implementați metode get și set pentru preț.
4. Supraîncărcați operatorul + pentru a adăuga o sumă la preț.
5. Implementați o metodă de afișare a datelor.
6. Testați metodele în main().

*/

/*

#include <iostream>
#include <string>
using namespace std;

class Masina {
private:
    string marca;
    int anFabricatie;
    float pret;

public:
    Masina() {
        marca = "Necunoscuta";
        anFabricatie = 0;
        pret = 0;
    }

    Masina(string m, int a, float p) {
        marca = m;
        anFabricatie = a;
        pret = p;
    }

    float getPret() {
        return pret;
    }

    void setPret(float p) {
        pret = p;
    }

    Masina operator+(float suma) {
        Masina m = *this;
        m.pret += suma;
        return m;
    }

    void afisare() {
        cout << "Marca: " << marca << endl;
        cout << "An: " << anFabricatie << endl;
        cout << "Pret: " << pret << endl;
    }
};

int main() {
    Masina m1;
    Masina m2("BMW", 2020, 15000);

    m1.afisare();
    m2.afisare();

    cout << m2.getPret() << endl;

    m2.setPret(16000);
    m2 = m2 + 2000;

    m2.afisare();

    return 0;
}
*/


