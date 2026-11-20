#include <bits/stdc++.h>
#include <queue>
#include <conio.h>
using namespace std;

class magazin
{
private:
    int pret;
    int cantitate;
    string denumire;

public:
    void meniu();

    void admin();
    void admin_alim();
    void admin_text();
    void admin_casn();
    void meniu_admin();
    void modif_alim_admin();
    void modif_text_admin();
    void modif_casn_admin();
    string getPassword();

    void alimentar();
    void textil();
    void casnic();

    void caut_alim();
    void caut_text();
    void caut_casn();

    void adaugare_alim();
    void adaugare_text();
    void adaugare_casn();

    void modif_alim();
    void modif_text();
    void modif_casn();

    void stergere_alim();
    void stergere_text();
    void stergere_casn();

    void lista_alim();
    void lista_text();
    void lista_casn();

    void bon();
};

string magazin :: getPassword()
{
    string password;
    char ch;

    cout << "Introduceti parola: ";
    while ((ch = _getch()) != 13)   // 13 = Enter
    {
        if (ch == 8)   // backspace
        {
            if (!password.empty())
            {
                cout << "\b \b";
                password.pop_back();
            }
        }
        else
        {
            password += ch;
            cout << '*';
        }
    }
    cout << endl;
    return password;
}

void magazin :: admin()
{
m:
    string username, password;
    char n;
    cout << "Introduceti numele de utilizator: ";
    cin >> username;
    password = getPassword();
    if(username == "admin" && password == "333")
    {
        meniu_admin();
    }
    else
    {
        cout << "\nNumele de utilizator sau parola sunt incorecte.\n\n";
        cout << "Daca doriti sa reincercati apasati [y], oricare alta tasta pentru meniul principal.\n";
        cin >> n;
        if(n == 'y')
        {
            system("CLS");
            goto m;
        }
        else
        {
            system("CLS");
            meniu();
        }
    }
}

void magazin :: admin_alim()
{m:
    int n;
    cout << "\n\n\t\t\t\t\t\tMENIU ADMINISTRATOR: ALIMENTAR";
    cout << "\n\n\t\t\t\t--------------------------------------------------------" << '\n';
    cout << "\t\t\t\t[1]Produs specific {cautati un anumit produs}" << '\n' << '\n'; // cauta in stoc un produs anume si-l afiseaza
    // cout << "cantitate dorita / nu este pe stoc";
    cout << "\t\t\t\t[2]Produse comercializate {afisati lista produselor in stoc}" << '\n' << '\n';
    cout << "\t\t\t\t[3]Adaugare produs" << "\n\n";
    cout << "\t\t\t\t[4]Modificare cantitate produs" << "\n\n";
    cout << "\t\t\t\t[5]Stergere produs" << "\n\n";
    cout << "\t\t\t\t[6]Inapoi la meniul principal" << '\n'<< "\t\t\t\t--------------------------------------------------------" << "\n\t\t\t\t"; // afiseaza lista cu toate produsele + optiuni de filtrare "ordine: stoc cresc/descresc, pret cresc/descresc";
    cin >> n;
    switch(n)
    {
    case 1:
        system("CLS");
        caut_alim();
        break;
    case 2:
        system("CLS");
        lista_alim();
        break;
    case 3:
        system("CLS");
        adaugare_alim();
        break;
    case 4:
        system("CLS");
        modif_alim_admin();
        break;
    case 5:
        system("CLS");
        stergere_alim();
        break;
    case 6:
        system("CLS");
        meniu();
        break;
    default:
        system("CLS");
        cout << "Alegere invalida\n";
    }goto m;
}
void magazin :: admin_text()
{m:
    int n;
    cout << "\n\n\t\t\t\t\t\tMENIU ADMINISTRATOR: TEXTIL";
    cout << "\n\n\t\t\t\t--------------------------------------------------------" << '\n';
    cout << "\t\t\t\t[1]Produs specific {cautati un anumit produs}" << '\n' << '\n'; // cauta in stoc un produs anume si-l afiseaza
    // cout << "cantitate dorita / nu este pe stoc";
    cout << "\t\t\t\t[2]Produse comercializate {afisati lista produselor in stoc}" << '\n' << '\n';
    cout << "\t\t\t\t[3]Adaugare produs" << "\n\n";
    cout << "\t\t\t\t[4]Modificare cantitate produs" << "\n\n";
    cout << "\t\t\t\t[5]Stergere produs" << "\n\n";
    cout << "\t\t\t\t[6]Inapoi la meniul principal" << '\n'<< "\t\t\t\t--------------------------------------------------------" << "\n\t\t\t\t"; // afiseaza lista cu toate produsele + optiuni de filtrare "ordine: stoc cresc/descresc, pret cresc/descresc";
    cin >> n;


    switch(n)
    {
    case 1:
        system("CLS");
        caut_text();
        break;


    case 2:
        system("CLS");
        lista_text();
        break;

    case 3:
        system("CLS");
        adaugare_text();
        break;
    case 4:
        system("CLS");
        modif_text_admin();
        break;
    case 5:
        system("CLS");
        stergere_text();
        break;
    case 6:
        system("CLS");
        meniu();
        break;

    default:
        system("CLS");
        cout << "Alegere invalida\n";

    }goto m;
}

