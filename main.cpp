
#include<iostream>
#include<map>
#include<list>
#include<array>
#include<string> 
#include<fstream>


using namespace std;
const int NUM_COUNT = 10;

void populate(map<string, list<string>[3]>&); 
void display(map<string, list<string>[3]>);

    int main() 
    {
        map<string, list<string>[3]> countryData;  

    populate(countryData);    
    cout<<endl; 
    display(countryData); 
       


    //open the file and include an error message if it fails to open


    //run a simulation 25 times and go through every country 
        // call the function we declared earlier
       
        //test loop to iterate thorough the small map we have and call the function for every value in the 
        // map 
        //in the fucntion we run the probability of what new item they either import, exported, or sold 
        // domestically
        // the item is chosen at random and addded to the appropriate list 

    // return 0 to end the main function
    return 0; 
    }

// the function is written out here

    // use a for loop to run through the suimulation 25 times
        //use srand time to keep getting a new int 
        //set up probability of an event happening, based on that determine whether a new import 
        // export or domestic product has been added
        // set up a rare case where all exports cease for a certain country due to 
        //shortages and the list of exports get 
        // added to the domestic products sold only 
    // dummy parameters go into teh function to make sure the functin call works
void populate(map<string, list<string>[3]>& countdt)
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
                getline(input2, product);
                countdt[e.first][j].push_back(product);    
            }

       }
        input2.close(); 
}
void display(map<string, list<string>[3]> cdmap)
{
    for(auto e : cdmap)
    {
        cout<<e.first<<endl; 
        
        cout<<"\tImports:"<<endl;
        for(string import : e.second[0])
        {
            cout<<"\t\t"<<import<<" "; 
        }
        cout<<endl; 

        cout<<"\tExports:"<<endl;
        for(string exp : e.second[1])
        {
            cout<<"\t\t"<<exp<<" "; 
        }
        cout<<endl;
        
        cout<<"\tDomestic Products:"<<endl; 
        for(string dom : e.second[2])
        {
            cout<<"\t\t"<<dom<<" "; 
        }
        cout<<endl; 
    }
}