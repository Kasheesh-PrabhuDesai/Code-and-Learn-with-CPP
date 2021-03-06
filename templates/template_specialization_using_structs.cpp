#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

template <>
struct Traits<Fruit>
{
    static string name(int ind)
    {
        if(ind==0)
            return "apple";
        else if(ind==1)
            return "orange";
        else if(ind==2)
            return "pear";
        else 
            return "unknown";
        
    }  
};

template <>
struct Traits<Color>
{
    static string name(int ind)
    {
        if(ind==0)
            return "red";
        else if(ind==1)
            return "green";
        else if(ind==2)
            return "orange";
        else 
            return "unknown";
        
    }  
};


int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
