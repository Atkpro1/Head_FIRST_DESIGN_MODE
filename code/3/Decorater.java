import SKILL;
import Recource;
class Decorater<RType extends Recource> extends SKILL{
    RType GetR{/**/}
    SKILL Action;
    Decorater(SKILL Act){Action=Act;}
    void Excute(){
	GetR();Action.Excute();
    }
}
