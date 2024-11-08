
#include<iostream>
#include<map>
#include<list>
#include<array>
#include<string> 
#include<fstream>
#include<vector> 


using namespace std;
const int NUM_COUNT = 5;
const int T_COUNT = 3; 

void populate(map<string, list<string>[T_COUNT]>&); 
void display(map<string, list<string>[T_COUNT]>);\
void trade(map<string, list<string>[T_COUNT]>&);

    int main() 
    {
        map<string, list<string>[T_COUNT]> countryData;  

    populate(countryData);    
    cout<<endl; 
    display(countryData); 
    cout<<endl; 
    trade(countryData); 
        
    return 0; 
    }

void populate(map<string, list<string>[T_COUNT]>& countdt)
{
     ifstream input1("countries.txt"); 
        ifstream input2("products1.txt");
        string country; 
        string product; 

     
        for(int i = 0; i < 3; i++)
        {
            while(getline(input1, country))
            {
                countdt[country]; 
            }
        }
        input1.close(); 

       for(auto e : countdt)
       {
           
           for(int j = 0; j < 3; j++)
             { 
                for(int k = 0; k < NUM_COUNT; k++)
                {
                getline(input2, product);
                countdt[e.first][j].push_back(product);   
                } 
            }

       }
        input2.close(); 
}
void display(map<string, list<string>[T_COUNT]> cdmap)
{
    for(auto e : cdmap)
    {
        cout<<e.first<<endl; 
        
        cout<<"\tImports:"<<endl;
        cout<<"\t"; 
        for(string import : e.second[0])
        {
            cout<<import<<"   "; 
        }
        cout<<endl; 

        cout<<"\tExports:"<<endl;
        cout<<"\t"; 
        for(string exp : e.second[1])
        {
            cout<<exp<<"   "; 
        }
        cout<<endl;
        
        cout<<"\tDomestic Products:"<<endl;
        cout<<"\t";  
        for(string dom : e.second[2])
        {
            cout<<dom<<"   "; 
        }
        cout<<endl; 
    }
}

void trade(map<string, list<string>[T_COUNT]>& counttrad)
{
    vector<string>newprod; 

    fstream input3("products3.txt");
    string newp; 
    while(input3>>newp)
    {
        newprod.push_back(newp); 
    }

    srand(time(0)); 

    for (auto e : counttrad) 
    {
       int prob = rand() % 100 + 1;
        if (prob <= 20)
        {
            e.second[0].pop_back(); 

        } 
        prob = rand() % 100 + 1;
        if (prob <= 30)
        {
            e.second[1].pop_back(); 

        } 
        prob = rand() % 100 + 1;
        if (prob <= 40)
        {
            e.second[2].pop_back();
        } 
        prob = rand() % 100 + 1;
        if(prob <= 50)
        {
            int newp = rand() % newprod.size() + 1; 
            e.second[0].push_back(newprod[newp]); 
        }
        
  
        display(counttrad); 
    }
    
}