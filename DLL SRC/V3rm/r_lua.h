#pragma once
#include <Windows.h>
#include "retcheck.h"
#include "Bridge.h"

// Auto Lua Type: https://github.com/Mellonyt/Roblox-Lua-Type-Scanner 
// Scanning Time: 2.000000 Secs 
// Dumping Date: Wed Apr 14 15:30:42 2021
// For version-6d2a459f72544bbf 
// Dumped With Mellonyt aka Mellon Addy Dumper My Discord: mellonyt#1234 
#include <Windows.h> 
#include<cstdint> 
namespace Adresses {
	static constexpr std::uintptr_t addinfo_addr = 0x01563DC0;
#define addinfo_CCV __cdecl

	static constexpr std::uintptr_t adjuststack_addr = 0x01557EE0;
#define adjuststack_CCV __cdecl

	static constexpr std::uintptr_t arith_addr = 0x01572300;
#define arith_CCV __cdecl

	static constexpr std::uintptr_t appendarray_addr = 0x005D0000;
#define appendarray_CCV __thiscall

	static constexpr std::uintptr_t atomic_addr = 0x0156D910;
#define atomic_CCV __cdecl

	static constexpr std::uintptr_t aux_upvalue_addr = 0x01555770;
#define aux_upvalue_CCV __cdecl

	static constexpr std::uintptr_t auxgetinfo_addr = 0x01563E30;
#define auxgetinfo_CCV __cdecl

	static constexpr std::uintptr_t auxresume_addr = 0x015659C0;
#define auxresume_CCV __thiscall

	static constexpr std::uintptr_t call_bintm_addr = 0x01571820;
#define call_bintm_CCV __cdecl

	static constexpr std::uintptr_t call_ordertm_addr = 0x015718C0;
#define call_ordertm_CCV __cdecl

	static constexpr std::uintptr_t calltmres_addr = 0x015716D0;
#define calltmres_CCV __cdecl

	static constexpr std::uintptr_t cleartable_addr = 0x0156D9D0;
#define cleartable_CCV __cdecl

	static constexpr std::uintptr_t close_state_addr = 0x01563760;
#define close_state_CCV __cdecl

	static constexpr std::uintptr_t currentline_addr = 0x01563FE0;
#define currentline_CCV __cdecl

	static constexpr std::uintptr_t err_geterrorstring_addr = 0x0095C740;
#define err_geterrorstring_CCV __cdecl

	static constexpr std::uintptr_t f_call_addr = 0x015557F0;
#define f_call_CCV __cdecl

	static constexpr std::uintptr_t f_luaopen_addr = 0x01563810;
#define f_luaopen_CCV __cdecl

	static constexpr std::uintptr_t findfirstchild_addr = 0x00685120;
#define findfirstchild_CCV __thiscall

	static constexpr std::uintptr_t findfirstchildofclass_addr = 0x006852F0;
#define findfirstchildofclass_CCV __stdcall

	static constexpr std::uintptr_t findlocal_addr = 0x0156FC00;
#define findlocal_CCV __cdecl

	static constexpr std::uintptr_t fireclickdetector_addr = 0x00C6D5B0;
#define fireclickdetector_CCV __thiscall

	static constexpr std::uintptr_t firetouchinterest_addr = 0x01BC743C;
#define firetouchinterest_CCV __cdecl

	static constexpr std::uintptr_t fireproximityprompt_addr = 0x00CB9EC0;
#define fireproximityprompt_CCV __cdecl

	static constexpr std::uintptr_t flog_getvalue_addr = 0x01768CD0;
#define flog_getvalue_CCV __cdecl

	static constexpr std::uintptr_t flog_setvalue_addr = 0x01769450;
#define flog_setvalue_CCV __cdecl

	static constexpr std::uintptr_t getdatamodel_addr = 0x00FCDC80;
#define getdatamodel_CCV __thiscall

	static constexpr std::uintptr_t getdatamodel2_addr = 0x00FCDB30;
#define getdatamodel2_CCV __cdecl

	static constexpr std::uintptr_t getfunc_addr = 0x01565160;
#define getfunc_CCV __cdecl

	static constexpr std::uintptr_t getjobsbyname_addr = 0x010614F0;
#define getjobsbyname_CCV __cdecl

	static constexpr std::uintptr_t getnamecallmethod_addr = 0x01557F50;
#define getnamecallmethod_CCV __cdecl

	static constexpr std::uintptr_t grabscriptcontext_addr = 0x005EB250;
#define grabscriptcontext_CCV __thiscall

	static constexpr std::uintptr_t grabglobalstateindex_addr = 0x007AB320;
#define grabglobalstateindex_CCV __thiscall

	static constexpr std::uintptr_t growci_addr = 0x01558EE0;
#define growci_CCV __cdecl

	static constexpr std::uintptr_t hashnum_addr = 0x01570380;
#define hashnum_CCV __cdecl

	static constexpr std::uintptr_t index2adr_addr = 0x01555840;
#define index2adr_CCV __cdecl

	static constexpr std::uintptr_t propagateall_addr = 0x0156ECB0;
#define propagateall_CCV __cdecl

	static constexpr std::uintptr_t propagatemark_addr = 0x0156EEC0;
#define propagatemark_CCV __cdecl

	static constexpr std::uintptr_t sweeplist_addr = 0x0156F4C0;
#define sweeplist_CCV __cdecl

	static constexpr std::uintptr_t luaopen_base_addr = 0x01565560;
#define luaopen_base_CCV __cdecl

	static constexpr std::uintptr_t luaopen_table_addr = 0x01565CA0;
#define luaopen_table_CCV __cdecl

	static constexpr std::uintptr_t luaopen_bit32_addr = 0x0156BCA0;
#define luaopen_bit32_CCV __cdecl

	static constexpr std::uintptr_t lua_call_addr = 0x01555960;
#define lua_call_CCV __cdecl

	static constexpr std::uintptr_t lua_checkstack_addr = 0x01556CD0;
#define lua_checkstack_CCV __cdecl

	static constexpr std::uintptr_t lua_close_addr = 0x015639A0;
#define lua_close_CCV __cdecl

	static constexpr std::uintptr_t lua_concat_addr = 0x01555A70;
#define lua_concat_CCV __cdecl

	static constexpr std::uintptr_t lua_createtable_addr = 0x01555B20;
#define lua_createtable_CCV __cdecl

	static constexpr std::uintptr_t lua_error_addr = 0x01555C50;
#define lua_error_CCV __thiscall

	static constexpr std::uintptr_t lua_freeobj_addr = 0x0156E3A0;
#define lua_freeobj_CCV __cdecl

