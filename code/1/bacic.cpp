class people{
public:
  string getName();
  void eat();//吃饭
  void sleep();//睡觉
  void fight();//打斗斗
  people(string name);
private:
  string Name;
}
people::getName(){return Name;}

people::eat(){cout<<Name<<":我就吃个饭"<<endl;}

people::sleep(){cout<<Name<<":我就睡个觉"<<endl;}

people::fight(){cout<<Name<<"我打死你"<<endl;}

people::people(string name){Name=name;}
