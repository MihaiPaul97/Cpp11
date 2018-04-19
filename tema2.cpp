//CPP program to illustrate pair STL
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
void printPair(vector<pair <int, int>> pair1){
    for(auto i=0;i<pair1.size();i++){
        cout << pair1[i].first <<" " ;
        cout << pair1[i].second << endl ;
    }
    cout<<endl;
}
void isOdd(vector<pair <int, int>> &pair1){
     for(auto i=0;i<pair1.size();i++){
        if(pair1[i].second%2==1)
            pair1[i].second=0;
     }
}
void bubbleFirst(vector<pair <int, int>> &pair1)
{
   int i, j;
   pair<int,int> aux;
   for (i = 0; i<pair1.size()-1; i++){
        for (j =0; j < pair1.size()-i-1; j++){
            if (pair1[j].first > pair1[j+1].first){
              swap(pair1[j], pair1[j+1]);
//              aux=pair1[j];
//              pair1[j]=pair1[j+1];
//              pair1[j+1]=aux;
            }
        }
    }

}
int main()
{
    vector<pair <int, int>> pair1={{1,21},{12,25},{8,11},{17,5},{9,28},{4,18}} ;
    printPair(pair1);
   // sort (pair1[0].first(), pair1[4].first());
    bubbleFirst(pair1);
    printPair(pair1);
    isOdd(pair1);
    printPair(pair1);
    return 0;
}
