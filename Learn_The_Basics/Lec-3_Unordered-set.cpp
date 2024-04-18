#include<bits/stdc++.h>

using namespace std;

int main() {
    
  unordered_set<int> s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++) {          //begin() - return an iterator pointing to the first element in the unordered set.
    cout << * it << " ";                                    //end() - returns an iterator to the theoretical element after the last element.
    //*it: Dereferences the iterator it, 
    //giving you the value at the current position in the container that it is pointing to.
  }
                                                         //count() - it returns 1 if the element is present in the container otherwise 0.   
  cout << endl;                                 
  int n = 2;
  if (s.find(2) != s.end())                                 //find() - to search an element in the unordered set.
    cout << n << " is present in unordered set" << endl;

  s.erase(s.begin());                                       //erase() - to delete a single element or elements between a particular range.
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the unordered set is: " << s.size() << endl;         //size() - returns the size of the unordered set.

  if (s.empty() == false)                                                   //empty() - to check if the unordered set is empty or not.
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  s.clear();                                                                //clear() - deletes all the elements in unordered set.
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
}