void magazin :: admin_casn()
{m:
    int n;
    cout << "\n\n\t\t\t\t\t\tMENIU ADMINISTRATOR: CASNIC";
    cout << "\n\n\t\t\t\t--------------------------------------------------------" << '\n';
    cout << "\t\t\t\t[1]Produs specific {cautati un anumit produs}" << '\n' << '\n'; // cauta in stoc un produs anume si-l afiseaza
    // cout << "cantitate dorita / nu este pe stoc";
    cout << "\t\t\t\t[2]Produse comercializate {afisati lista produselor in stoc}" << '\n' << '\n';
    cout << "\t\t\t\t[3]Adaugare produs" << "\n\n";
    cout << "\t\t\t\t[4]Modificare cantitate produs" << "\n\n";
    cout << "\t\t\t\t[5]Stergere produs" << "\n\n";
    cout << "\t\t\t\t[6]Inapoi la meniul principal" << '\n'<< "\t\t\t\t--------------------------------------------------------" << "\n\t\t\t\t"; // afiseaza lista cu toate produsele + optiuni de filtrare "ordine: stoc cresc/descresc, pret cresc/descresc";
    cin >> n;

    switch(n)
    {
    case 1:
        system("CLS");
        caut_casn();
        break;


    case 2:
        system("CLS");
        lista_casn();
        break;

    case 3:
        system("CLS");
        adaugare_casn();
        break;
    case 4:
        system("CLS");
        modif_casn_admin();
        break;
    case 5:
        system("CLS");
        stergere_casn();
        break;
    case 6:
        system("CLS");
        meniu();
        break;
    default:
        system("CLS");
        cout << "Alegere invalida\n";

    } goto m;
}
void magazin :: meniu_admin()
{m:
    int n;
    cout << "\n\n\n\n\t\t\t\t\tBine ati venit la magazinul 10F" << '\n' << "\t\t\t\t-----------------------------------------------" << '\n';
    cout << "\t\t\t\tVa rugam selectati ce actiune doriti sa urmati:" << '\n' << "\t\t\t\t-----------------------------------------------" << '\n';
    cout << "\t\t\t\t[1]Alimentar" << '\n' << '\n' << "\t\t\t\t[2]Textil" << '\n' << '\n' <<  "\t\t\t\t[3]Casnic\n\n" <<"\t\t\t\t[4] Iesire" <<  '\n' << "\t\t\t\t-----------------------------------------------" << "\n\t\t\t\t";

    cin >> n;
    switch(n)
    {
    case 1:
        system("CLS");
        admin_alim();
    case 2:
        system("CLS");
        admin_text();
    case 3:
        system("CLS");
        admin_casn();
    case 4:
        system("CLS");
        exit(0);
    default:
        system("CLS");
        cout << "Va rugam sa alegeti una dintre optiuni!\n";
    }
    goto m;
}

