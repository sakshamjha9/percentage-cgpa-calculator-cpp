#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int n;
    int i;
    cout << "===========================\n";
    cout << " Percentage and CGPA Calculator\n";
    cout << "===========================\n\n";

cout<< "ENTER NUMBER OF SUBJECTS"<<endl;
cin>>n;

float marks[100];
int credits [100];
int gradepoint[100];

float totalmarks= 0;
float totalcredits=0;
float gp=0;

float percentage;
float cgpa;

for (i=0 ; i<n ; i++) {
    cout<<"ENTER DETAILS FOR SUBJECT"<< i+1 <<endl;
    cout<<"enter marks"<<endl;
    cin>>marks[i];
    cout<<"enter credits"<<endl;
    cin>>credits[i];
    if (marks[i]>=90)
        gradepoint[i]=10;
   else if (marks[i]>=75)
        gradepoint[i]=9;
   else if (marks[i]>=65)
        gradepoint[i]=8; 
   else if (marks[i]>=55)
        gradepoint[i]=7;
   else if (marks[i]>=50)
        gradepoint[i]=6;
   else if (marks[i]>=45)
        gradepoint[i]=5;
    else if (marks[i]>=40)
        gradepoint[i]=4;
    else gradepoint[i]=0;
    
    totalmarks = totalmarks+marks[i];
    totalcredits= totalcredits+credits[i];
    gp = gp + gradepoint[i]*credits[i];
}

percentage = totalmarks/n;
cgpa= gp/totalcredits;

cout<<"============================\n";
cout<<"                STUDENT RESULT            \n ";
cout<<"============================\n\n";

cout << fixed << setprecision(2);

cout << "Your Percentage is " << percentage << "%" << endl;
cout << "Your CGPA is " << cgpa << endl;

cout << "GP Sum = " << gp << endl;
cout << "Total Credits = " << totalcredits << endl;

if (cgpa>9){
    cout<< " EXCELLENT !! YOU DID A GREAT JOB"<<endl;}
else if (cgpa>7){
    cout<<" VERY GOOD , YOU CAN DO BETTER"<<endl; }
else {
    cout<<" BETTER LUCK NEXT TIME !"<< endl;
}
    
    

return 0;
}
      
    

