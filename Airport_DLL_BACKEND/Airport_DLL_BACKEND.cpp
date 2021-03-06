// $nombredeproyecto$.cpp: define las funciones exportadas de la aplicación DLL.
//

#include "stdafx.h"
#include "C:\Users\Usuario\Desktop\mapas\MetodosAeropuertos\MetodosAeropuertos\Header.h"
#include "C:\Users\Usuario\Desktop\mapas\MetodosAeropuertos\MetodosAeropuertos\Body.cpp"

extern "C" __declspec(dllexport) void __stdcall Creat_Airport(char *name, double lat, double lon) {
	ProyectMethods pm;
	pm.Create_Airport(name, lat, lon);
}

extern "C" __declspec(dllexport) void __stdcall Read_Airport(char *buff, int pos) {
	ProyectMethods pm;
	pm.Read_Airport(buff, pos);
}


extern "C" __declspec(dllexport) int __stdcall Lenght_File() {
	ProyectMethods pm;
	return pm.Lenght_Arch();
}

extern "C" __declspec(dllexport) void __stdcall Delete_Airport(char * name) {
	ProyectMethods pm;
	pm.Delete_Airport(name);
}

extern "C" __declspec(dllexport) void __stdcall Update_Airport(char * name, char * newName, double lat, double lon) {
	ProyectMethods pm;
	pm.Update_Airport(name, newName, lat, lon);
}

extern "C" __declspec(dllexport) bool __stdcall Exist_Airport(char *name) {
	ProyectMethods pm;

	return pm.Exist_Airport(name);
}

extern "C" __declspec(dllexport) int __stdcall Create_route(char * id, char *rou, double dis) {
	ProyectMethods pm;
	return pm.Create_Route(id, rou, dis);
}

extern "C" __declspec(dllexport) void __stdcall Read_Route(char *buff, int pos) {
	ProyectMethods pm;
	pm.Read_Route(buff, pos);
}
extern "C" __declspec(dllexport) void __stdcall Delete_Route(char *id, char *rou) {
	ProyectMethods pm;
	pm.Delete_Route(id, rou);
}
extern "C" __declspec(dllexport) void __stdcall Update_Route(char *id, char*rou, char*newR, double dis) {
	ProyectMethods pm;
	pm.Update_Route(id, rou, newR, dis);
}
extern "C" __declspec(dllexport) int __stdcall Length_R() {
	ProyectMethods pm;
	return pm.Lenght_R(); 
}