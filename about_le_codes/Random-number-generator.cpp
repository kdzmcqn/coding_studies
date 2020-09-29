#include <iostream>
#include <ctime> /*library ng functions na ginagamit pang manipulate ng runtime*/
using namespace std;
int main()
{
srand(time(0));
cout<<rand()%77<<endl; /*ganito magtype ng cin/cout kapag walang standard namespace*/
system("pause");
return 0;
}

/*notes:

yung time(x) is kinukuha yung current runtime ng program

kapag gumamit ng rand() lang hindi siya maggegenerate ng truly random number
kasi may sinusundan na algo yan. kaya dapat ginagamitan, ng srand(x), iniiba
niya yung initial condition ng function na rand() kaya ang ginawa natin dito
kinuha natin yung initial value sa runtime. */
