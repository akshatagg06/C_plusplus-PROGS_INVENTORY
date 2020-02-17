/*
give threshold, count
arrange them im order of salary (print only those who have salaries greater than threshold).
If salaries are equal, arrange lexicographically. 

sample input:

100 5
nick 1000
ram 90
amit 200
yug 300
john 300

output:
amit 200
john 300
yug 300
nick 1000
*/
#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<string, int>p1, pair<string, int>p2){
    if(p1.second == p2.second){
        return p1.first < p2.first;
    }
    return p1.second < p2.second;
}

int main() {
	int min_salary, n;
	cin>>min_salary>>n;
	
	pair <string, int> empData[100005];
	string name;
	int salary;
	
	for(int i=0; i<n; i++){
	    cin>>name>>salary;
	    empData[i].first = name;
	    empData[i].second = salary;
	}
	
	sort(empData, empData + n, comparator);

    for(int i = 0; i<n; i++){
        if(empData[i].second >= min_salary){
            cout<<empData[i].first<<" "<<empData[i].second;
        }
    }
	return 0;
}
