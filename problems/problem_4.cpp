#include <string>
#include <sstream>
using namespace std;
string problemSolution4(const std::string &macAddress) {
    string result;
    int counter;
    for (int i=0; i<18; i+=3){
        if (macAddress[i]=='F' && macAddress[i+1]=='F'){
            counter+=2;
        }
        else if(isdigit(macAddress[1])){
            if (macAddress[1]%2==0) {
                result="Unicast";
                break;
            }
            else {
                result = "Multicast";
                break;
            }}
        else {
            switch (macAddress[1]) {
                case 'A':
                case 'C':
                case 'E':
                    result = "Unicast";
                    break;
                case 'B':
                case 'D':
                case 'F':
                    result = "Multicast";
                    break;
                default:
                    result = "Mac Adress is not available";

            }
            break;

        }
        }


    if (counter==12){
        result = "Broadcast";}
    return result;
}


    // write your code here

    // make use of control flow statements
    // return result;

