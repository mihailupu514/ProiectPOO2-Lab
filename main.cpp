#include <iostream>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

class ProgramTraining {
protected:
    int index;
    int numarAbsolventi;
public:
    ProgramTraining() {
        int Index = 0;
        int NumarAbsolventi = 0;
    }

    virtual ~ProgramTraining() {
    }

    bool operator==(const ProgramTraining &ex) const {
        return index == ex.index &&
               numarAbsolventi == ex.numarAbsolventi;
    }

    bool operator!=(const ProgramTraining &ex) const {
        return !(ex == *this);
    }
};

class Finantist : ProgramTraining {

public:
    bool operator==(const Finantist &ex) const {
        return static_cast<const ProgramTraining &>(*this) == static_cast<const ProgramTraining &>(ex) &&
               index == ex.index &&
               notaFinanciar == ex.notaFinanciar &&
               notaAlgebra == ex.notaAlgebra &&
               Medie == ex.Medie &&
               MedieRotunjita == ex.MedieRotunjita;
    }

    bool operator!=(const Finantist &ex) const {
        return !(ex == *this);
    }
protected:
    int index;
    float notaFinanciar;
    float notaAlgebra;
public:
    friend ostream &operator<<(ostream &os, const Finantist &finantist);

protected:
    float Medie;
    float MedieRotunjita;


public:
    Finantist() {
        int Index = 0;
        float NotaFinanciar = 0;
        float NotaAlgebra = 0;
        float medie = 0;
        float medierotunjita = 0;
    }

    Finantist(int Index, float Financiar, float Algebra) {
        index = Index;
        notaFinanciar = Financiar;
        notaAlgebra = Algebra;
        Medie = (Financiar + Algebra) / 2;
        MedieRotunjita = ceil(Medie);
    }

    virtual ~Finantist() {
    }

    int getIndex() const {
        return index;
    }

    void setIndex(int Index) {
        Finantist::index = Index;
    }

    float getNotaFinanciar() const {
        return notaFinanciar;
    }

    void setNotaFinanciar(float NotaFinanciar) {
        Finantist::notaFinanciar = NotaFinanciar;
    }

    float getNotaAlgebra() const {
        return notaAlgebra;
    }

    void setNotaAlgebra(float NotaAlgebra) {
        Finantist::notaAlgebra = NotaAlgebra;
    }

    float getMedie() const {
        return Medie;
    }

    void setMedie(float NotaAlgebra, float NotaFinanciar) {
        Medie = (NotaAlgebra + NotaFinanciar) / 2;
    }

    float getMedieRotunjita() const {
        return MedieRotunjita;
    }

    void setMedieRotunjita(float medie) {
        MedieRotunjita = ceil(medie);
    }

};

ostream &operator<<(ostream &os, const Finantist &finantist) {
   os<< " index: " << finantist.index << " notaFinanciar: ";
       os<< finantist.notaFinanciar << " notaAlgebra: " << finantist.notaAlgebra << " Medie: " << finantist.Medie
       << " MedieRotunjita: " << finantist.MedieRotunjita;
    return os;
}

class Manager : ProgramTraining {

public:
    int getIndex() const {
        return index;
    }

    void setIndex(int Index) {
        Manager::index = Index;
    }

    float getNotaHr() const {
        return NotaHR;
    }

    void setNotaHr(float notaHr) {
        NotaHR = notaHr;
    }

    float getNotaFinanciar() const {
        return NotaFinanciar;
    }

    void setNotaFinanciar(float notaFinanciar) {
        NotaFinanciar = notaFinanciar;
    }

    float getNotaEngleza() const {
        return NotaEngleza;
    }

    void setNotaEngleza(float notaEngleza) {
        NotaEngleza = notaEngleza;
    }

    float getMedie() const {
        return Medie;
    }

    void setMedie(float NotaHr, float Notafinanciar, float Notaengleza) {
        Medie = (NotaHr + Notaengleza + Notafinanciar) / 3;
    }

    float getMedieRotunjita() const {
        return MedieRotunjita;
    }

    void setMedieRotunjita(float medie) {
        MedieRotunjita = ceil(medie);
    }

protected:
    int index;
    float NotaHR;
public:
    friend ostream &operator<<(ostream &os, const Manager &manager);

protected:
    float NotaFinanciar;
    float NotaEngleza;
    float Medie;
    float MedieRotunjita;
public:
    Manager() {
        int Index = 0;
        float notaHR = 0;
        float notaFinanciar = 0;
        float notaEngleza = 0;
        float medie = 0;
        float medieRotunjita = 0;
    }

    virtual ~Manager() {
    }
};

ostream &operator<<(ostream &os, const Manager &manager) {
    os<< " index: " << manager.index << " NotaHR: " << manager.NotaHR;
       os<< " NotaFinanciar: " << manager.NotaFinanciar << " NotaEngleza: " << manager.NotaEngleza << " Medie: "
       << manager.Medie << " MedieRotunjita: " << manager.MedieRotunjita;
    return os;
}

class Programator : ProgramTraining {
public:
    int getIndex() const {
        return index;
    }

    void setIndex(int Index) {
        Programator::index = Index;
    }

    float getNotaAlgebra() const {
        return notaAlgebra;
    }

    void setNotaAlgebra(float notaalgebra) {
        Programator::notaAlgebra = notaalgebra;
    }

    float getNotaAnaliza() const {
        return notaAnaliza;
    }

    void setNotaAnaliza(float notaanaliza) {
        Programator::notaAnaliza = notaanaliza;
    }

    float getNotaGeometrie() const {
        return notaGeometrie;
    }

    void setNotaGeometrie(float notageometrie) {
        Programator::notaGeometrie = notageometrie;
    }

    float getNotaJava1() const {
        return notaJava1;
    }

    void setNotaJava1(float notajava1) {
        Programator::notaJava1 = notajava1;
    }

    float getNotaJava2() const {
        return notaJava2;
    }

    void setNotaJava2(float notajava2) {
        Programator::notaJava2 = notajava2;
    }

    float getNotaC1() const {
        return notaC1;
    }

    void setNotaC1(float notac1) {
        Programator::notaC1 = notac1;
    }

    float getNotaC2() const {
        return notaC2;
    }

    void setNotaC2(float notac2) {
        Programator::notaC2 = notac2;
    }

    float getMedie() const {
        return medie;
    }

    void setMedie(float notaalgebra, float notaanaliza, float notageometrie, float notaengleza, float notajava1,
                  float notajava2, float notac1, float notac2) {
        float verif[4];
        float max;
        verif[0] = notajava1;
        verif[1] = notajava2;
        verif[2] = notac1;
        verif[3] = notac2;
        sort(verif, verif + 4);
        max = verif[3];
        Programator::medie = (notaalgebra + notaanaliza + notageometrie + notaengleza + max) / 5;
    }

    float getMedieRotunjita() const {
        return medieRotunjita;
    }

    void setMedieRotunjita(float medierotunjita) {
        Programator::medieRotunjita = ceil(medierotunjita);
    }

    float getNotaEngleza() const {
        return notaEngleza;
    }

    void setNotaEngleza(float notaengleza) {
        Programator::notaEngleza = notaengleza;
    }

protected:
    int index;
    float notaAlgebra;
    float notaAnaliza;
public:
    bool operator==(const Programator &ex) const;

    bool operator!=(const Programator &ex) const;

protected:
    float notaGeometrie;
    float notaEngleza;
    float notaJava1;
    float notaJava2;
    float notaC1;
    float notaC2;
    float medie;
    float medieRotunjita;
public:
    Programator() {
        int Index;
        float NotaAlgebra;
        float NotaAnaliza;
        float NotaGeometrie;
        float NotaEngleza;
        float NotaJava1;
        float NotaJava2;
        float NotaC1;
        float NotaC2;
        float Medie;
        float MedieRotunjita;
    }

    friend ostream &operator<<(ostream &os, const Programator &programator);

    virtual ~Programator() {
    }
};

bool Programator::operator==(const Programator &ex) const {
    return static_cast<const ProgramTraining &>(*this) == static_cast<const ProgramTraining &>(ex) &&
           index == ex.index &&
           notaAlgebra == ex.notaAlgebra &&
           notaAnaliza == ex.notaAnaliza &&
           notaGeometrie == ex.notaGeometrie &&
           notaEngleza == ex.notaEngleza &&
           notaJava1 == ex.notaJava1 &&
           notaJava2 == ex.notaJava2 &&
           notaC1 == ex.notaC1 &&
           notaC2 == ex.notaC2 &&
           medie == ex.medie &&
           medieRotunjita == ex.medieRotunjita;
}

bool Programator::operator!=(const Programator &ex) const {
    return !(ex == *this);
}

ostream &operator<<(ostream &os, const Programator &programator) {
    os<< " index: " << programator.index << " notaAlgebra: "
       << programator.notaAlgebra << " notaAnaliza: " << programator.notaAnaliza << " notaGeometrie: "
       << programator.notaGeometrie << " notaEngleza: " << programator.notaEngleza << " notaJava1: "
       << programator.notaJava1 << " notaJava2: " << programator.notaJava2 << " notaC1: " << programator.notaC1
       << " notaC2: " << programator.notaC2 << " medie: " << programator.medie << " medieRotunjita: "
       << programator.medieRotunjita;
    return os;
}

class ManagerEchipaProgramator : ProgramTraining {
public:
    int getIndex() const {
        return index;
    }

    void setIndex(int Index) {
        ManagerEchipaProgramator::index = Index;
    }

    float getNotaengleza() const {
        return notaengleza;
    }


    void setNotaengleza(float notaEngleza) {
        ManagerEchipaProgramator::notaengleza = notaEngleza;
    }

    float getNotahr() const {
        return notahr;
    }

    void setNotahr(float notaHr) {
        ManagerEchipaProgramator::notahr = notaHr;
    }

    float getNotafinanciar() const {
        return notafinanciar;
    }

    void setNotafinanciar(float notaFinanciar) {
        ManagerEchipaProgramator::notafinanciar = notaFinanciar;
    }

    float getNotajava1() const {
        return notajava1;
    }

    void setNotajava1(float notaJava1) {
        ManagerEchipaProgramator::notajava1 = notaJava1;
    }

    float getNotajava2() const {
        return notajava2;
    }

    void setNotajava2(float notaJava2) {
        ManagerEchipaProgramator::notajava2 = notaJava2;
    }

    float getNotac1() const {
        return notac1;
    }

    void setNotac1(float notaC1) {
        ManagerEchipaProgramator::notac1 = notaC1;
    }

    float getNotac2() const {
        return notac2;
    }

    void setNotac2(float notaC2) {
        ManagerEchipaProgramator::notac2 = notaC2;
    }

    float getNotaNlp() const {
        return notaNLP;
    }

    void setNotaNlp(float notaNlp) {
        notaNLP = notaNlp;
    }

protected:
    int index;
    float notaengleza;
    float notahr;
    float notafinanciar;
    float notajava1;
    float notajava2;
    float notac1;
    float notac2;
    float notaNLP;
    float medie;
    float medierotunjita;
public:
    float getMedie() const {
        return medie;
    }

    void setMedie(float notaEngleza, float notaHr, float notaFinanciar, float notaJava1, float notaJava2, float notaC1,
                  float notaC2, float notanlp) {
        float verif[4];
        verif[0] = notaJava1;
        verif[1] = notaJava2;
        verif[2] = notaC1;
        verif[3] = notaC2;
        sort(verif, verif + 4);
        float max;
        max = verif[3];
        ManagerEchipaProgramator::medie = (notaEngleza + notaHr + notaFinanciar + max + notanlp) / 5;
    }

    float getMedierotunjita() const {
        return medierotunjita;
    }

    void setMedierotunjita(float medieRotunjita) {
        ManagerEchipaProgramator::medierotunjita = ceil(medieRotunjita);
    }

public:
    ManagerEchipaProgramator() {
        int Index;
        float Notaengleza;
        float Notahr;
        float Notafinanciar;
        float Notajava1;
        float Notajava2;
        float Notac1;
        float Notac2;
        float NotaNLP;
        float Medie;
        float Medierotunjita;
    }

    friend ostream &operator<<(ostream &os, const ManagerEchipaProgramator &programator);

    bool operator==(const ManagerEchipaProgramator &ex) const;

    bool operator!=(const ManagerEchipaProgramator &ex) const;

    virtual ~ManagerEchipaProgramator() {
    }
};

bool ManagerEchipaProgramator::operator==(const ManagerEchipaProgramator &ex) const {
    return static_cast<const ProgramTraining &>(*this) == static_cast<const ProgramTraining &>(ex) &&
           index == ex.index &&
           notaengleza == ex.notaengleza &&
           notahr == ex.notahr &&
           notafinanciar == ex.notafinanciar &&
           notajava1 == ex.notajava1 &&
           notajava2 == ex.notajava2 &&
           notac1 == ex.notac1 &&
           notac2 == ex.notac2 &&
           notaNLP == ex.notaNLP &&
           medie == ex.medie &&
           medierotunjita == ex.medierotunjita;
}

bool ManagerEchipaProgramator::operator!=(const ManagerEchipaProgramator &ex) const {
    return !(ex == *this);
}

ostream &operator<<(ostream &os, const ManagerEchipaProgramator &programator) {
    os<< " index: " << programator.index << " notaengleza: "
       << programator.notaengleza << " notahr: " << programator.notahr << " notafinanciar: "
       << programator.notafinanciar << " notajava1: " << programator.notajava1 << " notajava2: "
       << programator.notajava2 << " notac1: " << programator.notac1 << " notac2: " << programator.notac2
       << " notaNLP: " << programator.notaNLP << " medie: " << programator.medie << " medierotunjita: "
       << programator.medierotunjita;
    return os;
}

class Sofer : ProgramTraining {
public:
    int getIndex() const {
        return index;
    }

    void setIndex(int Index) {
        Sofer::index = Index;
    }

    float getNotaLegislatie() const {
        return notaLegislatie;
    }

    void setNotaLegislatie(float notalegislatie) {
        Sofer::notaLegislatie = notalegislatie;
    }

    float getNotaSofat() const {
        return notaSofat;
    }

    void setNotaSofat(float notasofat) {
        Sofer::notaSofat = notasofat;
    }