	static constexpr std::uintptr_t lua_gc_addr = 0x01555C60;
#define lua_gc_CCV __cdecl

	static constexpr std::uintptr_t lua_getargument_addr = 0x01564470;
#define lua_getargument_CCV __cdecl

	static constexpr std::uintptr_t lua_getfenv_addr = 0x01555D80;
#define lua_getfenv_CCV __cdecl

	static constexpr std::uintptr_t lua_getfield_addr = 0x01555E20;
#define lua_getfield_CCV __stdcall

	static constexpr std::uintptr_t lua_getinfo_addr = 0x01564540;
#define lua_getinfo_CCV __cdecl

	static constexpr std::uintptr_t lua_getlocal_addr = 0x01564620;
#define lua_getlocal_CCV __cdecl

	static constexpr std::uintptr_t lua_getmetatable_addr = 0x01555ED0;
#define lua_getmetatable_CCV __fastcall

	static constexpr std::uintptr_t lua_gettable_addr = 0x01555F90;
#define lua_gettable_CCV __cdecl

	static constexpr std::uintptr_t lua_gettop_addr = 0x01556010;
#define lua_gettop_CCV __cdecl

	static constexpr std::uintptr_t lua_getupvalue_addr = 0x01556030;
#define lua_getupvalue_CCV __cdecl

	static constexpr std::uintptr_t lua_insert_addr = 0x015560C0;
#define lua_insert_CCV __cdecl

	static constexpr std::uintptr_t lua_iscfunction_addr = 0x015561A0;
#define lua_iscfunction_CCV __cdecl

	static constexpr std::uintptr_t lua_isnumber_addr = 0x015561F0;
#define lua_isnumber_CCV __cdecl

	static constexpr std::uintptr_t lua_isstring_addr = 0x01556250;
#define lua_isstring_CCV __cdecl

	static constexpr std::uintptr_t lua_isuserdata_addr = 0x01556150;
#define lua_isuserdata_CCV __cdecl

	static constexpr std::uintptr_t lua_lessthan_addr = 0x015562A0;
#define lua_lessthan_CCV __cdecl

	static constexpr std::uintptr_t lua_newstate_addr = 0x015639D0;
#define lua_newstate_CCV __cdecl

	static constexpr std::uintptr_t lua_newthread_addr = 0x01556350;
#define lua_newthread_CCV __cdecl

	static constexpr std::uintptr_t lua_newuserdata_addr = 0x015563E0;
#define lua_newuserdata_CCV __cdecl

	static constexpr std::uintptr_t lua_next_addr = 0x01556460;
#define lua_next_CCV __cdecl

	static constexpr std::uintptr_t lua_objlen_addr = 0x015564F0;
#define lua_objlen_CCV __cdecl

	static constexpr std::uintptr_t lua_pcall_addr = 0x015565D0;
#define lua_pcall_CCV __cdecl

	static constexpr std::uintptr_t lua_pushboolean_addr = 0x01556690;
#define lua_pushboolean_CCV __cdecl

	static constexpr std::uintptr_t lua_pushcclosure_addr = 0x015566E0;
#define lua_pushcclosure_CCV __fastcall

	static constexpr std::uintptr_t lua_pushfstring_addr = 0x015567C0;
#define lua_pushfstring_CCV __cdecl

	static constexpr std::uintptr_t lua_pushinteger_addr = 0x01556830;
#define lua_pushinteger_CCV __cdecl

	static constexpr std::uintptr_t lua_pushlightuserdata_addr = 0x01556890;
#define lua_pushlightuserdata_CCV __cdecl

	static constexpr std::uintptr_t lua_pushlstring_addr = 0x015568E0;
#define lua_pushlstring_CCV __cdecl

	static constexpr std::uintptr_t lua_pushnil_addr = 0x01556960;
#define lua_pushnil_CCV __cdecl

	static constexpr std::uintptr_t lua_pushnumber_addr = 0x015569B0;
#define lua_pushnumber_CCV __cdecl

	static constexpr std::uintptr_t lua_pushstring_addr = 0x01556A10;
#define lua_pushstring_CCV __fastcall

	static constexpr std::uintptr_t lua_pushthread_addr = 0x01556AB0;
#define lua_pushthread_CCV __cdecl

	static constexpr std::uintptr_t lua_pushvalue_addr = 0x01556B80;
#define lua_pushvalue_CCV __stdcall

	static constexpr std::uintptr_t lua_pushvfstring_addr = 0x01556C60;
#define lua_pushvfstring_CCV __cdecl

	static constexpr std::uintptr_t lua_rawequal_addr = 0x01556D40;
#define lua_rawequal_CCV __cdecl

	static constexpr std::uintptr_t lua_rawget_addr = 0x01556DC0;
#define lua_rawget_CCV __cdecl

	static constexpr std::uintptr_t lua_rawgeti_addr = 0x01556EF0;
#define lua_rawgeti_CCV __cdecl

	static constexpr std::uintptr_t lua_rawset_addr = 0x01556F70;
#define lua_rawset_CCV __cdecl

	static constexpr std::uintptr_t lua_rawseti_addr = 0x01557040;
#define lua_rawseti_CCV __cdecl

	static constexpr std::uintptr_t lua_rawvalue_addr = 0x01555910;
#define lua_rawvalue_CCV __cdecl

	static constexpr std::uintptr_t lua_remove_addr = 0x01557110;
#define lua_remove_CCV __cdecl

	static constexpr std::uintptr_t lua_replace_addr = 0x015571A0;
#define lua_replace_CCV __cdecl

	static constexpr std::uintptr_t lua_resume_addr = 0x01559460;
#define lua_resume_CCV __cdecl

	static constexpr std::uintptr_t lua_setfenv_addr = 0x015572B0;
#define lua_setfenv_CCV __cdecl

	static constexpr std::uintptr_t lua_setfield_addr = 0x01557380;
#define lua_setfield_CCV __cdecl

	static constexpr std::uintptr_t lua_setlocal_addr = 0x01564700;
#define lua_setlocal_CCV __cdecl

	static constexpr std::uintptr_t lua_setmetatable_addr = 0x01557430;
#define lua_setmetatable_CCV __cdecl

	static constexpr std::uintptr_t lua_setreadonly_addr = 0x01557540;
#define lua_setreadonly_CCV __cdecl

	static constexpr std::uintptr_t lua_setsafeenv_addr = 0x015575B0;
#define lua_setsafeenv_CCV __cdecl

	static constexpr std::uintptr_t lua_settable_addr = 0x01557620;
#define lua_settable_CCV __cdecl

	static constexpr std::uintptr_t lua_settop_addr = 0x015576A0;
#define lua_settop_CCV __fastcall

