#include <iostream>
#include <regex>
using namespace std;
/*
Some basic regex operations
regex name(val) - yung reference for matching is 'val' inside 'name'

regex_match(input, name) - dito yung input sa cin ichecheck kung match sa
content ni 'name'. Returns 1 or 0

regex_constants:
  ::icase - ignores capitalization basta same letters

regex name(val.) - kapag may period, dapat match yung mga characters before
the period then iiignore niya yung letter(s) after nun. Kung ilang dots, ganun
karami yung letters na iiignore niya. Kapag sumobra yung butal sa input vs sa
number of dots, icoconsider siya na unmatched. Kapag kulang yung butal sa
input vs sa number of dots, icoconsider rin siyang unmatched

regex name(val?) - match pa rin even yung preceeding character is wala or meron

regex name(val*) - match pa rin even yung preceeding character is wala or
more than one

regex name(val+) - match pa rin if yung preceeding character is one or more
*/

int main(){
  string str;
  cout<<"regular regex:\n";
  cin>>str;
  regex pass1("abc"); //kailangan yung input magmatch sa kung ano nakasulat
  bool match1 = regex_match(str,pass1); //ganito gamitin regex_match()
  cout<<(match1? "matched":"not matched")<<endl<<endl;

//using regex_constants::icase
  cout<<"using icase:\n";
  cin>>str;
  regex pass2("abc", regex_constants::icase);
  bool match2 = regex_match(str,pass2);
  cout<<(match2? "matched":"not matched")<<endl<<endl;

//using periods "."
  cout<<"using periods:\n";
  cin>>str;
  regex pass3("abc.");//up to 1 char lang after abc yung considered matched
  bool match3 = regex_match(str,pass3);
  cout<<(match3? "matched":"not matched")<<endl<<endl;

//using question mark "?"
  cout<<"using question mark:\n";
  cin>>str;
  regex pass4("abc?"); //ok lang na walang 'c'
  bool match4 = regex_match(str,pass4);
  cout<<(match4 ? "matched":"not matched")<<endl<<endl;

//using asterisk "*"
  cout<<"using asterisk:\n";
  cin>>str;
  regex pass5("abc*"); //ok lang wala or more than 1 'c'
  bool match5 = regex_match(str,pass5);
  cout<<(match5 ? "matched":"not matched")<<endl<<endl;

//using plus "+"
  cout<<"using plus:\n";
  cin>>str;
  regex pass6("abc*"); //ok lang wala or more than 1 'c'
  bool match6 = regex_match(str,pass6);
  cout<<(match6 ? "matched":"not matched")<<endl<<endl;

//using brackets "[]"
  cout<<"using brackets:\n";
  cin>>str;
  regex pass7("abc*"); //ok lang wala or more than 1 'c'
  bool match7 = regex_match(str,pass7);
  cout<<(match7 ? "matched":"not matched")<<endl<<endl;

  system("pause");
}
