#include<iostream>
#include<fstream>
using namespace std;
int main(){

    string name,password,command,username,pass;
    cout<<"*****enter 1 for admin login*****"<<endl;
    cout<<"*****enter 2 for student registration*****"<<endl;
    cout<<"*****enter 3 for student login*****"<<endl;

   while(1){
        there:
        cout<<"enter command";
        getline(cin,command);

      if(command=="1"){
            cout<<"******ADMIN LOGIN*****"<<endl;
        cout<<"username";
        cin>>name;
        cout<<"password";
        cin>>password;
        if(name=="admin" && password=="12345"){
            cout<<"login successfully"<<endl;

        }
        cout<<"incorrect username and password"<<endl;
        terminate();
      }
      if(command=="2"){
        ofstream r("registration.txt");
        cout<<"name";
        getline(cin,name);
        cout<<"password";
        getline(cin,password);
        r<<name;
        r<<password;
        r.close();
        cout<<"*****STDUENT REGISTERED SUCCESSFULLY******";
        goto there;
      }

      if(command=="3"){
        fstream f("registartion.txt");
        getline(f,name);
        getline(f,password);
        f.close();

        cout<<"enter username";
        getline(cin,username);
        cout<<"password";
        getline(cin,pass);

        if(username==name && pass==password){
            cout<<"login successfully";

        }
        cout<<"incorrect password"<<endl;
        break;
      }


   }
}
