/*
* 4 3
* <tag1 value = "helloworld">
* <tag2 name = "andro">
* </tag2>
* </tag1>
* tag1.tag2~name
* andro
* tag1~name
* Not Found!
* tag1~value
* helloworld
*/
#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    int n, q;
    string curr = "", attr_name;
    map<string, string> m;
    cin >> n >> q;
    cin.ignore();

    // For every word in the HRML Line (space delimiter), check:
    for (int i = 0; i < n; i++)
    {
        string line, tag, extract;
        getline(cin, line);
        stringstream ss(line);

        // Process the HRML lines
        while (getline(ss, extract, ' '))
        {
            // * If it's a tag
            if (extract[0] == '<')
            {
                // * If it's an opening tag
                if (extract[1] != '/')
                {
                    // Remove the opening bracket
                    tag = extract.substr(1);
                    // For tags without attributes
                    // to avoid getting the whole "<tag>"
                    if (tag[tag.length() - 1] == '>')
                    {
                        // if true, remove the closing bracket
                        tag.pop_back();
                    }
                    // Check if any nesting is needed
                    if (curr.size() > 0)
                    {
                        // if we encounter another tag
                        // Nest this tag
                        curr += "." + tag; // tag1 + . + tag2
                        /*
                        * first iteration: curr = "tag1"
                        * second iteration: curr = "tag1.tag2"
                        * hence will match the query "tag1.tag2"
                        */
                    }
                    // if you have tag1.tag2
                    else
                    {
                        curr = tag; // tag1 lang makukuha
                    }
                    // TODO checking cout<<"Curr: "<< curr<<endl;
                }
                // * If it's a closing tag
                else
                {
                    // 2 is the "/" ins substr
                    // then extract until the end and remove the ">"
                    tag = extract.substr(2, (extract.find('>') - 2));
                    // Check if a nested tag has to be closed
                    /* 
                    * if curr == "tag1.tag2" and we are in "tag2"
                    * we want to check if we can find ".tag2"
                    * if we can, removed that
                    */
                    // will give position of ".tag2"
                    size_t pos = curr.find("." + tag);

                    if (pos != string::npos)
                    {
                        // Remove the nested tag
                        curr = curr.substr(0, pos);
                    }
                    else
                    // if we can't find ".tag2" we clear the var curr
                    {
                        // All tags are closed
                        curr = "";
                    }
                }
            }

            // * If's an attribute's value
            else if (extract[0] == '"') // the " is the double quotes in tag1 = "value"
            {
                // Capture the full value
                size_t pos = extract.find_last_of('"');
                string attr_value = extract.substr(1, pos - 1);
                // TODO check cout<<"Attr value: "<<attr_value<<endl;
                // Add to the map
                m[attr_name] = attr_value;
                // attr_name = does not begin with "<" or  ""
            }
            // * If it is not an '='
            else
            {
                if (extract != "=")
                {
                    // It's definitely an attribute name
                    attr_name = curr + "~" + extract;
                }
            }
        }
    }

    // Get the values with the queries
    string query;
    for (int i = 0; i < q; i++)
    {
        getline(cin, query);

        // Search in the map
        map<string, string>::iterator itr = m.find(query);
        if (itr != m.end())
        {
            cout << itr->second << endl;
        }
        else
        {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
