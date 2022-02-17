#include<windows.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    char inp,y;
    string name,key,sub,father;
int age,bro;


    cout<<"\t\t\t\t\twelcome to chatBOx"<<endl;
    cout<<"to conitue the program type 'Y' and to end type 'E'\n";
    cin>>inp;
// condition
if(inp=='Y'||inp=='y'){
    cout<<"\t\t\t\t****welcome****"<<endl;

}
else{
    cout<<"\nThanks You"<<endl;
    return 0;
}
system("cls");
if(key!="bye"){
    cout<<"\thello there\n"<<endl;
    cin>>key;
    cout<<"**What is your name**\n"<<endl;
    cin>>name;
    cout<<"\t**what is your age**\n"<<name<<endl;
    cin>>age;
     

    switch(age){
        case 1:
        cout<<"you are baby\n"<<endl;
        break;
        case 3:
        cout<<"you are in class Play\n"<<endl;
        break;
        case 4:
        cout<<"you are in class LKG"<<endl;
        break;
        case 5:
        cout<<"you are in class UKG\n"<<endl;
        break;
        case 6:
        cout<<"you are in class 2th\"<<endl";
        break;
        
         
        case 40:
        cout<<"you are in class 5th\n"<<endl;
        break;
        case 45:
        cout<<"you are old keep living"<<endl;
        break;
        case 18:
        cout<<"you are young and COllage Student\n"<<endl;
        break;
        case 30:
        cout<<"you are man and Married\n"<<endl;
        break;
        case 10:
        cout<<"you are childern AND in class 6th \n"<<endl;
        break;
        case 11:
        cout<<"you are in class 7th"<<endl;
        break;
        case 12:
        cout<<"you are in class 8th \n"<<endl;
        break;
        case 13:
        cout<<"you are in class 9th\n "<<endl;
        break;
        case 14:
        cout<<"you are in class 10th\n"<<endl;
        break;
        case 15:
        cout<<"you are intermediate student\n"<<endl;
        break;
        case 16:
        cout<<"you are intermedinte studnet\n"<<endl;
        break;
        default :
        cout<<"nothing to say about you\n"<<endl;
        break;
    }
    cout<<"please give me answer\n"<<endl;
    cout<<"what is your favourinte subject:\n"<<endl;
    cin>>sub;
    cout<<"what is your father name:\n"<<" "<<name<<endl;
    cin>>father;
    cout<<"your father is name "<<" "<<father <<" "<<" and he is worker"<<endl;
    cout<<"how man borhter you have:\n"<<endl;
    cin>>bro;
    cout<<"you are total"<< " "<<bro+1<<" "<<"brother"<<endl;

    cout<<"\t*******Bye Bye********** \n"<<name ;
    cin>>key;
}
cout<<"program end here boy"<<endl;
    return 0;
}