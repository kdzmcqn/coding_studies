#include <iostream>
#include <unordered_map>
using namespace std;

/*Properties of unordered maps are similar to unordered sets and vectors
unordered_map<type> name = { {key,hash}, {c,d}, ...} - use the key to access
the hash inside the hash table

.at(num) - accesses the value in the bucket with a key of num
name[num] - same function as .at()
name[num] = val - puts val in the a bucket with a key of num
.bucket(key) - determines kung saan nakalagay na bucket yung num (key man or value)
.insert(make_pair(key,val)) - puts the key and the val in their respective buckets
.begin(), .end() - iterators
.find(key) - checks if the key value is useable in the unordered map
  -returns an iterator .end() if hindi
.erase(key) - erases the key and the value it opens in the unordered set
  - dapat yung key ang input else hindi mabubura
.swap(name) - swaps the contents with unordered set 'name'

unordered maps can't be iterated kasi kailangan ng key per sa bawat value
na nakastore para maaccess
*/

int main()
{
  int x;
  unordered_map<int,int> map = {{1,2},{3,4},{99,1000}}; //1st way of putting values
  map[5] = 6; //2nd way of putting values into unordered map
  map[7] = 8;
  map.insert(make_pair(9,10)); //3rd way of putting values

  //counts kung ilang buckets ang pwedeng paglagyan (randomly generated)
  cout<<"number of buckets: "<<map.bucket_count()<<endl<<endl;

  cout<<map.at(1)<<endl; //1st way of accessing using key ints
  cout<<map[3]<<endl<<endl; //2nd way of accessing using key ints

  for(auto &x:map)
  {
    cout<<x.first<<" "<<x.second<<endl;
  }
  cout<<endl;

  for(unsigned int i=0;i<map.bucket_count();i++)
  {
    //checks kung ilan laman per bucket
    cout <<"bucket "<<i<<" has "<<map.bucket_size(i)<<" elements.\n";
  }
  cout<<endl;

  //finds kung saang bucket nakalagay si 1000
  cin>>x;
  cout<<x<<" is in bucket: "<<map.bucket(x)<<endl<<endl; //check paguwi

  //number of buckets excluding yung null case
  cout<<"number of buckets excluding null: "<<map.size()<<endl<<endl;

  //check kung yung key ay nasa loob ng unordered set
  cin>>x;
  if(map.find(x) != map.begin())
    cout<<x<<" is a key to a value in map"<<endl<<endl;

  else
    cout<<x<<" is not a key to a value in map"<<endl<<endl;

  //erase yung key and its content (dapat yung key ang input para mabura)
  cin>>x;
  map.erase(x);
  cout<<"the key "<<x<<" and its content is now erased\n\n";

  //clear the content of unordered set map
  map.clear();
  cout<<map.empty(); //returns 1 kapag empty, 0 otherwise

  system("pause");
}
