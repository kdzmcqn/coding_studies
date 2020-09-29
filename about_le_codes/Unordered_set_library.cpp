#include <iostream>
#include <unordered_set>
using namespace std;

/*functions are similar to the vector library pero this one is orderless
This is used for storing values (hash table, look up functions)

.bucket_count() - counts the number of buckets in unordered set
.bucket(num) - checks kung saang bucket nakalagay yung num
.bucket_size(i) - checks kung ilan laman ng bucket of index i
.count(num) - retruns a boolean 1 to check if yung num nasa loob nung hash
.empty() - returns boolean 0 kapag hindi empty
.clear() - same function nung nasa vector library
.begin(), .end() - iterators ng buckets
.insert(num) - inserts y randomly in a bucket sa unorderd set
.find(num) - retruns iterator .end() if wala yung num sa unordered set
.swap(name) - swaps existing unorderd set with that of unordered set name
*/


int main()
{
  int x,y;
  unordered_set<int> oof ={1,2,3,4,5,1};
  cout<<"number of buckets: "<<oof.bucket_count()<<endl; //number of buckets na paglalagyan ng values

  //the number of buckets are randomly generated
  for(unsigned int i:oof)
  {
    cout<<"bucket number: "<<oof.bucket(i)<<endl;
    //hindi pwede kunin yung actual content sa bucket using iteration
    //kasi wala ngang order
  }
  cout<<endl;

  for(unsigned int i=0;i<oof.bucket_count();i++)
  {
    cout <<"bucket "<<i<< " has "<<oof.bucket_size(i)<<" elements.\n";
    //bucket_size(i) determines the # of elements in a bucket
  }
  cout<<endl;

  //search hash table for an element x
  cout<<oof.count(1)<<endl; //returns 1 if it exists
  cout<<oof.count(8)<<endl<<endl; // 0 otherwise

  //check if empty yung unordered unordered set
  oof.clear(); //clears the contents of the unordered set
  cout<<oof.empty()<<endl<<endl; //0 kapag hindi empty

  cin>>x;
  for(int i=0;i<x;i++)
  {
    cin>>y;
    oof.insert(y); //places y into the unordered set
  }
  cout<<endl;

  cin>>y;
  if(oof.find(y) != oof.end())
    cout<<"yes"<<endl<<endl;

  else
    cout<<"no"<<endl<<endl;

  cin>>y;
  oof.erase(y); //removes y in unordered set
  cout<<oof.count(y)<<endl;
}
