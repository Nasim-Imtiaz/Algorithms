#include <bits/stdc++.h>

using namespace std;

int main(){
	int arr1[]={5,4,3,2,1};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	
	vector<int> vec1 (arr1,arr1+n);
	vector<int> vec2 (arr1,arr1+n);
	vector<int> vec3 (arr1,arr1+n);
	
	sort(vec1.begin(),vec1.end());		//sort
	
	reverse(vec2.begin(),vec2.end());	//reverse
	
	for(int i=0;i<vec1.size();i++){
		cout<<vec1[i]<<" ";
	}
	cout<<"\n";
	
	for(int i=0;i<vec2.size();i++){
		cout<<vec2[i]<<" ";
	}
	cout<<"\n";
	
	cout<<"MAX: "<<*max_element(vec3.begin(),vec3.end())<<endl;		//max
	cout<<"MIN: "<<*min_element(vec2.begin(),vec2.end())<<endl;		//min
	
	int sum=0;
	
	cout<<"SUM: "<<accumulate(vec1.begin(),vec1.end(),sum)<<endl;	//sum
	
	int arr2[]={5,3,2,3,4,1,2,2};
	n=sizeof(arr2)/sizeof(arr2[0]);
	vector<int> vec4 (arr2,arr2+n);
	cout<<"Value 3 appears "<<count(vec4.begin(),vec4.end(),3)<<" times \n";	//how many times
	cout<<"Value 2 appears "<<count(vec4.begin(),vec4.end(),2)<<" times \n";
	find(vec4.begin(),vec4.end(),6)!=vec4.end()?cout<<"FOUND\n":cout<<"NOT FOUND\n";	//exist or not
	find(vec4.begin(),vec4.end(),1)!=vec4.end()?cout<<"FOUND\n":cout<<"NOT FOUND\n";
	
	sort(vec4.begin(),vec4.end());
	int nu=binary_search(vec4.begin(),vec4.end(),6);
	cout<<nu<<endl;
	nu=binary_search(vec4.begin(),vec4.end(),3);	//binary_search
	cout<<nu<<endl;
	
	cout<<*lower_bound(vec4.begin(),vec4.end(),3)<<endl;	//not less than
	cout<<*upper_bound(vec4.begin(),vec4.end(),3)<<endl;	//greater than
	return 0;
}
