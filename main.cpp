#include <iostream>
using namespace std;
int main() {
        int numer;
             cout << "Wprowadz numer miesiaca od 1-12: " << endl;
             cin >> numer;
             if (numer>12 || numer<=0){
                 cout << "Nie ma takiego miesiaca";
             }
            switch (numer) {
                case 1:
                    cout << "Styczeń - 31 dni";
                    break;
                case 2:
                    cout << "Luty - 29 dni";
                    break;
                 case 3:
                     cout << "Marzec - 31 dni";
                     break;
                 case 4:
                     cout << "Kwiecien - 30 dni";
                     break;
                 case 5:
                     cout << "Maj - 31 dni";
                     break;
                 case 6:
                     cout << "Czerwiec - 30 dni";
                     break;
                 case 7:
                     cout << "Lipiec - 31 dni";
                     break;
                 case 8:
                    cout << "Sierpien - 31dni";
                    break;
                case 9:
                    cout << "Wrzesien - 30dni";
                    break;
                case 10:
                    cout << "Pazdziernik - 31dni";
                    break;
                case 11:
                    cout << "Listopad - 30dni";
                    break;
                 case 12:
                     cout << " Grudzien - 31dni";
                     break;

            }

       return 0;
}