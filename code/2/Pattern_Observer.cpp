#define InstanceOf(O,T) (dynamic_cast<T>(O)!=nullptr)//替代instanceof关键字

class Recource{
  /*...*/
public:
  static queue<Recource *>RS;
  vector<Observer*> OS;
  bool Got=false;
};
class Observer{
public:
	virtual void OnObserve(Recource *R);
};
class Need: public SKILL,public Observer{
/**/
public:
	void OnObserver();
private:
	mutex block;
	Recource *R;
};
template<class RT>//must extend Recource
RT *Need::GetR(){
   OS.push((Obersver *)this);
   this->block.lock();
   NewRBlock.unlock();
   this->block.lock();
   this->block.unlock();
   return R;
}

template<class RT>//must extend Recource
void Need::OnObserve(Recource *R){
	if((!this->R)&&(!R->Got)&&InstanceOf(*R,RT)){
		R->Got=true;
		this->R=R;
		this->block.unlock();
	}
}
mutex NewRBlock;
void NewR(Recource *R){
	R->Got=false;
	Recource.RS.push_back(R);
	while(1){
		for(Observer *O:OS){
			OS->OnObserve(R);
			if(R->Got)goto end;
		}
		NewRBlock->lock();NewRBlock->lock();NewRBlock->unlock();
	}
end:
}
