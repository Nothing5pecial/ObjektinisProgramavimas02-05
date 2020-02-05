#include <iostream>

using namespace std;

int main()
{
    string vardas;
    cin>>vardas;
 int cnt = 14;
 for(int i=0; vardas[i]; i++)
 	cnt++;
 	string line1;
 	string line2;
 	string line3;
 	string line4;
 	string line5;
 	for(int i=0;i<cnt;i++)
        line1+="*";
    line5=line1;
    for(int i=0;i<cnt;i++)
        {
            if(i==0||i==cnt-1)
                {
                    line2+="*";
                    line4+="*";
                }
            else
            {
                line2+=" ";
                line4+=" ";
            }
        }
    line3="* Sveikas, "+vardas+"! *";
    cout<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5;
    return 0;
}
