#include<iostream>
#include<cstring>
#include<string>
#include<time.h>
#include<stdlib.h>
void playerGen();
void TeamGen();
using namespace std;

int main()
  {  
   TeamGen();
   cout<<endl;
   cout<<endl<<"And your squad is:\n";
   cout<<endl;
   playerGen();  
   
     
   
   
  }  

///*///*///*///*///*///* PLAYER GENERATOR FUNCTION ///*///*///*///*///*///*///*

void playerGen()
{
    srand(time(NULL));
    
    string goalk[]={"Neuer","Ederson","Cladio Bravo","Sergio Romero","Hugo Lloris","Simon Mignolet","Willy Caballero",
                    "Peter Cech","David Ospina","Jasper Clissen","Jan Oblak","Keylor Navas","Neto","Sergio Asenjo",      // Pool of Goalkeeper
                    "Sve Ulreich","Ralf Fahrmann","Oliver Baumann","Roman Burki","Roman Weidenfeller","Berd Leno",
                    "Wojciech Szczesny","Buffon","De Gea","Curtuois","Ter Stegen","Donnarumma","Karius","Pepe Reina",
                    "Steve Mandanda","Alphonse Areola","Kevin Trapp"};
                    
    string def[]={"Ramos","Puyol","Pique","Raul Albiol","Vermaelen","Skrtel","Van Dijk","Lovren","Diego Godin","Filipe Luis",
                  "Rolando","Adil Rami","Pepe","Medel","Damogaj Vida","Yuto Nagatomo","Joao Miranda","Davide Santon","Vincent Kompany",
                  "John Stones","Aymeric Laporta","Chris Smalling","Luke Shaw","Eric Bailly","Jan Vertonghen","Toby Alderweireld ",
                  "Kyle Walker","Nathaniel Clyne","David Luiz","Gary Cahill","Laurent Koscielny","Anthony Rudiger","Hector Bellerin",
                  "Per Mertasacker","Phil Jagielka","Eliaquim Mangala","Giorgio Chiellini","Alex Sandro","Andrea Barzagli","Mehdi Benatia",     // Pool of Defender
                  "Kalidou Koulibaly","Aleksandr Kolarov","Federico Fazio","Kostas Manolas","Juan Jesus","Stefan Radu","Stefan de Vrij",
                  "Martin Caceres","Andrea Ranocchia","Leonardo Bonucci","Ignazio Abate","Ricardo Rodriguez","Christian Zapata","Alesio Romagnoli",
                  "Daniel Alves","Marquinhos","Thiago Silva","Presnel Kimpembe","Kamil Glik","Jemerson","Andrea Raggi","Marcelo","Jeremy Morel",
                  "Ferland Mendy","Naldo","Matjia Nastasic","Benedikt Howedes"};
                  
   string mid[]={"Kevin De Bruyne","Leroy Sane","Ilkay Gundogan","David Silva","Yaya Toure","Raheem Sterling","Nemanja Matic","Juan Mata",
                  "Antonio Valencia","Paul Pogba","Micheal Carrick","Dele Alli","Christian Eriksen","Lucas Moura","Moussa Dembele","Muhammed Salah",
                  "Alex-Oxlade Cham.","Jordan Henderson","Emre Can","Giorginio Wijnaldum","Willian","Eden Hazard","Cesc Fabregas","N'Golo Kante",           // Pool of MidFielder
                  "Pedro","Granit Xhaka","Jack Wilshere","Mesut Ozil","Santi Cazorla","Henrik Mkhitaryan","Aaron Ramsey","Ivan Rakitic",
                  "Sergio Busquets","Andreas Iniesta","Philippe Coutinho","Paulinho","Saul Niguez","Koke","Gabi","Yannick Carrasco","Vitolo",
                  "Marco Asensio","Isco","Luka Modric", "Toni Kroos","Carlos Casemiro","Dani Parejo","Geoffrey Kondogbia","Carlos Soler",
                  "James Rodriguez","Arturo Vidal","Arjen Robben","Franck Ribery","Thiago Alcantara","Daniel Caliguri","Benjamin Stambouli",
                  "Yevhen Konoplyanka","Leon Goretzka","Kevin Vogt","Serge Gnabry","Kerem Demirbay","Nadiem Amiri","Christian Pulisic","Mario Gotze",
                  "Nuri Sahin","Marco Reus","Shinji Kagawa","Lars Bender","Karim Bellarabi","Kevin Kampl","Sven Bender","Douglas Costa","Miralem Pjanic",
                  "Sami Khedira","Juan Cuadrado","Kwadwo Asamoah","Marek Hamsik","Jorginho","Christian Maggio","Allan","Kevin Strootman","Stephan El Shaarawy",
                  "Radja Nainggolan","Daniele De Rossi","Cengiz Under","Lorenzo Pellegrini","Lucas Leiva","Senad Lulic","Antonio Candreva","Ivan Perisic",
                  "Borja Valero","Hakan Calhanoglu","Lucas Biglia","Riccardo Montolivo","Lucas Biglia","Franck Kessie","Marco Veratti","Julian Draxler",
                  "Javier Pastore","Thiago Motta","Adrien Rabiot","Hatem Ben Arfa","Youri Tielemans","Joao Moutinho","Thomas Lemar","Nabil Fekir","Luiz Gustavo",
                  "Dimitri Payet",};
                        
    string forw[]={"Gabriel Jesus","Sergio Aguero","Harry Kane","Erik Lamela","Heung Min Son","Marcus Rashford"
                   ,"Romelu Lukaku","Alexis Sanchez","Anthony Martial","Roberto Firmino","Sadio Mane","Alvaro Morata",
                   "Olivier Giroud","Pierre Aubameyang","Alexandre Lacazette","Danny Welbeck","Ousmane Dembele",
                   "Luis Suarez","Lionel Messi","Antoine Griezmann","Fernando Torres","Kevin Gameiro","Diego Costa",
                   "Gareth Bale","Cristiano Ronaldo","Karim Benzema","Simone Zaza","Mario Mandzukic","Paulo Dybala",
                   "Gonzalo Higuain","Lorenzo Insigne","Jose Callejon","Dries Mertens","Edin Dzeko","Luis Alberto",
                   "Nani","Ciro Immobile","Mauro Icardi","Andre Silva","Nikola Kalinic","Patrick Cutrone","Fabio Borini",
                   "Thomas Müller","Robert Lewandowski","Breel Embolo","Adam Szalai","Mark Uth","Andrej Kramaric","Andre Schürrle",
                   "Michy Batshuayi","Andriy Yarmolenko","Leon Bailey","Kevin Volland","Stefan Kiessling","Timo Werner","Edinson Cavani",
                   "Angel Di Maria","Kylian Mbappe","Neymar","Radamel Falcao","Stevan Jovetic","Keita Balde","Memphis Depay","Mariano Diaz",
                   "Bertrand Traore","Valere Germain","Kostas Mitroglou","Lucas Ocampos"};

    
    
for (int i = 0; i < 50; i++) 
    {
        swap(def[rand()%67],def[rand()%67]);
        swap(mid[rand()%109],mid[rand()%109]);      // for preventing duplication footballer...
        swap(forw[rand()%68],forw[rand()%68]);
    }
    
    
    cout<<"GK:"<<endl;                         // For generating goalkeeper//
    cout<<"-"<<goalk[rand()%31]<<endl;
    cout<<endl;
    
     cout<<"DEF:"<<endl;
for(int i=0;i<4;i++)
    {
        cout<<"-"<<def[rand()%67]<<endl;     //For Generating Defence position//
    }
    
      cout<<endl;
      
     cout<<"MID:"<<endl;
for(int i=0;i<4;i++)
    {
        cout<<"-"<<mid[rand()%109]<<endl;    ///Generating Midfield position///
    }
    
     cout<<endl;
    
     cout<<"FORW:"<<endl;
for(int i=0;i<2;i++)
    {
        cout<<"-"<<forw[rand()%68]<<endl;   ///Generating Forward position// 
    }
}
    
///*///*///*///*///*/// TEAM NAME GENERATOR FUNCTION ///*///*///*///*///*///*   
    
void TeamGen()
    {
    srand(time(NULL));
    
    string pre[]={"Leo","Dinamo","Vul","Sro","Ban","Pol","St.","Delb","Tan", //In here we take prefix name
                  "Kam","Bra","Tit","Dynamo","Liv","Met","Zara","Kar","Jump"};
                  
    string core[]={"hor","core","bell","zat","kat","gef",
                   "ler","tor","vit","pet","ay","kor"}; // In here we take core/middle name
    
    string core1[]={"tra","zal","brough","temp","ger","sep","san",
                    "rew","oly","ora","pool","bar","ce","side","rapid"}; // I wanna second middle name because I wanted long team name
    
    string post[]={" F.C"," Istanbul"," Defender"," S.K"," A.C"," Club"," Futebol Club",
                   " United"," Athletic"," Juniors"," Boys"," 09"," Sport"," London"," Dragon"
                   " Munich"," Kiev"," Spartans"," Rovers"," Idman Yurdu"," Force"," City"," CP"," Lions"};
    
    cout<<"Your team is: "<<pre[rand()%18]<<core[rand()%12]<<core1[rand()%15]<<post[rand()%25];
}
