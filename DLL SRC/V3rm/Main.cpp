#include "Bridge.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <iterator>
#include <fstream>
#include <intrin.h>
#include <Tlhelp32.h>
#include <CommCtrl.h>
#include <Wininet.h>
#pragma comment(lib, "wininet.lib")
using namespace std;

/* mangos's old dll source (yes its axon) */
/*
its fine to skid off it, i used this a while back ago (like 2020).
it should work if you update correctly :/
*/

DWORD ScriptContext;
DWORD ScriptContextVFTable = x(0x187CBD0);

using Bridge::m_rL; // dword 
using Bridge::m_L; // lua state

using namespace std;

std::string replace_all(std::string subject, const std::string& search, const std::string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

void Executeee(std::string Script) {
	Script = "spawn(function() script=Instance.new(\"LocalScript\") " + Script + "\r\nend)";


	if (luaL_loadbuffer(m_L, Script.c_str(), Script.size(), "@Mango"))
	{
		r_lua_getglobal(m_rL, "warn"); // caught error
		r_lua_pushstring(m_rL, lua_tostring(m_L, -1));
		r_lua_pcall(m_rL, 1, 0, 0);
		return;
	}
	else
	{
		lua_pcall(m_L, 0, 0, 0);
	}
	GarbageCollector(m_L);
}

#define DebugPrintf printf

DWORD WINAPI input(PVOID lvpParameter)
{
	string WholeScript = "";
	HANDLE hPipe;
	char buffer[999999];
	DWORD dwRead;
	hPipe = CreateNamedPipe(TEXT("\\\\.\\pipe\\Mango"), // pipe name of axon
		PIPE_ACCESS_DUPLEX | PIPE_TYPE_BYTE | PIPE_READMODE_BYTE,
		PIPE_WAIT,
		1,
		999999,
		999999,
		NMPWAIT_USE_DEFAULT_WAIT,
		NULL);
	while (hPipe != INVALID_HANDLE_VALUE)
	{
		if (ConnectNamedPipe(hPipe, NULL) != FALSE)
		{
			while (ReadFile(hPipe, buffer, sizeof(buffer) - 1, &dwRead, NULL) != FALSE)
			{
				buffer[dwRead] = '\0';
				try {
					try {
						WholeScript = WholeScript + buffer;
					}
					catch (...) {
					}
				}
				catch (std::exception e) {

				}
				catch (...) {

				}
			}
			/*if (luaL_loadstring(m_L, WholeScript.c_str()))
				printf("Error: %s\n", lua_tostring(m_L, -1));
			else
				lua_pcall(m_L, 0, 0, 0);*/
			Executeee(WholeScript);

			WholeScript = "";
		}
		DisconnectNamedPipe(hPipe);
	}
}


int GetDatamodel()
{
	int A = 9;
	int B = 3;

	int result = A + B;

	static DWORD DMPad[16]{};
	printf("gdm \n");
	r_getdatamodel(getdatamodel2(), (DWORD)DMPad);
	printf("gdm passed\n");
	DWORD DM = DMPad[0];
	printf("returning dm \n");
	return DM + result;
	/*
	GetDataModel, Fixed by Shade and Synapse X source code i guess? xD enjoy this.
	*/
}

int impl_getflag(lua_State* L)
{
	Bridge::push(L, m_rL, 1);
	std::string flag = lua_tostring(L, 1);
	std::string ret;
	bool out = GetValue(flag, ret, 1);
	if (!out)
		luaL_error(L, "flag not found u coon");
	lua_pushstring(L, ret.c_str());
	return 1;
}

int impl_setfflag(lua_State* L)
{
	if (lua_type(L, 1) != LUA_TSTRING)
		return luaL_error(L, "expected a string");
	if (lua_type(L, 2) != LUA_TSTRING)
		return luaL_error(L, "expected a string");
	Bridge::push(L, m_rL, 1);
	std::string flag = lua_tostring(L, 1);
	std::string value = lua_tostring(L, 2);
	std::string ret;
	bool exist = GetValue(flag, ret, 1);
	if (!exist)
		luaL_error(L, "flag not found u coon");
	SetValue(flag, value, 63, 0);
	return 0;
}

int getRawMetaTable(lua_State *L) {
	Bridge::push(L, m_rL, 1);

	if (r_lua_getmetatable(m_rL, -1) == 0) {
		lua_pushnil(L);
		return 0;
	}
	Bridge::push(m_rL, L, -1);

	return 1;
}

int GetGenv(lua_State* L)
{
	if (lua_gettop(L) != 0)
		throw std::runtime_error("GetGenv function does not accept arguments");
	//WrapRobloxLua(robloxState, L, -1);
	Bridge::push(m_rL, L, -1);
	lua_pushvalue(L, LUA_GLOBALSINDEX);
	return 1;
}

int getNamecallMethod(lua_State* L)
{
	/* wrap once*/
	Bridge::push(m_rL, L, -1);
	return 1;
}

int setRawMetaTable(lua_State* L) {
	Bridge::push(L, m_rL, 1);

	if (lua_setmetatable(L, -1) == 0) {
		lua_pushnil(L);
		return 0;
	}
	Bridge::push(m_rL, L, -1);

	return 1;
}

int r_luaL_getmetafield(lua_State* L, int obj, const char* event)
{
	if (!lua_getmetatable(L, obj))  /* no metatable? */
		return 0;
	lua_pushstring(L, event);
	lua_rawget(L, -2);
	if (lua_type(L, -1) == R_LUA_TNIL) {
		lua_pop(L, 2);  /* remove metatable and metafield */
		return 0;
	}
	else {
		lua_remove(L, -2);  /* remove only metatable */
		return 1;
	}
}

int hookfunction(lua_State* L) {
	if (lua_type(L, -1) != R_LUA_TFUNCTION)
		return luaL_argerror(L, -1, "<function> expected");
	if (lua_type(L, -2) != R_LUA_TFUNCTION)
		return luaL_argerror(L, -1, "<function> expected");
	Bridge::push(m_rL, L, 1);
	lua_tocfunction(L, -1);
	Bridge::push(L, m_rL, 1);
	return 1;
}

void RegFuncs(lua_State* L)
{
	lua_register(L, "getgenv", GetGenv);
	lua_register(m_L, "getrawmetatable", getRawMetaTable);
	lua_register(m_L, "setrawmetatable", setRawMetaTable);
	lua_register(m_L, "getfflag", impl_getflag);
	lua_register(m_L, "hookfunction", hookfunction);
	lua_register(m_L, "setfflag", impl_setfflag);
}


void ConsoleBypass(const char* Title) {
	DWORD aaaa;
	VirtualProtect((PVOID)&FreeConsole, 1, PAGE_EXECUTE_READWRITE, &aaaa);
	*(BYTE*)(&FreeConsole) = 0xC3;
	AllocConsole();
	SetConsoleTitleA(Title);
	freopen("CONOUT$", "w", stdout);
	freopen("CONIN$", "r", stdin);
	HWND ConsoleHandle = GetConsoleWindow();
	::SetWindowPos(ConsoleHandle, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
	::ShowWindow(ConsoleHandle, SW_NORMAL);
}

const char* GetClass(int self)
{
	return (const char*)(*(int(**)(void))(*(int*)self + 16))();
}

int FindFirstClass(int Instance, const char* Name)
{

	
	DWORD StartOfChildren = *(DWORD*)(Instance + 44);
	//printf("START: (%x) \n", StartOfChildren);
	DWORD EndOfChildren = *(DWORD*)(StartOfChildren + 4);
	//printf("END: (%x08) \n", EndOfChildren);
	for (int i = *(int*)StartOfChildren; i != EndOfChildren; i += 8)
	{
		if (memcmp(GetClass(*(int*)i), Name, strlen(Name)) == 0)
		{
			//printf("GOT CLASS!");
			return *(int*)i;
		}
	}
}

DWORD SetThreadIdentity(DWORD rL, int level)
{
	//printf("set id to : (%i) \n", level);
	return *(DWORD*)(*(DWORD*)(rL + Adresses::Identity2) + 24) = level;
	//DWORD id1 = *(DWORD*)(rL + 104);
	//*(DWORD*)(id1 + 24) = *(DWORD*)level;
	//return 1;
}

void getdatamodeltesting()
{
	printf("Mango DLL Source \n");
	GDM = GetDatamodel();
	printf("GDM: %08X\n", GDM);
	ScriptContext = FindFirstClass(GDM, "ScriptContext");

	DWORD oldRL = Adresses::RBX_LuaState(ScriptContext);

	m_rL = r_lua_newthread(oldRL);
}


void InitGlobals()
{
	std::vector<const char*> Globals = {
    "printidentity","game","Game","workspace","Workspace",
    "Axes","BrickColor","CFrame","Color3","ColorSequence","ColorSequenceKeypoint",
    "NumberRange","NumberSequence","NumberSequenceKeypoint","PhysicalProperties","Ray",
    "Rect","Region3","Region3int16","TweenInfo","UDim","UDim2","Vector2",
    "Vector2int16","Vector3","Vector3int16","Enum","Faces",
    "Instance","math","warn","typeof","type","print",
    "printidentity","ypcall","Wait","wait","delay","Delay","tick", "pcall", "spawn", "Spawn"
	};
	for (int i = 0; i < Globals.size(); i++)
	{
		r_lua_getglobal(m_rL, Globals[i]);
		Bridge::push(m_rL, m_L, -1);
		lua_setglobal(m_L, Globals[i]);
		r_lua_pop(m_rL, 1);
		std::cout << "mango global: " << Globals[i] << std::endl;
	}
}

void PushGlobal(DWORD rL, lua_State* L, const char* s)
{
	r_lua_getglobal(rL, s);
	Bridge::push(rL, L, -1);
	lua_setglobal(L, s);
	r_lua_pop(rL, 1);
	
}


void main()
{
	    ConsoleBypass("Mango API | Powered by Axon | By SpeedSterKawaii");	
		getdatamodeltesting();
		SetThreadIdentity(m_rL, 7);
		printf("Identity is 7.\n");
		m_L = luaL_newstate();
		Bridge::VehHandlerpush();
		luaL_openlibs(m_L);
		InitGlobals();
		printf("Gay Globals Done.\n");
		RegFuncs(m_L);
		printf("Functions regged.\n");
		lua_newtable(m_L);
		lua_setglobal(m_L, "_G");
		printf("Pipe shit is done.\n");
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)input, NULL, NULL, NULL);
		printf("Mango has attached.\n");
		// injection started
}



BOOL APIENTRY DllMain(HMODULE Module, DWORD Reason, void* Reserved)
{
	switch (Reason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(Module);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)main, NULL, NULL, NULL);
		break;
	case DLL_PROCESS_DETACH:
		break;
	default: break;
	}

	return TRUE;
}
