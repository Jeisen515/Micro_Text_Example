#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;

int main(){

int array[] = {1,2,3,4,4,5,6,7,8,8,9,10};
int frequency = 0;
unordered_set<int> set;

for(unsigned int i = 0; i < 12; i++){
    //Verified how may values are repeated in the array
    if(set.find(array[i]) != set.end()){
        frequency++;
    } 
    else{
        set.insert(array[i]);
    }

}


return frequency;
}
