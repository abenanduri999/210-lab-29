// include all the headers to be used, map, list, array, iostream, fstream 
#include<iostream>
#include<map>
#include<list>
#include<array>
#include<string> 
#include<fstream>


using namespace std;
const int NUM_COUNT = 10;

    int main() 
    {

        
        // initilize by not readin file but by placing our own values
        map<string, list<string>[3]> countryData;  
        ifstream input1("countries.txt"); 
        ifstream input2("products1.txt");
        string country; 
        string product; 

     
        for(int i = 0; i < 3; i++)
        {
            while(getline(input1, country))
            {
                countryData[country]; 
            }
        }
        

       for(auto e : countryData)
       {
           
           for(int j = 0; j < 3; j++)
             { 
                getline(input2, product);
                countryData[e.first][j].push_back(product);    
            }

       }

    cout<<endl; 
    for(auto e : countryData)
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
       


    //open the file and include an error message if it fails to open

    //read country names and some list of items that are traded into the map, and the items into the lists

    // close the file

    //Im using a second file of items, that are not included in the original file 
    //open the file and copy the elements into an array

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
