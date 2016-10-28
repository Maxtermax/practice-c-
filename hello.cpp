#include <iostream>
using namespace std;

int get_len(int size) {	
	return  size/sizeof(int);
}//end get_len

int get_max(int len, int *elements) {
	int i  = len == 1 ? 0 : 1 ,max = elements[0];	
	for(i;i<len;i++) if( elements[i] > max ) max = elements[i];				
	return max;
}//end get_max

int get_min(int len,int *elements) { 
	int i = len == 1 ? 0 : 1, min = elements[0];
	for(i;i<len;i++)if( elements[i] < min ) min = elements[i];
	return min;
}//end get_min 

int get_last(int len,int *elements) {
	return elements[(len-1)];
}//end get_last 

int get_first(int *elements) {
	return elements[0];
}//end get_first

bool is_empty(int len) {
	return (len == 0 ? true : false);	
}//end is_empty


int main() {
	int  a[] = {1,2,3,4,5,6,7,90};			 
	int maximum = get_max(get_len(sizeof(a)),a);	
	int minimum = get_min(get_len(sizeof(a)),a);
	int first = get_first(a);
	int last = get_last(get_len(sizeof(a)),a);	 
	int empty = is_empty(sizeof(a));

	cout << maximum << " : maximum" << endl;
	cout << minimum << ": minimum  "  << endl;
	cout << first << " : first element " << endl;
	cout << last << " : last element " << endl;
	cout << "Is empty ? : " << empty << endl;
	return 0;
}
