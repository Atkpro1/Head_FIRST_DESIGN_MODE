class SKILL{
public:
  void opertator()(){Excute();}//这让SKILL变为了一个函数
protected:
  virtual void Excute()=0;//abstract void Excute
};

class people{
public:
  string getName();
  void eat();//吃饭
  void sleep();//睡觉
  void work();//打斗斗
  people(string name);//构造函数不被继承
private:
  SKILL Eat,Sleep,Work;
  string Name;
}
people::getName(){return Name;}

people::eat(){Eat();//这会调用operator()方法}

people::sleep(){Sleep();}

people::work(){Work();}

people::people(string name){Name=name;}
