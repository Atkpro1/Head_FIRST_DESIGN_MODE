#include <vector>
using namespace std;
class Recource;
class SKILL{
public:
  virtual void excute();
  void AddR(Recource *R){RS.push_back(R);}//这里指针就是引用,不用害怕
private:
  vector<Recource*> RS;
};
template <class R>
class Need<R>:public SKILL{
private:
  SKILL *Skill;//待装饰
  R *GetR():
public:
  Need(SKILL *Skill){this->Skill=Skill;}
  void excute{
    Skill->AddR(GetR());
    Skill->excute();
  }
};
