#include<iostream>
using namespace std;
class hotel{
    private:
    int Rno;
    string name;
    int tarrif;
    int nod;
    float Amount;
    float calc(){
        float A;
        if(tarrif*nod>10000){
            A=1.05*(tarrif*nod);
        }
        else{
            A=(tarrif*nod);
        }
        return A;
    }
    
    public:
    void checkIn(int R,string n,int t,int b){
        Rno=R;
        name=n;
        tarrif=t;
        nod=b;
        Amount=calc();

    }
    
    void checkout(){
        
        cout<<Rno<<endl;
        cout<<name<<endl;
        cout<<tarrif<<endl;
        cout<<nod<<endl;
        cout<<Amount;
    }
};

int main(){
    int n;
    string s;
    int t;
    int a;
    cout<<"enter room no.";
    cin>>n;
    cout<<"enter name";
    cin>>s;
    cout<<"enter per day charge";
    cin>>t;
    cout<<"enter no of days";
    cin>>a;
    hotel h;
    h.checkIn(n,s,t,a);
    h.checkout();
}