void magazin :: meniu()
{
    {
m:
        cout << "\n\n\n\n\t\t\t\t\tBine ati venit la magazinul 10F" << '\n' << "\t\t\t\t-----------------------------------------------" << '\n';
        cout << "\t\t\t\tVa rugam selectati ce actiune doriti sa urmati:" << '\n' << "\t\t\t\t-----------------------------------------------" << '\n';
        cout << "\t\t\t\t[1]Alimentar" << '\n' << '\n' << "\t\t\t\t[2]Textil" << '\n' << '\n' <<  "\t\t\t\t[3]Casnic\n\n" << "\t\t\t\t[4]Admin"<< '\n' << '\n' <<"\t\t\t\t[5] Iesire" <<  '\n' << "\t\t\t\t-----------------------------------------------" << "\n\t\t\t\t";

        int n;
        cin >> n;
        if(!int(n))
        {
            system("CLS");
            goto m;
        }
        switch(n)
        {
        case 1:
            system("CLS");
            alimentar();
        case 2:
            system("CLS");
            textil();
        case 3:
            system("CLS");
            casnic();
        case 4:
            system("CLS");
            admin();
        case 5:
            system("CLS");
            exit(0);
        default:
            system("CLS");
            cout << "Va rugam sa alegeti una dintre optiuni!\n";
        }
    }
    goto m;
}



void magazin :: alimentar()
{
m:
    int n;

    cout << "\n\n\n\n\t\t\t\t--------------------------------------------------------" << '\n';
    cout << "\t\t\t\t[1]Produs specific {cautati un anumit produs}" << '\n' << '\n'; // cauta in stoc un produs anume si-l afiseaza
    // cout << "cantitate dorita / nu este pe stoc";
    cout << "\t\t\t\t[2]Produse comercializate {afisati lista produselor in stoc}" << '\n' << '\n';
    cout << "\t\t\t\t[3]Cumparare produs" << "\n\n";
    cout << "\t\t\t\t[4]Inapoi la meniul principal" << '\n'<< "\t\t\t\t--------------------------------------------------------" << "\n\t\t\t\t"; // afiseaza lista cu toate produsele + optiuni de filtrare "ordine: stoc cresc/descresc, pret cresc/descresc";
    cin >> n;
    switch(n)
    {
    case 1:
        system("CLS");
        caut_alim();
        break;
    case 2:
        system("CLS");
        lista_alim();
        break;
    case 3:
        system("CLS");
        modif_alim();
        break;
    case 4:
        system("CLS");
        meniu();
        break;

    default:
        system("CLS");
        cout << "Alegere invalida\n";
    }
    goto m;
}

void magazin :: textil()
{
m:
    int n;

    cout << "\n\n\n\n\t\t\t\t--------------------------------------------------------" << '\n';
    cout << "\t\t\t\t[1]Produs specific {cautati un anumit produs}" << '\n' << '\n'; // cauta in stoc un produs anume si-l afiseaza
    // cout << "cantitate dorita / nu este pe stoc";
    cout << "\t\t\t\t[2]Produse comercializate {afisati lista produselor in stoc}" << '\n' << '\n';
    cout << "\t\t\t\t[3]Cumparare produs" << "\n\n";
    cout << "\t\t\t\t[4]Inapoi la meniul principal" << '\n'<< "\t\t\t\t--------------------------------------------------------" << "\n\t\t\t\t"; // afiseaza lista cu toate produsele + optiuni de filtrare "ordine: stoc cresc/descresc, pret cresc/descresc";

    cin >> n;
    switch(n)
    {
    case 1:
        system("CLS");
        caut_text();
        break;


    case 2:
        system("CLS");
        lista_text();
        break;


    case 3:
        system("CLS");
        modif_text();
        break;
    case 4:
        system("CLS");
        meniu();
        break;

    default:
        cout << "Alegere invalida\n";
    }
    goto m;
}

void magazin :: casnic()
{
m:
    int n;

    cout << "\n\n\n\n\t\t\t\t--------------------------------------------------------" << '\n';
    cout << "\t\t\t\t[1]Produs specific {cautati un anumit produs}" << '\n' << '\n'; // cauta in stoc un produs anume si-l afiseaza
    // cout << "cantitate dorita / nu este pe stoc";
    cout << "\t\t\t\t[2]Produse comercializate {afisati lista produselor in stoc}" << '\n' << '\n';
    cout << "\t\t\t\t[3]Cumparare produs" << "\n\n";
    cout << "\t\t\t\t[4]Inapoi la meniul principal" << '\n'<< "\t\t\t\t--------------------------------------------------------" << "\n\t\t\t\t"; // afiseaza lista cu toate produsele + optiuni de filtrare "ordine: stoc cresc/descresc, pret cresc/descresc";
    cin >> n;
    switch(n)
    {
    case 1:
        system("CLS");
        caut_casn();
        break;

    case 2:
        system("CLS");
        lista_casn();
        break;

    case 3:
        system("CLS");
        modif_casn();
        break;
    case 4:
        system("CLS");
        meniu();
        break;

    default:
        cout << "Alegere invalida\n";
    }
    goto m;
}

