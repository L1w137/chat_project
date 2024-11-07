**奇异递归模板类**
```cpp
//单例类
template <typename T>
class Singleton{
protected:
    Singleton() = default;
    Singleton(const Singleton<T>&) = delete;
    Singleton& operator = (const Singleton<T>& st) = delete;
    static std::shared_ptr<T> _instance;
public:
    static std::shared_ptr<T>GetInstance(){
        static std::once_flag s_flag;
        std::call_once(s_flag,[&](){
            _instance =std::shared_ptr<T>(new T);
        });
        return _instance;
    }
    void PrintAddress(){
        std::cout<<_instance.get()<<std::endl;
    }
    ~Singleton(){
        std::cout<<"this is singleton destruct"<<std::endl;
    }
};
template<typename T>
std::shared_ptr<T>Singleton<T>::_instance = nullptr;
```

```cpp
class HttpMgr:public QObject,public Singleton<HttpMgr>
{
    Q_OBJECT
public:
    ~HttpMgr();
private:
    friend class Singleton<HttpMgr>
    HttpMgr();
};
```
1. 在HttpMgr继承Singleton<T>时，在HttpMgr未实例化之前,将Singleton的模板T设置为HttpMgr自己的实例化。
2. 为什么析构为公有
在调用HttpMgr构造函数时，会调用基类Singleton的构造函数，而Singleton的构造函数返回的是_instance,这是一个shared_ptr<T>的智能指针，在析构时，shared_ptr会调用对模板T的析构，又会回到派生类HttpMgr，因为这个模板T在HttpMgr继承的时候，设置为HttpMgr自己，所以需要设为共有。
3. 为什么要把基类声明为友元
在Singleton的Getinstance方法中会_instance =std::shared_ptr<T>(new T)，new一个模板T，而在HttpMgr中T为自己，因为HttpMgr的构造是私有，在Singleton中调用HttpMgr的构造实际上是不允许的，所以声明为友元。
