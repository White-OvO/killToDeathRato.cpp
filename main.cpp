#include <iostream> 
#include <fstream> 


using namespace std; 

int main () { 
    ofstream oFile; 
    ifstream iFile; 

    // assignment lab 5 

    /* 
    instructions 
    Get the input file name and open it into an input file variable.
     The file will need to be validated that it is opened,
      and an error message "Error: Invalid filename\n" will need to be output if an invalid file name is entered. The program should loop until the input file successfully opens.
     */
/* 

step 1 

Get a valid selection from the options listed above from the user.
 If an invalid option is entered (input failure or invalid selection)
output the error "Error: invalid selection\n" until a valid option is chosen.

*/
        int fileName; 
        string killFile ;
        string deathFile;


         cout <<"K/D File 1/2/3? ";
        cin >> fileName; 
 while (cin.fail() || fileName != 0 && fileName != 1 ){
            cout << "Error: invalid selection\n";
            cin.ignore(10000,'\n');
            cin.clear();
            cin >> fileName;
        }


/* 
step 2 
Once a valid option is chosen open the respective kill and
 death count files to input file variables.
*/
while (true) { 
       
        if (fileName == 1){
            killFile = "kill1.txt";
            deathFile = "death1.txt"; 
            // while(file >> killFile) { 
            //     cout << killFile << endl; 
            // }
        }
        else if (fileName == 2) { 
            killFile = "kill2.txt"; 
            deathFile = "death2.txt";
        } else { 
            killFile = "kill3.txt"; 
            deathFile = "death3.txt"; 
        } 

        // open the file 
      //  ofstream ofile; 
        ifstream killFiles(killFile); //read from the file killFile (variable) 
        ifstream deathFile(deathFile); // read from the file deathFile (variable ) 

        return 0; 
     }


     /*
     
     while (true) {
        cout << "Enter input filename: ";
        cin >> inputFileName;
        iFile.open(inputFileName);  // try to open the file
        if (iFile.is_open()) {
            break;  // success! exit the loop
        } else {
            cout << "Character Break File\n";  // file didn't open
        }
    }
        
    */

     
    return 0; 
}
