
/*
Sa se implementeze clasa Angajat, care contine ID-ul angajatului, numele si salariul. 
Salariul trebuie sa fie mai mare sau egal cu salariul minim stabilit. 
Daca aceasta conditie nu este respectata, se va arunca o exceptie.

Sa se implementeze clasa derivata AngajatBonus, care mosteneste clasa Angajat si adauga un procent de bonus.
Sa se afiseze informatiile angajatilor, inclusiv bonusul, si sa se trateze eventualele exceptii.
*/

/*
#include <iostream>
#include <string>
#include <exception>

using namespace std;

class ExceptieCustom : public exception {
public:
    const char* what() const noexcept override {
        return "Salariul este prea mic!";
    }
};

class Angajat {
private:
    const int id;
    string nume;
    float salariu;

public:
    static const int SALARIU_MINIM = 2500;

    Angajat() : id(0), nume("Necunoscut"), salariu(3000) {
    }

    Angajat(int idA, string numeA, float salariuA)
        : id(idA), nume(numeA), salariu(salariuA) {
        if (salariu < SALARIU_MINIM) {
            throw ExceptieCustom();
        }
    }

    virtual void afisare() const {
        cout << endl << "ID: " << id;
        cout << endl << "Nume: " << nume;
        cout << endl << "Salariu: " << salariu;
    }

    float getSalariu() const {
        return salariu;
    }

    virtual ~Angajat() {
    }
};

class AngajatBonus : public Angajat {
private:
    float procentBonus;

public:
    AngajatBonus() : Angajat(), procentBonus(0) {
    }

    AngajatBonus(int idA, string numeA, float salariuA,
        float procentBonusA)
        : Angajat(idA, numeA, salariuA) {
        procentBonus = procentBonusA;
    }

    void afisare() const override {
        Angajat::afisare();
        cout << endl << "Bonus: " << procentBonus << "%";
        cout << endl << "Salariu final: "
            << getSalariu() * (1 + procentBonus / 100);
    }

    ~AngajatBonus() override {
    }
};

int main() {
    try {
        Angajat a1(1, "Andrei", 1500);
        a1.afisare();
    }
    catch (const exception& e) {
        cout << endl << e.what();
    }

    cout << endl << endl << "Angajat normal:";
    Angajat a2(2, "Mihai", 4000);
    a2.afisare();

    cout << endl << endl << "Angajat cu bonus:";
    AngajatBonus a3(3, "Alex", 5000, 20);
    a3.afisare();

    return 0;
}

*/

/*
Writing





Sa se implementeze clasa Masina, care contine ID-ul masinii, marca si pretul. 
Pretul trebuie sa fie mai mare sau egal cu pretul minim stabilit. 
Daca aceasta conditie nu este respectata, se va arunca o exceptie.

Sa se implementeze clasa derivata MasinaSport, care mosteneste clasa Masina si adauga viteza maxima. 
Sa se afiseze informatiile masinilor si sa se trateze eventualele exceptii.
*/

/*

#include <iostream>
#include <string>
#include <exception>
using namespace std;

class ExceptieCustom : public exception {
public:
    const char* what() const noexcept override {
        return "Pret prea mic!";
    }
};

class Masina {
private:
    const int id;
    string marca;
    float pret;

public:
    static const int PRET_MINIM = 1000;

    Masina() : id(0), marca("BMW"), pret(5000) {
    }

    Masina(int idM, string marcaM, float pretM)
        : id(idM), marca(marcaM), pret(pretM) {
        if (pret < PRET_MINIM) {
            throw ExceptieCustom();
        }
    }

    virtual void afisare() const {
        cout << endl << "ID: " << id;
        cout << endl << "Marca: " << marca;
        cout << endl << "Pret: " << pret;
    }

    virtual ~Masina() {
    }
};

class MasinaSport : public Masina {
private:
    int vitezaMaxima;

public:
    MasinaSport() : Masina(), vitezaMaxima(200) {
    }

    MasinaSport(int idM, string marcaM, float pretM, int vitezaM)
        : Masina(idM, marcaM, pretM) {
        vitezaMaxima = vitezaM;
    }

    void afisare() const override {
        Masina::afisare();
        cout << endl << "Viteza maxima: " << vitezaMaxima;
    }

    ~MasinaSport() override {
    }
};

int main() {
    try {
        Masina m1(1, "Audi", 500);
        m1.afisare();
    }
    catch (const exception& e) {
        cout << endl << e.what();
    }

    Masina m2(2, "BMW", 10000);
    m2.afisare();

    cout << endl;

    MasinaSport m3(3, "Ferrari", 50000, 320);
    m3.afisare();

    return 0;
}


*/