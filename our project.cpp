#include <iostream>
#include <fstream>	
#include <string.h>
using namespace std;
void delete_air_emp(){

	fstream air;
	fstream air2;
	
	 air.open("air_emp.txt",ios::in);
	 air2.open("air2.txt",ios::out);
	
	char name[25];	
	char age[25];
	char id[25];
	char phone[25];
	char salary[25];
	char s[25];
	cin.ignore();
	cout<<"\n enter the name to delete the record\n";
	cin.getline(s,25);	
	
    while(!air.eof()){
	air.getline(name,25,'|');
	air.getline(age,25,'|');
	air.getline(id,25,'|');
	air.getline(phone,25,'|');
	air.getline(salary,25);
    if(strcmp(name,s)==0){
		continue;
		} 
     else{
	air2 <<name<<'|'<<age<<'|'<<id<<'|'<<phone<<'|'<<salary<<'\n';
}
    
			}		
	air.close();
    air2.close();
    
	  air.open("air_emp.txt",ios::out);
	  air2.open("air2.txt",ios::in);

    while(!air2.eof()){
	air2.getline(name,25,'|');
	air2.getline(age,25,'|');
	air2.getline(id,25,'|');
	air2.getline(phone,25,'|');
	air2.getline(salary,25);
		air <<name<<'|'<<age<<'|'<<id<<'|'<<phone<<'|'<<salary<<'\n';
		}	
		
	    air2.close();
		air.close();	
		
    	remove ("air2.txt");
	   	cout <<"\n\tdone !!!!!!!\n\n";
}	  
void update_air_emp(){
	fstream air;
	fstream air2;
	
	 air.open("air_emp.txt",ios::in);
	 air2.open("air2.txt",ios::out);
	
	char name[25];	
	char age[25];
	char id[25];
	char phone[25];
	char salary[25];
	char s[25];
	cin.ignore();
	cout<<"\n enter the name to update the record\n";
	cin.getline(s,25);	
	
    while(!air.eof()){
	air.getline(name,25,'|');
	air.getline(age,25,'|');
	air.getline(id,25,'|');
	air.getline(phone,25,'|');
	air.getline(salary,25);
    if(strcmp(name,s)==0){
		
    	cout<<"\n\tenter the new values...\n";
        cout<<"\nname:";
	    cin.getline(name,25);
	    cout<<"\nage:";		
	    cin.getline(age,25);
	    cout<<"\nid:";
	    cin.getline(id,25);
	    cout<<"\nphone:";
	    cin.getline(phone,25);
	    cout<<"\nsalary:";
	    cin.getline(salary,25);
	air2 <<name<<'|'<<age<<'|'<<id<<'|'<<phone<<'|'<<salary<<'\n';	
} 
     else{
	air2 <<name<<'|'<<age<<'|'<<id<<'|'<<phone<<'|'<<salary<<'\n';
}				
	}
	air.close();
    air2.close();
    
	  air.open("air_emp.txt",ios::out);
	  air2.open("air2.txt",ios::in);

    while(!air2.eof()){
	air2.getline(name,25,'|');
	air2.getline(age,25,'|');
	air2.getline(id,25,'|');
	air2.getline(phone,25,'|');
	air2.getline(salary,25);
		air <<name<<'|'<<age<<'|'<<id<<'|'<<phone<<'|'<<salary<<'\n';
		}	
		
	    air2.close();
		air.close();	
		
    	remove ("air2.txt");
	   	cout <<"\n\tdone !\n\n";
	   }
void display_all(){

	char name[25];
	char age[25];
	char id[25];
	char phone[25];
    char salary[25]; 
    fstream air;
	air.open("air_emp.txt",ios::in);
    cout<<"\n name\t age\t id\t phone\t salary";
    
    
    while (!air.eof()){
	
     air.getline(name,25,'|');
	 air.getline(age,25,'|');
	 air.getline(id,25,'|');
	 air.getline(phone,25,'|');
	 air.getline(salary,25);
	 	cout<<  "\n"<<name << "\t"<<age <<"\t"<<id<<"\t"<<phone<<"\t"<<salary<<endl;
	 
}	
air.close();	
}
void search_air_emp(){
	fstream air;
	air.open("air_emp.txt",ios::in);
	char name[25];
	char age[25];
	char id[25];
	char phone[25];
    char salary[25]; 
    char a[25];
    cout <<"\n enter the name to search about it:";
    cin.ignore();
    cin.getline (a,25);
    int x=0;
    while (!air.eof()){
	 cout<<"\n\t name\t age\t id\t phone\t salary";
    air.getline(name,25,'|');
    air.getline(age,25,'|');
	air.getline(id,25,'|');
	air.getline(phone,25,'|');
	air.getline(salary,25);
	 if(strcmp(name,a)==0){
	 	cout<<  "\n\t"<<name << "\t"<<age <<"\t"<<id<<"\t"<<phone<<"\t"<<salary<<endl;
	 	x=1;	
	break;
}
}
	if(x==0){
		cout<<"\n\t not found!!\n";
air.close();
}	}
void insert_air_emp(){
	fstream air;
	air.open("air_emp.txt",ios::app);
	char name[25];
	char age[25];
	char id[25];
	char phone[25];
	char salary[25];
	
	cin.ignore();
	cout<<"\nname:";
	cin.getline(name,25);
	cout<<"\nage:";		
	cin.getline(age,25);
	cout<<"\nid:";
	cin.getline(id,25);
	cout<<"\nphone:";
	cin.getline(phone,25);
	cout<<"\nsalary:";
	cin.getline(salary,25);
	air <<name<<'|'<<age<<'|'<<id<<'|'<<phone<<'|'<<salary<<'\n';
	cout <<"\n\t\tdone !!!\n\n";
    air.close();
}
int main(){
       bool flag= true;
       while (flag){
     	cout << "insert:1 \nsearch:2 \ndisplay:3 \nupdate:4 \ndelete:5 \nenter your number";
     	int c;
	    cin>>c;
	switch(c){
		case 1:
			insert_air_emp();
			break;
		case 2:
			search_air_emp();
			break;
		case 3:
			display_all();
			break;
		case 4:
			update_air_emp();
			break;
		case 5:
		   delete_air_emp	();
			break;
	       default:		
		   cout<<"\n choose your number \n";
		  
	       cout <<"to continue to use program enter 'yes'" ;		
          char f;
          cin>>f;
          if(f!='y') {
	      flag=false;
} 
       	return 0;
}} 	
}