void magazin :: caut_alim()
{
    fstream data;
    int n;
    int ppret, ccant, cod;
    string nnume;
    int bul = 0;

    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\tVa rugam introduceti codul produsului dorit: \n\t\t\t\t\t\t\t\t";

    cin >> n;

    data.open("baza_alim.txt", ios :: in);

    if(!data)
    {
        cout << "Fisierul nu exista!";
    }
    else
    {
        data >> cod >> nnume >> ppret >> ccant;
        while(!data.eof())
        {
            if(n == cod)
            {
                cout << "Cod\t\tDenumire\tPret\t\tCantitate\n\n";
                cout << cod << "\t\t" << nnume << "\t\t" << ppret << "\t\t" << ccant << '\n';
                ++bul;
            }

            data >> cod >> nnume >> ppret >> ccant;
        }
        data.close();
        if(!bul)
        {
            cout << "Produsul nu a fost gasit!\n";
        }

    }
}
void magazin :: caut_text()
{
    fstream data;
    int n;
    int ppret, ccant, cod;
    string nnume;
    int bul = 0;

    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\tVa rugam introduceti codul produsului dorit: \n\t\t\t\t\t\t\t\t";

    cin >> n;

    data.open("baza_text.txt", ios :: in);

    if(!data)
    {
        cout << "Fisierul nu exista!";
    }
    else
    {
        data >> cod >> nnume >> ppret >> ccant;
        while(!data.eof())
        {
            if(n == cod)
            {
                cout << "Cod\t\tDenumire\tPret\t\tCantitate\n\n";
                cout << cod << "\t\t" << nnume << "\t\t" << ppret << "\t\t" << ccant << '\n';
                ++bul;
            }
            data >> cod >> nnume >> ppret >> ccant;
        }
        data.close();
        if(!bul)
        {
            cout << "Produsul nu a fost gasit!\n";
        }

    }
}
void magazin :: caut_casn()
{
    fstream data;
    int n;
    int ppret, ccant, cod;
    string nnume;
    int bul = 0;

    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\tVa rugam introduceti codul produsului dorit: \n\t\t\t\t\t\t\t\t";

    cin >> n;

    data.open("baza_casn.txt", ios :: in);

    if(!data)
    {
        cout << "Fisierul nu exista!";
    }
    else
    {
        data >> cod >> nnume >> ppret >> ccant;
        while(!data.eof())
        {
            if(n == cod)
            {
                cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t";
                cout << "Cod\t\tDenumire\tPret\t\tCantitate\n\n";
                cout << "t\t\t\t\t" << cod << "\t\t" << nnume << "\t\t" << ppret << "\t\t" << ccant << '\n';
                ++bul;
            }
            data >> cod >> nnume >> ppret >> ccant;
        }
        data.close();
        if(!bul)
        {
            system("CLS");
            cout << "Produsul nu a fost gasit!\n\n\n";
        }

    }
}

void magazin :: adaugare_alim()
{
m:
    fstream data;

    int c;
    int cod, q;
    int bul = 0;
    float p;
    string n;

    int ccant, ppret;
    string nnume;

    cout << "Adauga un produs nou \n";
    cout << "Cod: ";
    cin >> cod;
    cout << "\nNume: ";
    cin >> nnume;
    cout << "\nPret per articol: ";
    cin >> ppret;
    cout << "\nCantitate: ";
    cin >> ccant;

    data.open("baza_alim.txt", ios :: in);

    if(!data)
    {
        data.open("baza_alim.txt", ios :: app | ios :: out);
        data << cod << " " << nnume << " " << ppret << " " << ccant << '\n';

        data.close();
    }
    else
    {
        data >> q >> n >> p >> c;

        while(!data.eof())
        {
            if(q == cod)
                ++bul;
            data >> q >> n >> p >> c;
        }
        data.close();
    }

    if(bul)
    {
        system("CLS");
        cout << "Codul introdus este deja atribuit unui produs, va rugam alegeti alt cod:";
        goto m;
    }
    else
    {
        data.open("baza_alim.txt", ios :: app | ios :: out);
        data << cod << " " << nnume << " " << ppret << " " << ccant << '\n';
        data.close();
    }

    cout << "Produs adaugat cu succes! \n";
}