	static constexpr std::uintptr_t lua_setupvalue_addr = 0x01557720;
#define lua_setupvalue_CCV __cdecl

	static constexpr std::uintptr_t lua_toboolean_addr = 0x015577E0;
#define lua_toboolean_CCV __cdecl

	static constexpr std::uintptr_t lua_tointeger_addr = 0x01557840;
#define lua_tointeger_CCV __cdecl

	static constexpr std::uintptr_t lua_tolstring_addr = 0x015578C0;
#define lua_tolstring_CCV __fastcall

	static constexpr std::uintptr_t lua_tonumber_addr = 0x015579F0;
#define lua_tonumber_CCV __cdecl

	static constexpr std::uintptr_t lua_topointer_addr = 0x01557A80;
#define lua_topointer_CCV __cdecl

	static constexpr std::uintptr_t lua_tostring_addr = 0x01557B40;
#define lua_tostring_CCV __cdecl

	static constexpr std::uintptr_t lua_tothread_addr = 0x01557BE0;
#define lua_tothread_CCV __cdecl

	static constexpr std::uintptr_t lua_tounsignedx_addr = 0x01557C30;
#define lua_tounsignedx_CCV __cdecl

	static constexpr std::uintptr_t lua_touserdata_addr = 0x01557CC0;
#define lua_touserdata_CCV __cdecl

	static constexpr std::uintptr_t lua_type_addr = 0x01557DB0;
#define lua_type_CCV __cdecl

	static constexpr std::uintptr_t lua_typename_addr = 0x01557DF0;
#define lua_typename_CCV __cdecl

	static constexpr std::uintptr_t lua_xmove_addr = 0x01557E60;
#define lua_xmove_CCV __cdecl

	static constexpr std::uintptr_t lua_yeild_addr = 0x015596C0;
#define lua_yeild_CCV __cdecl

	static constexpr std::uintptr_t luaa_pushobject_addr = 0x015558F0;
#define luaa_pushobject_CCV __cdecl

	static constexpr std::uintptr_t luab_auxwrap_addr = 0x01565AA0;
#define luab_auxwrap_CCV __cdecl

	static constexpr std::uintptr_t luac_barrierback_addr = 0x0156E420;
#define luac_barrierback_CCV __cdecl

	static constexpr std::uintptr_t luac_barrierf_addr = 0x0156E440;
#define luac_barrierf_CCV __cdecl

	static constexpr std::uintptr_t luac_fullgc_addr = 0x0156E720;
#define luac_fullgc_CCV __cdecl

	static constexpr std::uintptr_t luac_link_addr = 0x0156E810;
#define luac_link_CCV __cdecl

	static constexpr std::uintptr_t luac_linkupval_addr = 0x0156E840;
#define luac_linkupval_CCV __cdecl

	static constexpr std::uintptr_t luac_step_addr = 0x0156E8C0;
#define luac_step_CCV __cdecl

	static constexpr std::uintptr_t luad_call_addr = 0x01558E40;
#define luad_call_CCV __cdecl

	static constexpr std::uintptr_t luad_growstack_addr = 0x01558F40;
#define luad_growstack_CCV __cdecl

	static constexpr std::uintptr_t luad_pcall_addr = 0x01558F70;
#define luad_pcall_CCV __cdecl

	static constexpr std::uintptr_t luad_poscall_addr = 0x01562DE0;
#define luad_poscall_CCV __cdecl

	static constexpr std::uintptr_t luad_precall_addr = 0x01562E60;
#define luad_precall_CCV __cdecl

	static constexpr std::uintptr_t luad_rawrunprotected_addr = 0x01559050;
#define luad_rawrunprotected_CCV __cdecl

	static constexpr std::uintptr_t luad_reallocci_addr = 0x01559190;
#define luad_reallocci_CCV __cdecl

	static constexpr std::uintptr_t luad_reallocstack_addr = 0x01559210;
#define luad_reallocstack_CCV __cdecl

	static constexpr std::uintptr_t luad_seterrorObj_addr = 0x01559320;
#define luad_seterrorObj_CCV __cdecl

	static constexpr std::uintptr_t luad_throw_addr = 0x015593B0;
#define luad_throw_CCV __fastcall

	static constexpr std::uintptr_t luae_freethread_addr = 0x01563890;
#define luae_freethread_CCV __cdecl

	static constexpr std::uintptr_t luae_newthread_addr = 0x01563910;
#define luae_newthread_CCV __cdecl

	static constexpr std::uintptr_t luaf_close_addr = 0x0156F950;
#define luaf_close_CCV __cdecl

	static constexpr std::uintptr_t luaf_findupval_addr = 0x0156F9E0;
#define luaf_findupval_CCV __cdecl

	static constexpr std::uintptr_t luaf_freeproto_addr = 0x0156FAD0;
#define luaf_freeproto_CCV __cdecl

	static constexpr std::uintptr_t luaf_newcclosure_addr = 0x0156FC50;
#define luaf_newcclosure_CCV __cdecl

	static constexpr std::uintptr_t luaf_newlclosure_addr = 0x0156FCB0;
#define luaf_newlclosure_CCV __cdecl

	static constexpr std::uintptr_t luaf_newproto_addr = 0x0156FD20;
#define luaf_newproto_CCV __cdecl

	static constexpr std::uintptr_t luag_aritherror_addr = 0x01564080;
#define luag_aritherror_CCV __cdecl

	static constexpr std::uintptr_t luag_breakpoint_addr = 0x015640F0;
#define luag_breakpoint_CCV __cdecl

	static constexpr std::uintptr_t luag_concaterror_addr = 0x01564220;
#define luag_concaterror_CCV __cdecl

	static constexpr std::uintptr_t luag_forerrorl_addr = 0x01564260;
#define luag_forerrorl_CCV __cdecl

	static constexpr std::uintptr_t luag_getline_addr = 0x01564290;
#define luag_getline_CCV __cdecl

	static constexpr std::uintptr_t luag_indexerror_addr = 0x015642D0;
#define luag_indexerror_CCV __cdecl

	static constexpr std::uintptr_t luag_ordererror_addr = 0x01564380;
#define luag_ordererror_CCV __cdecl

	static constexpr std::uintptr_t luag_runerror_addr = 0x01564410;
#define luag_runerror_CCV __cdecl

	static constexpr std::uintptr_t luag_typeerror_addr = 0x01572950;
#define luag_typeerror_CCV __cdecl

	static constexpr std::uintptr_t luah_clone_addr = 0x01570460;
#define luah_clone_CCV __cdecl

	static constexpr std::uintptr_t luah_free_addr = 0x0156FFD0;
#define luah_free_CCV __cdecl

