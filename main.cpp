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
    
string jaut1[] ={"Ka vel sauc viendimensiju masivus?\n","Viendimensiju masivs kurš satur vēl viendimensiju masīvus, sauc par?\n","vienāda tipa Mainigo kas apkopoti viena grupā sauc par: \n","Kurš no dotajiem piemēriem ir viendimensiju-Masīvs?\n","Kas tiks izvadīts ekrānā pēc dotā koda izpildes?\nint main() {\n string mašīna[3] = {\"BMW\",\"MITSUBISHI\",\"AUDI\"};\ncout<<mašīna[2];}\n\n","Kurš no piemēriem ir pareizs?","Kāda veida datu struktūrai viendimensijas masīvs visvairāk līdzinās?","Kurš no šiem deklarē 5 rakstzīmju masīvu un inicializē tos uz zināmām vērtībām?","Kādi ir derīgie indeksi tālāk parādītajam masīvam? int myArray[25];","Kāds ir pareizais veids, kā izveidot masīvu ar nosaukumu golfScores, kurā būs 5 spēļu rezultāti."};

    string atb1[] =  {"1. Masiv\n2. Array\n3. list\n4. tower","1. MultiDimensiju-masivs\n2. DivDimensiju-Masivs\n3. TrisDimensiju-Masivs\n4. Viendimensiju-Masivs", "1. VienDimensiju-Masīvs\n2. Divdimensiju-Masīvs\n3. MasivaVirkne\n4. Grup-Masīvs","1. arr = 1;\n2. int arr = 0;\n3. int arr[][];\n4. int arr[];","1. Error\n2. MITSUBISHI\n3. AUDI\n4. BMW","1. int pirkrties[3]={\"veikals\",\"mols\",\"stends\"};\ncout<<pirkties[2];\n2. string pirkrties[4] = {\"veikals\",\"mols\",\"stends\",\"Saldumi\"};\ncout<<pirkties[4];\n3. string pirkties[4] = {\"veikals\",\"mols\",\"stends\",\"Saldumi\"};\ncout<<pirkties[3];\n4. string pirkties[3] = {\"veikals\",\"mols\",\"stends\",\"Saldumi\"};\ncout<<pirkties[4];","1. Matrica ar rindām un kolonnām\n2. Kubam\n3. Rādītājam\n4. Viena datu rinda","1. Char array[5]={'a','b','c','d','e'};\n2. Char array[]={'a','b','d','e'};\n3. Char array[5]={'a','b','c','d','e'}; un char array[5]={' '};\n4. visi iepriekš minētie","1. 0-24\n2. 0-25\n3. 1-25\n4. 1-24","1. Int golfScores;\n2. Float golfScores[5];\n3. String golfScores[];\n4. Int golfScores[5];"};
    
   int par[] = {2,2,1,4,3,3,4,3,1,4};
    
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

cout<<"\nTavi iegutie punkti = "<<rezultats<<"\n";
       cout<<("Nepareizi atbildētie jautājumi:\n");
    int i = 0; 
        while(i<nepareizie.length()) {
            cout<<jaut1[(int)(nepareizie[i]) - 48];
            i++;
        } 
    
    }else if(sak == 2){
    cout<<"\nTad neko :(";
  }
  
  
}