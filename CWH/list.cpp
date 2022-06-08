#include<bits/stdc++.h>
using namespace std;

// List have a insertion and remove property in O(1).  {vector do it in O(n).}
// List can't be access by its index no. bcz its not a continuos memory.
// to access any element of list O(n) t.c is used.      {vector have O(1) using index no.}
// List also have pop_front and push_front property.    .<works as dequeue>
// multiple element insertion is supported -- link.insert(at, 3, 3, 6);
// initial assign is supported list1.assign(3, 2) --> 3 : 2's or list2(5) --> 5 : 0's
// it's not a contiguous memory allocation, we can store larger data's (<10^7) in them..

int main()
{

    list<int> link ;

    int n; cin>>n;

    for(int i=0; i<n; i++){
        link.push_back(i);
    }

    auto it1 = link.begin() ;

    advance(it1, 2);   // 3rd position..

    link.insert(it1, 22);

    for(auto it = link.begin(); it!=link.end(); it++){
        cout<<(*it)<<" ";
    }

    vector<int> v;
    

}

/*
front()	            Returns the value of the first element in the list.
back()	            Returns the value of the last element in the list.
push_front(g)	    Adds a new element ‘g’ at the beginning of the list.
push_back(g) 	    Adds a new element ‘g’ at the end of the list.
pop_front()     	Removes the first element of the list, and reduces size of the list by 1.
pop_back()      	Removes the last element of the list, and reduces size of the list by 1.
list::begin()   	begin() function returns an iterator pointing to the first element of the list.
list::end()	        end() function returns an iterator pointing to the theoretical last element which follows the last element.
list rbegin() and rend()	        rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list.
list cbegin() and cend() 	        cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list.
list crbegin() and crend()          crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.
empty() 	                        Returns whether the list is empty(1) or not(0).
insert()	                        Inserts new elements in the list before the element at a specified position.
erase()	                            Removes a single element or a range of elements from the list.
assign()	                        Assigns new elements to list by replacing current elements and resizes the list.
remove()	                        Removes all the elements from the list, which are equal to given element.
list::remove_if()	                Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.
reverse()	                        Reverses the list.
size()	                            Returns the number of elements in the list.
list resize()                   	Used to resize a list container.
sort()                          	Sorts the list in increasing order.
list max_size() 	                Returns the maximum number of elements a list container can hold.
list unique()	                    Removes all duplicate consecutive elements from the list.
list::emplace_front() and list::emplace_back()	emplace_front() function is used to insert a new element into the list container, the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, the new element is added to the end of the list.
list::clear()	                    clear() function is used to remove all the elements of the list container, thus making it size 0.
list::operator=	                    This operator is used to assign new contents to the container by replacing the existing contents.
list::swap()	                    This function is used to swap the contents of one list with another list of same type and size.
list splice()	                    Used to transfer elements from one list to another.
list merge()	                    Merges two sorted lists into one.
list emplace()                  	Extends list by inserting new element at a given position.
*/