	static constexpr std::uintptr_t luah_get_addr = 0x015705F0;
#define luah_get_CCV __cdecl

	static constexpr std::uintptr_t luah_getn_addr = 0x015706A0;
#define luah_getn_CCV __cdecl

	static constexpr std::uintptr_t luah_getnum_addr = 0x01570720;
#define luah_getnum_CCV __cdecl

	static constexpr std::uintptr_t luah_getstr_addr = 0x01570800;
#define luah_getstr_CCV __cdecl

	static constexpr std::uintptr_t luah_new_addr = 0x01570860;
#define luah_new_CCV __cdecl

	static constexpr std::uintptr_t luah_next_addr = 0x015708D0;
#define luah_next_CCV __cdecl

	static constexpr std::uintptr_t luah_resizearray_addr = 0x01570AB0;
#define luah_resizearray_CCV __cdecl

	static constexpr std::uintptr_t luah_set_addr = 0x01570B00;
#define luah_set_CCV __cdecl

	static constexpr std::uintptr_t luah_setnum_addr = 0x01570C20;
#define luah_setnum_CCV __cdecl

	static constexpr std::uintptr_t luah_setstr_addr = 0x01570C90;
#define luah_setstr_CCV __cdecl

	static constexpr std::uintptr_t lual_addlstring_addr = 0x01558010;
#define lual_addlstring_CCV __cdecl

	static constexpr std::uintptr_t lual_addvalue_addr = 0x015580F0;
#define lual_addvalue_CCV __cdecl

	static constexpr std::uintptr_t lual_argerror_addr = 0x01558180;
#define lual_argerror_CCV __cdecl

	static constexpr std::uintptr_t lual_buffinit_addr = 0x01558200;
#define lual_buffinit_CCV __cdecl

	static constexpr std::uintptr_t lual_checkany_addr = 0x01558300;
#define lual_checkany_CCV __cdecl

	static constexpr std::uintptr_t lual_checkinteger_addr = 0x01558340;
#define lual_checkinteger_CCV __cdecl

	static constexpr std::uintptr_t lual_checklstring_addr = 0x01558370;
#define lual_checklstring_CCV __cdecl

	static constexpr std::uintptr_t lual_checknumber_addr = 0x015583A0;
#define lual_checknumber_CCV __cdecl

	static constexpr std::uintptr_t lual_checkstack_addr = 0x015583D0;
#define lual_checkstack_CCV __thiscall

	static constexpr std::uintptr_t lual_checktype_addr = 0x01558410;
#define lual_checktype_CCV __cdecl

	static constexpr std::uintptr_t lual_checkunsigned_addr = 0x01558440;
#define lual_checkunsigned_CCV __cdecl

	static constexpr std::uintptr_t lual_error_addr = 0x01558470;
#define lual_error_CCV __cdecl

	static constexpr std::uintptr_t lual_findtable_addr = 0x01558570;
#define lual_findtable_CCV __cdecl

	static constexpr std::uintptr_t lual_getmetafield_addr = 0x01558660;
#define lual_getmetafield_CCV __cdecl

	static constexpr std::uintptr_t lual_newmetatable_addr = 0x015586C0;
#define lual_newmetatable_CCV __cdecl

	static constexpr std::uintptr_t lual_optinteger_addr = 0x01558730;
#define lual_optinteger_CCV __cdecl

	static constexpr std::uintptr_t lual_optlstring_addr = 0x01558780;
#define lual_optlstring_CCV __cdecl

	static constexpr std::uintptr_t lual_prepbuffer_addr = 0x01558860;
#define lual_prepbuffer_CCV __cdecl

	static constexpr std::uintptr_t lual_pushresult_addr = 0x01558940;
#define lual_pushresult_CCV __cdecl

	static constexpr std::uintptr_t lual_ref_addr = 0x01558A30;
#define lual_ref_CCV __cdecl

	static constexpr std::uintptr_t lual_register_addr = 0x01558AF0;
#define lual_register_CCV __cdecl

	static constexpr std::uintptr_t lual_typeerror_addr = 0x01558C10;
#define lual_typeerror_CCV __cdecl

	static constexpr std::uintptr_t lual_unref_addr = 0x01558CB0;
#define lual_unref_CCV __cdecl

	static constexpr std::uintptr_t lual_where_addr = 0x01558D10;
#define lual_where_CCV __cdecl

	static constexpr std::uintptr_t luam_realloc_addr = 0x01572F41;
#define luam_realloc_CCV __cdecl

	static constexpr std::uintptr_t luam_realloc__addr = 0x01572CF0;
#define luam_realloc__CCV __cdecl

	static constexpr std::uintptr_t luam_toobig_addr = 0x01572F50;
#define luam_toobig_CCV __thiscall

	static constexpr std::uintptr_t luao_chunkid_addr = 0x015632F0;
#define luao_chunkid_CCV __cdecl

	static constexpr std::uintptr_t luao_pushfstring_addr = 0x01563470;
#define luao_pushfstring_CCV __cdecl

	static constexpr std::uintptr_t luao_pushvfstring_addr = 0x01563510;
#define luao_pushvfstring_CCV __cdecl

	static constexpr std::uintptr_t luao_rawequalKey_addr = 0x015635B0;
#define luao_rawequalKey_CCV __cdecl

	static constexpr std::uintptr_t luao_rawequalobj_addr = 0x01563630;
#define luao_rawequalobj_CCV __cdecl

	static constexpr std::uintptr_t luao_str2d_addr = 0x015636B0;
#define luao_str2d_CCV __cdecl

	static constexpr std::uintptr_t luas_newlstr_addr = 0x01570050;
#define luas_newlstr_CCV __stdcall

	static constexpr std::uintptr_t luas_newudata_addr = 0x01570230;
#define luas_newudata_CCV __cdecl

	static constexpr std::uintptr_t luas_resize_addr = 0x01570280;
#define luas_resize_CCV __cdecl

	static constexpr std::uintptr_t luat_gettm_addr = 0x01572920;
#define luat_gettm_CCV __cdecl

	static constexpr std::uintptr_t luat_objtypename_addr = 0x01572A70;
#define luat_objtypename_CCV __cdecl

	static constexpr std::uintptr_t luau_backtrace_addr = 0x01561C30;
#define luau_backtrace_CCV __cdecl

	static constexpr std::uintptr_t luau_betavm_addr = 0x0155DAF0;
#define luau_betavm_CCV __cdecl

	static constexpr std::uintptr_t luau_callhook_addr = 0x015621D0;
#define luau_callhook_CCV __cdecl

	static constexpr std::uintptr_t luau_calltm_addr = 0x015620B0;
#define luau_calltm_CCV __cdecl

