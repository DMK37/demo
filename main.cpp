//
// Created by Dmytro Tolstoi on 08.02.2023.
//
#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> vec)
{
    int sum = 0;
    for_each(vec.begin(),vec.end(),[&sum](int a){
        sum+=a;
    });
    return sum;
}

int main()
{
    cout<<"Hello\n";
    return 0;
}
