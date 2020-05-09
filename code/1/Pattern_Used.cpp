typedef void (*SKILL) ();

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

people::eat(){Eat();}

people::sleep(){Sleep();}

people::work(){Work();}

people::people(string name){Name=name;}