	static constexpr std::uintptr_t luau_deserialize_addr = 0x01562350;
#define luau_deserialize_CCV __cdecl

	static constexpr std::uintptr_t luau_execute_addr = 0x0158F2D0;
#define luau_execute_CCV __cdecl

	static constexpr std::uintptr_t luau_loopforg_addr = 0x01562D80;
#define luau_loopforg_CCV __cdecl

	static constexpr std::uintptr_t luau_prepareforn_addr = 0x01562FE0;
#define luau_prepareforn_CCV __cdecl

	static constexpr std::uintptr_t luau_resolveimport_addr = 0x01563080;
#define luau_resolveimport_CCV __cdecl

	static constexpr std::uintptr_t luau_tryfunctm_addr = 0x01563220;
#define luau_tryfunctm_CCV __cdecl

	static constexpr std::uintptr_t luav_concat_addr = 0x01571950;
#define luav_concat_CCV __cdecl

	static constexpr std::uintptr_t luav_doarith_addr = 0x01571D70;
#define luav_doarith_CCV __thiscall

	static constexpr std::uintptr_t luav_dolen_addr = 0x01576590;
#define luav_dolen_CCV __cdecl

	static constexpr std::uintptr_t luav_execute_addr = 0x01559A10;
#define luav_execute_CCV __cdecl

	static constexpr std::uintptr_t luav_gettable_addr = 0x01572470;
#define luav_gettable_CCV __cdecl

	static constexpr std::uintptr_t luav_gettable_opt_addr = 0x01572450;
#define luav_gettable_opt_CCV __cdecl

	static constexpr std::uintptr_t luav_lessequal_addr = 0x01572580;
#define luav_lessequal_CCV __cdecl

	static constexpr std::uintptr_t luav_lessthan_addr = 0x01572620;
#define luav_lessthan_CCV __cdecl

	static constexpr std::uintptr_t luav_settable_addr = 0x015726C0;
#define luav_settable_CCV __cdecl

	static constexpr std::uintptr_t luav_tonumber_addr = 0x01572850;
#define luav_tonumber_CCV __cdecl

	static constexpr std::uintptr_t luav_tostring_addr = 0x015728B0;
#define luav_tostring_CCV __cdecl

	static constexpr std::uintptr_t luavm_compile_addr = 0x006E4DE0;
#define luavm_compile_CCV __cdecl

	static constexpr std::uintptr_t luavm_load_addr = 0x006E5320;
#define luavm_load_CCV __cdecl

	static constexpr std::uintptr_t luax_init_addr = 0x015729C0;
#define luax_init_CCV __cdecl

	static constexpr std::uintptr_t luaz_openspace_addr = 0x01576600;
#define luaz_openspace_CCV __cdecl

	static constexpr std::uintptr_t mainposition_addr = 0x01570CD0;
#define mainposition_CCV __cdecl

	static constexpr std::uintptr_t markmt_addr = 0x0156EB30;
#define markmt_CCV __cdecl

	static constexpr std::uintptr_t markroot_addr = 0x0156EC20;
#define markroot_CCV __cdecl

	static constexpr std::uintptr_t match_addr = 0x01569790;
#define match_CCV __cdecl

	static constexpr std::uintptr_t newkey_addr = 0x01570E10;
#define newkey_CCV __cdecl

	static constexpr std::uintptr_t print_addr = 0x00673950;
#define print_CCV __cdecl

	static constexpr std::uintptr_t push_captures_addr = 0x0156A1E0;
#define push_captures_CCV __cdecl

	static constexpr std::uintptr_t push_instance_addr = 0x008795D0;
#define push_instance_CCV __cdecl

	static constexpr std::uintptr_t rbx_get_property_addr = 0x00877570;
#define rbx_get_property_CCV __thiscall

	static constexpr std::uintptr_t rbx_network_replicator_onreceive_addr = 0x0137B9D0;
#define rbx_network_replicator_onreceive_CCV __fastcall

	static constexpr std::uintptr_t rbx_network_physicssenders2_sendpacket_addr = 0x0143EB10;
#define rbx_network_physicssenders2_sendpacket_CCV __thiscall

	static constexpr std::uintptr_t rbx_disable_report_screenshot_gl2_addr = 0x01171FA0;
#define rbx_disable_report_screenshot_gl2_CCV __cdecl

	static constexpr std::uintptr_t rbx_disable_report_screenshot_gl_addr = 0x01171F80;
#define rbx_disable_report_screenshot_gl_CCV __cdecl

	static constexpr std::uintptr_t rbx_disable_report_screenshot_metal_addr = 0x01171FC0;
#define rbx_disable_report_screenshot_metal_CCV __cdecl

	static constexpr std::uintptr_t rbx_disable_report_screenshot_vulkan_addr = 0x01171FE0;
#define rbx_disable_report_screenshot_vulkan_CCV __cdecl

	static constexpr std::uintptr_t rbx_disable_report_screenshot_d3d_addr = 0x01171F60;
#define rbx_disable_report_screenshot_d3d_CCV __cdecl

	static constexpr std::uintptr_t rbx_setsimulationradius_addr = 0x0143F760;
#define rbx_setsimulationradius_CCV __thiscall

	static constexpr std::uintptr_t rbx_network_clientreplicator_processtag_addr = 0x013D0AC0;
#define rbx_network_clientreplicator_processtag_CCV __stdcall

	static constexpr std::uintptr_t rbx_corescript_getluavmcorescriptfilepath_addr = 0x00AFC630;
#define rbx_corescript_getluavmcorescriptfilepath_CCV __cdecl

	static constexpr std::uintptr_t rbx_datastore_runtransformfunction_addr = 0x00CF9E60;
#define rbx_datastore_runtransformfunction_CCV __stdcall

	static constexpr std::uintptr_t rbx_datamodel_dodatamodelsetup_addr = 0x00707AF0;
#define rbx_datamodel_dodatamodelsetup_CCV __cdecl

	static constexpr std::uintptr_t rbx_debugvalueconverte_userdatatostring_addr = 0x00C375D0;
#define rbx_debugvalueconverte_userdatatostring_CCV __cdecl

	static constexpr std::uintptr_t rbx_deu_uploadcrasheventfile_addr = 0x00633520;
#define rbx_deu_uploadcrasheventfile_CCV __cdecl

	static constexpr std::uintptr_t rbx_lm_reporterror_addr = 0x00637E00;
#define rbx_lm_reporterror_CCV __cdecl

	static constexpr std::uintptr_t rbx_lua_dumpthreadrefcounts_addr = 0x0084AC70;
#define rbx_lua_dumpthreadrefcounts_CCV __cdecl

