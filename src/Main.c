#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/SMPP.h"


SMPP smpp;

void Setup(AlxWindow* w){
	smpp = SMPP_New();
}
void Update(AlxWindow* w){
    TransformedView_HandlePanZoom(&smpp.tv,w->Strokes,GetMouse());

    if(Stroke(ALX_MOUSE_L).PRESSED){
        const Vec2 mp = TransformedView_ScreenWorldPos(&smpp.tv,GetMouse()); 
        SMPP_Add(&smpp,Particle_New(mp,0.05f));
    }

    SMPP_Update(&smpp,w->ElapsedTime);

	Clear(BLACK);

    SMPP_Render(WINDOW_STD_ARGS,&smpp);
}
void Delete(AlxWindow* w){
	SMPP_Free(&smpp);
}

int main(){
    if(Create("Standard Model of Particle Physics",1900,1200,1,1,Setup,Update,Delete))
        Start();
    return 0;
}