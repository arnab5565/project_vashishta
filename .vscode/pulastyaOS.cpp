#include <iostream>
#include <math.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

class Clasify
{
private:
    /* data */
public:

void print_str(){
    cout << "follow these steps please" << endl;
                cout << "=====================================================" << endl;
                cout << "1)See the info" << endl;
                cout << "2)Watch its architecture" << endl;
                cout << "3)Go to a kernel Mode"   << endl;
                cout << "4)See the drive" << endl;
                cout << "5)See systeminfo" << endl;
                cout << "6)Description" << endl;
                cout << "7)Check the IP Address" << endl;
                cout << "8)Network Proxy" << endl;
                cout << "9)Wath the system status" << endl;
                cout << "10)Boot up the Disk" << endl;
                cout << "11)shutdown the System" << endl;
                cout << "12)Delete the system" << endl;
                cout << "13)Wtach the system SSL settings" << endl;
                cout << "14)Change the background" << endl;
                cout << "-----------------------------------------------------" << endl;
                cout << "Write the option number you wanna see in action" << endl;
                cout << "_____________________________________________________" << endl;
}






void call(int a){
    switch(a){
        case 1:

        cout << "This is a simple a operating system using (C++) + python + Machine language(1&0) " << endl;
        cout << "and the most useful one the ASSEMBLY LANGUAGE of 8086 architecture" << endl;

        cout << "This is a specialised OS for your benefit" << endl;

        //need for the list 1 method
        break;

        case 2:
        char ar;

        while(ar!='n'){

        cout << "The architecture of this OS is very simple it follows a few rules " << endl; 
        cout << "some new parts of your hardware here is how it works ^___^" << endl;

        cout << "__________________________" << endl;
        cout << "|      (C++) + python     |" << endl;
        cout << "|           |             |" << endl;
        cout << "|           V             |" << endl;
        cout << "|    Machine Language     |------------------" << endl;
        cout << "|           |             |---------------  |" << endl;
        cout << "|           V             |              |  |" << endl;
        cout << "|         Magic           |              VVVV" << endl;
        cout << "|_________________________|               VV" << endl;
        cout << "                                          ||" << endl;
        cout << "________________________________________________" << endl;
        cout << "|    ______________                __________  |" << endl;
        cout << "|   |              |  ______      |          | |" << endl;
        cout << "|   |   INTEL X64  | |      |     |   ROM    | |" << endl;
        cout << "|   |              |_| RAM  |_____|          | |" << endl;
        cout << "|   |              | |______|     |          | |" << endl;
        cout << "|   |______________|              |__________| |" << endl;
        cout << "| ________|_|_________________________________ |" << endl;
        cout << "||                                           | |" << endl;
        cout << "||      YOUR MONITOR SCREEN                  | |" << endl;
        cout << "||___________________________________________| |" << endl;
        cout << "|______________________________________________|" << endl;

        cout << "hope you like it" << endl;
        cout << "Wanna return to main menu [y/n]  " ;
        cin >> ar;

        if(ar=='y'){



        }
        }


        break;

        case 3:

        //need to be managed
        cout << "going to the kernel mode right now............ " << endl;
        char command;

        
        case 4:

        cout  << "========================TOTAL MEMORY========================" << endl;
        cout  << "Local disk c" << endl;
        cout << "________________________" << endl;
        cout << "##############          " << endl;
        cout << "                        " << endl;
        cout << "                        " << endl;
        cout << "DISK A " << endl;
        cout << "________________________" << endl;
        cout << "#############           " << endl;


        break;


        break;

        default:
        //need for a deafult one
        break;
    }

}

void pritn_pulastya(){
    cout << "=================THIS IS PULASTYA============================" << endl;
    cout << "                                                             " << endl;
    cout << "                                                             " << endl;

    cout << " ____________________________________________________________" << endl;
    cout << "|                  ________________                          |" << endl;
    cout << "|                 | pulastyaOS     |                         |" << endl;
    cout << "|                 |________________|                         |" << endl;
    cout << "|____________________________________________________________|" << endl;
    cout << "                                                              " << endl;
    cout << "                                                              " << endl;

    cout << "======================THIS IS PULASTYA========================" << endl;
}
    

};

int main(){

    Clasify obj;

    char a;

    cout << "=================================================================================="<< endl;
        cout << "===============PULASTYA OPERATING SYSTEM CREATED BY ARNAB MAITI==================="<< endl;
        cout << "=================================================================================="<< endl;      
        cout <<"==================__________________________________________________==============="<< endl;
        cout <<"==================FULL MACHINE LANGUAGE CODED ALONG WITH PYTHON + C ==============="<< endl;
        cout << "=================              WELCOME TO PULASTYA                 ===============" << endl;
        cout <<"==================__________________________________________________==============="<< endl;
       

       cout << "  " << endl;
       cout << "  " << endl;
      cout << "  " << endl;
       cout << "  " << endl;

       obj.pritn_pulastya();


        while (a!='n')
        {
             
        cout << "wanna continue y/n" << endl;
        

        cin >> a ;
        if (a=='y'||a=='Y')
        {
            
            
                /**cout << "follow these steps please" << endl;
                cout << "=====================================================" << endl;
                cout << "1)See the info" << endl;
                cout << "2)Watch its architecture" << endl;
                cout << "3)Go to a kernel Mode"   << endl;
                cout << "4)See the drive" << endl;
                cout << "5)See systeminfo" << endl;
                cout << "6)Description" << endl;
                cout << "7)Check the IP Address" << endl;
                cout << "8)Network Proxy" << endl;
                cout << "9)Wath the system status" << endl;
                cout << "10)Boot up the Disk" << endl;
                cout << "11)shutdown the System" << endl;
                cout << "12)Delete the system" << endl;
                cout << "13)Wtach the system SSL settings" << endl;
                cout << "14)Change the background" << endl;
                cout << "-----------------------------------------------------" << endl;
                cout << "Write the option number you wanna see in action" << endl;
                cout << "_____________________________________________________" << endl;*/

                obj.print_str();

                //sched_yield
                
                int integer;
                cin >> integer;
                switch (integer)
                {
                case 1:
                    obj.call(1);

                   


                    break;

                case 2:

                obj.call(2);
                //this is the 2nd

                break;

                case 3:

                obj.call(3);
                break;

                case 4:
                obj.call(4);


                break;

                default:

                cout << "the menu dose not belongs to this list........." << endl;
                cout << "now fuck off" << endl;
                    break;
                }

                
                /* code */
            
            
            /* code */
          

        }
                
            /* code */
        }    
    return 0;
}