void magazin :: adaugare_text()
{
m:
    fstream data;

    int c;
    int cod, q;
    int bul = 0;
    float p;
    string n;

    int ccant, ppret;
    string nnume;

    cout << "Adauga un produs nou \n";
    cout << "Cod: ";
    cin >> cod;
    cout << "\nNume: ";
    cin >> nnume;
    cout << "\nPret per articol: ";
    cin >> ppret;
    cout << "\nCantitate: ";
    cin >> ccant;

    data.open("baza_text.txt", ios :: in);

    if(!data)
    {
        data.open("baza_text.txt", ios :: app | ios :: out);
        data << cod << " " << nnume << " " << ppret << " " << ccant << '\n';

        data.close();
    }
    else
    {
        data >> q >> n >> p >> c;

        while(!data.eof())
        {
            if(q == cod)
                ++bul;
            data >> q >> n >> p >> c;
        }
        data.close();
    }

    if(bul)
    {
        system("CLS");
        cout << "Codul introdus este deja atribuit unui produs, va rugam alegeti alt cod:";
        goto m;
    }
    else
    {
        data.open("baza_text.txt", ios :: app | ios :: out);
        data << cod << " " << nnume << " " << ppret << " " << ccant << '\n';
        data.close();
    }

    cout << "Produs adaugat cu succes! \n";
}

void magazin :: adaugare_casn()
{
m:
    fstream data;

    int c;
    int cod, q;
    int bul = 0;
    float p;
    string n;

    int ccant, ppret;
    string nnume;

    cout << "Adauga un produs nou \n";
    cout << "Cod: ";
    cin >> cod;
    cout << "\nNume: ";
    cin >> nnume;
    cout << "\nPret per articol: ";
    cin >> ppret;
    cout << "\nCantitate: ";
    cin >> ccant;

    data.open("baza_casn.txt", ios :: in);

    if(!data)
    {
        data.open("baza_casn.txt", ios :: app | ios :: out);
        data << cod << " " << nnume << " " << ppret << " " << ccant << '\n';

        data.close();
    }
    else
    {
        data >> q >> n >> p >> c;

        while(!data.eof())
        {
            if(q == cod)
                ++bul;
            data >> q >> n >> p >> c;
        }
        data.close();
    }

    if(bul)
    {
        system("CLS");
        cout << "Codul introdus este deja atribuit unui produs, va rugam alegeti alt cod:";
        goto m;
    }
    else
    {
        data.open("baza_casn.txt", ios :: app | ios :: out);
        data << cod << " " << nnume << " " << ppret << " " << ccant << '\n';
        data.close();
    }

    cout << "Produs adaugat cu succes! \n";
}

void magazin :: modif_alim_admin()
{
    fstream data, data1;
    int cod;
    int bul = 0;
    int c;
    float p;
    string n;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului: ";
    cin >> cod;


    data.open("baza_alim.txt", ios :: in);

    if(!data)
    {
        cout << "\n\nFisierul nu exista!";
    }
    else
    {
        data1.open("baza_alim1.txt", ios :: app | ios :: out);

        data >> ccod >> nnume >> ppret >> ccant;

        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "Introduceti cantitatea pe care doriti s-o adaugati (>0) sau sa o scoateti (<0): ";
n:
                cin  >> c;
                if(c > 0)
                {
                    cout << "\nIntroduceti pretul nou/vechi: ";
                    cin >> p;
                    data1 << " " << ccod << " " << nnume << " " << p << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) < ccant)
                {
                    cout << "\nIntroduceti pretul nou/vechi: ";
                    cin >> p;
                    data1 << " " << ccod << " " << nnume << " " << p << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) > ccant)
                {
                    cout << "Nu sunt suficiente produse pe stoc. Va rugam introduceti alta cantitate\n";
                    goto n;
                }
                else
                {
                    goto m;
                }
                cout << "\n\nProdus modificat cu succes!";

                ++bul;

            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
