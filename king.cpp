# include<iostream>

using namespace std;

int main(){
cout<<"ENTER BIRTHADAY PERSONE NAME :"<<endl;
string a ;
getline(cin,a );
cout<<"HOW MANY TIME YOU WANT TO BIRTHADAY WISH:"<<endl;
int n ;
cin>>n;
for(int i=0; i<=n ; i++)
{
    cout<<"HAPPY BIRTHADAY TO "<<a<<endl;
    cout<<"HAPPY          ...       HAPPY\n";
    cout<<"BIRTHADAY      |||       BIRTHADAY\n";
    cout<<"DAY         {======}     DAY\n";    
    cout<<"          {==========}   \n";
    cout<<"       {================}\n";

}




    return 0;
}