    float getMedie() const {
        return medie;
    }

    void setMedie(float notalegislatie, float notasofat) {
        Sofer::medie = (notalegislatie + notasofat) / 2;
    }

    float getMedieRotunjita() const {
        return medieRotunjita;
    }

    void setMedieRotunjita(float medierotunjita) {
        Sofer::medieRotunjita = ceil(medierotunjita);
    }

protected:
    int index;
    float notaLegislatie;
    float notaSofat;
    float medie;
    float medieRotunjita;
public:
    Sofer() {
        int Index = 0;
        float NotaLegislatie = 0;
        float NotaSofat = 0;
        float Medie = 0;
        float MedieRotunjita = 0;
    }

    friend ostream &operator<<(ostream &os, const Sofer &sofer);

    bool operator==(const Sofer &ex) const;

    bool operator!=(const Sofer &ex) const;

    virtual ~Sofer() {
    }
};

bool Sofer::operator==(const Sofer &ex) const {
    return static_cast<const ProgramTraining &>(*this) == static_cast<const ProgramTraining &>(ex) &&
           index == ex.index &&
           notaLegislatie == ex.notaLegislatie &&
           notaSofat == ex.notaSofat &&
           medie == ex.medie &&
           medieRotunjita == ex.medieRotunjita;
}

bool Sofer::operator!=(const Sofer &ex) const {
    return !(ex == *this);
}

ostream &operator<<(ostream &os, const Sofer &sofer) {
    os<<" index: " << sofer.index << " notaLegislatie: "
       << sofer.notaLegislatie << " notaSofat: " << sofer.notaSofat << " medie: " << sofer.medie << " medieRotunjita: "
       << sofer.medieRotunjita;
    return os;
}

class ManagerEchipaTiristi : ProgramTraining {
public:
    int getIndex() const {
        return index;
    }

    void setIndex(int Index) {
        ManagerEchipaTiristi::index = Index;
    }

    float getNotaEngleza() const {
        return notaEngleza;
    }

    void setNotaEngleza(float notaengleza) {
        ManagerEchipaTiristi::notaEngleza = notaengleza;
    }

    float getNotaHr() const {
        return notaHR;
    }

    void setNotaHr(float notaHr) {
        notaHR = notaHr;
    }

    float getNotaFinanciar() const {
        return notaFinanciar;
    }

    void setNotaFinanciar(float notafinanciar) {
        ManagerEchipaTiristi::notaFinanciar = notafinanciar;
    }

    float getNotaTurca() const {
        return notaTurca;
    }

    void setNotaTurca(float notaturca) {
        ManagerEchipaTiristi::notaTurca = notaturca;
    }

    float getNotaLegislatie() const {
        return notaLegislatie;
    }

    void setNotaLegislatie(float notalegislatie) {
        ManagerEchipaTiristi::notaLegislatie = notalegislatie;
    }

    float getMedie() const {
        return Medie;
    }

    void setMedie(float notaengleza, float notahr, float notafinanciar, float notaturca, float notalegislatie) {
        Medie = (notaengleza + notafinanciar + notahr + notaturca + notalegislatie) / 5;
    }

    float getMedieRotunjita() const {
        return MedieRotunjita;
    }

    void setMedieRotunjita(float medieRotunjita) {
        MedieRotunjita = ceil(medieRotunjita);
    }

protected:
    int index;
    float notaEngleza;
    float notaHR;
    float notaFinanciar;
    float notaTurca;
    float notaLegislatie;
    float Medie;
    float MedieRotunjita;
public:
    ManagerEchipaTiristi() {
        int Index = 0;
        float NotaEngleza = 0;
        float NotaHR = 0;
        float NotaFinanciar = 0;
        float NotaTurca = 0;
        float NotaLegislatie = 0;
        float medie = 0;
        float medieRotunjita = 0;
    }

    friend ostream &operator<<(ostream &os, const ManagerEchipaTiristi &tiristi);

    bool operator==(const ManagerEchipaTiristi &ex) const;

    bool operator!=(const ManagerEchipaTiristi &ex) const;

    virtual ~ManagerEchipaTiristi() {
    }
};

bool ManagerEchipaTiristi::operator==(const ManagerEchipaTiristi &ex) const {
    return static_cast<const ProgramTraining &>(*this) == static_cast<const ProgramTraining &>(ex) &&
           index == ex.index &&
           notaEngleza == ex.notaEngleza &&
           notaHR == ex.notaHR &&
           notaFinanciar == ex.notaFinanciar &&
           notaTurca == ex.notaTurca &&
           notaLegislatie == ex.notaLegislatie &&
           Medie == ex.Medie &&
           MedieRotunjita == ex.MedieRotunjita;
}

bool ManagerEchipaTiristi::operator!=(const ManagerEchipaTiristi &ex) const {
    return !(ex == *this);
}

ostream &operator<<(ostream &os, const ManagerEchipaTiristi &tiristi) {
    os << " index: " << tiristi.index << " notaEngleza: "
       << tiristi.notaEngleza << " notaHR: " << tiristi.notaHR << " notaFinanciar: " << tiristi.notaFinanciar
       << " notaTurca: " << tiristi.notaTurca << " notaLegislatie: " << tiristi.notaLegislatie << " Medie: "
       << tiristi.Medie << " MedieRotunjita: " << tiristi.MedieRotunjita;
    return os;
}
class Management
{

public:
    static Management& getInstance()
    {
        static Management    instance;
        return instance;
    }
private:
    Management() {}
public:
    Management(Management const&)= delete;
    void operator==(Management const&)=delete;

};

class Cursuri : ProgramTraining {
public:
    friend bool operator==(const Cursuri &lhs, const Cursuri &ex);

    friend bool operator!=(const Cursuri &lhs, const Cursuri &ex);

private:
    int index;
    char *NumeCurs;
    char *NumeTutor;
    int varstaTutor;
    float GradIndulgenta;
    int NumarMax_Cursanti;
public:

    static void definireCursuri(Cursuri *C) {
        cout << "Cursuri Standard:";
        cout << endl << "Mate: 0.Algebra 1.Geometrie 2.Analiza. " << endl;
        cout
                << "Info : 3.Programare Non-OOP Java 4.Programare OOP Java 5.Programare Non-OOP C++ 6.Programare OOP C++";
        cout << endl << "Limbi Straine : 7.Limba Engleza 8.Limba Turca 9.Limba Spaniola";
        cout << endl
             << "Misc: 10. Resurse Umane 11.Financiar 12.Legislatie Auto 13.Sofat Auto Practic 14.Comunicare NLP";
        for (int i = 0; i < 15; i++)
            C[i].setIndex(i);
        C[0].setNumeCurs("Algebra");
        C[1].setNumeCurs("Geometrie");
        C[2].setNumeCurs("Analiza");
        C[3].setNumeCurs("Programare Non-OOP Java");
        C[4].setNumeCurs("Programare OOP Java");
        C[5].setNumeCurs("Programare Non-OOP C++");
        C[6].setNumeCurs("Programare OOP C++");
        C[7].setNumeCurs("Limba Engleza");
        C[8].setNumeCurs("Limba Turca");
        C[9].setNumeCurs("Limba Spaniola");
        C[10].setNumeCurs("Resurse Umane");
        C[11].setNumeCurs("Financiar");
        C[12].setNumeCurs("Legislatie Auto");
        C[13].setNumeCurs("Sofat Auto Practic");
        C[14].setNumeCurs("Comunicare NLP");
    }

    int getIndex() const {
        return index;
    }

    void setIndex(int indexu) {
        Cursuri::index = indexu;
    }

    char *getNumeCurs() const {
        return NumeCurs;
    }

    void setNumeCurs(char *numeCurs) {
        NumeCurs = numeCurs;
    }

    char *getNumeTutor() const {
        return NumeTutor;
    }

    void setNumeTutor(char *numeTutor) {
        NumeTutor = numeTutor;
    }

    int getVarsta() const {
        return varstaTutor;
    }

    void setVarsta(int Varsta) {
        Cursuri::varstaTutor = Varsta;
    }

    float getGradIndulgenta() const {
        return GradIndulgenta;
    }

    void setGradIndulgenta(float gradIndulgenta) {
        GradIndulgenta = gradIndulgenta;
    }


    int getNumarCursanti() const {
        return NumarMax_Cursanti;
    }

    void setNumarCursanti(int numarCursanti) {
        NumarMax_Cursanti = numarCursanti;
    }

public:
    Cursuri() {

    }

    Cursuri(char *numeCurs, char *numeTutor, int varsta, float gradIndulgenta, float reputatie, int numarCursanti)
            : NumeCurs(numeCurs), NumeTutor(numeTutor), varstaTutor(varsta), GradIndulgenta(gradIndulgenta),
              NumarMax_Cursanti(numarCursanti) {}

    class Cursant {
    public:
        Cursant() {
            int Index;
            char *Nume; // trb adaugat
            float Productivitate;
            int Varsta;
            int *cursuriAlese;
            int Numar_CursuriAlese;
            int CompetentaF;
            int CompetentaM;
            int CompetentaP;
            int CompetentaS;
            int CompetentaMEP;
            int CompetentaMET;
        }

        friend ostream &operator<<(ostream &os, const Cursant &cursant);

        bool operator==(const Cursant &ex) const;

        bool operator!=(const Cursant &ex) const;

        virtual ~Cursant() {

        }

    public:
                friend ostream &operator>>(ostream &, Cursant &);

        int getIndex1() const {
            return index;
        }

        void setIndex1(int Index) {
            Cursant::index = Index;
        }

        char *getNume() const {
            return nume;
        }

        void setNume(char *Nume) {
            Cursant::nume = Nume;
        }

        float getProductivitate() const {
            return productivitate;
        }

        void setProductivitate(float Productivitate) {
            Cursant::productivitate = Productivitate;
        }

    public:
        int getVarsta1() const {
            return varsta;
        }

        void setVarsta1(int Varsta) {
            Cursant::varsta = Varsta;
        }

        int *getCursuriAlese() const {
            return CursuriAlese;
        }

        void setCursuriAlese(int *cursuriAlese) {
            CursuriAlese = cursuriAlese;
        }

        int getNumarCursuriAlese() const {
            return numar_CursuriAlese;
        }

        void setNumarCursuriAlese(int numarCursuriAlese) {
            numar_CursuriAlese = numarCursuriAlese;
        }

    public:
        Cursant(int index, char *nume, float productivitate, int varsta, int *cursuriAlese) : index(index), nume(nume),
                                                                                              productivitate(
                                                                                                      productivitate),
                                                                                              varsta(varsta),
                                                                                              CursuriAlese(
                                                                                                      cursuriAlese) {}

    protected:
        int index;
        char *nume; // trb adaugat
        float productivitate;
        int varsta;
        int *CursuriAlese;
        int numar_CursuriAlese;
        int competentaF;
        int competentaM;
        int competentaP;
        int competentaS;
        int competentaMEP;
        int competentaMET;
    public:
        int getCompetentaF() const {
            return competentaF;
        }

        void setCompetentaF(int competentaf) {
            Cursant::competentaF = competentaf;
        }

        int getCompetentaM() const {
            return competentaM;
        }

        void setCompetentaM(int competentam) {
            Cursant::competentaM = competentam;
        }

        int getCompetentaP() const {
            return competentaP;
        }

        void setCompetentaP(int competentap) {
            Cursant::competentaP = competentap;
        }

        int getCompetentaS() const {
            return competentaS;
        }

        void setCompetentaS(int competentas) {
            Cursant::competentaS = competentas;
        }

        int getCompetentaMep() const {
            return competentaMEP;
        }

        void setCompetentaMep(int competentamep) {
            competentaMEP = competentamep;
        }

        int getCompetentaMet() const {
            return competentaMET;
        }

        void setCompetentaMet(int competentaMet) {
            competentaMET = competentaMet;
        }

    };

    class FisaEvaluare {
        int index_evaluare;
        float NotaLab;
        float NotaColocviu;
        float ExamenOral;
        float ExamenScris;
        float Seminar;
        int NotaFinala;
    public:
        int getNotaFinala() const {
            return NotaFinala;
        }

        void setNotaFinala(int notaFinala) {
            NotaFinala = notaFinala;
        }

        int getIndex1() const {
            return index_evaluare;
        }

        void setIndex1(int Index) {
            FisaEvaluare::index_evaluare = Index;
        }

        float getNotaLab() const {
            return NotaLab;
        }

        void setNotaLab(float notaLab) {
            NotaLab = notaLab;
        }

        float getNotaColocviu() const {
            return NotaColocviu;
        }

        void setNotaColocviu(float notaColocviu) {
            NotaColocviu = notaColocviu;
        }

        float getExamenOral() const {
            return ExamenOral;
        }

        void setExamenOral(float examenOral) {
            ExamenOral = examenOral;
        }

        float getExamenScris() const {
            return ExamenScris;
        }

        void setExamenScris(float examenScris) {
            ExamenScris = examenScris;
        }

        float getSeminar() const {
            return Seminar;
        }

        void setSeminar(float seminar) {
            Seminar = seminar;
        }

    public:
        FisaEvaluare(float notaLab, float notaColocviu, float examenOral, float examenScris, float seminar) : NotaLab(
                notaLab), NotaColocviu(notaColocviu), ExamenOral(examenOral), ExamenScris(examenScris),
                                                                                                              Seminar(seminar) {}

        FisaEvaluare() {
            int Index_evaluare;
            float notaLab;
            float notaColocviu;
            float examenOral;
            float examenScris;
            float seminar;
            int notaFinala;
        }

        virtual ~FisaEvaluare() {

        }

    };
};

bool Cursuri::Cursant::operator==(const Cursuri::Cursant &ex) const {
    return index == ex.index &&
           nume == ex.nume &&
           productivitate == ex.productivitate &&
           varsta == ex.varsta &&
           CursuriAlese == ex.CursuriAlese &&
           numar_CursuriAlese == ex.numar_CursuriAlese &&
           competentaF == ex.competentaF &&
           competentaM == ex.competentaM &&
           competentaP == ex.competentaP &&
           competentaS == ex.competentaS &&
           competentaMEP == ex.competentaMEP &&
           competentaMET == ex.competentaMET;
}

bool Cursuri::Cursant::operator!=(const Cursuri::Cursant &ex) const {
    return !(ex == *this);
}

