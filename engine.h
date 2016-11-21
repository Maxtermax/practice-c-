#ifndef ENGINE
#define ENGINE
#include <iostream>

using namespace std;

class Engine {
	public:
		 
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
		  return elements[get_len(len)-1];
		}//end get_last
		
		int get_first(int *elements) {
		  return elements[0];
		}//end get_first
		
		bool is_empty(int len) {
		  return (len == 0 ? true : false);	
		}//end is_empty

		int *push(int *list,int new_element) {
			int len = get_len(sizeof(list));
			list[len+1] = new_element;
			return list;
		}//end push

		int return_value() {
			int x = 23;
			return *(&x);//only can return the value, but not the address in memory
		}
};

#endif


