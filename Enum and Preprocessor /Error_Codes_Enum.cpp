#include<iostream>

enum class ErrorCode{Success,NotFound,AccessDenied};



int main (){
    ErrorCode a = ErrorCode::Success;
    switch (a)
    {
    case ErrorCode::Success :
        std::cout<<"Success";
        break;
    case ErrorCode::NotFound:
        std::cout<<"Not Found";
        break;
    case ErrorCode::AccessDenied:
        std::cout<<"Access Denied";
        break;
    
    
    }



    return 0;
}