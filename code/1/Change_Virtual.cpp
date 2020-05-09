class people{
public:
  string getName();
  virtual void eat();//吃饭
  virtual void sleep();//睡觉
  virtual void work();//工作
  people(string name);
private:
  string Name;
}
people::getName(){return Name;}

people::eat(){cout<<Name<<":我就吃个饭"<<endl;}

people::sleep(){cout<<Name<<":我就睡个觉"<<endl;}

people::work(){cout<<Name<<":我在打工挣钱"<<endl;}

people::people(string name){Name=name;}
