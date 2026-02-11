#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"

void Setup(AlxWindow* w){
	
}
void Update(AlxWindow* w){


	Clear(BLACK);

}
void Delete(AlxWindow* w){
	
}

int main(){
    if(Create("Standard Model of Particle Physics",1900,1200,1,1,Setup,Update,Delete))
        Start();
    return 0;
}