#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
    //an empty vector
    vector <int> arr;
    arr.push_back(4);//{4}
    arr.emplace_back(8);//{4,8}
    cout<<arr[1]<<endl;
    for (int i =0 ; i <2 ; i++){
        cout<<arr[i]<<endl;        
    }
    // 2D vector
    vector<vector<int>>mat = {{1,2,3},{2,3,4},{7,56,6}};
    for(int i =0 ;i<mat.size();i++)
    {
        for(int j=0; j<mat[i].size();j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
/*8
4
8
1 2 3
2 3 4
7 56 6*/
//vector with pair elements
vector <pair<int,int>>ve;
ve.push_back({4,5});//{{4,5}}
ve.emplace_back({7,8});//{{4,5},{7,8}}

//vector of size 5
//every one as 500
vector <int>v(5,500);//{500,500,500,500,500}
vector<int>v(5);//{0,0,0,0,0}
vector <int>va(5,13);

//copy one vector into another 
vector <int> ve1(ve);//vet1 = {13,13,13,13,13}
return 0;

}