ostream &operator<<(ostream &os, const Cursuri::Cursant &cursant) {
    os << "index: " << cursant.index << " nume: " << cursant.nume << " productivitate: " << cursant.productivitate
       << " varsta: " << cursant.varsta << " CursuriAlese: " << cursant.CursuriAlese << " numar_CursuriAlese: "
       << cursant.numar_CursuriAlese << " competentaF: " << cursant.competentaF << " competentaM: "
       << cursant.competentaM << " competentaP: " << cursant.competentaP << " competentaS: " << cursant.competentaS
       << " competentaMEP: " << cursant.competentaMEP << " competentaMET: " << cursant.competentaMET;
    return os;
}

bool operator==(const Cursuri &lhs, const Cursuri &ex) {
    return static_cast<const ProgramTraining &>(lhs) == static_cast<const ProgramTraining &>(ex) &&
           lhs.index == ex.index;
}

bool operator!=(const Cursuri &lhs, const Cursuri &ex) {
    return !(ex == lhs);
}

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;
    int j = 0;
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];
    arr[j++] = arr[n - 1];
    return j;
}
class Examen { virtual void fun() {} };
class Sesiune: public Examen { };

int main() {
    ifstream fin("BazadeDate.txt");
    Cursuri *C;
    C = new Cursuri[15];
    cout << "Informatii se vor citi 1.Generate Random 2.Tastatura";
    Finantist *F;
    Manager *M;
    Programator *P;
    Sofer *S;
    ManagerEchipaProgramator *MEP;
    ManagerEchipaTiristi *MET;
    int operatie;
    cout << endl << "Operatie:";
    try{
    cin >> operatie;
    if(operatie<0 || operatie>2)
    throw(operatie);
    if(isdigit(operatie)!=1)
    throw(operatie);}
    catch(int operatie)
    {
        cout<<"Operatie Nevalida";
    }

    int sum = 0;
    switch (operatie) {
        case 1: {
            C->definireCursuri(C);
            for (int i = 0; i < 15; i++) {
                int varsta;
                varsta = rand() % 100;
                if (varsta < 22)
                    varsta = varsta + 22;
                C[i].setVarsta(varsta);
                //cout << endl;
//cout<<C[i].getVarsta();
                float indulgenta;
                if (varsta < 40)
                    indulgenta = 1 + C[i].getVarsta() * 0.01 - 0.1;
                else
                    indulgenta = 1 - C[i].getVarsta() * 0.005 + 0.2;
                C[i].setGradIndulgenta(indulgenta);
                //   cout << endl << "Indulgenta:" << C[i].getGradIndulgenta();
                int randNum = rand() % (50 - 15 + 1) + 15;
                C[i].setNumarCursanti(randNum);
                //cout<<endl<<"NumarCursanti:"<<C[i].getNumarCursanti();
                sum = sum + C[i].getNumarCursanti();
            }
            Cursuri::Cursant *Student;
            Student = new Cursuri::Cursant[15 * 50];

            for (int i = 0; i < sum; i++) {
                int randNum = rand() % 2;
                int *vector;
                int count = 0;
                vector = new int[15];
                Student[i].setIndex1(i);
                Student[i].setProductivitate(randNum);
                //  cout<<endl<<"Productivitate:"<<Student[i].getProductivitate();
                int vstNum = rand() % (22 - 18 + 1) + 18;
                Student[i].setVarsta1(vstNum);
                //cout << endl << "Varsta:" << Student[i].getVarsta1() << " ";
                for (int j = 0; j < 15; j++) {
                    vector[j] = rand() % 2;

                }
                Student[i].setCursuriAlese(vector);
                //  for (int j = 0; j < 15; j++)
                //   cout << " " << *(Student[i].getCursuriAlese() + j);
                for (int j = 0; j < 15; j++)
                    if (*(Student[i].getCursuriAlese() + j) == 1)
                        count++;
                Student[i].setNumarCursuriAlese(count);
                //     cout << " " << Student[i].getNumarCursuriAlese();
                int productivitate;
                productivitate = rand() % 5 + 1;
                Student[i].setProductivitate(productivitate);
            }
            //cout << endl << endl << endl;
            for (int i = 0; i < sum; i++) // studentii pt mate-toate
            {
                if (*(Student[i].getCursuriAlese()) == 1 && *(Student[i].getCursuriAlese() + 1) == 1 &&
                    *(Student[i].getCursuriAlese() + 2) == 1) {
                    //     for (int j = 0; j < 15; j++)
                    //             cout << " " << *(Student[i].getCursuriAlese() + j);
                    //       cout << endl;
                }
            }
            Cursuri::FisaEvaluare **Note;
//in curs de facere + trebuie verificat daca alocarea dinamica e ok
            Note = new Cursuri::FisaEvaluare *[sum];
            for (int i = 0; i < sum; i++)
                Note[i] = new Cursuri::FisaEvaluare[15];
            for (int i = 0; i < sum; i++)
                for (int j = 0; j < 15; j++)
                    Note[i][j].setIndex1(i);
//setarea cu 0 a examenelor nespecifice materiei
            for (int i = 0; i < sum; i++) {
                if (*(Student[i].getCursuriAlese()) == 1 || *(Student[i].getCursuriAlese() + 1) == 1 ||
                    *(Student[i].getCursuriAlese() + 2) == 1) {
                    Note[i][0].setNotaLab(0);
                    Note[i][1].setNotaLab(0);
                    Note[i][2].setNotaLab(0);
                    Note[i][0].setExamenOral(0);
                    Note[i][1].setExamenOral(0);
                    Note[i][2].setExamenOral(0);
                }
                if (*(Student[i].getCursuriAlese() + 3) == 1 || *(Student[i].getCursuriAlese() + 4) == 1 ||
                    *(Student[i].getCursuriAlese() + 5) == 1 || *(Student[i].getCursuriAlese() + 6) == 1) {
                    Note[i][3].setExamenOral(0);
                    Note[i][4].setExamenOral(0);
                    Note[i][5].setExamenOral(0);
                    Note[i][6].setExamenOral(0);
                }
                if (*(Student[i].getCursuriAlese() + 7) == 1 || *(Student[i].getCursuriAlese() + 8) == 1 ||
                    *(Student[i].getCursuriAlese() + 9) == 1) //Limbi Straine
                {
                    Note[i][7].setNotaLab(0);
                    Note[i][7].setNotaColocviu(0);
                    Note[i][7].setSeminar(0);
                    Note[i][8].setNotaLab(0);
                    Note[i][8].setNotaColocviu(0);
                    Note[i][8].setSeminar(0);
                    Note[i][9].setNotaLab(0);
                    Note[i][9].setNotaColocviu(0);
                    Note[i][9].setSeminar(0);
                }
                if (*(Student[i].getCursuriAlese() + 10) == 1) {           //Hr
                    Note[i][10].setSeminar(0);
                    Note[i][10].setNotaColocviu(0);
                    Note[i][10].setNotaLab(0);
                    Note[i][10].setExamenScris(0);
                }
                if (*(Student[i].getCursuriAlese() + 11) == 1 || *(Student[i].getCursuriAlese() + 12) == 1 ||
                    *(Student[i].getCursuriAlese() + 13) == 1) //Financiar , Legislatie si Sofat
                {
                    Note[i][11].setNotaLab(0);
                    Note[i][11].setSeminar(0);
                    Note[i][11].setExamenOral(0);
                    Note[i][12].setNotaLab(0);
                    Note[i][12].setSeminar(0);
                    Note[i][12].setExamenOral(0);
                    Note[i][13].setNotaLab(0);
                    Note[i][13].setSeminar(0);
                    Note[i][13].setExamenOral(0);
                }
                if (*(Student[i].getCursuriAlese() + 14) == 1) {
                    Note[i][14].setNotaLab(0);
                    Note[i][14].setNotaColocviu(0);
                }
            }

            for (int i = 0; i < sum; i++) {
                //srand(time(NULL));
                if (*(Student[i].getCursuriAlese()) == 1) {
                    float randColocviu;
                    float randExamenScris;
                    float randSeminar;
                    float notaFinala;
                    randColocviu = rand() % 16;
                    randExamenScris = rand() % 61;
                    randSeminar = rand() % 16;
                    Note[i][0].setNotaColocviu(randColocviu);
                    Note[i][0].setExamenScris(randExamenScris);
                    Note[i][0].setSeminar(randSeminar);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris + randSeminar) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris + randSeminar) * 0.1 + 1;
                    if (C[0].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][0].setNotaFinala(notaFinala);
                    /* cout << Student[i].getIndex1() << " " << "Nota Colocviu: " << Note[i][0].getNotaColocviu()
                          << " Nota Examen: " << Note[i][0].getExamenScris() << " Seminar:" << Note[i][0].getSeminar()
                          << " Nota finala: " << Note[i][0].getNotaFinala();
                     cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 1) == 1) { //Analiza
                    float randColocviu;
                    float randExamenScris;
                    float randSeminar;
                    float notaFinala;
                    randColocviu = rand() % 16;
                    randExamenScris = rand() % 61;
                    randSeminar = rand() % 16;
                    Note[i][1].setNotaColocviu(randColocviu);
                    Note[i][1].setExamenScris(randExamenScris);
                    Note[i][1].setSeminar(randSeminar);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris + randSeminar) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris + randSeminar) * 0.1 + 1;
                    if (C[1].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][1].setNotaFinala(notaFinala);
                    /* cout << Student[i].getIndex1() << " " << "Nota Colocviu: " << Note[i][1].getNotaColocviu()
                          << " Nota Examen: " << Note[i][1].getExamenScris() << " Seminar:" << Note[i][1].getSeminar()
                          << " Nota finala: " << Note[i][1].getNotaFinala();
                     cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 2) == 1) {
                    float randColocviu;
                    float randExamenScris;
                    float randSeminar;
                    float notaFinala;
                    randColocviu = rand() % 16;
                    randExamenScris = rand() % 61;
                    randSeminar = rand() % 16;
                    Note[i][2].setNotaColocviu(randColocviu);
                    Note[i][2].setExamenScris(randExamenScris);
                    Note[i][2].setSeminar(randSeminar);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris + randSeminar) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris + randSeminar) * 0.1 + 1;
                    if (C[2].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][2].setNotaFinala(notaFinala);
                    /*cout << Student[i].getIndex1() << " " << "Nota Colocviu: " << Note[i][2].getNotaColocviu()
                         << " Nota Examen: " << Note[i][2].getExamenScris() << " Seminar:" << Note[i][2].getSeminar()
                         << " Nota finala: " << Note[i][2].getNotaFinala();
                    cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 3) == 1) {
                    float randColocviu;
                    float randLab;
                    float randExamenScris;
                    float randSeminar;
                    float notaFinala;
                    randColocviu = rand() % 21;
                    randExamenScris = rand() % 41;
                    randSeminar = rand() % 16;
                    randLab = rand() % 16;
                    Note[i][3].setNotaColocviu(randColocviu);
                    Note[i][3].setExamenScris(randExamenScris);
                    Note[i][3].setSeminar(randSeminar);
                    Note[i][3].setNotaLab(randLab);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris + randSeminar + randLab) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris + randSeminar + randLab) * 0.1 + 1;
                    if (C[3].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][3].setNotaFinala(notaFinala);
                    /*cout << Student[i].getIndex1() << " " << "Nota Colocviu: " << Note[i][3].getNotaColocviu()
                         << " Nota Examen: " << Note[i][3].getExamenScris() << " Seminar:" << Note[i][3].getSeminar()<< " Lab:"<<Note[i][3].getNotaLab()
                         << " Nota finala: " << Note[i][3].getNotaFinala();
                    cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 4) == 1) {
                    float randColocviu;
                    float randLab;
                    float randExamenScris;
                    float randSeminar;
                    float notaFinala;
                    randColocviu = rand() % 21;
                    randExamenScris = rand() % 41;
                    randSeminar = rand() % 16;
                    randLab = rand() % 16;
                    Note[i][4].setNotaColocviu(randColocviu);
                    Note[i][4].setExamenScris(randExamenScris);
                    Note[i][4].setSeminar(randSeminar);
                    Note[i][4].setNotaLab(randLab);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris + randSeminar + randLab) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris + randSeminar + randLab) * 0.1 + 1;
                    if (C[4].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][4].setNotaFinala(notaFinala);
                    /*cout << Student[i].getIndex1() << " " << "Nota Colocviu: " << Note[i][4].getNotaColocviu()
                         << " Nota Examen: " << Note[i][4].getExamenScris() << " Seminar:" << Note[i][4].getSeminar()<< " Lab:"<<Note[i][4].getNotaLab()
                         << " Nota finala: " << Note[i][4].getNotaFinala();
                    cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 5) == 1) {
                    float randColocviu;
                    float randLab;
                    float randExamenScris;
                    float randSeminar;
                    float notaFinala;
                    randColocviu = rand() % 21;
                    randExamenScris = rand() % 41;
                    randSeminar = rand() % 16;
                    randLab = rand() % 16;
                    Note[i][5].setNotaColocviu(randColocviu);
                    Note[i][5].setExamenScris(randExamenScris);
                    Note[i][5].setSeminar(randSeminar);
                    Note[i][5].setNotaLab(randLab);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris + randSeminar + randLab) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris + randSeminar + randLab) * 0.1 + 1;
                    if (C[5].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][5].setNotaFinala(notaFinala);
                    /*  cout << Student[i].getIndex1() << " " << "Nota Colocviu: " << Note[i][5].getNotaColocviu()
                           << " Nota Examen: " << Note[i][5].getExamenScris() << " Seminar:" << Note[i][5].getSeminar()<< " Lab:"<<Note[i][5].getNotaLab()
                           << " Nota finala: " << Note[i][5].getNotaFinala();
                      cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 6) == 1) {
                    float randColocviu;
                    float randLab;
                    float randExamenScris;
                    float randSeminar;
                    float notaFinala;
                    randColocviu = rand() % 21;
                    randExamenScris = rand() % 41;
                    randSeminar = rand() % 16;
                    randLab = rand() % 16;
                    Note[i][6].setNotaColocviu(randColocviu);
                    Note[i][6].setExamenScris(randExamenScris);
                    Note[i][6].setSeminar(randSeminar);
                    Note[i][6].setNotaLab(randLab);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris + randSeminar + randLab) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris + randSeminar + randLab) * 0.1 + 1;
                    if (C[6].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][6].setNotaFinala(notaFinala);
                    /* cout << Student[i].getIndex1() << " " << "Nota Colocviu: " << Note[i][6].getNotaColocviu()
                          << " Nota Examen: " << Note[i][6].getExamenScris() << " Seminar:" << Note[i][6].getSeminar()<< " Lab:"<<Note[i][6].getNotaLab()
                          << " Nota finala: " << Note[i][6].getNotaFinala();
                     cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 7) == 1) {
                    float randExamenScris;
                    float notaFinala;
                    float randOral;
                    randOral = rand() % 31;
                    randExamenScris = rand() % 61;
                    Note[i][7].setExamenScris(randExamenScris);
                    Note[i][7].setExamenOral(randOral);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randOral + randExamenScris) * 0.1 + 2;
                    else
                        notaFinala = (randOral + randExamenScris) * 0.1 + 1;
                    if (C[7].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][7].setNotaFinala(notaFinala);
                    /*cout << Student[i].getIndex1() << " "
                         << " Nota Examen: " << Note[i][7].getExamenScris() << " Oral: " << Note[i][7].getExamenOral()
                         << " Nota finala: " << Note[i][7].getNotaFinala();
                    cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 8) == 1) {
                    float randExamenScris;
                    float notaFinala;
                    float randOral;
                    randOral = rand() % 31;
                    randExamenScris = rand() % 61;
                    Note[i][8].setExamenScris(randExamenScris);
                    Note[i][8].setExamenOral(randOral);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randOral + randExamenScris) * 0.1 + 2;
                    else
                        notaFinala = (randOral + randExamenScris) * 0.1 + 1;
                    if (C[8].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][8].setNotaFinala(notaFinala);
                    /* cout << Student[i].getIndex1() << " "
                          << " Nota Examen: " << Note[i][8].getExamenScris() << " Oral: " << Note[i][8].getExamenOral()
                          << " Nota finala: " << Note[i][8].getNotaFinala();
                     cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 9) == 1) {
                    float randExamenScris;
                    float notaFinala;
                    float randOral;
                    randOral = rand() % 31;
                    randExamenScris = rand() % 61;
                    Note[i][9].setExamenScris(randExamenScris);
                    Note[i][9].setExamenOral(randOral);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randOral + randExamenScris) * 0.1 + 2;
                    else
                        notaFinala = (randOral + randExamenScris) * 0.1 + 1;
                    if (C[9].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][9].setNotaFinala(notaFinala);
                    /*cout << Student[i].getIndex1() << " "
                         << " Nota Examen: " << Note[i][9].getExamenScris() << " Oral: " << Note[i][9].getExamenOral()
                         << " Nota finala: " << Note[i][9].getNotaFinala();
                    cout << endl;*/
                }
                if (*(Student[i].getCursuriAlese() + 10) == 1) {
                    float notaFinala;
                    float randOral;
                    randOral = rand() % 91;
                    Note[i][10].setExamenOral(randOral);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randOral) * 0.1 + 2;
                    else
                        notaFinala = (randOral) * 0.1 + 1;
                    if (C[10].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][10].setNotaFinala(notaFinala);
                    /* cout << Student[i].getIndex1() << " " << " Oral: " << Note[i][10].getExamenOral()
                          << " Nota finala: " << Note[i][10].getNotaFinala();
                     cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 11) == 1) {
                    float randExamenScris;
                    float notaFinala;
                    float randColocviu;
                    randColocviu = rand() % 41;
                    randExamenScris = rand() % 51;
                    Note[i][11].setExamenScris(randExamenScris);
                    Note[i][11].setNotaColocviu(randColocviu);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris) * 0.1 + 1;
                    if (C[11].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][11].setNotaFinala(notaFinala);
                    /*cout << Student[i].getIndex1() << " "
                         << " Nota Examen: " << Note[i][11].getExamenScris() << " Colocviu: " << Note[i][11].getNotaColocviu()
                         << " Nota finala: " << Note[i][11].getNotaFinala();
                    cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 12) == 1) {
                    float randExamenScris;
                    float notaFinala;
                    float randColocviu;
                    randColocviu = rand() % 41;
                    randExamenScris = rand() % 51;
                    Note[i][12].setExamenScris(randExamenScris);
                    Note[i][12].setNotaColocviu(randColocviu);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris) * 0.1 + 1;
                    if (C[12].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][12].setNotaFinala(notaFinala);
                    /*cout << Student[i].getIndex1() << " "
                         << " Nota Examen: " << Note[i][12].getExamenScris() << " Colocviu: " << Note[i][12].getNotaColocviu()
                         << " Nota finala: " << Note[i][12].getNotaFinala();
                    cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 13) == 1) {
                    float randExamenScris;
                    float notaFinala;
                    float randColocviu;
                    randColocviu = rand() % 41;
                    randExamenScris = rand() % 51;
                    Note[i][13].setExamenScris(randExamenScris);
                    Note[i][13].setNotaColocviu(randColocviu);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randColocviu + randExamenScris) * 0.1 + 2;
                    else
                        notaFinala = (randColocviu + randExamenScris) * 0.1 + 1;
                    if (C[13].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][13].setNotaFinala(notaFinala);
                    /*cout << Student[i].getIndex1() << " "
                         << " Nota Examen: " << Note[i][13].getExamenScris() << " Colocviu: " << Note[i][13].getNotaColocviu()
                         << " Nota finala: " << Note[i][13].getNotaFinala();
                    cout << endl;*/

                }
                if (*(Student[i].getCursuriAlese() + 14) == 1) {
                    float randExamenScris;
                    float randSeminar;
                    float randOral;
                    float notaFinala;
                    randOral = rand() % 21;
                    randSeminar = rand() % 11;
                    randExamenScris = rand() % 61;
                    Note[i][14].setExamenScris(randExamenScris);
                    Note[i][14].setExamenOral(randOral);
                    Note[i][14].setSeminar(randSeminar);
                    if (Student[i].getProductivitate() == 1)
                        notaFinala = (randOral + randSeminar + randExamenScris) * 0.1 + 2;
                    else
                        notaFinala = (randOral + randSeminar + randExamenScris) * 0.1 + 1;
                    if (C[14].getGradIndulgenta() >= 1)
                        notaFinala = ceil(notaFinala);
                    else
                        notaFinala = floor(notaFinala);
                    if (notaFinala > 10)
                        notaFinala = 10;
                    Note[i][14].setNotaFinala(notaFinala);
                    /*   cout << Student[i].getIndex1() << " "
                            << " Nota Examen: " << Note[i][14].getExamenScris() << " Oral: " << Note[i][14].getExamenOral()
                            << " Seminar: " << Note[i][14].getSeminar()
                            << " Nota finala: " << Note[i][14].getNotaFinala();
                       cout << endl;*/

                }

            }
            // cout << endl;
            //Indexarea pt fiecare profesie in parte
            //Finantist
            int count1[50 * 15];
            int iterator1 = 0;
            for (int i = 0; i < sum; i++)
                if (*(Student[i].getCursuriAlese()) == 1 && *(Student[i].getCursuriAlese() + 11) == 1) {
                    if (Note[i][0].getNotaFinala() >= 5 && Note[i][11].getNotaFinala() >= 5) {
                        count1[iterator1] = Student[i].getIndex1();
                        iterator1++;
                        //cout << endl;
                        /* cout << "Index:" << Student[i].getIndex1() << " Nota Algebra:" << Note[i][0].getNotaFinala()
                              << " Nota Financiar: " << Note[i][11].getNotaFinala() << " Media:"
                              << (ceil(Note[i][0].getNotaFinala() + Note[i][11].getNotaFinala()) / 2);*/
                    }
                }
            F = new Finantist[iterator1];
            // Manager
            int count2[50 * 15];
            int iterator2 = 0;
            for (int i = 0; i < sum; i++)
                if (*(Student[i].getCursuriAlese() + 7) == 1 && *(Student[i].getCursuriAlese() + 10) == 1 &&
                    *(Student[i].getCursuriAlese() + 11) == 1) {
                    if (Note[i][7].getNotaFinala() >= 5 && Note[i][10].getNotaFinala() >= 5 &&
                        Note[i][11].getNotaFinala() >= 5) {
                        count2[iterator2] = Student[i].getIndex1();
                        iterator2++;
                        // cout << endl;
                        /* cout << "Index:" << Student[i].getIndex1() << " Nota Engleza:" << Note[i][7].getNotaFinala()
                              << " Nota Resurse Umane: " << Note[i][10].getNotaFinala() << " Nota Financiar: "
                              << Note[i][11].getNotaFinala() << " Media:"
                              << ((Note[i][7].getNotaFinala()+ Note[i][10].getNotaFinala() + Note[i][11].getNotaFinala()) / 3);*/
                    }
                }
            M = new Manager[iterator2];
            //  cout << endl;
            int count7[50 * 15];
            int iterator7 = 0;
            //Manager programatori - info 3
            for (int i = 0; i < sum; i++) {
                if (*(Student[i].getCursuriAlese() + 7) == 1 && *(Student[i].getCursuriAlese() + 10) == 1 &&
                    *(Student[i].getCursuriAlese() + 11) == 1 && *(Student[i].getCursuriAlese() + 14) == 1 &&
                    *(Student[i].getCursuriAlese() + 3) == 1) {
                    if (Note[i][7].getNotaFinala() >= 5 && Note[i][10].getNotaFinala() >= 5 &&
                        Note[i][11].getNotaFinala() >= 5 && Note[i][14].getNotaFinala() >= 5 &&
                        Note[i][3].getNotaFinala() >= 5) {
                        count7[iterator7] = Student[i].getIndex1();
                        iterator7++;
                        /* cout << endl;
                         cout << "Index:" << Student[i].getIndex1() << " Nota Engleza:" << Note[i][7].getNotaFinala()
                              << " Nota Resurse Umane: " << Note[i][10].getNotaFinala() << " Nota Financiar: "
                              << Note[i][11].getNotaFinala() << " NLP: " << Note[i][14].getNotaFinala()
                              << " Programare POO Java: " << Note[i][3].getNotaFinala() << " Media:"
                              << (ceil(Note[i][7].getNotaFinala() + Note[i][10].getNotaFinala() +
                                       Note[i][11].getNotaFinala() + Note[i][14].getNotaFinala() +
                                       Note[i][3].getNotaFinala()) / 5);*/
                    }
                }
                if (*(Student[i].getCursuriAlese() + 7) == 1 && *(Student[i].getCursuriAlese() + 10) == 1 &&
                    *(Student[i].getCursuriAlese() + 11) == 1 && *(Student[i].getCursuriAlese() + 14) == 1 &&
                    *(Student[i].getCursuriAlese() + 4) == 1) {
                    if (Note[i][7].getNotaFinala() >= 5 && Note[i][10].getNotaFinala() >= 5 &&
                        Note[i][11].getNotaFinala() >= 5 && Note[i][14].getNotaFinala() >= 5 &&
                        Note[i][4].getNotaFinala() >= 5) {
                        count7[iterator7] = Student[i].getIndex1();
                        iterator7++;
                        /*  cout << endl;
                          cout << "Index:" << Student[i].getIndex1() << " Nota Engleza:" << Note[i][7].getNotaFinala()
                               << " Nota Resurse Umane: " << Note[i][10].getNotaFinala() << " Nota Financiar: "
                               << Note[i][11].getNotaFinala() << " NLP: " << Note[i][14].getNotaFinala()
                               << " Programare NON-POO Java: " << Note[i][4].getNotaFinala() << " Media:"
                               << (ceil(Note[i][7].getNotaFinala() + Note[i][10].getNotaFinala() +
                                        Note[i][11].getNotaFinala() + Note[i][14].getNotaFinala() +
                                        Note[i][4].getNotaFinala()) / 5);*/
                    }
                }
                if (*(Student[i].getCursuriAlese() + 7) == 1 && *(Student[i].getCursuriAlese() + 10) == 1 &&
                    *(Student[i].getCursuriAlese() + 11) == 1 && *(Student[i].getCursuriAlese() + 14) == 1 &&
                    *(Student[i].getCursuriAlese() + 5) == 1) {
                    if (Note[i][7].getNotaFinala() >= 5 && Note[i][10].getNotaFinala() >= 5 &&
                        Note[i][11].getNotaFinala() >= 5 && Note[i][14].getNotaFinala() >= 5 &&
                        Note[i][5].getNotaFinala() >= 5) {
                        count7[iterator7] = Student[i].getIndex1();
                        iterator7++;
                        /* cout << endl;
                         cout << "Index:" << Student[i].getIndex1() << " Nota Engleza:" << Note[i][7].getNotaFinala()
                              << " Nota Resurse Umane: " << Note[i][10].getNotaFinala() << " Nota Financiar: "
                              << Note[i][11].getNotaFinala() << " NLP: " << Note[i][14].getNotaFinala()
                              << " Programare POO C++: " << Note[i][5].getNotaFinala() << " Media:"
                              << (ceil(Note[i][7].getNotaFinala() + Note[i][10].getNotaFinala() +
                                       Note[i][11].getNotaFinala() + Note[i][14].getNotaFinala() +
                                       Note[i][5].getNotaFinala()) / 5);*/
                    }
                }
                if (*(Student[i].getCursuriAlese() + 7) == 1 && *(Student[i].getCursuriAlese() + 10) == 1 &&
                    *(Student[i].getCursuriAlese() + 11) == 1 && *(Student[i].getCursuriAlese() + 14) == 1 &&
                    *(Student[i].getCursuriAlese() + 6) == 1) {
                    if (Note[i][7].getNotaFinala() >= 5 && Note[i][10].getNotaFinala() >= 5 &&
                        Note[i][11].getNotaFinala() >= 5 && Note[i][14].getNotaFinala() >= 5 &&
                        Note[i][6].getNotaFinala() >= 5) {
                        count7[iterator7] = Student[i].getIndex1();
                        iterator7++;
                        /* cout << endl;
                         cout << "Index:" << Student[i].getIndex1() << " Nota Engleza:" << Note[i][7].getNotaFinala()
                              << " Nota Resurse Umane: " << Note[i][10].getNotaFinala() << " Nota Financiar: "
                              << Note[i][11].getNotaFinala() << " NLP: " << Note[i][14].getNotaFinala()
                              << " Programare Non-POO C++: " << Note[i][6].getNotaFinala() << " Media:"
                              << (ceil(Note[i][7].getNotaFinala() + Note[i][10].getNotaFinala() +
                                       Note[i][11].getNotaFinala() + Note[i][14].getNotaFinala() +
                                       Note[i][6].getNotaFinala()) / 5);*/
                    }
                }
            }
            int count4[50 * 15];
            int iterator4 = 0;
            //Manager Echipa Tiristi
            for (int i = 0; i < sum; i++)
                if (*(Student[i].getCursuriAlese() + 7) == 1 && *(Student[i].getCursuriAlese() + 8) == 1 &&
                    *(Student[i].getCursuriAlese() + 10) == 1 && *(Student[i].getCursuriAlese() + 11) == 1 &&
                    *(Student[i].getCursuriAlese() + 12) == 1) {
                    if (Note[i][7].getNotaFinala() >= 1 && Note[i][8].getNotaFinala() >= 1 &&
                        Note[i][10].getNotaFinala() >= 1 && Note[i][11].getNotaFinala() >= 1 &&
                        Note[i][12].getNotaFinala() >= 1) {
                        count4[iterator4] = Student[i].getIndex1();
                        iterator4++;
                        /*cout << endl;
                        cout << "Index:" << Student[i].getIndex1() << " Engleza:" << Note[i][7].getNotaFinala()
                             << " Turca:" << Note[i][8].getNotaFinala() << " Hr:" << Note[i][10].getNotaFinala()
                             << " Financiar:" << Note[i][11].getNotaFinala() << " Legislatie:"
                             << Note[i][12].getNotaFinala();*/
                    }
                }
            MET = new ManagerEchipaTiristi[iterator4];
            //Sofer
            int count5[50 * 15];
            int iterator5 = 0;
            for (int i = 0; i < sum; i++)
                if (*(Student[i].getCursuriAlese() + 12) == 1 && *(Student[i].getCursuriAlese() + 13) == 1) {
                    if (Note[i][12].getNotaFinala() >= 5 && Note[i][13].getNotaFinala() >= 5) {
                        count5[iterator5] = Student[i].getIndex1();
                        iterator5++;
                        /* cout << endl;
                          cout << "Index:" << Student[i].getIndex1() << " Nota Legislatie:" << Note[i][12].getNotaFinala()
                               << " Nota Sofat: " << Note[i][13].getNotaFinala() << " Media:"
                               << (ceil(Note[i][12].getNotaFinala() + Note[i][13].getNotaFinala()) / 2);*/
                    }
                }
            S = new Sofer[iterator5];
            int count6[50 * 15];
            int iterator6 = 0;
            //Programator
            for (int i = 0; i < sum; i++) {
                if (*(Student[i].getCursuriAlese() + 0) == 1 && *(Student[i].getCursuriAlese() + 1) == 1 &&
                    *(Student[i].getCursuriAlese() + 2) == 1 && *(Student[i].getCursuriAlese() + 7) == 1 &&
                    *(Student[i].getCursuriAlese() + 3) == 1) {
                    if (Note[i][0].getNotaFinala() >= 5 && Note[i][1].getNotaFinala() >= 5 &&
                        Note[i][2].getNotaFinala() >= 5 && Note[i][7].getNotaFinala() >= 5 &&
                        Note[i][3].getNotaFinala() >= 5) {
                        count6[iterator6] = Student[i].getIndex1();
                        iterator6++;
                        cout << (ceil(Note[i][0].getNotaFinala() + Note[i][1].getNotaFinala() +
                                      Note[i][2].getNotaFinala() + Note[i][7].getNotaFinala() +
                                      Note[i][3].getNotaFinala()) / 5);
                    }
                }
                if (*(Student[i].getCursuriAlese()) == 1 && *(Student[i].getCursuriAlese() + 1) == 1 &&
                    *(Student[i].getCursuriAlese() + 2) == 1 && *(Student[i].getCursuriAlese() + 7) == 1 &&
                    *(Student[i].getCursuriAlese() + 4) == 1) {
                    if (Note[i][0].getNotaFinala() >= 5 && Note[i][1].getNotaFinala() >= 5 &&
                        Note[i][2].getNotaFinala() >= 5 && Note[i][7].getNotaFinala() >= 5 &&
                        Note[i][4].getNotaFinala() >= 5) {
                        count6[iterator6] = Student[i].getIndex1();
                        iterator6++;
                        /*cout << endl;
                        cout << "Index:" << Student[i].getIndex1() << " Nota Algebra:" << Note[i][0].getNotaFinala()
                             << " Nota Geometrie: " << Note[i][1].getNotaFinala() << " Nota Analiza: "
                             << Note[i][2].getNotaFinala() << " Engleza: " << Note[i][7].getNotaFinala()
                             << " Programare NON-POO Java: " << Note[i][4].getNotaFinala() << " Media:"
                             << (ceil(Note[i][0].getNotaFinala() + Note[i][1].getNotaFinala() +
                                      Note[i][2].getNotaFinala() + Note[i][7].getNotaFinala() +
                                      Note[i][4].getNotaFinala()) / 5);*/
                    }
                }
                if (*(Student[i].getCursuriAlese()) == 1 && *(Student[i].getCursuriAlese() + 1) == 1 &&
                    *(Student[i].getCursuriAlese() + 2) == 1 && *(Student[i].getCursuriAlese() + 7) == 1 &&
                    *(Student[i].getCursuriAlese() + 5) == 1) {
                    if (Note[i][0].getNotaFinala() >= 5 && Note[i][1].getNotaFinala() >= 5 &&
                        Note[i][2].getNotaFinala() >= 5 && Note[i][7].getNotaFinala() >= 5 &&
                        Note[i][5].getNotaFinala() >= 5) {
                        count6[iterator6] = Student[i].getIndex1();
                        iterator6++;
                        /* cout << endl;
                         cout << "Index:" << Student[i].getIndex1() << " Nota Algebra:" << Note[i][0].getNotaFinala()
                              << " Nota Geometrie: " << Note[i][1].getNotaFinala() << " Nota Analiza: "
                              << Note[i][2].getNotaFinala() << " Engleza: " << Note[i][7].getNotaFinala()
                              << " Programare POO C++: " << Note[i][5].getNotaFinala() << " Media:"
                              << (ceil(Note[i][0].getNotaFinala() + Note[i][1].getNotaFinala() +
                                       Note[i][2].getNotaFinala() + Note[i][7].getNotaFinala() +
                                       Note[i][5].getNotaFinala()) / 5);*/
                    }
                }
                if (*(Student[i].getCursuriAlese()) == 1 && *(Student[i].getCursuriAlese() + 1) == 1 &&
                    *(Student[i].getCursuriAlese() + 2) == 1 && *(Student[i].getCursuriAlese() + 7) == 1 &&
                    *(Student[i].getCursuriAlese() + 6) == 1) {
                    if (Note[i][0].getNotaFinala() >= 5 && Note[i][1].getNotaFinala() >= 5 &&
                        Note[i][2].getNotaFinala() >= 5 && Note[i][7].getNotaFinala() >= 5 &&
                        Note[i][6].getNotaFinala() >= 5) {
                        count6[iterator6] = Student[i].getIndex1();
                        iterator6++;
                        /* cout << endl;
                         cout << "Index:" << Student[i].getIndex1() << " Nota Algebra:" << Note[i][0].getNotaFinala()
                              << " Nota Geometrie: " << Note[i][1].getNotaFinala() << " Nota Analiza: "
                              << Note[i][2].getNotaFinala() << " Engleza: " << Note[i][7].getNotaFinala()
                              << " Programare NON-POO C++: " << Note[i][6].getNotaFinala() << " Media:"
                              << (ceil(Note[i][0].getNotaFinala() + Note[i][1].getNotaFinala() +
                                       Note[i][2].getNotaFinala() + Note[i][7].getNotaFinala() +
                                       Note[i][6].getNotaFinala()) / 5);*/
                    }
                }
            }
            P = new Programator[iterator6];
            //  cout << endl << "Financisti:" << iterator1;
            for (int i = 0; i < iterator1; i++) {
                F[i].setIndex(count1[i]);
                F[i].setNotaAlgebra(Note[count1[i]][0].getNotaFinala());
                F[i].setNotaFinanciar(Note[count1[i]][11].getNotaFinala());
                F[i].setMedie(Note[count1[i]][0].getNotaFinala(), Note[count1[i]][11].getNotaFinala());
                F[i].setMedieRotunjita(F[i].getMedie());
                /*cout << "Index Financist:" << F[i].getIndex() << " " << "Nota Algebra:" << F[i].getNotaAlgebra() << " "
                     << "Nota Financiar:" << F[i].getNotaFinanciar() << " " << "Medie:" << F[i].getMedie() << " "
                     << "MedieRotunjita:" << F[i].getMedieRotunjita();
                cout << endl;*/
            }
            // cout << endl << "Manageri:" << iterator2;
            for (int i = 0; i < iterator2; i++) {
                M[i].setIndex(count2[i]);
                M[i].setNotaEngleza(Note[count2[i]][7].getNotaFinala());
                M[i].setNotaHr(Note[count2[i]][10].getNotaFinala());
                M[i].setNotaFinanciar(Note[count2[i]][11].getNotaFinala());
                M[i].setMedie(Note[count2[i]][7].getNotaFinala(), Note[count2[i]][10].getNotaFinala(),
                              Note[count2[i]][11].getNotaFinala());
                M[i].setMedieRotunjita(M[i].getMedie());
                /*cout << "Index Manager:" << M[i].getIndex() << " " << "Nota Engleza:" << M[i].getNotaEngleza() << " "
                     << "Nota HR:" << M[i].getNotaHr() << " "
                     << "Nota Financiar:" << M[i].getNotaFinanciar() << " " << "Medie:" << M[i].getMedie() << " "
                     << "MedieRotunjita:" << M[i].getMedieRotunjita();
                cout << endl;*/

            }
            //  cout << endl << "Manager Echipa Tiristi:" << iterator4;
            for (int i = 0; i < iterator4; i++) {
                MET[i].setIndex(count4[i]);
                MET[i].setNotaEngleza(Note[count4[i]][7].getNotaFinala());
                MET[i].setNotaHr(Note[count4[i]][10].getNotaFinala());
                MET[i].setNotaFinanciar(Note[count4[i]][11].getNotaFinala());
                MET[i].setNotaTurca(Note[count4[i]][8].getNotaFinala());
                MET[i].setNotaLegislatie(Note[count4[i]][12].getNotaFinala());
                MET[i].setMedie(Note[count4[i]][7].getNotaFinala(), Note[count4[i]][10].getNotaFinala(),
                                Note[count4[i]][11].getNotaFinala(), Note[count4[i]][8].getNotaFinala(),
                                Note[count4[i]][12].getNotaFinala());
                MET[i].setMedieRotunjita(MET[i].getMedie());
                /*cout << "Index MET:" << MET[i].getIndex() << " " << "Nota Engleza:" << MET[i].getNotaEngleza()
                     << " "
                     << "Nota HR:" << MET[i].getNotaHr() << " "
                     << "Nota Financiar:" << MET[i].getNotaFinanciar() << " " << "Nota Turca:" << MET[i].getNotaTurca()
                     << " " << "Nota Legislatie:" << MET[i].getNotaLegislatie() << " " << "Medie:" << MET[i].getMedie()
                     << " "
                     << "MedieRotunjita:" << MET[i].getMedieRotunjita();
                cout << endl;*/

            }
            //cout << endl << "Soferi:" << iterator5;
            for (int i = 0; i < iterator5; i++) {
                S[i].setIndex(count5[i]);
                S[i].setNotaLegislatie(Note[count5[i]][12].getNotaFinala());
                S[i].setNotaSofat(Note[count5[i]][13].getNotaFinala());
                S[i].setMedie(Note[count5[i]][12].getNotaFinala(), Note[count5[i]][13].getNotaFinala());
                S[i].setMedieRotunjita(S[i].getMedie());
                /*cout << "Index Sofer:" << S[i].getIndex() << " " << "Nota Legislatie:" << S[i].getNotaLegislatie()
                     << " "
                     << "Nota Sofat:" << S[i].getNotaSofat() << " " << "Medie:" << S[i].getMedie() << " "
                     << "MedieRotunjita:" << S[i].getMedieRotunjita();
                cout << endl;*/

            }

            iterator6 = removeDuplicates(count6, iterator6);
            // cout << endl << "Programatori:" << iterator6;
            for (int i = 0; i < iterator6; i++) {
                P[i].setIndex(count6[i]);
                P[i].setNotaAlgebra(Note[count6[i]][0].getNotaFinala());
                P[i].setNotaGeometrie(Note[count6[i]][1].getNotaFinala());
                P[i].setNotaAnaliza(Note[count6[i]][2].getNotaFinala());
                P[i].setNotaEngleza(Note[count6[i]][7].getNotaFinala());
                P[i].setNotaJava1(Note[count6[i]][3].getNotaFinala());
                P[i].setNotaJava2(Note[count6[i]][4].getNotaFinala());
                P[i].setNotaC1(Note[count6[i]][5].getNotaFinala());
                P[i].setNotaC2(Note[count6[i]][6].getNotaFinala());
                P[i].setMedie(Note[count6[i]][0].getNotaFinala(), Note[count6[i]][2].getNotaFinala(),
                              Note[count6[i]][1].getNotaFinala(), Note[count6[i]][7].getNotaFinala(),
                              Note[count6[i]][3].getNotaFinala(), Note[count6[i]][4].getNotaFinala(),
                              Note[count6[i]][5].getNotaFinala(), Note[count6[i]][6].getNotaFinala());
                P[i].setMedieRotunjita(P[i].getMedie());
                /*cout << "Index :" << P[i].getIndex() << endl << " Alg:" << P[i].getNotaAlgebra() << " Geo"
                     << P[i].getNotaGeometrie() << " An:" << P[i].getNotaAnaliza() << " C1:" << P[i].getNotaC1()
                     << " C2:"
                     << P[i].getNotaC2() << " J1:" << P[i].getNotaJava1() << " J2:" << P[i].getNotaJava2() << " Eng:"
                     << P[i].getNotaEngleza() << " Medie:" << P[i].getMedie() << " MedieR:" << P[i].getMedieRotunjita();
                cout << endl;*/
            }
            iterator7 = removeDuplicates(count7, iterator7);
            MEP = new ManagerEchipaProgramator[iterator7];
            //cout << endl << "MEP:" << iterator7;
            for (int i = 0; i < iterator7; i++) {
                MEP[i].setIndex(count7[i]);
                MEP[i].setNotaengleza(Note[count7[i]][7].getNotaFinala());
                MEP[i].setNotahr(Note[count7[i]][10].getNotaFinala());
                MEP[i].setNotafinanciar(Note[count7[i]][11].getNotaFinala());
                MEP[i].setNotajava1(Note[count7[i]][3].getNotaFinala());
                MEP[i].setNotajava2(Note[count7[i]][4].getNotaFinala());
                MEP[i].setNotac1(Note[count7[i]][5].getNotaFinala());
                MEP[i].setNotac2(Note[count7[i]][6].getNotaFinala());
                MEP[i].setNotaNlp(Note[count7[i]][14].getNotaFinala());
                MEP[i].setMedie(Note[count7[i]][7].getNotaFinala(), Note[count7[i]][10].getNotaFinala(),
                                Note[count7[i]][11].getNotaFinala(), Note[count7[i]][3].getNotaFinala(),
                                Note[count7[i]][4].getNotaFinala(), Note[count7[i]][5].getNotaFinala(),
                                Note[count7[i]][6].getNotaFinala(), Note[count7[i]][14].getNotaFinala());
                MEP[i].setMedierotunjita(MEP[i].getMedie());
                /* cout << "Index :" << MEP[i].getIndex() << endl << " Eng:" << MEP[i].getNotaengleza() << " HR:"
                      << MEP[i].getNotahr() << " Financiar:" << MEP[i].getNotafinanciar() << " C1:" << MEP[i].getNotac1()
                      << " C2:"
                      << MEP[i].getNotac2() << " J1:" << MEP[i].getNotajava1() << " J2:" << MEP[i].getNotajava2() << " NLP:"
                      << MEP[i].getNotaNlp() << " Medie:" << MEP[i].getMedie() << " MedieR:" << MEP[i].getMedierotunjita();
                 cout << endl;*/
            }
            for (int i = 0; i < iterator1; i++) {
                if (F[i].getMedieRotunjita() >= 5)
                    Student[F[i].getIndex()].setCompetentaF(F[i].getMedieRotunjita());
            }
            for (int i = 0; i < iterator2; i++) {
                if (M[i].getMedieRotunjita() >= 5)
                    Student[M[i].getIndex()].setCompetentaM(M[i].getMedieRotunjita());
            }
            for (int i = 0; i < iterator4; i++) {
                if (MET[i].getMedieRotunjita() >= 5)
                    Student[MET[i].getIndex()].setCompetentaMet(MET[i].getMedieRotunjita());
            }
            for (int i = 0; i < iterator5; i++) {
                if (S[i].getMedieRotunjita() >= 5)
                    Student[S[i].getIndex()].setCompetentaS(S[i].getMedieRotunjita());
            }
            for (int i = 0; i < iterator6; i++) {
                if (P[i].getMedieRotunjita() >= 5)
                    Student[P[i].getIndex()].setCompetentaP(P[i].getMedieRotunjita());
            }
            for (int i = 0; i < iterator2; i++) {
                if (MEP[i].getMedierotunjita() >= 5)
                    Student[MEP[i].getIndex()].setCompetentaMep(MEP[i].getMedierotunjita());
            }
            cout << endl << "Ce operatie se doreste ? ";
            cout << endl;
            cout << "1.Afisarea rezultatelor unui student la cursurile alese";
            cout << endl;
            cout << "2.Afisarea competentei/competentelor unui student";
            cout << endl;
            cout << "3.Afisarea studentilor + note care au competenta-Finantist";
            cout << endl;
            cout << "4.Afisarea studentilor + note care au competenta-Manager";
            cout << endl;
            cout << "5.Afisarea studentilor + note care au competenta-Manager Echipa Tiristi";
            cout << endl;
            cout << "6.Afisarea studentilor + note care au competenta-Sofer";
            cout << endl;
            cout << "7.Afisarea studentilor + note care au competenta-Programator";
            cout << endl;
            cout << "8.Afisarea studentilor + note care au competenta-Manager Echipa Programatori";
            cout << endl;
            cout << "9.Afisarea studentilor ce detin o competenta mare";
            cout << endl;
            cout << "10.Afisarea studentilor ce detin o competenta medie";
            cout << endl;
            cout << "11.Afisarea studentilor ce detin o competenta mica";
            cout << endl;
            cout << "Operatia dorita:";
            try{
                cin >> operatie;
                if(operatie<0 || operatie>11)
                    throw(operatie);
                if(isdigit(operatie)==1)
                    throw(operatie);}
            catch(int operatie)
            {
                cout<<"Operatie Nevalida";
            }
            cout << endl;
            switch (operatie) {
                case 1: {
                    cout << "Introduceti indexul studentului:";
                    int index;
                    try{
                        cin >> index;
                        if(index<0 || operatie>(50*15))
                            throw(index);
                        if(isdigit(index)==1)
                            throw(index);}
                    catch(int index)
                    {
                        cout<<"Operatie Nevalida";
                    }
                    catch(string index)
                    {
                        cout<<"Operatie Nevalida";
                    }
                    cout << "Index:" << Student[index].getIndex1() << " Numar Cursuri Alese:"
                         << Student[index].getNumarCursuriAlese();
                    cout << endl;
                    for (int i = 0; i < 15; i++) {
                        cout << " ";
                        if (Note[index][i].getNotaFinala() != 0)
                            cout << Note[index][i].getNotaFinala();
                        else
                            cout << "-";
                    }
                    break;
                }
                case 2: {
                    cout << "Introduceti indexul studentului:";
                    int index;
                    try{
                        cin >> index;
                        if(index<0 || operatie>(50*15))
                            throw(index);
                        if(isdigit(index)==1)
                            throw(index);}
                    catch(int index)
                    {
                        cout<<"Operatie Nevalida";
                    }
                    catch(string index)
                    {
                        cout<<"Operatie Nevalida";
                    }
                    int tag = 0;
                    for (int i = 0; i < iterator1; i++)
                        if (F[i].getIndex() == index) {
                            cout << "Competenta-Finantist:" << F[i].getMedieRotunjita();
                            tag = 1;
                        }
                    for (int i = 0; i < iterator2; i++)
                        if (M[i].getIndex() == index) {
                            cout << "Competenta-Manager:" << M[i].getMedieRotunjita();
                            tag = 1;
                        }
                    for (int i = 0; i < iterator4; i++)
                        if (MET[i].getIndex() == index) {
                            cout << "Competenta-Manager Echipa Tiristi:" << MET[i].getMedieRotunjita();
                            tag = 1;
                        }
                    for (int i = 0; i < iterator5; i++)
                        if (S[i].getIndex() == index) {
                            cout << "Competenta-Sofer:" << S[i].getMedieRotunjita();
                            tag = 1;
                        }
                    for (int i = 0; i < iterator6; i++)
                        if (P[i].getIndex() == index) {
                            cout << "Competenta-Programator:" << P[i].getMedieRotunjita();
                            tag = 1;
                        }
                    for (int i = 0; i < iterator7; i++)
                        if (MEP[i].getIndex() == index) {
                            cout << "Competenta-ManagerEchipaProgramatori:" << MEP[i].getMedierotunjita();
                            tag = 1;
                        }
                    if (tag == 0) {
                        cout << "Studentul " << index << " nu are o competenta in momentul actual.";
                        break;
                    }

                }
                case 3: {
                    cout << endl;
                    for (int i = 0; i < iterator1; i++)
                        if (F[i].getMedieRotunjita() >= 5) {
                            cout << endl;
                            cout << "Index:" << F[i].getIndex() << " " << "Nota Algebra:" << F[i].getNotaAlgebra()
                                 << " "
                                 << "Nota Financiar:" << F[i].getNotaFinanciar();
                            cout << " Medie" << F[i].getMedie() << " " << "Medie Rotunjita:"
                                 << F[i].getMedieRotunjita();
                        }
                    break;
                }
                case 4: {
                    cout << endl;
                    for (int i = 0; i < iterator2; i++)
                        if (M[i].getMedieRotunjita() >= 5) {
                            cout << endl;
                            cout << "Index:" << M[i].getIndex() << " " << "Nota Engleza:" << M[i].getNotaEngleza()
                                 << " "
                                 << "Nota HR:" << M[i].getNotaHr();
                            cout << " Nota Financiar" << M[i].getNotaFinanciar() << " " << "Medie:" << M[i].getMedie();
                        }
                    break;
                }
                case 5: {

                    cout << endl;
                    for (int i = 0; i < iterator4; i++)
                        if (MET[i].getMedieRotunjita() >= 5) {
                            cout << endl;
                            cout << "Index MET:" << MET[i].getIndex() << " " << "Nota Engleza:"
                                 << MET[i].getNotaEngleza()
                                 << " "
                                 << "Nota HR:" << MET[i].getNotaHr() << " "
                                 << "Nota Financiar:" << MET[i].getNotaFinanciar() << " " << "Nota Turca:"
                                 << MET[i].getNotaTurca()
                                 << " " << "Nota Legislatie:" << MET[i].getNotaLegislatie() << " " << "Medie:"
                                 << MET[i].getMedie()
                                 << " "
                                 << "MedieRotunjita:" << MET[i].getMedieRotunjita();


                        }
                }
                case 6: {
                    cout << endl;
                    for (int i = 0; i < iterator5; i++)
                        if (S[i].getMedieRotunjita() >= 5) {
                            cout << "Index Sofer:" << S[i].getIndex() << " " << "Nota Legislatie:"
                                 << S[i].getNotaLegislatie()
                                 << " "
                                 << "Nota Sofat:" << S[i].getNotaSofat() << " " << "Medie:" << S[i].getMedie()
                                 << " "
                                 << "MedieRotunjita:" << S[i].getMedieRotunjita();
                            cout << endl;
                        }
                }
                case 7: {
                    for (int i = 0; i < iterator6; i++)
                        if (P[i].getMedieRotunjita() >= 5) {
                            cout << "Index :" << P[i].getIndex() << " Alg:" << P[i].getNotaAlgebra() << " Geo"
                                 << P[i].getNotaGeometrie() << " An:" << P[i].getNotaAnaliza() << " C1:"
                                 << P[i].getNotaC1()
                                 << " C2:"
                                 << P[i].getNotaC2() << " J1:" << P[i].getNotaJava1() << " J2:"
                                 << P[i].getNotaJava2() << " Eng:"
                                 << P[i].getNotaEngleza() << " Medie:" << P[i].getMedie() << " MedieRotunjita:"
                                 << P[i].getMedieRotunjita();
                            cout << endl;
                        }
                }
                case 8: {
                    for (int i = 0; i < iterator7; i++)
                        if (MEP[i].getMedierotunjita() >= 5) {
                            cout << "Index :" << MEP[i].getIndex() << " Eng:" << MEP[i].getNotaengleza() << " HR:"
                                 << MEP[i].getNotahr() << " Financiar:" << MEP[i].getNotafinanciar() << " C1:"
                                 << MEP[i].getNotac1()
                                 << " C2:"
                                 << MEP[i].getNotac2() << " J1:" << MEP[i].getNotajava1() << " J2:"
                                 << MEP[i].getNotajava2() << " NLP:"
                                 << MEP[i].getNotaNlp() << " Medie:" << MEP[i].getMedie() << " MedieR:"
                                 << MEP[i].getMedierotunjita();
                            cout << endl;
                        }
                break;}

                case 9: {
                    for (int i = 0; i < iterator1; i++) {
                        if (F[i].getMedieRotunjita() >= 9) {
                            cout << "Index:" << F[i].getIndex();
                            cout << " Competenta F:" << F[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator2; i++) {
                        if (M[i].getMedieRotunjita() >= 9) {
                            cout << "Index:" << M[i].getIndex();
                            cout << " Competenta M:" << M[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator5; i++) {
                        if (S[i].getMedieRotunjita() >= 9) {
                            cout << "Index:" << S[i].getIndex();
                            cout << " Competenta S:" << S[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator6; i++) {
                        if (P[i].getMedieRotunjita() >= 9) {
                            cout << "Index:" << P[i].getIndex();
                            cout << " Competenta P:" << P[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator4; i++) {
                        if (MET[i].getMedieRotunjita() >= 9) {
                            cout << "Index:" << MET[i].getIndex();
                            cout << " Competenta MET:" << MET[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator7; i++) {
                        if (MEP[i].getMedierotunjita() >= 9) {
                            cout << "Index:" << MEP[i].getIndex();
                            cout << " Competenta MEP:" << MEP[i].getMedierotunjita();
                            cout << endl;
                        }
                    }


                break;}
                case 10: {
                    for (int i = 0; i < iterator1; i++) {
                        if (F[i].getMedieRotunjita() >= 7 && F[i].getMedieRotunjita() <= 8) {
                            cout << "Index:" << F[i].getIndex();
                            cout << " Competenta F:" << F[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator2; i++) {
                        if (M[i].getMedieRotunjita() >= 7 && M[i].getMedieRotunjita() <= 8) {
                            cout << "Index:" << M[i].getIndex();
                            cout << " Competenta M:" << M[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator5; i++) {
                        if (S[i].getMedieRotunjita() >= 7 && S[i].getMedieRotunjita() <= 8) {
                            cout << "Index:" << S[i].getIndex();
                            cout << " Competenta S:" << S[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator6; i++) {
                        if (P[i].getMedieRotunjita() >= 7 && P[i].getMedieRotunjita() <= 8) {
                            cout << "Index:" << P[i].getIndex();
                            cout << " Competenta P:" << P[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator4; i++) {
                        if (MET[i].getMedieRotunjita() >= 7 && MET[i].getMedieRotunjita() <= 8) {
                            cout << "Index:" << MET[i].getIndex();
                            cout << " Competenta MET:" << MET[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }

                    for (int i = 0; i < iterator7; i++) {
                        if (MEP[i].getMedierotunjita() >= 7 && MEP[i].getMedierotunjita() <= 8) {
                            cout << "Index:" << MEP[i].getIndex();
                            cout << " Competenta MEP:" << MEP[i].getMedierotunjita();
                            cout << endl;
                        }
                    }
                }
                case 11: {
                    for (int i = 0; i < iterator1; i++) {
                        if (F[i].getMedieRotunjita() >= 5 && F[i].getMedieRotunjita() <= 6) {
                            cout << "Index:" << F[i].getIndex();
                            cout << " Competenta F:" << F[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator2; i++) {
                        if (M[i].getMedieRotunjita() >= 5 && M[i].getMedieRotunjita() <= 6) {
                            cout << "Index:" << M[i].getIndex();
                            cout << " Competenta M:" << M[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator5; i++) {
                        if (S[i].getMedieRotunjita() >= 5 && S[i].getMedieRotunjita() <= 6) {
                            cout << "Index:" << S[i].getIndex();
                            cout << " Competenta S:" << S[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator6; i++) {
                        if (P[i].getMedieRotunjita() >= 5 && P[i].getMedieRotunjita() <= 6) {
                            cout << "Index:" << P[i].getIndex();
                            cout << " Competenta P:" << P[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }
                    for (int i = 0; i < iterator4; i++) {
                        if (MET[i].getMedieRotunjita() >= 5 && MET[i].getMedieRotunjita() <= 6) {
                            cout << "Index:" << MET[i].getIndex();
                            cout << " Competenta MET:" << MET[i].getMedieRotunjita();
                            cout << endl;
                        }
                    }

                    for (int i = 0; i < iterator7; i++) {
                        if (MEP[i].getMedierotunjita() >= 5 && MEP[i].getMedierotunjita() <= 6) {
                            cout << "Index:" << MEP[i].getIndex();
                            cout << " Competenta MEP:" << MEP[i].getMedierotunjita();
                            cout << endl;
                        }
                    }

                }
            }
            break;
        }
        case 2: {

            Examen *e = new Sesiune;
            Sesiune *sesi = dynamic_cast<Sesiune*>(sesi);
            Cursuri *c;
            c = new Cursuri[15];
            cout << "Informatii se vor citi 1.Generate Random 2.Tastatura";
            Finantist *f;
            Manager *m;
            Programator *p;
            Sofer *s;
            ManagerEchipaProgramator *mep;
            ManagerEchipaTiristi *met;

            cout << "Cursuri Standard:";
            cout << endl << "Mate: 0.Algebra 1.Geometrie 2.Analiza. " << endl;
            cout
                    << "Info : 3.Programare Non-OOP Java 4.Programare OOP Java 5.Programare Non-OOP C++ 6.Programare OOP C++";
            cout << endl << "Limbi Straine : 7.Limba Engleza 8.Limba Turca 9.Limba Spaniola";
            cout << endl
                 << "Misc: 10. Resurse Umane 11.Financiar 12.Legislatie Auto 13.Sofat Auto Practic 14.Comunicare NLP";
            for (int i = 0; i < 15; i++)
                c[i].setIndex(i);
            c[0].setNumeCurs("Algebra");
            c[1].setNumeCurs("Geometrie");
            c[2].setNumeCurs("Analiza");
            c[3].setNumeCurs("Programare Non-OOP Java");
            c[4].setNumeCurs("Programare OOP Java");
            c[5].setNumeCurs("Programare Non-OOP C++");
            c[6].setNumeCurs("Programare OOP C++");
            c[7].setNumeCurs("Limba Engleza");
            c[8].setNumeCurs("Limba Turca");
            c[9].setNumeCurs("Limba Spaniola");
            c[10].setNumeCurs("Resurse Umane");
            c[11].setNumeCurs("Financiar");
            c[12].setNumeCurs("Legislatie Auto");
            c[13].setNumeCurs("Sofat Auto Practic");
            c[14].setNumeCurs("Comunicare NLP");
            cout << endl << "Introduceti numar cursanti:";
            int numar;
            int iterator1 = 0;
            int iterator2 = 0;
            int iterator3 = 0;
            int iterator4 = 0;
            int iterator5 = 0;
            int iterator6 = 0;
            try{
                cin >> numar;
                if(numar<0)
                    throw(numar);
                if(isdigit(numar)==1)
                    throw(numar);}
            catch(int numar)
            {
                cout<<"Operatie Nevalida";
            }
            catch(string numar)
            {
                cout<<"Operatie Nevalida";
            }
            Cursuri::FisaEvaluare **Note;
//in curs de facere + trebuie verificat daca alocarea dinamica e ok
            Note = new Cursuri::FisaEvaluare *[numar];
            for (int i = 0; i < numar; i++)
                Note[i] = new Cursuri::FisaEvaluare[15];
            for (int i = 0; i < numar; i++)
                for (int j = 0; j < 15; j++)
                    Note[i][j].setIndex1(i);
            cout << endl
                 << "Programe:1.Finantist 2.Manager 3.Manager Echipa Tiristi 4.Sofer 5.Programator 6.Manager Echipa Programatori 0.Exit";
            int Nr_programe_alese[numar];
            int ProgramAles[numar][7];
            for (int i = 0; i < numar; i++) {
                cout << endl;
                cout << "Pentru studentul " << i << " introduceti la cate programe va participa:";
                try{
                    cin >> Nr_programe_alese[i];
                    if(Nr_programe_alese[i]<0 || Nr_programe_alese[i]>6)
                        throw(Nr_programe_alese[i]);
                    if(isdigit(Nr_programe_alese[i])==1)
                        throw(Nr_programe_alese[i]);}
                catch(int Nr_programe_alese[i])
                {
                    cout<<"Operatie Nevalida";
                }
                catch(string Nr_programe_alese[i])
                {
                    cout<<"Operatie Nevalida";
                }
                if(typeid(Nr_programe_alese[i])!= typeid(int))
                {
                    return -1;
                }
                if(Nr_programe_alese[i]<0 && Nr_programe_alese[i]>16)
                {
                    return -1;
                }
                cout << endl;
            }
            for (int i = 0; i < numar; i++)
                for (int j = 0; j < Nr_programe_alese[i]; j++) {
                    int alegere = 0;
                    cout << "Ce program?";
                    try{
                        cin >> alegere;
                        if(alegere<0 || alegere>6)
                            throw(alegere);
                        if(isdigit(alegere)==1)
                            throw(alegere);}
                    catch(int alegere)
                    {
                        cout<<"Operatie Nevalida";
                    }
                    catch(string alegere)
                    {
                        cout<<"Operatie Nevalida";
                    }
                    if (alegere < 0 && alegere > 6) {
                        cout << "Ilegal.";
                        return 1;
                    }

                    ProgramAles[i][j] = alegere;
                    if (ProgramAles[i][j] == 1) {
                        iterator1++;
                        int nota = 0;
                        cout << "Pentru Programul:Finantist , acesta va urma materia Algebra:";
                        cout << endl << "Algebra-Examen Scris ; Seminar ; Colocviu ;";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        catch(string nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][0].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Seminar";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][0].setSeminar(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][0].setNotaColocviu(nota);
                        Note[i][0].setExamenOral(0);
                        Note[i][0].setNotaLab(0);
                        Note[i][0].setNotaFinala(
                                (Note[i][0].getNotaColocviu()) * 0.15 + (Note[i][0].getExamenScris()) * 0.6 +
                                (Note[i][0].getSeminar()) * 0.15 + 1);
                        cout << endl << "Financiar-Examen Scris ; Colocviu";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][11].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][11].setNotaColocviu(nota);
                        Note[i][11].setNotaLab(0);
                        Note[i][11].setExamenOral(0);
                        Note[i][11].setSeminar(0);
                        Note[i][11].setNotaFinala(
                                (Note[i][11].getNotaColocviu()) * 0.4 + (Note[i][11].getExamenScris()) * 0.5 + 1);
                    }
                    if (ProgramAles[i][j] == 2) {
                        iterator2++;
                        int nota = 0;
                        cout << "Pentru Programul:Manager , acesta va urma materia Engleza:";
                        cout << endl << "Engleza-Examen Scris ; Oral ";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][7].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Examenul Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][7].setExamenOral(nota);
                        Note[i][7].setNotaFinala(
                                (Note[i][7].getExamenScris()) * 0.6 + Note[i][7].getExamenOral() * 0.3 + 1);
                        Note[i][7].setSeminar(0);
                        Note[i][7].setNotaLab(0);
                        Note[i][7].setNotaColocviu(0);
                        cout << endl << "Financiar-Examen Scris ; Colocviu";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][11].setExamenScris(nota);
                        Note[i][11].setNotaFinala(
                                (Note[i][11].getExamenScris() * 0.5) + (Note[i][11].getNotaColocviu()) * 0.4 + 1);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][11].setNotaColocviu(nota);
                        Note[i][11].setNotaLab(0);
                        Note[i][11].setExamenOral(0);
                        Note[i][11].setSeminar(0);
                        Note[i][11].setNotaFinala(
                                (Note[i][11].getNotaColocviu()) * 0.4 + (Note[i][11].getExamenScris()) * 0.5 + 1);
                        cout << endl << "HR-Oral";
                        cout << endl << "Introduceti Nota in Examenul Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][10].setExamenOral(nota);
                        Note[i][10].setNotaFinala(Note[i][10].getExamenOral() * 0.9 + 1);
                    }
                    if (ProgramAles[i][j] == 3) {
                        iterator3++;
                        int nota = 0;
                        cout << "Pentru Programul:Manager Echipa Tiristi , acesta va urma materia Engleza:";
                        cout << endl << "Engleza-Examen Scris ; Oral ";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][7].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Examenul Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][7].setExamenOral(nota);
                        Note[i][7].setSeminar(0);
                        Note[i][7].setNotaLab(0);
                        Note[i][7].setNotaColocviu(0);
                        Note[i][7].setNotaFinala(
                                (Note[i][7].getExamenScris()) * 0.6 + Note[i][7].getExamenOral() * 0.3 + 1);
                        cout << endl << "Financiar-Examen Scris ; Colocviu";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][11].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][11].setNotaColocviu(nota);
                        Note[i][11].setNotaFinala(
                                (Note[i][11].getExamenScris() * 0.5) + (Note[i][11].getNotaColocviu()) * 0.4 + 1);
                        Note[i][11].setNotaLab(0);
                        Note[i][11].setExamenOral(0);
                        Note[i][11].setSeminar(0);
                        Note[i][11].setNotaFinala(
                                (Note[i][11].getNotaColocviu()) * 0.4 + (Note[i][11].getExamenScris()) * 0.5 + 1);
                        cout << endl << "HR-Oral";
                        cout << endl << "Introduceti Nota in Examenul Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][10].setExamenOral(nota);
                        Note[i][10].setNotaFinala(Note[i][10].getExamenOral() * 0.9 + 1);
                        cout << endl << "Turca-Scris;Oral";
                        cout << endl << "Introduceti Nota in Examenul Scris";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][8].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Examenul Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][8].setExamenScris(nota);
                        Note[i][8].setNotaFinala(
                                (Note[i][8].getExamenScris()) * 0.6 + Note[i][8].getExamenOral() * 0.3 + 1);
                        cout << endl << "Legislatie-Examen Scris ; Colocviu";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][12].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][12].setNotaColocviu(nota);
                        Note[i][12].setNotaFinala(
                                (Note[i][12].getExamenScris() * 0.5) + (Note[i][12].getNotaColocviu()) * 0.4 + 1);
                    }
                    if (ProgramAles[i][j] == 4) {
                        iterator4++;
                        int nota = 0;
                        cout << "Pentru Programul:Sofer , acesta va urma materia Legislatie:";
                        cout << endl << "Legislatie-Examen Scris ; Colocviu";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][12].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][12].setNotaColocviu(nota);
                        Note[i][12].setNotaFinala(
                                (Note[i][12].getExamenScris() * 0.5) + (Note[i][12].getNotaColocviu()) * 0.4 + 1);
                        cout << endl << "Sofat-Examen Scris ; Colocviu";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][13].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][13].setNotaColocviu(nota);
                        Note[i][13].setNotaFinala(
                                (Note[i][13].getExamenScris() * 0.5) + (Note[i][13].getNotaColocviu()) * 0.4 + 1);
                    }
                    if (ProgramAles[i][j] == 5) {
                        int nota = 0;
                        iterator5++;
                        cout << "Pentru Programul:Programator , acesta va urma materia Algebra:";
                        cout << endl << "Algebra-Examen Scris ; Seminar ; Colocviu ;";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][0].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Seminar";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][0].setSeminar(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][0].setNotaColocviu(nota);
                        Note[i][0].setNotaFinala(
                                (Note[i][0].getNotaColocviu()) * 0.15 + (Note[i][0].getExamenScris()) * 0.6 +
                                (Note[i][0].getSeminar()) * 0.15 + 1);
                        cout << endl << "Geometrie-Examen Scris ; Seminar ; Colocviu ;";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][1].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Seminar";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][1].setSeminar(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][1].setNotaColocviu(nota);
                        Note[i][1].setNotaFinala(
                                (Note[i][1].getNotaColocviu()) * 0.15 + (Note[i][1].getExamenScris()) * 0.6 +
                                (Note[i][1].getSeminar()) * 0.15 + 1);
                        cout << endl << "Analiza-Examen Scris ; Seminar ; Colocviu ;";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][2].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Seminar";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][2].setSeminar(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][2].setNotaColocviu(nota);
                        Note[i][2].setNotaFinala(
                                (Note[i][2].getNotaColocviu()) * 0.15 + (Note[i][2].getExamenScris()) * 0.6 +
                                (Note[i][2].getSeminar()) * 0.15 + 1);
                        cout << endl << "Engleza-Examen Scris ; Oral ";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][7].setExamenScris(nota);
                        cout << endl << "Introduceti Nota la Examenul Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][7].setExamenOral(nota);
                        Note[i][7].setNotaFinala(
                                (Note[i][7].getExamenScris()) * 0.6 + Note[i][7].getExamenOral() * 0.3 + 1);
                        cout << endl << "La programare , ce materie se doreste ? 1. Java1 2.Java2 3.C 4.C++";
                        int dorinta = 0;
                        cin >> dorinta;
                        cout << endl << "Programare-Lab,Colocviu,Scris,Seminar";
                        cout << endl << "Introduceti Nota la Examenul Scris";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][dorinta + 2].setExamenScris(nota);
                        cout << endl << "Introduceti Nota la Lab";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][dorinta + 2].setNotaLab(nota);
                        cout << endl << "Introduceti Nota la Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][dorinta + 2].setNotaColocviu(nota);
                        cout << endl << "Introduceti Nota la Seminar";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][dorinta + 2].setSeminar(nota);
                        Note[i][dorinta + 2].setNotaFinala((Note[i][dorinta + 2].getNotaColocviu()) * 0.2 +
                                                           (Note[i][dorinta + 2].getExamenScris()) * 0.4 +
                                                           (Note[i][dorinta + 2].getSeminar()) * 0.15 +
                                                           (Note[i][dorinta + 2].getNotaLab()) * 0.15 + 1);
                    }
                    if (ProgramAles[i][j] == 6) {
                        iterator6++;
                        int nota = 0;
                        cout << "Pentru Programul:Manager Echipa Programatori , acesta va urma materia Engleza:";
                        cout << endl << "Engleza-Examen Scris ; Oral ";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][7].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Examenul Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][7].setExamenOral(nota);
                        Note[i][7].setNotaFinala(
                                (Note[i][7].getExamenScris()) * 0.6 + Note[i][7].getExamenOral() * 0.3 + 1);
                        cout << endl << "Financiar-Examen Scris ; Colocviu";
                        cout << endl << "Introduceti Nota in Examen";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][11].setExamenScris(nota);
                        cout << endl << "Introduceti Nota in Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][11].setNotaColocviu(nota);
                        Note[i][11].setNotaFinala(
                                (Note[i][11].getExamenScris() * 0.5) + (Note[i][11].getNotaColocviu()) * 0.4 + 1);
                        Note[i][11].setNotaLab(0);
                        Note[i][11].setExamenOral(0);
                        Note[i][11].setSeminar(0);
                        Note[i][11].setNotaFinala(
                                (Note[i][11].getNotaColocviu()) * 0.4 + (Note[i][11].getExamenScris()) * 0.5 + 1);
                        cout << endl << "HR-Oral";
                        cout << endl << "Introduceti Nota in Examenul Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][10].setExamenOral(nota);
                        Note[i][10].setNotaFinala(Note[i][10].getExamenOral() * 0.9 + 1);
                        cout << endl << "La programare , ce materie se doreste ? 1. Java1 2.Java2 3.C 4.C++";
                        int Dorinta = 0;
                        cin >> Dorinta;
                        cout << endl << "Programare-Lab,Colocviu,Scris,Seminar";
                        cout << endl << "Introduceti Nota la Examenul Scris";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][Dorinta + 2].setExamenScris(nota);
                        cout << endl << "Introduceti Nota la Lab";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][Dorinta + 2].setNotaLab(nota);
                        cout << endl << "Introduceti Nota la Colocviu";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][Dorinta + 2].setNotaColocviu(nota);
                        cout << endl << "Introduceti Nota la Seminar";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][Dorinta + 2].setSeminar(nota);
                        Note[i][Dorinta + 2].setNotaFinala((Note[i][Dorinta + 2].getNotaColocviu()) * 0.2 +
                                                           (Note[i][Dorinta + 2].getExamenScris()) * 0.4 +
                                                           (Note[i][Dorinta + 2].getSeminar()) * 0.15 +
                                                           (Note[i][Dorinta + 2].getNotaLab()) * 0.15 + 1);

                        cout << endl << "NLP-Scris,Oral,Seminar";
                        cout << endl << "Introduceti Nota la Seminar";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][14].setSeminar(nota);
                        cout << endl << "Introduceti Nota la Oral";
                        try{
                            cin >> nota;
                            if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][14].setExamenOral(nota);
                        cout << endl << "Introduceti Nota la Scris";
                        try{
                                cin >> nota;
                                if(nota<0 || nota>10)
                                throw(nota);
                            if(isdigit(nota)==1)
                                throw(nota);}
                        catch(int nota)
                        {
                            cout<<"Operatie Nevalida";
                        }
                        if (nota < 0 && nota > 10)
                            return -1;
                        Note[i][14].setExamenScris(nota);
                        Note[i][14].setNotaFinala(
                                (Note[i][14].getExamenScris() * 0.6) + (Note[i][14].getSeminar() * 0.1) +
                                (Note[i][14].getExamenOral()) * 0.2 + 1);

                    }
                }
            f = new Finantist[iterator1];
            m = new Manager[iterator2];
            met = new ManagerEchipaTiristi[iterator3];
            s = new Sofer[iterator4];
            p = new Programator[iterator5];
            mep = new ManagerEchipaProgramator[iterator6];

            for (int i = 0; i < iterator1; i++) {
                if (Note[i][0].getNotaFinala() >= 5 && Note[i][11].getNotaFinala() >= 5) {
                    f[i].setIndex(i);
                    f[i].setNotaAlgebra(Note[i][0].getNotaFinala());
                    f[i].setNotaFinanciar(Note[i][11].getNotaFinala());
                    f[i].setMedie(Note[i][0].getNotaFinala(), Note[i][11].getNotaFinala());
                    f[i].setMedieRotunjita(f[i].getMedie());
                }
                if (f[i].getMedieRotunjita() >= 5) {
                    cout << endl;
                    cout << "Index:" << f[i].getIndex() << " " << "Nota Algebra:" << f[i].getNotaAlgebra()
                         << " "
                         << "Nota Financiar:" << f[i].getNotaFinanciar();
                    cout << " Medie" << f[i].getMedie() << " " << "Medie Rotunjita:"
                         << f[i].getMedieRotunjita();
                }
            }
            for (int i = 0; i < iterator2; i++) {
                if (Note[i][7].getNotaFinala() >= 5 && Note[i][10].getNotaFinala() >= 5 &&
                    Note[i][11].getNotaFinala() >= 5) {
                    m[i].setIndex(i);
                    m[i].setNotaEngleza(Note[i][7].getNotaFinala());
                    m[i].setNotaFinanciar(Note[i][11].getNotaFinala());
                    m[i].setNotaHr(Note[i][10].getNotaFinala());
                    m[i].setMedie(Note[i][10].getNotaFinala(), Note[i][11].getNotaFinala(), Note[i][7].getNotaFinala());
                    m[i].setMedieRotunjita(m[i].getMedie());
                }
                if (m[i].getMedieRotunjita() >= 5) {
                    cout << endl;
                    cout << "Index:" << m[i].getIndex() << " " << "Nota Engleza:" << m[i].getNotaEngleza()
                         << " "
                         << "Nota Hr:" << m[i].getNotaHr()
                         << " "
                         << "Nota Financiar:" << m[i].getNotaFinanciar();
                    cout << " Medie" << m[i].getMedie() << " " << "Medie Rotunjita:"
                         << m[i].getMedieRotunjita();
                }
            }
            for (int i = 0; i < iterator3; i++) {
                if (Note[i][7].getNotaFinala() >= 5 && Note[i][10].getNotaFinala() >= 5 &&
                    Note[i][11].getNotaFinala() >= 5) {
                    met[i].setIndex(i);
                    met[i].setNotaEngleza(Note[i][7].getNotaFinala());
                    met[i].setNotaHr(Note[i][10].getNotaFinala());
                    met[i].setNotaFinanciar(Note[i][11].getNotaFinala());
                    met[i].setNotaTurca(Note[i][8].getNotaFinala());
                    met[i].setNotaLegislatie(Note[i][12].getNotaFinala());
                    met[i].setMedie(Note[i][7].getNotaFinala(), Note[i][10].getNotaFinala(),
                                    Note[i][11].getNotaFinala(), Note[i][8].getNotaFinala(),
                                    Note[i][12].getNotaFinala());
                    met[i].setMedieRotunjita(met[i].getMedie());
                }
                if (met[i].getMedieRotunjita() >= 5) {
                    cout << endl;
                    cout << "Index MET:" << met[i].getIndex() << " " << "Nota Engleza:"
                         << met[i].getNotaEngleza()
                         << " "
                         << "Nota HR:" << met[i].getNotaHr() << " "
                         << "Nota Financiar:" << met[i].getNotaFinanciar() << " " << "Nota Turca:"
                         << met[i].getNotaTurca()
                         << " " << "Nota Legislatie:" << met[i].getNotaLegislatie() << " " << "Medie:"
                         << met[i].getMedie()
                         << " "
                         << "MedieRotunjita:" << met[i].getMedieRotunjita();
                }
            }
            for (int i = 0; i < iterator4; i++) {
                if (Note[i][12].getNotaFinala() >= 5 && Note[i][13].getNotaFinala() >= 5)
                    s[i].setIndex(i);
                s[i].setNotaLegislatie(Note[i][12].getNotaFinala());
                s[i].setNotaSofat(Note[i][13].getNotaFinala());
                s[i].setMedie(Note[i][12].getNotaFinala(), Note[i][13].getNotaFinala());
                s[i].setMedieRotunjita(s[i].getMedie());
                if (s[i].getMedieRotunjita() >= 5) {
                    cout<<endl;
                    cout << "Index Sofer:" << s[i].getIndex() << " " << "Nota Legislatie:"
                         << s[i].getNotaLegislatie()
                         << " "
                         << "Nota Sofat:" << s[i].getNotaSofat() << " " << "Medie:" << s[i].getMedie()
                         << " "
                         << "MedieRotunjita:" << s[i].getMedieRotunjita();
                    cout << endl;
                }
            }
            for (int i = 0; i < iterator5; i++) {
                if (Note[i][0].getNotaFinala() >= 5 && Note[i][2].getNotaFinala() >= 5 &&
                    Note[i][1].getNotaFinala() >= 5 && Note[i][7].getNotaFinala() >= 5 &&
                    Note[i][3].getNotaFinala() >= 5 && Note[i][4].getNotaFinala() >= 5 &&
                    Note[i][5].getNotaFinala() >= 5 && Note[i][6].getNotaFinala() >= 5)

                    p[i].setIndex(i);
                p[i].setNotaAlgebra(Note[i][0].getNotaFinala());
                p[i].setNotaGeometrie(Note[i][1].getNotaFinala());
                p[i].setNotaAnaliza(Note[i][2].getNotaFinala());
                p[i].setNotaEngleza(Note[i][7].getNotaFinala());
                p[i].setNotaJava1(Note[i][3].getNotaFinala());
                p[i].setNotaJava2(Note[i][4].getNotaFinala());
                p[i].setNotaC1(Note[i][5].getNotaFinala());
                p[i].setNotaC2(Note[i][6].getNotaFinala());
                p[i].setMedie(Note[i][0].getNotaFinala(), Note[i][2].getNotaFinala(),
                              Note[i][1].getNotaFinala(), Note[i][7].getNotaFinala(),
                              Note[i][3].getNotaFinala(), Note[i][4].getNotaFinala(),
                              Note[i][5].getNotaFinala(), Note[i][6].getNotaFinala());
                p[i].setMedieRotunjita(p[i].getMedie());
                if (p[i].getMedieRotunjita() >= 5) {
                    cout<<endl;
                    cout << "Index :" << p[i].getIndex() << " Alg:" << p[i].getNotaAlgebra() << " Geo"
                         << p[i].getNotaGeometrie() << " An:" << p[i].getNotaAnaliza() << " C1:"
                         << p[i].getNotaC1()
                         << " C2:"
                         << p[i].getNotaC2() << " J1:" << p[i].getNotaJava1() << " J2:"
                         << p[i].getNotaJava2() << " Eng:"
                         << p[i].getNotaEngleza() << " Medie:" << p[i].getMedie() << " MedieRotunjita:"
                         << p[i].getMedieRotunjita();
                    cout << endl;
                }

            }
            for (int i = 0; i < iterator6; i++) {
                if (Note[i][7].getNotaFinala() >= 5 && Note[i][10].getNotaFinala() >= 5 &&
                    Note[i][11].getNotaFinala() >= 5 && Note[i][3].getNotaFinala() >= 5 &&
                    Note[i][4].getNotaFinala() >= 5 && Note[i][5].getNotaFinala() >= 5 &&
                    Note[i][6].getNotaFinala() >= 5 && Note[i][14].getNotaFinala() >= 5)
                    mep[i].setIndex(i);
                mep[i].setNotaengleza(Note[i][7].getNotaFinala());
                mep[i].setNotahr(Note[i][10].getNotaFinala());
                mep[i].setNotafinanciar(Note[i][11].getNotaFinala());
                mep[i].setNotajava1(Note[i][3].getNotaFinala());
                mep[i].setNotajava2(Note[i][4].getNotaFinala());
                mep[i].setNotac1(Note[i][5].getNotaFinala());
                mep[i].setNotac2(Note[i][6].getNotaFinala());
                mep[i].setNotaNlp(Note[i][14].getNotaFinala());
                mep[i].setMedie(Note[i][7].getNotaFinala(), Note[i][10].getNotaFinala(),
                                Note[i][11].getNotaFinala(), Note[i][3].getNotaFinala(),
                                Note[i][4].getNotaFinala(), Note[i][5].getNotaFinala(),
                                Note[i][6].getNotaFinala(), Note[i][14].getNotaFinala());
                mep[i].setMedierotunjita(mep[i].getMedie());
                if (mep[i].getMedierotunjita() >= 5) {
                    cout<<endl;
                    cout << "Index :" << mep[i].getIndex() << " Eng:" << mep[i].getNotaengleza() << " HR:"
                         << mep[i].getNotahr() << " Financiar:" << mep[i].getNotafinanciar() << " C1:"
                         << mep[i].getNotac1()
                         << " C2:"
                         << mep[i].getNotac2() << " J1:" << mep[i].getNotajava1() << " J2:"
                         << mep[i].getNotajava2() << " NLP:"
                         << mep[i].getNotaNlp() << " Medie:" << mep[i].getMedie() << " MedieR:"
                         << mep[i].getMedierotunjita();
                    cout << endl;
                }
            }
        }

    }

    return 0;
}

