#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
int a; // %i and %d for integer
int b;
float c; //  %f for float
char d; //  %c for character
string e; //  %s for string

scanf("%i %d %f %c %s",&a,&b,&c,&d,e); //yung 3 hindi na kailangan ng &
printf("%3i\n%04d\n%08.4f\n%c\n%s",a,b,c,d,e);

system("pause");
}
//yung 0.4 sa is yung number ng decimal places na ilalabas
//yung 04 is kung ilan 0 placeholders nakareserve para sa integer
//yung 3 naman is kung ilang spaces ang lalabas bago yung integer

/* eto yung format: %'space character''width''precision''data type'
ex: %03.4f

\n (newline)
\t (tab)
\v (vertical tab)
\f (new page)
\b (backspace)
\r (carriage return)

*/
