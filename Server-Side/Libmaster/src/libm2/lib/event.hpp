#ifndef __LIBM2_LIB_EVENT_HPP
#define __LIBM2_LIB_EVENT_HPP
#include <vector>
#include <algorithm>
#include <typeinfo>
namespace libm2{
template<typename... Args>
class events{
private:
    std::vector<void*> subscribers;
    public:
    void fire(Args... parameters){
        for(int i=0;i<subscribers.size();i++){
            ((bool(*)(Args...))subscribers[i])(parameters...);
        }
    };
    void subscribe(void* func){
        subscribers.push_back(func);
    };
    void unsubsribe(void* func){
        std::vector<void*>::iterator fiter = std::find(subscribers.begin(),subscribers.end(),func);
        if (fiter!=subscribers.end()){
            subscribers.erase(fiter);
        }
    };
};
}
#endif // __LIBM2_LIB_EVENT_HPP
