# Switch set of values

```cpp
int main()
{
    cout << "Please enter a digit\n";
    char a;
    cin>> a;
    switch(a)
    {
        case '0': case '2': case '4': case '6': case '8':
            cout<<"is even\n";
            break;
        case '1': case '3': case '5': case '7': case '9':
            cout<<"is odd\n";
            break;
        default:
            cout<<"is not a digit\n";
            break;
    }
}
```

# iterations

## while-statements

### numbers

```cpp
int main()
{
    int i = 0;
    while (i< 100>)
    {
        cout << i << '\t' << square(i)<<'\n';
        ++i;
    }
}
```

### characters

```cpp
int main()
{
    char letter = 'a';
    while (letter != z)
    {
        cout<<letter<<" + 1 == ";
        letter += 1;
        cout<<letter<<'\n';
    }
}
```

# for statements

```cpp
int main()
{
    //for( init_statement_condition; expression) statement
    for(int i = 0; i < 100; i+= 2)
        cout<<i<<'\n';
    //for (declaration : expression) statement
    vector<int> v = {1, 2, 3, 4, 5};
    for (int x : v)
        cout<< x <<'\n';
}
```
