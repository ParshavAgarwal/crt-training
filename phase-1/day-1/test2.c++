#include <bits/stdc++.h>
using namespace std;

int add_cmd(int x, int y){
    return x + y;
}

int sub_cmd(int x, int y){
    return x - y;
}

int mul_cmd(int x, int y){
    return x * y;
}

int div_cmd(int x, int y){
    if (y!=0)
        return x / y;

    return -1;
}

void print_array(int arr[], int cmd_count){
    for (int i=0; i<cmd_count; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int cmd_count;
    cout<<"Enter the number of commands: ";
    cin>> cmd_count;

    int arr[cmd_count];

    for (int i=0; i<cmd_count; i++){

        int x,y;
        string cmd;
        cin >> x >> y >> cmd;
        if(cmd == "add"){
            arr[i] = add_cmd(x, y);
        }
        else if(cmd == "sub"){
            arr[i] = sub_cmd(x, y);
        }
        else if(cmd== "mul"){
            arr[i] = mul_cmd(x, y);
        }
        else if(cmd == "div"){
            arr[i] = div_cmd(x, y);
        }
        else{
            cout << "Invalid command" << endl;
        }
    }

    print_array(arr, cmd_count);
    
}