	static constexpr std::uintptr_t rbx_network_replicator_processdeserializedpacket_addr = 0x0137F8C0;
#define rbx_network_replicator_processdeserializedpacket_CCV __thiscall

	static constexpr std::uintptr_t rbx_network_server_registerlegalscript_addr = 0x013AA5B0;
#define rbx_network_server_registerlegalscript_CCV __thiscall

	static constexpr std::uintptr_t rbx_rcr_processexception_addr = 0x00637CA0;
#define rbx_rcr_processexception_CCV __stdcall

	static constexpr std::uintptr_t raknet_rakpeer_runupdatecycle_addr = 0x013B1450;
#define raknet_rakpeer_runupdatecycle_CCV __thiscall

	static constexpr std::uintptr_t rbx_sc_closestate_addr = 0x007A6680;
#define rbx_sc_closestate_CCV __stdcall

	static constexpr std::uintptr_t rbx_taskscheduler_getlastcycletimestamp_addr = 0x0103CA70;
#define rbx_taskscheduler_getlastcycletimestamp_CCV __cdecl

	static constexpr std::uintptr_t rbx_lua_bridge_on_index_addr = 0x008790D0;
#define rbx_lua_bridge_on_index_CCV __cdecl

	static constexpr std::uintptr_t rbx_security_context_current_addr = 0x01554010;
#define rbx_security_context_current_CCV __thiscall

	static constexpr std::uintptr_t rbx_security_impersonator_impersonator_addr = 0x01553F40;
#define rbx_security_impersonator_impersonator_CCV __stdcall

	static constexpr std::uintptr_t rbx_datamodel_getjobsinfo_addr = 0x0070B570;
#define rbx_datamodel_getjobsinfo_CCV __thiscall

	static constexpr std::uintptr_t rbx_sc_crash_addr = 0x007A7130;
#define rbx_sc_crash_CCV __cdecl

	static constexpr std::uintptr_t rbx_sc_interrupt_addr = 0x007AD2E0;
#define rbx_sc_interrupt_CCV __cdecl

	static constexpr std::uintptr_t rbx_sc_loadstring_addr = 0x007ADCE0;
#define rbx_sc_loadstring_CCV __cdecl

	static constexpr std::uintptr_t rbx_sc_scriptcontext_addr = 0x007A0300;
#define rbx_sc_scriptcontext_CCV __thiscall

	static constexpr std::uintptr_t rbx_sc_startscript_addr = 0x007BA1A0;
#define rbx_sc_startscript_CCV __stdcall

	static constexpr std::uintptr_t rbx_sc_watchdog_addr = 0x007BBEA0;
#define rbx_sc_watchdog_CCV __thiscall

	static constexpr std::uintptr_t rbx_scriptcontext_getcontext_addr = 0x007C5B20;
#define rbx_scriptcontext_getcontext_CCV __cdecl

	static constexpr std::uintptr_t rbx_scriptcontext_debuggermanager_addr = 0x007A7930;
#define rbx_scriptcontext_debuggermanager_CCV __cdecl

	static constexpr std::uintptr_t rbx_scriptcontext_pluginmanager_addr = 0x007B0DD0;
#define rbx_scriptcontext_pluginmanager_CCV __cdecl

	static constexpr std::uintptr_t rbx_scriptcontext_usersettings_addr = 0x007BBA30;
#define rbx_scriptcontext_usersettings_CCV __cdecl

	static constexpr std::uintptr_t rbx_scriptcontext_settings_addr = 0x007B9490;
#define rbx_scriptcontext_settings_CCV __cdecl

	static constexpr std::uintptr_t rbx_scriptcontext_getglobalstate_addr = 0x007AB360;
#define rbx_scriptcontext_getglobalstate_CCV __cdecl

	static constexpr std::uintptr_t rbx_modulescript_vmstate_addr = 0x00C4B0D0;
#define rbx_modulescript_vmstate_CCV __stdcall

	static constexpr std::uintptr_t rbx_modulescript_pervmstate_setcompletedsuccess_addr = 0x00C4ADB0;
#define rbx_modulescript_pervmstate_setcompletedsuccess_CCV __thiscall

	static constexpr std::uintptr_t rbx_modulescript_pervmstate_getandclearyieldedimporters_addr = 0x00C4AB20;
#define rbx_modulescript_pervmstate_getandclearyieldedimporters_CCV __thiscall

	static constexpr std::uintptr_t rbx_scriptcontext_requiremodulescriptsuccesscontinuation_addr = 0x007B6EC0;
#define rbx_scriptcontext_requiremodulescriptsuccesscontinuation_CCV __cdecl

	static constexpr std::uintptr_t rbx_setthreadname_addr = 0x0103C460;
#define rbx_setthreadname_CCV __cdecl

	static constexpr std::uintptr_t rbx_serializer_loadinstances_addr = 0x00889FD0;
#define rbx_serializer_loadinstances_CCV __cdecl

	static constexpr std::uintptr_t rbx_scriptcontext_printcallstack_addr = 0x007B1030;
#define rbx_scriptcontext_printcallstack_CCV __cdecl

	static constexpr std::uintptr_t rbx_serializer_loadinstances_long_addr = 0x00889FF0;
#define rbx_serializer_loadinstances_long_CCV __cdecl

	static constexpr std::uintptr_t rbx_standardout_printwithlink_addr = 0x00673650;
#define rbx_standardout_printwithlink_CCV __cdecl

	static constexpr std::uintptr_t rbx_ts_startscript_addr = 0x00B46D80;
#define rbx_ts_startscript_CCV __thiscall

	static constexpr std::uintptr_t rbx_ws_getrealphysicsfps_addr = 0x009483F0;
#define rbx_ws_getrealphysicsfps_CCV __thiscall

	static constexpr std::uintptr_t rbxcrash_addr = 0x01773FF0;
#define rbxcrash_CCV __cdecl

	static constexpr std::uintptr_t reallymarkobject_addr = 0x0156F130;
#define reallymarkobject_CCV __cdecl

	static constexpr std::uintptr_t rehash_addr = 0x01570FC0;
#define rehash_CCV __cdecl

	static constexpr std::uintptr_t reportError_addr = 0x007B4EA0;
#define reportError_CCV __thiscall

	static constexpr std::uintptr_t resize_addr = 0x01571220;
#define resize_CCV __cdecl

	static constexpr std::uintptr_t resume_addr = 0x01559730;
#define resume_CCV __cdecl

	static constexpr std::uintptr_t resume_error_addr = 0x01559810;
#define resume_error_CCV __cdecl

	static constexpr std::uintptr_t retcheck_addr = 0x006E5720;
#define retcheck_CCV __fastcall