m:
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_alim.txt");
        rename("baza_alim1.txt", "baza_alim.txt");

        if(bul)
        {
            cout << "\n\nProdusul nu a fost gasit!";
        }
    }
}

void magazin :: modif_text_admin()
{
    fstream data, data1;
    int cod;
    int bul = 0;
    int c;
    float p;
    string n;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului: ";
    cin >> cod;


    data.open("baza_text.txt", ios :: in);

    if(!data)
    {
        cout << "\n\nFisierul nu exista!";
    }
    else
    {
        data1.open("baza_text1.txt", ios :: app | ios :: out);

        data >> ccod >> nnume >> ppret >> ccant;

        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "Introduceti cantitatea pe care doriti s-o adaugati (>0) sau sa o scoateti (<0): ";
n:
                cin  >> c;
                if(c > 0)
                {
                    cout << "\nIntroduceti pretul nou/vechi: ";
                    cin >> p;
                    data1 << " " << ccod << " " << nnume << " " << p << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) < ccant)
                {
                    cout << "\nIntroduceti pretul nou/vechi: ";
                    cin >> p;
                    data1 << " " << ccod << " " << nnume << " " << p << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) > ccant)
                {
                    cout << "Nu sunt suficiente produse pe stoc. Va rugam introduceti alta cantitate\n";
                    goto n;
                }
                else
                {
                    goto m;
                }
                cout << "\n\nProdus modificat cu succes!";

                ++bul;

            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
m:
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_text.txt");
        rename("baza_text1.txt", "baza_text.txt");

        if(bul)
        {
            cout << "\n\nProdusul nu a fost gasit!";
        }
    }
}

void magazin :: modif_casn_admin()
{
    fstream data, data1;
    int cod;
    int bul = 0;
    int c;
    float p;
    string n;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului: ";
    cin >> cod;


    data.open("baza_casn.txt", ios :: in);

    if(!data)
    {
        cout << "\n\nFisierul nu exista!";
    }
    else
    {
        data1.open("baza_casn1.txt", ios :: app | ios :: out);

        data >> ccod >> nnume >> ppret >> ccant;

        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "Introduceti cantitatea pe care doriti s-o adaugati (>0) sau sa o scoateti (<0): ";
n:
                cin  >> c;
                if(c > 0)
                {
                    cout << "\nIntroduceti pretul nou/vechi: ";
                    cin >> p;
                    data1 << " " << ccod << " " << nnume << " " << p << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) < ccant)
                {
                    cout << "\nIntroduceti pretul nou/vechi: ";
                    cin >> p;
                    data1 << " " << ccod << " " << nnume << " " << p << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) > ccant)
                {
                    cout << "Nu sunt suficiente produse pe stoc. Va rugam introduceti alta cantitate\n";
                    goto n;
                }
                else
                {
                    goto m;
                }
                cout << "\n\nProdus modificat cu succes!";

                ++bul;
            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
m:
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_casn.txt");
        rename("baza_casn1.txt", "baza_casn.txt");

        if(bul)
        {
            cout << "\n\nProdusul nu a fost gasit!";
        }
    }
}


