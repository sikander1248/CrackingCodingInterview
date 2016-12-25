#include <iostream>
#include <set>
#include <cstring>
using namespace std;

bool isUnique_1(char arr[])
{
    int len = strlen(arr);
    for(int i = 0 ; i < len ; i++)
    {
        char key = arr[i];
        for(int j = i + 1 ; j < len ; j++)
            if(key == arr[j])
            {
                return false;
            }
    }
    return true;
}
bool isUnique_2(char arr[])
{
    bool frequencyArray[127] = {false};
    int len = strlen(arr);
    for(int i = 0 ; i < len ; i++)
    {
        if(frequencyArray[arr[i]] == 0)
        {
            frequencyArray[arr[i]] = 1;
        }
        else
            return false;
    }
    return true;
}

bool isUnique_3(char arr[])
{
    set<char>    s;
    int len = strlen(arr);
    for(int i = 0 ; i < len ; i++)
        s.insert(arr[i]);
    if(s.size() == len)
        return true;
    return false;
}
int main()
{
	char str[200];
	cout <<"Enter the input String : ";
	cin >> str;

	bool res = isUnique_1(str);
	if(res == true)
        cout <<"All elements are unique";
    else
        cout <<"Duplicates found ";
}
