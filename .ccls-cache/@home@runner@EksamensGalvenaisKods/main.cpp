//Izstrādāt mācību materiālu un elektronisko testu par tēmu "Viendimensiju masīvi programmēšanas valodā C++".
//Tests satur 10 jautājumus (izstrāde notiek programmēšanas valodā C++), katram jautājumam 4 atbilžu varianti, no kuriem pareizs tikai 1.
//Lietotājs atbild uz katru jautājumu 1 reizi un saņem tūlītēju novērtējumu, vai atbilde pareiza vai nepareiza. Beigās paziņo, cik jautājumi atbildēti pareizi un izdrukā jautājumu sarakstu, uz kuriem atbildēts nepareizi.

#include <iostream>
using namespace std;
#include <string>
int rezultats = 0;
int Natbilde = 0;

  void atbilde(int izv, int atbilde){
        
    if (izv == atbilde)
    {
        cout << "Malacis!" << endl;
      rezultats++;
    }
    else
    {
        cout << "Nav pareizi ši atbilde" << endl;
      atbilde == Natbilde;
    }
          }

int main() {

//definetie

  char izv1;
 int sak;
  int Patb, Natb;
int var[4];

//sakums
  
cout<< "Tests par Viendimensiju masīviem programmēšanas valodā C++\n";
  cout<<"\nVai vēlies sākt?";
  cout<<"\nja = 1    ne = 2\n";
  cin>>sak;
  if(sak == 1){
    
    int izv, punkti = 0;
    char jaut1[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   string atb1[4] =  {"1. Masiv","\n2. Array","\n3. list","\n4. tower"};

     cout << jaut1 << endl;
    cout << atb1[0]<<atb1[1]<<atb1[2]<<atb1[3] << endl;
    cin >> izv;
    atbilde(izv, 2);

    char jaut2[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb5[] =  {"1. Masivs"};
    char atb6[] = {"\n2. Array"};
    char atb7[] = {"\n3. list"};
    char atb8[] = {"\n4. tower"};

     cout << jaut2 << endl;
    cout << atb5 << endl;
    cout << atb6 << endl;
    cout << atb7 << endl;
    cout << atb8 << endl;
    cin >> izv;
    atbilde(izv, 4);

     char jaut3[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb9[] =  {"1. Masivs"};
    char atb10[] = {"\n2. Array"};
    char atb11[] = {"\n3. list"};
    char atb12[] = {"\n4. tower"};

     cout << jaut3 << endl;
    cout << atb9 << endl;
    cout << atb10 << endl;
    cout << atb11 << endl;
    cout << atb12 << endl;
    cin >> izv;
    atbilde(izv, 4);

     char jaut4[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb13[] =  {"1. Masivs"};
    char atb14[] = {"\n2. Array"};
    char atb15[] = {"\n3. list"};
    char atb16[] = {"\n4. tower"};

     cout << jaut4 << endl;
    cout << atb13 << endl;
    cout << atb14 << endl;
    cout << atb15 << endl;
    cout << atb16 << endl;
    cin >> izv;
    atbilde(izv, 4);

     char jaut5[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb17[] =  {"1. Masivs"};
    char atb18[] = {"\n2. Array"};
    char atb19[] = {"\n3. list"};
    char atb20[] = {"\n4. tower"};

     cout << jaut5 << endl;
    cout << atb17 << endl;
    cout << atb18 << endl;
    cout << atb19 << endl;
    cout << atb20 << endl;
    cin >> izv;
    atbilde(izv, 4);

     char jaut6[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb21[] =  {"1. Masivs"};
    char atb22[] = {"\n2. Array"};
    char atb23[] = {"\n3. list"};
    char atb24[] = {"\n4. tower"};

     cout << jaut6 << endl;
    cout << atb21 << endl;
    cout << atb22 << endl;
    cout << atb23 << endl;
    cout << atb24 << endl;
    cin >> izv;
    atbilde(izv, 4);

     char jaut7[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb25[] =  {"1. Masivs"};
    char atb26[] = {"\n2. Array"};
    char atb27[] = {"\n3. list"};
    char atb28[] = {"\n4. tower"};

     cout << jaut7 << endl;
    cout << atb25 << endl;
    cout << atb26 << endl;
    cout << atb27 << endl;
    cout << atb28 << endl;
    cin >> izv;
    atbilde(izv, 4);

     char jaut8[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb29[] =  {"1. Masivs"};
    char atb30[] = {"\n2. Array"};
    char atb31[] = {"\n3. list"};
    char atb32[] = {"\n4. tower"};

     cout << jaut8 << endl;
    cout << atb29 << endl;
    cout << atb30 << endl;
    cout << atb31 << endl;
    cout << atb32 << endl;
    cin >> izv;
    atbilde(izv, 4);

     char jaut9[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb33[] =  {"1. Masivs"};
    char atb34[] = {"\n2. Array"};
    char atb35[] = {"\n3. list"};
    char atb36[] = {"\n4. tower"};

     cout << jaut9 << endl;
    cout << atb33 << endl;
    cout << atb34 << endl;
    cout << atb35 << endl;
    cout << atb36 << endl;
    cin >> izv;
    atbilde(izv, 4);

     char jaut10[] = {"\nKā vēl sauc viendimensiju masīvus?\n"};
   char atb37[] =  {"1. Masivs"};
    char atb38[] = {"\n2. Array"};
    char atb39[] = {"\n3. list"};
    char atb40[] = {"\n4. tower"};

     cout << jaut10 << endl;
    cout << atb37 << endl;
    cout << atb38 << endl;
    cout << atb39 << endl;
    cout << atb40 << endl;
    cin >> izv;
    atbilde(izv, 4);


    
   

    cout<<"\nTavi iegutie punkti = "<<rezultats;
        
    
  }else if(sak == 2){
    cout<<"\nTad neko :(";
  }
  
}