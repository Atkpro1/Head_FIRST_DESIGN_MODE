class Borner{//C++ have No Interface But Mutiplie Extend
public:
  virtual People *Born(void *ARG)=0;//abstract
};

class GOV{
private:
  static vector<Borner *> BS;//ArrayList
  static GOV *Ins=new GOV();
  GOV();
public:
  People *Born (void *ARG){
    People *R=NULL;
    for(auto i=BS.begin();i!=BS.end();i++){//foreach(i:BS)
      if(R=(*i).Born(ARG))return R;
    }
    return NULL;
  }
  static GOV *Instance(){return Ins;}
}
