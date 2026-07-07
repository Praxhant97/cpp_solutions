#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        double a = sides[0], b = sides[1], c = sides[2];
        vector<double>angles;
        double a1,a2,a3;
        
            double angle = (a*a+b*b-c*c)/(2*a*b);
            angle = acos(angle);
            angles.push_back(angle*180/M_PI);
            
            angle = (c*c+b*b-a*a)/(2*b*c);
            angle = acos(angle);
            angles.push_back(angle*180/M_PI);
           
           
            angle = (a*a+c*c-b*b)/(2*a*c);
            angle = acos(angle);


            angles.push_back(angle*180/M_PI);
        

    sort(angles.begin(),angles.end());
        return angles;
    }
};

int main(){
    Solution s;
    vector<int> sides = {3,4,5};
    vector<double> angles = s.internalAngles(sides);
    for(double angle: angles){
        cout<<angle<<" ";
    }
    return 0;
}