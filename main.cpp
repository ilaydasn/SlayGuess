#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand (time(0));
int number;
number = rand() % 1000 + 1;
int guess;
do {
cout << "Tahmin et asko: ";
cin >> guess;
if (guess < number)
cout << "Az soyledin askom,arttir" << endl;
else if (guess > number)
cout << "Yuh, yavas at biraz" << endl;
else
cout << "Helal kiz bildin valla" << endl;
} while (guess != number);


return 0;
}