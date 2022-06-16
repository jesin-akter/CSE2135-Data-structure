#include <bits/stdc++.h>
#include <list>
using namespace std;
void display(list<int> &first){
list<int> ::iterator i;
for(i=first.begin(); i!=first.end(); i++ )
cout<<*i<<"  ";

}
int main()
{
    list<int> element;
    element.push_back(8);
    element.push_back(10);
    element.push_back(12);
    element.push_back(15);
    element.push_back(20);
    element.push_back(30);
    element.push_back(32);
    element.push_back(35);
    element.remove(42);
    element.pop_front();
    element.pop_back();

    display (element);
    
    
}