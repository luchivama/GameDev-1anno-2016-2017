#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<ctime>

using namespace std;

int main()
{
   vector<string>inventory;
   cout<<"sei a capo di un mercantile fenicio che sta caricando delle merci"<<endl;

   inventory.push_back("vino");
   inventory.push_back("lana");
   inventory.push_back("avorio");
   inventory.push_back("legno");

   vector<string>::iterator myIterator;
   vector<string>::const_iterator iter;

   cout<<"le tue merci:\n";
   for(iter=inventory.begin();iter!=inventory.end();++iter)
   {
       cout<<*iter<<endl;
   }
   cout<<"poco dopo che sei partito dal porto l'ultima merce caricata cade in acqua! Dovevi legarla meglio!"<<endl;
   inventory.erase((inventory.begin()+3));
   cout<<"la tua merce:\n";
   for(iter=inventory.begin();iter!=inventory.end();++iter)
   {
       cout<<*iter<<endl;
   }
   cout<<"in mezzo al mare trovi un mercantile amico che ti regala del te'\n";
   inventory.insert(inventory.begin(),"te'");
   cout<<"la tua merce:\n";
   for(iter=inventory.begin();iter!=inventory.end();++iter)
   {
       cout<<*iter<<endl;
   }
   cout<<"poco dopo che sei attraccato ad un nuovo porto scambi in un mercato la tua lana per del frumento\n";
   myIterator=inventory.begin()+2;
   *myIterator="frumento";
   cout<<"la tua merce:\n";
   for(iter=inventory.begin();iter!=inventory.end();++iter)
   {
       cout<<*iter<<endl;
   }
   cout<<"la tua fermata al nuovo porto e' gia finito visto che ai una destinazione da raggiungere ma durante il viaggio una nave pirata ti attacca e ruba tutto il vino! Di solito i pirati rubano il rum ma si vede che questi sono francesi XD!\n";
   inventory.erase((inventory.begin()+1));
   cout<<"la tua merce:\n";
   for(iter=inventory.begin();iter!=inventory.end();++iter)
   {
       cout<<*iter<<endl;
   }
   cout<<"durante il viaggio ti stai annoiando e per passare il tempo decidi di riordinare le merci in ordine alfabetico\n";
   sort(inventory.begin(),inventory.end());
   cout<<"la tua merce:\n";
   for(iter=inventory.begin();iter!=inventory.end();++iter)
   {
       cout<<*iter<<endl;
   }
   cout<<"bravo sei riuscito a riordinare le merci in ordine alfabetico! Peccato che una tempesta abbia sparso in ordine casuale le merci! Certo che hai sfiga!\n";
   srand(static_cast<unsigned int>(time(0)));
   random_shuffle(inventory.begin(),inventory.end());
   cout<<"la tua merce:\n";
   for(iter=inventory.begin();iter!=inventory.end();++iter)
   {
       cout<<*iter<<endl;
   }
   cout<<"sei arrivato alla tua destinazione: Tiro. finalmente dopo tutte le sfortune durante il viaggio sei riuscito a vendere le tue merci per oro\n";
   inventory.erase(inventory.begin(),inventory.end());
   inventory.insert(inventory.begin(),"oro");
   cout<<"la tua merce:\n";
   for(iter=inventory.begin();iter!=inventory.end();++iter)
   {
       cout<<*iter<<endl;
   }

   return 0;
}