void magazin :: modif_alim()
{
    fstream data, data1;
    int cod;
    int bul = 0;
    int c;
    float p;
    string n;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului: ";
    cin >> cod;


    data.open("baza_alim.txt", ios :: in);

    if(!data)
    {
        cout << "\n\nFisierul nu exista!";
    }
    else
    {
        data1.open("baza_alim1.txt", ios :: app | ios :: out);

        data >> ccod >> nnume >> ppret >> ccant;

        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "\nIntroduceti cantitatea pe care doriti sa o cumparati (<0): ";
n:
                cin  >> c;
                if(c > 0)
                {
                    system("CLS");
                    cout << "\nIntroduceti cantitatea pe care doriti sa o cumparati (un numar intreg mai mic decat 0): ";

                    goto n;
                }
                else if(c < 0 && (c * (-1)) < ccant)
                {
                    data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) > ccant)
                {
                    cout << "Nu sunt suficiente produse pe stoc. Va rugam introduceti alta cantitate: ";
                    goto n;
                }
                else
                {
                    goto m;
                }
                cout << "\n\nProdus modificat cu succes!";

                ++bul;

            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
m:
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_alim.txt");
        rename("baza_alim1.txt", "baza_alim.txt");

        if(bul)
        {
            cout << "\n\nProdusul nu a fost gasit!";
        }
    }
}
void magazin :: modif_text()
{
    fstream data, data1;
    int cod;
    int bul = 0;
    int c;
    float p;
    string n;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului: ";
    cin >> cod;


    data.open("baza_text.txt", ios :: in);

    if(!data)
    {
        cout << "\n\nFisierul nu exista!";
    }
    else
    {
        data1.open("baza_text1.txt", ios :: app | ios :: out);

        data >> ccod >> nnume >> ppret >> ccant;

        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "Introduceti cantitatea pe care doriti sa o cumparati (<0): ";
n:
                cin  >> c;
                if(c > 0)
                {
                    system("CLS");
                    cout << "\nIntroduceti cantitatea pe care doriti sa o cumparati (un numar intreg mai mic decat 0): ";

                    goto n;
                }
                else if(c < 0 && (c * (-1)) < ccant)
                {
                    data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) > ccant)
                {
                    cout << "Nu sunt suficiente produse pe stoc. Va rugam introduceti alta cantitate\n";
                    goto n;
                }
                else
                {
                    goto m;
                }
                cout << "\n\nProdus modificat cu succes!";

                ++bul;

            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
m:
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_text.txt");
        rename("baza_text1.txt", "baza_text.txt");

        if(bul)
        {
            cout << "\n\nProdusul nu a fost gasit!";
        }
    }
}
void magazin :: modif_casn()
{
    fstream data, data1;
    int cod;
    int bul = 0;
    int c;
    float p;
    string n;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului: ";
    cin >> cod;


    data.open("baza_casn.txt", ios :: in);

    if(!data)
    {
        cout << "\n\nFisierul nu exista!";
    }
    else
    {
        data1.open("baza_casn1.txt", ios :: app | ios :: out);

        data >> ccod >> nnume >> ppret >> ccant;

        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "Introduceti cantitatea pe care doriti sa o cumparati (<0): ";
n:
                cin  >> c;
                if(c > 0)
                {
                    system("CLS");
                    cout << "\nIntroduceti cantitatea pe care doriti sa o cumparati (un numar intreg mai mic decat 0): ";

                    goto n;
                }
                else if(c < 0 && (c * (-1)) < ccant)
                {
                    data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant + c << '\n';
                }
                else if(c < 0 && (c * (-1)) > ccant)
                {
                    cout << "Nu sunt suficiente produse pe stoc. Va rugam introduceti alta cantitate\n";
                    goto n;
                }
                else
                {
                    goto m;
                }
                cout << "\n\nProdus modificat cu succes!";

                ++bul;
            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
m:
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_casn.txt");
        rename("baza_casn1.txt", "baza_casn.txt");

        if(bul)
        {
            cout << "\n\nProdusul nu a fost gasit!";
        }
    }
}

void magazin :: stergere_alim()
{
    fstream data, data1;
    int cod;
    int bul = 0;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului pe care doriti sa-l scoateti: ";
    cin >> cod;

    data.open("baza_alim.txt", ios :: in);
    if(!data)
    {
        cout << "Fisierul nu exista!";
    }
    else
    {
        data1.open("baza_alim1.txt", ios :: app | ios :: out);
        data >> ccod >> nnume >> ppret >> ccant;
        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "Produsul a fost scos cu succes! ";
                ++bul;
            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_alim.txt");
        rename("baza_alim1.txt", "baza_alim.txt");

        if(bul)
        {
            cout << "Produsul nu poate fi gasit! ";
        }
    }

}

