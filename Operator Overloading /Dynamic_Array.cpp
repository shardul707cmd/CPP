#include<iostream>
class Dynamic_Array{
    int *ptr;

    public:
    Dynamic_Array(int n){
        ptr = new int[n];
    for(int i=0;i<n;i++){
        std::cout<<"Enter the value of index "<<i<<": ";
        std::cin>>*(ptr+i);
    }
}
    int &operator[](int index){
        return *(ptr+index);


    }
    ~Dynamic_Array(){
        delete [] ptr;
    }

};


int main(){
    Dynamic_Array arr(5);
    std::cout<<"The value at index 2 is: "<<arr[2]<<std::endl;


    return 0;
}