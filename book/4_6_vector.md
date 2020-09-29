# vector

member-function-call:
object_name.member-function-name(argument-list)

```cpp
vector<double> v;
v.push_back(2.7);
```

## compute mean and median temperatures

```cpp
int main();
{
    vector<double> temps;
    for(double temp; cin>>temp;) // read into temps
    temps.push_back(temp);

    // compute mean
    double sum = 0;
    for(int x: temps) sum += x;
    cout<<"Average temperature: "<<sum/temps.size<<'\n';

    // compute median temperature:
    sort(temps); // standard library sort algorithm, sort()
    cout<<"Median temperatures: "<< temps[temps.size()/2]<<'\n';
    // temps[temps.size()] picks the middle element
    // may not be the median
}
```

## simple dictionary

```cpp
int main()
{
    vector<string> words;
    for(string temp; cin>> temo;)
        words.push_back(temp);
        cout<<"Number of words: "<<words.size()<<'\n';

    sort(words);

    for(int i = 0; i < words.size(); ++i)
        if(i == 0 || words[i-1] != words[i])
            cout << words[i]<<'\n';
}
```
