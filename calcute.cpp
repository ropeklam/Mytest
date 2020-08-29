#include<iostream>
#include<math.h>
//#include<conio.h>
using namespace std;

int main(){

while(1){

float x;
float a , b , c ;
float x1 , x2 ;
float x3 ;
float delta ;

cout<<"1_ moadele daraje 2"<< '\n'<< "2_basic calculator" << "\n" << "3_matrix" <<endl;
cin>>x;



    if(x==1){


        cout<< "bara hale moadele daraje 2 vared kn" << endl ;
        cin>>a;
        cin>>b;
        cin>>c;
        delta = (b*b) - ((4)*(a*c));

        if(delta>0){

            x1 = ((-b)+ sqrt(delta)) / (2*a);
            x2 = ((-b)- sqrt(delta)) / (2*a);

            cout<< "answer:" <<'\t' << x1 <<'\t'<< "and"<<'\t' << x2 << endl; }


        if(delta==0){

            x3 = ((-b)/(2*a));

            cout<< "answer:"<<'\t' << x3 <<endl;}


        if(delta<0){

            cout<< "error" << endl;}


    }


    if(x==2){

        int h , h1 , h3 , h2 , h4;
        int num1 , num2;
        //float jam , tafrigh , zarb , taghsim ;
        cout<< "1_jam" << '\n' << "2_tafrigh" << '\n' << "3_zarb" << '\n' << "4_taghsim" << endl;
        cin>>h1;

        if(h1==1){

            cout<<"enter num1"<< '\n' << "enter num2" << endl;
            cin>>num1>>num2;
            h=num1 + num2 ;
            cout<<"answer="<< '\t' <<h<<endl;}

        if(h1==2){
            cout<<"enter num1"<< '\n' << "enter num2" << endl;
            cin>>num1>>num2;
            h2=num1 - num2;
            cout<<"answer="<< '\t' <<h2<<endl;}

        if(h1==3){
            cout<<"enter num1"<< '\n' << "enter num2" << endl;
            cin>>num1>>num2;
            h3=num1 * num2;
            cout<<"answer="<< '\t' <<h3<<endl;}

        if(h1==4){
            cout<<"enter num1"<< '\n' << "enter num2" << endl;
            cin>>num1>>num2;
            h4=num1 / num2;
            cout<<"answer="<< '\t' <<h4<<endl;}

    }
    
    if(x==3)
    {

    }

cout<< "---------------------------------"<<endl;

    }

    }





