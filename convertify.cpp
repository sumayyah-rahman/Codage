#include <iostream>

using namespace std;

int main() {
  char CHOIX;
  do {
    int choix_main;
    cout << "Qu'est-ce que vous voulez convertir ?\n";
    cout << "1. Masse\n";
    cout << "2. Volume\n";
    cout << "3. Température\n";
    cout << "4. Temps\n";
    cout << "5. Longueur\n";
    cout << "6. Vitesse\n";
    cout << "7. Devise\n";
    cout << "Votre choix : ";
    cin >> choix_main;

  switch (choix_main) {
     case 1:
         char choixM;
         do{
             int choix1;
             cout << "Quelle unit� vous voulez convertir?" << endl;
             cout << "1. kg -> mg " << endl;
             cout << "2. mg -> kg " << endl;
             cout << "3. kg -> g " << endl;
             cout << "4. g -> kg " << endl;
             cout << "5. g -> mg " << endl;
             cout << "6. mg -> g " << endl;
             cout << "votre choix:";
             cin >> choix1;
             float n;
             switch (choix1){
                 case 1:
                   cout << "Saisissez votre nombre:";
                   cin >> n;
                   n = (n*(1000000));
                   cout << n << "\t" << "mg" << endl;
                   break;
                 case 2 :
                   cout << "Saisissez votre nombre:";
                   cin >> n;
                   n = (n/(1000000));
                   cout << n << "\t" << "kg" << endl;
                   break;
                case 3:
                    cout << "Saisissez votre nombre:";
                    cin >> n;
                    n = (n*(1000));
                    cout << n << "\t" << "g" << endl;
                    break;
                 case 4:
                   cout << "Saisissez votre nombre:";
                   cin >> n;
                   n = (n/(1000));
                   cout << n << "\t" << "kg" << endl;
                   break;
                 case 5:
                   cout << "Saisissez votre nombre:";
                   cin >> n;
                   n = (n*(1000));
                   cout << n << "\t" << "mg" << endl;
                   break;
                 case 6:
                   cout << "Saisissez votre nombre:";
                   cin >> n;
                   n = (n/(1000));
                   cout << n << "\t" << "g" << endl;
                   break;
                 default:
                   cout << "la Valeur est invalide. Recommencez. "<< endl;
                   }
                   } while (choixM == 'y' || choixM == 'Y');
                   break;
                case 7:
                  do {
                     cout<<"De quelle devise vous voulez convertir ? " << endl
                     << "1: JPY" << endl
                     << "2: EUR" << endl
                     << "3: USD" << endl
                     << "4: GBP" << endl
                     << "5: CNY" << endl
                     << "6: MYR" << endl
                     << "Choix: ";
                     cin >> d1;
                     } while (d1<1 || d1>6);
                     cout<<"A quelle devise vous voulez convertir ?" << endl
                     << "1: JPY" << endl
                     << "2: EUR" << endl
                     << "3: USD" << endl
                     << "4: GBP" << endl
                     << "5: CNY" << endl
                     << "6: MYR" << endl
                     << "Choix: ";
                     cin >> d2;
         
                     cout << "Tapez la valeur que vous voulez convertir: ";
                     cin >> amount;
                  break;
