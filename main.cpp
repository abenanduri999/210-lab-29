// include all the headers to be used, map, list, array, iostream, fstream 
#include<iostream>
#include<map>
#include<list>
#include<array>
#include<string> 

using namespace std;
//include the other as well

// function declration to be called when handling time based events of what is being imported, 
// exported and what is being produced and sold domestically
//void change(int); 

//main function begins here
    // declare a map with a country as the key and the values are an array of 3 lists, imports, exports and 
    // domestically sold products
    int main() 
    {

        //basic map
        // initilize by not readin file but by placing our own values
        map <string, int>Map;  
        Map["Peru"] = 15;
        Map["Mexico"] = 10; 


    //open the file and include an error message if it fails to open

    //read country names and some list of items that are traded into the map, and the items into the lists

    // close the file

    //Im using a second file of items, that are not included in the original file 
    //open the file and copy the elements into an array

    //run a simulation 25 times and go through every country 
        // call the function we declared earlier
        for(auto e : Map)
        {
            int val = e.second; 
            change(val); 
        }
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
void change(int a)
{
    cout<<endl; 
    cout<<a<<endl; 
}