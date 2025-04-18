#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std ;

int binarysearch (int array[],int n,int target){
int low =0;
int high =n-1;
while (low<=high){
    int mid = (low+high)/2;
    if (array[mid]==target){
        return mid;
    } else if (array[mid]<target){
        low = mid +1;

    }else if (array[mid]>target){
        high =mid-1;
    }
}

return -1;
}
// Key points to remember , the entire binary operation work on the divide and conquer features .


int main () {
int array[] = {10,56,78,96};
int n = sizeof(array)/sizeof(array[0]);
int target = 10;
int result = binarysearch(array,n,target);
cout<<result<<endl;

}