	static constexpr std::uintptr_t robloxextraspace__robloxextraspace_addr = 0x007A4150;
#define robloxextraspace__robloxextraspace_CCV __thiscall

	static constexpr std::uintptr_t sandboxthread_addr = 0x007B92D0;
#define sandboxthread_CCV __cdecl

	static constexpr std::uintptr_t setarrayvector_addr = 0x01571400;
#define setarrayvector_CCV __cdecl

	static constexpr std::uintptr_t setnodevector_addr = 0x01571480;
#define setnodevector_CCV __cdecl

	static constexpr std::uintptr_t singlestep_addr = 0x0156F2D0;
#define singlestep_CCV __cdecl

	static constexpr std::uintptr_t spawn_addr = 0x007B9660;
#define spawn_CCV __cdecl

	static constexpr std::uintptr_t stack_init_addr = 0x01563D10;
#define stack_init_CCV __cdecl

	static constexpr std::uintptr_t str_find_aux_addr = 0x0156A520;
#define str_find_aux_CCV __cdecl

	static constexpr std::uintptr_t tag_error_addr = 0x01558D80;
#define tag_error_CCV __cdecl

	static constexpr std::uintptr_t trustCheck_addr = 0x016EAC50;
#define trustCheck_CCV __cdecl

	static constexpr std::uintptr_t taskscheduler_addr = 0x0103CC90;
#define taskscheduler_CCV __cdecl

	static constexpr std::uintptr_t unbound_search_addr = 0x01571550;
#define unbound_search_CCV __cdecl

	static constexpr std::uintptr_t vm_invoker_addr = 0x01562330;
#define vm_invoker_CCV __thiscall

	static constexpr std::uintptr_t cum_check_bypass = 0x016E9BB7;

	static constexpr std::uintptr_t callcheck = 0x005FC670;

	static constexpr std::uintptr_t retcheckflag1 = 0x02A6114C;

	static constexpr std::uintptr_t retcheckflag2 = 0x02A6123C;

	static constexpr std::uintptr_t xorconst = 0x029E6FC0;

	static constexpr std::uintptr_t luao_nilobject = 0x02252718;

	static constexpr std::uintptr_t luat_typenames = 0x022540B0;

	static constexpr std::uintptr_t kname = 0x02799A40;

	static constexpr std::uintptr_t op_index = 0x0155D844;

	static constexpr std::uintptr_t op_case_table = 0x0155D970;

	static constexpr std::uintptr_t retcheck_jmp = 0x006E5740;

	static constexpr std::uintptr_t trustcheck_bypass1 = 0x02667358;

	static constexpr std::uintptr_t scriptinstance = 0x028340D8;

	static constexpr std::uintptr_t scriptcontext = 0x02057830;

	// Roblox Offsets 
	static constexpr int getnamecallmethod_offset = 104;
	static constexpr int networked_dm = 1184;
	static constexpr int Identity1 = 24;
	static constexpr int Identity2 = 116;

	// Luastate Offsets 
	static constexpr int ls_readonly = 10;
	static constexpr int ls_base_ci = 0;
	static constexpr int ls_end_ci = 0;
	static constexpr int ls_ci = 16;
	static constexpr int ls_saved_pc = 16;
	static constexpr int ls_top = 20;
	static constexpr int ls_base = 12;
	static constexpr int ls_env = 72;
	static constexpr int ls_l_gt = 88;

	// Globalstate Offsets 
	static constexpr int ls_gs_totalbytes = 80;
	static constexpr int ls_gs_gcthreshold = 84;
	static constexpr int ls_gs_gcpause = 68;
	static constexpr int ls_gs_gcstepmul = 76;
	static constexpr int ls_gs_rootgc = 28;
	static constexpr int ls_gs_mainthread = 1392;

	// Closure Offsets 
	static constexpr int ls_closure_nupvalues = 5;
	static constexpr int ls_closure_env = 16;
	static constexpr int ls_closure_isc = 0;

	// Types 
#define R_LUA_TNONE  -1
#define R_LUA_TUSERDATA  6
#define R_LUA_TFUNCTION  8
#define R_LUA_TSTRING  5
#define R_LUA_TBOOLEAN  1
#define R_LUA_TNUMBER  2
#define R_LUA_TTABLE  7
#define R_LUA_TNIL  0
#define R_LUA_TTHREAD  9
#define R_LUA_TVECTOR  3
#define R_LUA_TLIGHTUSERDATA  4
#define R_LUA_TPROTO  10
#define R_LUA_TUPVALUE  11

// Protos 
	static constexpr int proto_k = 28;
	static constexpr int proto_sizek = 76;
	static constexpr int proto_code = 24;
	static constexpr int proto_sizep = 68;
	static constexpr int proto_locvars = 32;
	static constexpr int proto_sizecode = 72;
	static constexpr int proto_sizeupvalues = 64;
	static constexpr int proto_maxstacksize = 81;
	static constexpr int proto_sizelineinfo = 82;
	static constexpr int proto_upvalues = 52;
	static constexpr int proto_size_locvars = 8;
	static constexpr int proto_source = 36;
	static constexpr int proto_numparams = 82;

	DWORD RBX_LuaState(DWORD ScriptContext) { return  *(DWORD*)(ScriptContext + 188) - (ScriptContext + 188); }
	std::uint32_t RBX_GlobalState(std::uint32_t a1) { std::uint32_t  v1 = (a1 + 32) - *reinterpret_cast<std::uint32_t*>((a1 + 32)); return v1; }
	DWORD RBX_SetIdentity(DWORD LS, int identity) { *(DWORD*)(*(DWORD*)(LS + 116) + 24) = identity; return 0; }
	int RBX_ProtoObfuscate(int p, int v) { *(int*)p = p - v; return 0; }
	int RBX_ProtoDeobfuscate(int p) { return *(int*)p + p; }
}




#define Declare(address, returnValue, callingConvention, ...) (returnValue(callingConvention*)(__VA_ARGS__))(retcheckBypass(x(address)))
#define r_lua_tostring(rL,i)	r_lua_tolstring(rL, (i), NULL)
#define r_lua_pop(rL,n)		r_lua_settop(rL, -(n)-1)
#define r_lua_getglobal(rL,s)	r_lua_getfield(rL, LUA_GLOBALSINDEX, (s))
#define r_lua_newtable(rL) r_lua_createtable(rL, 0, 0)
#define x(x) (x - 0x400000 + (DWORD)GetModuleHandleA(0)) // aslr

int GDM;

typedef DWORD(getdatamodel2_CCV* gdm2)();
gdm2 getdatamodel2 = (gdm2)(x(Adresses::getdatamodel2_addr));

