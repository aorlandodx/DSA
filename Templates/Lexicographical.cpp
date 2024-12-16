//this program shows the execution of templates
//created by Angel Peña on Dec 16, 2024

#include <iostream>
#include <string>
using namespace std;

//template to find the maximum of two values
template <typename T>
T findMax(T a, T b){
    return(a > b) ? a : b;
}

int main(){
    //test some data
    cout << "Max of 5 and 10: " << findMax(5,10) << "\n";
    cout << "Max of Apple and Banana: " << findMax("Apple", "Banana") << endl;
    cout << "Max of 12.5 and 7.5: " << findMax(12.5, 7.5) << endl;
    
    return 0;
}