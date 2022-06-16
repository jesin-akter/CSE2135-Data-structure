#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size,i;
    int a[100];
int large=0, secondLarge=0;
cout<<"Enter the number of element in array: ";
cin>>size;
for(i=0; i<size; i++){
    cout<<"Enter the array element"<<i+1<<": ";
cin>>a[i];
if(large<a[i]){
secondLarge=large;
large=a[i];
}
else if(secondLarge<a[i]){
secondLarge=a[i];
}
}
cout<<"\n";
cout<<""<<large<<" is a largest number\n";
cout<<secondLarge<<" is a second largest number";


}