typedef DWORD(__thiscall* getdatamodel)(DWORD, DWORD);
getdatamodel r_getdatamodel = (getdatamodel)(x(Adresses::getdatamodel_addr));

typedef int(lual_error_CCV* ee)(int e, const char* n, ...);
static ee r_luaL_error = (ee)x(Adresses::lual_error_addr); // 22

typedef void(lua_getfield_CCV* rgetfield)(DWORD rL, int idx, const char* k);
rgetfield r_lua_getfield = (rgetfield)retcheckBypass(x(Adresses::lua_getfield_addr));

typedef int(lua_pushboolean_CCV* rboolean)(unsigned int, int);
rboolean r_lua_pushboolean = (rboolean)(retcheckBypass(x(Adresses::lua_pushboolean_addr)));

typedef char* (lua_tolstring_CCV* rtolstring)(DWORD rL, int idx, size_t* size);
rtolstring r_lua_tolstring = (rtolstring)(retcheckBypass(x(Adresses::lua_tolstring_addr))); 

typedef bool(lua_toboolean_CCV* toboolean)(DWORD rL, bool idx);
toboolean r_lua_toboolean = (toboolean)(x(Adresses::lua_toboolean_addr));

typedef void(lua_pushvalue_CCV* pushvalue)(DWORD rL, DWORD idx);
pushvalue r_lua_pushvalue = (pushvalue)(retcheckBypass(x(Adresses::lua_pushvalue_addr)));

typedef double(lua_pushnumber_CCV* pushnumber)(DWORD rL, double idx);
pushnumber r_lua_pushnumber = (pushnumber)(retcheckBypass(x(Adresses::lua_pushnumber_addr)));

typedef void(lua_pushstring_CCV* rpushstring)(DWORD rL, const char*);
rpushstring r_lua_pushstring = (rpushstring)(retcheckBypass(x(Adresses::lua_pushstring_addr))); 

typedef int(lua_pcall_CCV* rLua_pcall)(DWORD lst, int nargs, int nresults, int errfunc);
rLua_pcall r_lua_pcall = (rLua_pcall)retcheckBypass(x(Adresses::lua_pcall_addr));

typedef DWORD(lua_next_CCV* next2)(DWORD rL, int idx);
next2 r_lua_next = (next2)(retcheckBypass(x(Adresses::lua_next_addr)));

typedef double(lua_tonumber_CCV* rtonumber)(DWORD, int, int);
rtonumber r_lua_tonumber = (rtonumber)(x(Adresses::lua_tonumber_addr));

typedef void(lua_pushcclosure_CCV* rpushcclosure)(DWORD rL, int fn, int non, int a1, int xd);
rpushcclosure r_lua_pushcclosure = (rpushcclosure)(retcheckBypass(x(Adresses::lua_pushcclosure_addr))); //r_Lua_PushCCloser_Type

typedef void(lua_createtable_CCV* rcreatetable)(DWORD rL, int num, int fix);
rcreatetable r_lua_createtable = (rcreatetable)(retcheckBypass(x(Adresses::lua_createtable_addr)));

typedef DWORD(lua_newthread_CCV* rnewthread)(DWORD);
rnewthread r_lua_newthread = (rnewthread)retcheckBypass(x(Adresses::lua_newthread_addr));

typedef void* (lua_newuserdata_CCV* rnewuserdata)(DWORD, size_t, int);
rnewuserdata r_lua_newuserdata = (rnewuserdata)(retcheckBypass(x(Adresses::lua_newuserdata_addr)));

typedef void(lua_rawgeti_CCV* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti r_lua_rawgeti = (rrawgeti)retcheckBypass(x(Adresses::lua_rawgeti_addr));

typedef void(lua_rawseti_CCV* rrawgeti)(DWORD, DWORD, DWORD);
rrawgeti r_lua_rawseti = (rrawgeti)retcheckBypass(x(Adresses::lua_rawseti_addr));

typedef void* (lua_getmetatable_CCV* rgetmetatable)(DWORD rL, int idx);
rgetmetatable r_lua_getmetatable = (rgetmetatable)(retcheckBypass(x(Adresses::lua_getmetatable_addr)));

typedef int (lua_setmetatable_CCV* rsetmetatable)(DWORD rL, int idx);
rsetmetatable r_lua_setmetatable = (rsetmetatable)(retcheckBypass(x(Adresses::lua_setmetatable_addr)));

typedef int(lua_touserdata_CCV* rtouserdata)(DWORD, int);
rtouserdata r_lua_touserdata = (rtouserdata)(retcheckBypass(x(Adresses::lua_touserdata_addr)));

typedef void(fireclickdetector_CCV* fireclick)(DWORD, float, DWORD);
fireclick FireClick = (fireclick)x(Adresses::fireclickdetector_addr);

typedef DWORD(lua_type_CCV* rtype)(DWORD, int);
rtype r_lua_type = (rtype)(x(Adresses::lua_type_addr));

typedef void* (lua_settable_CCV* rsettable)(DWORD rL, int);
rsettable r_lua_settable = (rsettable)(retcheckBypass(x(Adresses::lua_settable_addr)));

typedef DWORD(lual_ref_CCV* rref)(DWORD, DWORD);
rref r_luaL_ref = (rref)(retcheckBypass(x(Adresses::lual_ref_addr)));

int r_lua_gettop(int rL)
{
	return *(DWORD*)(rL + Adresses::ls_top) - *(DWORD*)(rL + Adresses::ls_base) >> 4;
}

typedef void(lua_settop_CCV* rsettop)(DWORD rL, int idx);
rsettop r_lua_settop = (rsettop)(retcheckBypass(x(Adresses::lua_settop_addr))); 

typedef void(lua_pushnil_CCV* pushnil)(DWORD);
pushnil r_lua_pushnil = (pushnil)(retcheckBypass(x(Adresses::lua_pushnil_addr)));

typedef void(lua_pushlightuserdata_CCV* rpushlight)(DWORD, void*);
rpushlight r_lua_pushlightuserdata = (rpushlight)(retcheckBypass(x(Adresses::lua_pushlightuserdata_addr)));

typedef bool(flog_getvalue_CCV* FLog)(const std::string& name, std::string& value, bool alsoCheckUnknown);
FLog GetValue = reinterpret_cast<FLog>(x(Adresses::flog_getvalue_addr));

typedef bool(flog_setvalue_CCV* SLog)(const std::string& name, const std::string& value, int Type, bool loadedFromServer);
SLog SetValue = reinterpret_cast<SLog>(x(Adresses::flog_setvalue_addr));

typedef uint32_t(index2adr_CCV* T_index2adr)(uint32_t, uint32_t); // Auto updating convention
T_index2adr r_index2adr;

