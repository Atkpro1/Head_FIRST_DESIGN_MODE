#define InstanceOf(O,T) (dynamic_cast<T>(O)!=nullptr)//替代instanceof关键字

class Recource{
  /*...*/
public:
  static queue<Recource *>RS;
  static mutex RS_LOCK;
};


template<class RT>//must extend Recource
RT GetR <RT> (){
    while(1){
      Recource.RS_LOCK.lock();
      Recource R=Recource.RS.front();
      Recource.RS.pop();
      if(InstanceOf(R,RT)){Recource.RS_LOCK.unlock();return (RT)R;}
      Recource.RS.push(R);
      Recource.RS_LOCK.unlock();
    }  
}
void NewR(Recource R){Recource.RS_LOCK.lock();Recource.RS.push(R);Recource.RS_LOCK.unlock();}