void magazin :: stergere_text()
{
    fstream data, data1;
    int cod;
    int bul = 0;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului pe care doriti sa-l scoateti: ";
    cin >> cod;

    data.open("baza_text.txt", ios :: in);
    if(!data)
    {
        cout << "Fisierul nu exista!";
    }
    else
    {
        data1.open("baza_text1.txt", ios :: app | ios :: out);
        data >> ccod >> nnume >> ppret >> ccant;
        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "Produsul a fost scos cu succes! ";
                ++bul;
            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_text.txt");
        rename("baza_text1.txt", "baza_text.txt");

        if(bul)
        {
            cout << "Produsul nu poate fi gasit! ";
        }
    }

}

void magazin :: stergere_casn()
{
    fstream data, data1;
    int cod;
    int bul = 0;

    int ppret, ccant, ccod;
    string nnume;

    cout << "Introduceti codul produsului pe care doriti sa-l scoateti: ";
    cin >> cod;

    data.open("baza_casn.txt", ios :: in);
    if(!data)
    {
        cout << "Fisierul nu exista!";
    }
    else
    {
        data1.open("baza_casn1.txt", ios :: app | ios :: out);
        data >> ccod >> nnume >> ppret >> ccant;
        while(!data.eof())
        {
            if(cod == ccod)
            {
                cout << "Produsul a fost scos cu succes! ";
                ++bul;
            }
            else
            {
                data1 << " " << ccod << " " << nnume << " " << ppret << " " << ccant << '\n';
            }
            data >> ccod >> nnume >> ppret >> ccant;
        }
        data.close();
        data1.close();

        remove("baza_casn.txt");
        rename("baza_casn1.txt", "baza_casn.txt");

        if(bul)
        {
            cout << "Produsul nu poate fi gasit! ";
        }
    }

}

void magazin :: lista_alim()
{
    fstream data;

    int ccod;

    int ppret, ccant;
    string nnume;

    data.open("baza_alim.txt", ios :: in);

    if(data)
    {
        cout << "\t\t\t\tCod\t\tDenumire\tPret\t\tCantitate\n";
        while(!data.eof())
        {
            data >> ccod >> nnume >> ppret >> ccant;
            if(!data.eof())
                cout << "\t\t\t\t" << ccod << "\t\t" << nnume << "\t\t" << ppret << "\t\t" << ccant << '\n';

        }
    }
    else cout << "Nu exista o lista pentru aceasta categorie\n";
    data.close();
}
void magazin :: lista_text()
{
    fstream data;

    int ccod;

    int ppret, ccant;
    string nnume;

    data.open("baza_text.txt", ios :: in);

    if(data)
    {
        cout << "\t\t\t\tCod\t\tDenumire\tPret\t\tCantitate\n";
        while(!data.eof())
        {
            data >> ccod >> nnume >> ppret >> ccant;
            if(!data.eof())
                cout << "\t\t\t\t" << ccod << "\t\t" << nnume << "\t\t" << ppret << "\t\t" << ccant << '\n';

        }
    }
    else cout << "Nu exista o lista pentru aceasta categorie\n";
    data.close();
}
void magazin :: lista_casn()
{
    fstream data;

    int ccod;

    int ppret, ccant;
    string nnume;

    data.open("baza_casn.txt", ios :: in);


    if(data)
    {
        cout << "\t\t\t\tCod\t\tDenumire\tPret\t\tCantitate\n";
        while(!data.eof())
        {
            data >> ccod >> nnume >> ppret >> ccant;
            if(!data.eof())
                cout << "\t\t\t\t" << ccod << "\t\t" << nnume << "\t\t" << ppret << "\t\t" << ccant << '\n';

        }
    }
    else cout << "Nu exista o lista pentru aceasta categorie\n";
    data.close();
}
/** void magazin :: bon()
{
    fstream data;
    int produse[101];
    int cant[101];
    int c = 0;
    char n;
    float amount = 0;
    float total = 0;

    cout << "\n\n\t\t\tBON DE CASA:\n";

    data.open("baza_,agazin.txt", ios :: in);

    if(!data)
    {
        cout << "Fisier gol";
    }
    else
    {
        data.close();

        lista();

        cout << "Va rugam alegeti ce doriti sa cumparati! \n";

        do
        {
            cout << "Introduceti numele produsului: ";
            cin >> n;

            cout << "\nIntroduceti cantitatea: ";
            cin >> c;
        }while()
    }
}*/


int main()
{
    magazin s;
    s.meniu();
}
