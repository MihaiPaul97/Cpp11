#include <iostream>
#include <vector>
#include <utility>
#include <memory>
#include <string>
using namespace std;

template<class T,class U,class Z>
class Watcher{
    public:
        Watcher(T a,U b,Z c){
            this->StateMachinesPtr_=a;
            this->message=b;
            this->relevance_=c;
        }
        ~Watcher(){
            cout<<Watcher a fost distrus<<endl;
        }
    private:
        std::list<SMPtr_<T>> StateMachinesPtr_;
        U message;
        Z relevance_;
};
struct SM{
    std::string IpRangeStart;
    std::string IpRangeStop;
    int clients;
};
template <class T>
class StateMachine{
    public:
        StateMachine(SM a){
            container_=a;
        }
        ~StateMachine(){
            cout<<StateMachine a fost distrus<<endl;
        }
    private:
        std::vector<SM> container_;
};

template<T>
shared_ptr<StateMachine<T>> SMPtr_;
template<T>
shared_ptr<constStateMachine<T>> SMCPtr_;

template<class T,class U,class Z>
shared_ptr<Watcher<T,U,Z> watcherPtr_;
shared_ptr<const Watcher<T,U,Z> watcherCPtr;

template<class T,class U,class Z>
class Notifier{
    public:
        Notifier( vector<WatcherCPtr_<T,U,Z>>a){
            this->subscribers=a;
        }
        ~Notifier(){
            cout<<Notifier a fost distrus<<endl;
        }
    private:
        vector<WatcherCPtr_<T,U,Z>>subscribers;
};
template<class T,class U,class Z>
shared_ptr<Notifier<T,U,Z>>nPtr_;
template<class T,class U,class Z>
shared_ptr<const Notifier<T,U,Z>>ncPtr_;
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
