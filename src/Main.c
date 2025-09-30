#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"

void Setup(AlxWindow* w){

}
void Update(AlxWindow* w){
    
    Clear(BLACK);
    RenderCStr("Hello World",10,10,BLUE);
}
void Delete(AlxWindow* w){
    
}

int main() {
    if(Create("WINAPI Test",1000,1000,1,1,Setup,Update,Delete)){
        Start();
    }
    return 0;
}
