#include <iostream>
using namespace std;
void reverse(char NAME[],int n)
{
    int s=0;
    int e=n-1;
    while(e>s)
    {
        swap(NAME[s++],NAME[e--]);

    }
}
int getlength(char NAME[])
{
    int count=0;
    for(int i=0;NAME[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    int n=20;
    char NAME[20];// this will create confusion as it's not the length of the word
    cout << "name: ";
    cin >> NAME; 
    cout << NAME<< endl;
    int k= getlength(NAME);// use this length to get accurate results
   cout << "length is: " << getlength(NAME)<< endl;
    reverse(NAME,k);
     cout << NAME<< endl;
   return 0;
}