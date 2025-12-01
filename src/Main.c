#if defined(__linux__) || defined(_WINE)
    #include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#elif defined(_WIN32) || defined(_WIN64)
    #include "F:/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#elif defined(__APPLE__)
    #error "Apple not supported!"
#else
    #error "Platform not supported!"
#endif

void Setup(AlxWindow* w){
    
}
void Update(AlxWindow* w){
    Vec2 pos = GetMouse();
    //printf("%f %f\n",pos.x,pos.y);

    Clear(BLACK);
    RenderCStr("Hello World",pos.x,pos.y,BLUE);
}
void Delete(AlxWindow* w){
    
}

int main() {
    if(Create("WINAPI Test",400,300,4,4,Setup,Update,Delete)){
        Start();
    }
    return 0;
}

