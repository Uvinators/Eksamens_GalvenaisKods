//Izstrādāt mācību materiālu un elektronisko testu par tēmu "Viendimensiju masīvi programmēšanas valodā C++".
//Tests satur 10 jautājumus (izstrāde notiek programmēšanas valodā C++), katram jautājumam 4 atbilžu varianti, no kuriem pareizs tikai 1.
//Lietotājs atbild uz katru jautājumu 1 reizi un saņem tūlītēju novērtējumu, vai atbilde pareiza vai nepareiza. Beigās paziņo, cik jautājumi atbildēti pareizi un izdrukā jautājumu sarakstu, uz kuriem atbildēts nepareizi.

#include <iostream>
using namespace std;
#include <string>
int rezultats = 0;

 void atbilde(int izv, int atbilde){
        
    if (izv == atbilde)
    {
        cout << "Malacis!\n" << endl;
      rezultats++;
    }
    else
    {
        cout << "Ši atbilde nav pareiza.\n" << endl;
      
    }
          }

int main() {

int sak;
  
  cout<< "Tests par Viendimensiju masīviem programmēšanas valodā C++\n";
  cout<<"\nVai vēlies sākt?";
  cout<<"\nja = 1    ne = 2\n";
  cin>>sak;
  if(sak == 1){

  int izv;
     int prezultats;
     string nepareizie = "";
    
string jaut1[] ={"Ka vel sauc viendimensiju masivus?\n"};

    string atb1[] =  {"1. Masiv\n2. Array\n3. list\n4. tower"};

int par[] = {2};
    
 for(int i=0; i<10; i++){
     cout << jaut1[i] << endl;
    cout << atb1[i] << endl;
    cin >> izv;
   prezultats = rezultats;
    atbilde(izv, par[i]);
    if(prezultats == rezultats){
      nepareizie = nepareizie + to_string(i);
      } 
    }
    
    }else if(sak == 2){
    cout<<"\nTad neko :(";
  }
  
  
}