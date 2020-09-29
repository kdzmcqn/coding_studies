#include <iostream>
using namespace std;

class test
{
public:
  void set()
  {
    x = 0;
  }

private:
  int x;
  //declared dito na friend si get() if may susi na 'kefriend' para sa class test
  friend void get(test &keyfriend);
};

//si get() merong susi na 'keyfriend' para sa class test kaya pwede access
void get(test &keyfriend)
{
  int y;
  cin >> y;
  keyfriend.x = y; //gagamitin yung susi para maaccess yung variable sa class
  cout << keyfriend.x;
}

int main()
{
  test key;
  get(key); //kapag nagenerate na yung key magrarun si get()

  system("pause");
  return 0;
}
