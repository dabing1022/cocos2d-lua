#include "lua_cocos2dx_gui_auto.hpp"
#include "CocosGUI.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_cocos2dx_ui_LayoutParameter_clone(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LayoutParameter_clone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ui::LayoutParameter* ret = cobj->clone();
        object_to_luaval<cocos2d::ui::LayoutParameter>(tolua_S, "ccui.LayoutParameter",(cocos2d::ui::LayoutParameter*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "clone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_clone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_getLayoutType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LayoutParameter_getLayoutType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getLayoutType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLayoutType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_getLayoutType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_createCloneInstance(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LayoutParameter_createCloneInstance'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ui::LayoutParameter* ret = cobj->createCloneInstance();
        object_to_luaval<cocos2d::ui::LayoutParameter>(tolua_S, "ccui.LayoutParameter",(cocos2d::ui::LayoutParameter*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "createCloneInstance",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_createCloneInstance'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_copyProperties(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LayoutParameter_copyProperties'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LayoutParameter* arg0;

        ok &= luaval_to_object<cocos2d::ui::LayoutParameter>(tolua_S, 2, "ccui.LayoutParameter",&arg0);
        if(!ok)
            return 0;
        cobj->copyProperties(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "copyProperties",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_copyProperties'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.LayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::LayoutParameter* ret = cocos2d::ui::LayoutParameter::create();
        object_to_luaval<cocos2d::ui::LayoutParameter>(tolua_S, "ccui.LayoutParameter",(cocos2d::ui::LayoutParameter*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_LayoutParameter_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::LayoutParameter();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.LayoutParameter");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "LayoutParameter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LayoutParameter_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_LayoutParameter_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (LayoutParameter)");
    return 0;
}

int lua_register_cocos2dx_ui_LayoutParameter(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.LayoutParameter");
    tolua_cclass(tolua_S,"LayoutParameter","ccui.LayoutParameter","",NULL);

    tolua_beginmodule(tolua_S,"LayoutParameter");
        tolua_function(tolua_S,"clone",lua_cocos2dx_ui_LayoutParameter_clone);
        tolua_function(tolua_S,"getLayoutType",lua_cocos2dx_ui_LayoutParameter_getLayoutType);
        tolua_function(tolua_S,"createCloneInstance",lua_cocos2dx_ui_LayoutParameter_createCloneInstance);
        tolua_function(tolua_S,"copyProperties",lua_cocos2dx_ui_LayoutParameter_copyProperties);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_LayoutParameter_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_LayoutParameter_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::LayoutParameter).name();
    g_luaType[typeName] = "ccui.LayoutParameter";
    g_typeCast["LayoutParameter"] = "ccui.LayoutParameter";
    return 1;
}

int lua_cocos2dx_ui_LinearLayoutParameter_setGravity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LinearLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LinearLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LinearLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LinearLayoutParameter_setGravity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LinearGravity arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setGravity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setGravity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LinearLayoutParameter_setGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LinearLayoutParameter_getGravity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LinearLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LinearLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LinearLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LinearLayoutParameter_getGravity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getGravity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getGravity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LinearLayoutParameter_getGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LinearLayoutParameter_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.LinearLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::LinearLayoutParameter* ret = cocos2d::ui::LinearLayoutParameter::create();
        object_to_luaval<cocos2d::ui::LinearLayoutParameter>(tolua_S, "ccui.LinearLayoutParameter",(cocos2d::ui::LinearLayoutParameter*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LinearLayoutParameter_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_LinearLayoutParameter_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LinearLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::LinearLayoutParameter();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.LinearLayoutParameter");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "LinearLayoutParameter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LinearLayoutParameter_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_LinearLayoutParameter_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (LinearLayoutParameter)");
    return 0;
}

int lua_register_cocos2dx_ui_LinearLayoutParameter(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.LinearLayoutParameter");
    tolua_cclass(tolua_S,"LinearLayoutParameter","ccui.LinearLayoutParameter","ccui.LayoutParameter",NULL);

    tolua_beginmodule(tolua_S,"LinearLayoutParameter");
        tolua_function(tolua_S,"setGravity",lua_cocos2dx_ui_LinearLayoutParameter_setGravity);
        tolua_function(tolua_S,"getGravity",lua_cocos2dx_ui_LinearLayoutParameter_getGravity);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_LinearLayoutParameter_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_LinearLayoutParameter_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::LinearLayoutParameter).name();
    g_luaType[typeName] = "ccui.LinearLayoutParameter";
    g_typeCast["LinearLayoutParameter"] = "ccui.LinearLayoutParameter";
    return 1;
}

int lua_cocos2dx_ui_RelativeLayoutParameter_setAlign(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setAlign'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::RelativeAlign arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setAlign(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAlign",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setAlign'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setRelativeToWidgetName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRelativeToWidgetName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getRelativeName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRelativeName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getRelativeToWidgetName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRelativeToWidgetName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setRelativeName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setRelativeName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_getAlign(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::RelativeLayoutParameter*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getAlign'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getAlign();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAlign",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_getAlign'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.RelativeLayoutParameter",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::RelativeLayoutParameter* ret = cocos2d::ui::RelativeLayoutParameter::create();
        object_to_luaval<cocos2d::ui::RelativeLayoutParameter>(tolua_S, "ccui.RelativeLayoutParameter",(cocos2d::ui::RelativeLayoutParameter*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_RelativeLayoutParameter_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::RelativeLayoutParameter* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::RelativeLayoutParameter();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.RelativeLayoutParameter");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "RelativeLayoutParameter",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_RelativeLayoutParameter_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_RelativeLayoutParameter_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (RelativeLayoutParameter)");
    return 0;
}

int lua_register_cocos2dx_ui_RelativeLayoutParameter(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.RelativeLayoutParameter");
    tolua_cclass(tolua_S,"RelativeLayoutParameter","ccui.RelativeLayoutParameter","ccui.LayoutParameter",NULL);

    tolua_beginmodule(tolua_S,"RelativeLayoutParameter");
        tolua_function(tolua_S,"setAlign",lua_cocos2dx_ui_RelativeLayoutParameter_setAlign);
        tolua_function(tolua_S,"setRelativeToWidgetName",lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeToWidgetName);
        tolua_function(tolua_S,"getRelativeName",lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeName);
        tolua_function(tolua_S,"getRelativeToWidgetName",lua_cocos2dx_ui_RelativeLayoutParameter_getRelativeToWidgetName);
        tolua_function(tolua_S,"setRelativeName",lua_cocos2dx_ui_RelativeLayoutParameter_setRelativeName);
        tolua_function(tolua_S,"getAlign",lua_cocos2dx_ui_RelativeLayoutParameter_getAlign);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_RelativeLayoutParameter_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_RelativeLayoutParameter_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::RelativeLayoutParameter).name();
    g_luaType[typeName] = "ccui.RelativeLayoutParameter";
    g_typeCast["RelativeLayoutParameter"] = "ccui.RelativeLayoutParameter";
    return 1;
}

int lua_cocos2dx_ui_Widget_getVirtualRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getVirtualRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getVirtualRenderer();
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getVirtualRenderer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getVirtualRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setSizePercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setSizePercent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setSizePercent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSizePercent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setSizePercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isFlippedX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isFlippedX'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isFlippedX();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isFlippedX",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isFlippedX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setFlippedY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setFlippedY'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFlippedY(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFlippedY",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setFlippedY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setFlippedX(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setFlippedX'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFlippedX(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFlippedX",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setFlippedX'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getNodeByTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getNodeByTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::Node* ret = cobj->getNodeByTag(arg0);
        object_to_luaval<cocos2d::Node>(tolua_S, "cc.Node",(cocos2d::Node*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodeByTag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getNodeByTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getTouchEndPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getTouchEndPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Point& ret = cobj->getTouchEndPos();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTouchEndPos",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getTouchEndPos'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setPositionPercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setPositionPercent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setPositionPercent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPositionPercent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setPositionPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::Node *>& ret = cobj->getNodes();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getNodes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getNodes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setPositionType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setPositionType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::PositionType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setPositionType(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPositionType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setPositionType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isIgnoreContentAdaptWithSize();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isIgnoreContentAdaptWithSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_updateSizeAndPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_updateSizeAndPosition'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->updateSizeAndPosition();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updateSizeAndPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_updateSizeAndPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getBottomInParent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getBottomInParent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getBottomInParent();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBottomInParent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getBottomInParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getActionTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getActionTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getActionTag();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getActionTag",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getActionTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getLayoutParameter(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getLayoutParameter'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LayoutParameterType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cocos2d::ui::LayoutParameter* ret = cobj->getLayoutParameter(arg0);
        object_to_luaval<cocos2d::ui::LayoutParameter>(tolua_S, "ccui.LayoutParameter",(cocos2d::ui::LayoutParameter*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLayoutParameter",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getLayoutParameter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getPositionType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getPositionType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getPositionType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPositionType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getPositionType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getChildByName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getChildByName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cocos2d::ui::Widget* ret = cobj->getChildByName(arg0);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getChildByName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getChildByName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_removeNodeByTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_removeNodeByTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->removeNodeByTag(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeNodeByTag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_removeNodeByTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isTouchEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isTouchEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isTouchEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTouchEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isTouchEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getContentSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getContentSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getContentSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getContentSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getContentSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getWorldPosition(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getWorldPosition'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Point ret = cobj->getWorldPosition();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getWorldPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getWorldPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_didNotSelectSelf(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_didNotSelectSelf'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->didNotSelectSelf();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "didNotSelectSelf",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_didNotSelectSelf'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setFocused(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setFocused'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFocused(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFocused",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setFocused'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setTouchEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setTouchEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setTouchEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTouchEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setTouchEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_clone(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_clone'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ui::Widget* ret = cobj->clone();
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "clone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_clone'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getTouchMovePos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getTouchMovePos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Point& ret = cobj->getTouchMovePos();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTouchMovePos",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getTouchMovePos'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setBrightStyle(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setBrightStyle'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::BrightStyle arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setBrightStyle(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBrightStyle",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setBrightStyle'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_addNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_addNode'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { break; }
            cobj->addNode(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);

            if (!ok) { break; }
            cobj->addNode(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 3) {
            cocos2d::Node* arg0;
            ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);

            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);

            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);

            if (!ok) { break; }
            cobj->addNode(arg0, arg1, arg2);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addNode",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_addNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setLayoutParameter(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setLayoutParameter'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LayoutParameter* arg0;

        ok &= luaval_to_object<cocos2d::ui::LayoutParameter>(tolua_S, 2, "ccui.LayoutParameter",&arg0);
        if(!ok)
            return 0;
        cobj->setLayoutParameter(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLayoutParameter",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setLayoutParameter'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getSizePercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getSizePercent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Point& ret = cobj->getSizePercent();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSizePercent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getSizePercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getTouchStartPos(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getTouchStartPos'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Point& ret = cobj->getTouchStartPos();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTouchStartPos",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getTouchStartPos'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getLeftInParent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getLeftInParent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getLeftInParent();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLeftInParent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getLeftInParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setActionTag(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setActionTag'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setActionTag(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setActionTag",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setActionTag'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->ignoreContentAdaptWithSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ignoreContentAdaptWithSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isBright(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isBright'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isBright();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isBright",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isBright'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_clippingParentAreaContainPoint(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_clippingParentAreaContainPoint'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        bool ret = cobj->clippingParentAreaContainPoint(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "clippingParentAreaContainPoint",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_clippingParentAreaContainPoint'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getTopInParent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getTopInParent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getTopInParent();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTopInParent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getTopInParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getWidgetType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getWidgetType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getWidgetType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getWidgetType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getWidgetType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getRightInParent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getRightInParent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getRightInParent();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getRightInParent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getRightInParent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getSizeType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getSizeType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getSizeType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSizeType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getSizeType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_removeNode(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_removeNode'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Node* arg0;

        ok &= luaval_to_object<cocos2d::Node>(tolua_S, 2, "cc.Node",&arg0);
        if(!ok)
            return 0;
        cobj->removeNode(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeNode",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_removeNode'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_removeAllNodes(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_removeAllNodes'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeAllNodes();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAllNodes",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_removeAllNodes'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_getPositionPercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_getPositionPercent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Point& ret = cobj->getPositionPercent();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPositionPercent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_getPositionPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_hitTest(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_hitTest'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        bool ret = cobj->hitTest(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hitTest",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_hitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isFocused(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isFocused'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isFocused();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isFocused",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isFocused'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_isFlippedY(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_isFlippedY'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isFlippedY();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isFlippedY",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_isFlippedY'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setSizeType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setSizeType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::SizeType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setSizeType(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSizeType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setSizeType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_checkChildInfo(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_checkChildInfo'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        int arg0;
        cocos2d::ui::Widget* arg1;
        cocos2d::Point arg2;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 3, "ccui.Widget",&arg1);

        ok &= luaval_to_point(tolua_S, 4, &arg2);
        if(!ok)
            return 0;
        cobj->checkChildInfo(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "checkChildInfo",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_checkChildInfo'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_setBright(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Widget*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Widget_setBright'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setBright(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBright",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_setBright'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Widget_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Widget",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::Widget* ret = cocos2d::ui::Widget::create();
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Widget_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Widget* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::Widget();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.Widget");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Widget",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Widget_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_Widget_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Widget)");
    return 0;
}

int lua_register_cocos2dx_ui_Widget(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Widget");
    tolua_cclass(tolua_S,"Widget","ccui.Widget","cc.Node",NULL);

    tolua_beginmodule(tolua_S,"Widget");
        tolua_function(tolua_S,"getVirtualRenderer",lua_cocos2dx_ui_Widget_getVirtualRenderer);
        tolua_function(tolua_S,"setSizePercent",lua_cocos2dx_ui_Widget_setSizePercent);
        tolua_function(tolua_S,"isFlippedX",lua_cocos2dx_ui_Widget_isFlippedX);
        tolua_function(tolua_S,"setFlippedY",lua_cocos2dx_ui_Widget_setFlippedY);
        tolua_function(tolua_S,"setFlippedX",lua_cocos2dx_ui_Widget_setFlippedX);
        tolua_function(tolua_S,"getNodeByTag",lua_cocos2dx_ui_Widget_getNodeByTag);
        tolua_function(tolua_S,"getTouchEndPos",lua_cocos2dx_ui_Widget_getTouchEndPos);
        tolua_function(tolua_S,"setPositionPercent",lua_cocos2dx_ui_Widget_setPositionPercent);
        tolua_function(tolua_S,"getNodes",lua_cocos2dx_ui_Widget_getNodes);
        tolua_function(tolua_S,"setPositionType",lua_cocos2dx_ui_Widget_setPositionType);
        tolua_function(tolua_S,"getName",lua_cocos2dx_ui_Widget_getName);
        tolua_function(tolua_S,"isIgnoreContentAdaptWithSize",lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize);
        tolua_function(tolua_S,"updateSizeAndPosition",lua_cocos2dx_ui_Widget_updateSizeAndPosition);
        tolua_function(tolua_S,"getBottomInParent",lua_cocos2dx_ui_Widget_getBottomInParent);
        tolua_function(tolua_S,"getActionTag",lua_cocos2dx_ui_Widget_getActionTag);
        tolua_function(tolua_S,"getLayoutParameter",lua_cocos2dx_ui_Widget_getLayoutParameter);
        tolua_function(tolua_S,"getPositionType",lua_cocos2dx_ui_Widget_getPositionType);
        tolua_function(tolua_S,"setName",lua_cocos2dx_ui_Widget_setName);
        tolua_function(tolua_S,"getChildByName",lua_cocos2dx_ui_Widget_getChildByName);
        tolua_function(tolua_S,"isEnabled",lua_cocos2dx_ui_Widget_isEnabled);
        tolua_function(tolua_S,"removeNodeByTag",lua_cocos2dx_ui_Widget_removeNodeByTag);
        tolua_function(tolua_S,"isTouchEnabled",lua_cocos2dx_ui_Widget_isTouchEnabled);
        tolua_function(tolua_S,"getContentSize",lua_cocos2dx_ui_Widget_getContentSize);
        tolua_function(tolua_S,"getWorldPosition",lua_cocos2dx_ui_Widget_getWorldPosition);
        tolua_function(tolua_S,"didNotSelectSelf",lua_cocos2dx_ui_Widget_didNotSelectSelf);
        tolua_function(tolua_S,"setFocused",lua_cocos2dx_ui_Widget_setFocused);
        tolua_function(tolua_S,"setTouchEnabled",lua_cocos2dx_ui_Widget_setTouchEnabled);
        tolua_function(tolua_S,"clone",lua_cocos2dx_ui_Widget_clone);
        tolua_function(tolua_S,"getTouchMovePos",lua_cocos2dx_ui_Widget_getTouchMovePos);
        tolua_function(tolua_S,"setEnabled",lua_cocos2dx_ui_Widget_setEnabled);
        tolua_function(tolua_S,"setBrightStyle",lua_cocos2dx_ui_Widget_setBrightStyle);
        tolua_function(tolua_S,"addNode",lua_cocos2dx_ui_Widget_addNode);
        tolua_function(tolua_S,"setLayoutParameter",lua_cocos2dx_ui_Widget_setLayoutParameter);
        tolua_function(tolua_S,"getSizePercent",lua_cocos2dx_ui_Widget_getSizePercent);
        tolua_function(tolua_S,"getTouchStartPos",lua_cocos2dx_ui_Widget_getTouchStartPos);
        tolua_function(tolua_S,"getLeftInParent",lua_cocos2dx_ui_Widget_getLeftInParent);
        tolua_function(tolua_S,"setActionTag",lua_cocos2dx_ui_Widget_setActionTag);
        tolua_function(tolua_S,"ignoreContentAdaptWithSize",lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize);
        tolua_function(tolua_S,"isBright",lua_cocos2dx_ui_Widget_isBright);
        tolua_function(tolua_S,"clippingParentAreaContainPoint",lua_cocos2dx_ui_Widget_clippingParentAreaContainPoint);
        tolua_function(tolua_S,"getTopInParent",lua_cocos2dx_ui_Widget_getTopInParent);
        tolua_function(tolua_S,"getWidgetType",lua_cocos2dx_ui_Widget_getWidgetType);
        tolua_function(tolua_S,"getSize",lua_cocos2dx_ui_Widget_getSize);
        tolua_function(tolua_S,"getRightInParent",lua_cocos2dx_ui_Widget_getRightInParent);
        tolua_function(tolua_S,"getSizeType",lua_cocos2dx_ui_Widget_getSizeType);
        tolua_function(tolua_S,"removeNode",lua_cocos2dx_ui_Widget_removeNode);
        tolua_function(tolua_S,"removeAllNodes",lua_cocos2dx_ui_Widget_removeAllNodes);
        tolua_function(tolua_S,"getPositionPercent",lua_cocos2dx_ui_Widget_getPositionPercent);
        tolua_function(tolua_S,"hitTest",lua_cocos2dx_ui_Widget_hitTest);
        tolua_function(tolua_S,"isFocused",lua_cocos2dx_ui_Widget_isFocused);
        tolua_function(tolua_S,"isFlippedY",lua_cocos2dx_ui_Widget_isFlippedY);
        tolua_function(tolua_S,"setSizeType",lua_cocos2dx_ui_Widget_setSizeType);
        tolua_function(tolua_S,"checkChildInfo",lua_cocos2dx_ui_Widget_checkChildInfo);
        tolua_function(tolua_S,"setSize",lua_cocos2dx_ui_Widget_setSize);
        tolua_function(tolua_S,"setBright",lua_cocos2dx_ui_Widget_setBright);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_Widget_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_Widget_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Widget).name();
    g_luaType[typeName] = "ccui.Widget";
    g_typeCast["Widget"] = "ccui.Widget";
    return 1;
}

int lua_cocos2dx_ui_Layout_setBackGroundColorVector(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundColorVector'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setBackGroundColorVector(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackGroundColorVector",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundColorVector'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setClippingType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setClippingType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LayoutClippingType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setClippingType(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setClippingType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setClippingType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundColorType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundColorType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LayoutBackGroundColorType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setBackGroundColorType(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackGroundColorType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundColorType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundColorType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundColorType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getBackGroundColorType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackGroundColorType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundColorType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundColorVector(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundColorVector'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Point& ret = cobj->getBackGroundColorVector();
        point_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackGroundColorVector",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundColorVector'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_removeBackGroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_removeBackGroundImage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeBackGroundImage();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeBackGroundImage",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_removeBackGroundImage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundColorOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundColorOpacity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getBackGroundColorOpacity();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackGroundColorOpacity",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundColorOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Rect& ret = cobj->getBackGroundImageCapInsets();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackGroundImageCapInsets",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundImage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundImage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setBackGroundImage(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->setBackGroundImage(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackGroundImage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundImage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = NULL;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif
    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);
#if COCOS2D_DEBUG >= 1
    if (!cobj)
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundColor'", NULL);
        return 0;
    }
#endif
    argc = lua_gettop(tolua_S)-1;
    do{
        if (argc == 2) {
            cocos2d::Color3B arg0;
            ok &= luaval_to_color3b(tolua_S, 2, &arg0);

            if (!ok) { break; }
            cocos2d::Color3B arg1;
            ok &= luaval_to_color3b(tolua_S, 3, &arg1);

            if (!ok) { break; }
            cobj->setBackGroundColor(arg0, arg1);
            return 0;
        }
    }while(0);
    ok  = true;
    do{
        if (argc == 1) {
            cocos2d::Color3B arg0;
            ok &= luaval_to_color3b(tolua_S, 2, &arg0);

            if (!ok) { break; }
            cobj->setBackGroundColor(arg0);
            return 0;
        }
    }while(0);
    ok  = true;
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackGroundColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_requestDoLayout(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_requestDoLayout'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->requestDoLayout();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "requestDoLayout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_requestDoLayout'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_isClippingEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_isClippingEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isClippingEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isClippingEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_isClippingEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundColorOpacity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundColorOpacity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setBackGroundColorOpacity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackGroundColorOpacity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundColorOpacity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setClippingEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setClippingEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setClippingEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setClippingEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setClippingEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isBackGroundImageScale9Enabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isBackGroundImageScale9Enabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getLayoutType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getLayoutType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getLayoutType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getLayoutType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getLayoutType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundEndColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundEndColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Color3B& ret = cobj->getBackGroundEndColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackGroundEndColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundEndColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getClippingType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getClippingType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getClippingType();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getClippingType",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getClippingType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Color3B& ret = cobj->getBackGroundColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackGroundColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setBackGroundImageCapInsets(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackGroundImageCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getBackGroundImageTextureSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackGroundImageTextureSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_getBackGroundStartColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_getBackGroundStartColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Color3B& ret = cobj->getBackGroundStartColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getBackGroundStartColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_getBackGroundStartColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_hitTest(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_hitTest'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        bool ret = cobj->hitTest(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "hitTest",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_hitTest'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setBackGroundImageScale9Enabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBackGroundImageScale9Enabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_setLayoutType(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Layout*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Layout_setLayoutType'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LayoutType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setLayoutType(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setLayoutType",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_setLayoutType'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Layout_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Layout",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::Layout* ret = cocos2d::ui::Layout::create();
        object_to_luaval<cocos2d::ui::Layout>(tolua_S, "ccui.Layout",(cocos2d::ui::Layout*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Layout_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Layout* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::Layout();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.Layout");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Layout",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Layout_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_Layout_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Layout)");
    return 0;
}

int lua_register_cocos2dx_ui_Layout(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Layout");
    tolua_cclass(tolua_S,"Layout","ccui.Layout","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"Layout");
        tolua_function(tolua_S,"setBackGroundColorVector",lua_cocos2dx_ui_Layout_setBackGroundColorVector);
        tolua_function(tolua_S,"setClippingType",lua_cocos2dx_ui_Layout_setClippingType);
        tolua_function(tolua_S,"setBackGroundColorType",lua_cocos2dx_ui_Layout_setBackGroundColorType);
        tolua_function(tolua_S,"getBackGroundColorType",lua_cocos2dx_ui_Layout_getBackGroundColorType);
        tolua_function(tolua_S,"getBackGroundColorVector",lua_cocos2dx_ui_Layout_getBackGroundColorVector);
        tolua_function(tolua_S,"removeBackGroundImage",lua_cocos2dx_ui_Layout_removeBackGroundImage);
        tolua_function(tolua_S,"getBackGroundColorOpacity",lua_cocos2dx_ui_Layout_getBackGroundColorOpacity);
        tolua_function(tolua_S,"getBackGroundImageCapInsets",lua_cocos2dx_ui_Layout_getBackGroundImageCapInsets);
        tolua_function(tolua_S,"setBackGroundImage",lua_cocos2dx_ui_Layout_setBackGroundImage);
        tolua_function(tolua_S,"setBackGroundColor",lua_cocos2dx_ui_Layout_setBackGroundColor);
        tolua_function(tolua_S,"requestDoLayout",lua_cocos2dx_ui_Layout_requestDoLayout);
        tolua_function(tolua_S,"isClippingEnabled",lua_cocos2dx_ui_Layout_isClippingEnabled);
        tolua_function(tolua_S,"setBackGroundColorOpacity",lua_cocos2dx_ui_Layout_setBackGroundColorOpacity);
        tolua_function(tolua_S,"setClippingEnabled",lua_cocos2dx_ui_Layout_setClippingEnabled);
        tolua_function(tolua_S,"isBackGroundImageScale9Enabled",lua_cocos2dx_ui_Layout_isBackGroundImageScale9Enabled);
        tolua_function(tolua_S,"getLayoutType",lua_cocos2dx_ui_Layout_getLayoutType);
        tolua_function(tolua_S,"getBackGroundEndColor",lua_cocos2dx_ui_Layout_getBackGroundEndColor);
        tolua_function(tolua_S,"getClippingType",lua_cocos2dx_ui_Layout_getClippingType);
        tolua_function(tolua_S,"getBackGroundColor",lua_cocos2dx_ui_Layout_getBackGroundColor);
        tolua_function(tolua_S,"setBackGroundImageCapInsets",lua_cocos2dx_ui_Layout_setBackGroundImageCapInsets);
        tolua_function(tolua_S,"getBackGroundImageTextureSize",lua_cocos2dx_ui_Layout_getBackGroundImageTextureSize);
        tolua_function(tolua_S,"getBackGroundStartColor",lua_cocos2dx_ui_Layout_getBackGroundStartColor);
        tolua_function(tolua_S,"hitTest",lua_cocos2dx_ui_Layout_hitTest);
        tolua_function(tolua_S,"setBackGroundImageScale9Enabled",lua_cocos2dx_ui_Layout_setBackGroundImageScale9Enabled);
        tolua_function(tolua_S,"setLayoutType",lua_cocos2dx_ui_Layout_setLayoutType);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_Layout_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_Layout_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Layout).name();
    g_luaType[typeName] = "ccui.Layout";
    g_typeCast["Layout"] = "ccui.Layout";
    return 1;
}

int lua_cocos2dx_ui_Button_getTitleText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_getTitleText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getTitleText();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleText",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_getTitleText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setTitleFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setTitleFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setTitleFontSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleFontSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setTitleFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setScale9Enabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setScale9Enabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_getCapInsetsDisabledRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_getCapInsetsDisabledRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Rect& ret = cobj->getCapInsetsDisabledRenderer();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsetsDisabledRenderer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_getCapInsetsDisabledRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setTitleColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setTitleColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Color3B arg0;

        ok &= luaval_to_color3b(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setTitleColor(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleColor",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setTitleColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setCapInsetsDisabledRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setCapInsetsDisabledRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsetsDisabledRenderer(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsetsDisabledRenderer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setCapInsetsDisabledRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsets(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_loadTextureDisabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_loadTextureDisabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextureDisabled(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureDisabled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureDisabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_loadTextureDisabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setTitleText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setTitleText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setTitleText(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleText",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setTitleText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setCapInsetsNormalRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setCapInsetsNormalRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsetsNormalRenderer(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsetsNormalRenderer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setCapInsetsNormalRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_loadTexturePressed(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_loadTexturePressed'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTexturePressed(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTexturePressed(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTexturePressed",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_loadTexturePressed'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setTitleFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setTitleFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setTitleFontName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTitleFontName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setTitleFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_getCapInsetsNormalRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_getCapInsetsNormalRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Rect& ret = cobj->getCapInsetsNormalRenderer();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsetsNormalRenderer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_getCapInsetsNormalRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_getCapInsetsPressedRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_getCapInsetsPressedRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Rect& ret = cobj->getCapInsetsPressedRenderer();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsetsPressedRenderer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_getCapInsetsPressedRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_loadTextures(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_loadTextures'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextures(arg0, arg1, arg2);
        return 0;
    }
    if (argc == 4) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        cocos2d::ui::TextureResType arg3;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3);
        if(!ok)
            return 0;
        cobj->loadTextures(arg0, arg1, arg2, arg3);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextures",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_loadTextures'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_isScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_isScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isScale9Enabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isScale9Enabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_isScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_loadTextureNormal(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_loadTextureNormal'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextureNormal(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureNormal(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureNormal",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_loadTextureNormal'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setCapInsetsPressedRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setCapInsetsPressedRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsetsPressedRenderer(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsetsPressedRenderer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setCapInsetsPressedRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_getTitleFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_getTitleFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getTitleFontSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleFontSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_getTitleFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_getTitleFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_getTitleFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getTitleFontName();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleFontName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_getTitleFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_getTitleColor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_getTitleColor'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Color3B& ret = cobj->getTitleColor();
        color3b_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTitleColor",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_getTitleColor'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_setPressedActionEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Button*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Button_setPressedActionEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setPressedActionEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPressedActionEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_setPressedActionEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Button_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Button",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::Button* ret = cocos2d::ui::Button::create();
        object_to_luaval<cocos2d::ui::Button>(tolua_S, "ccui.Button",(cocos2d::ui::Button*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Button_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Button* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::Button();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.Button");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Button",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Button_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_Button_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Button)");
    return 0;
}

int lua_register_cocos2dx_ui_Button(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Button");
    tolua_cclass(tolua_S,"Button","ccui.Button","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"Button");
        tolua_function(tolua_S,"getTitleText",lua_cocos2dx_ui_Button_getTitleText);
        tolua_function(tolua_S,"setTitleFontSize",lua_cocos2dx_ui_Button_setTitleFontSize);
        tolua_function(tolua_S,"setScale9Enabled",lua_cocos2dx_ui_Button_setScale9Enabled);
        tolua_function(tolua_S,"getCapInsetsDisabledRenderer",lua_cocos2dx_ui_Button_getCapInsetsDisabledRenderer);
        tolua_function(tolua_S,"setTitleColor",lua_cocos2dx_ui_Button_setTitleColor);
        tolua_function(tolua_S,"setCapInsetsDisabledRenderer",lua_cocos2dx_ui_Button_setCapInsetsDisabledRenderer);
        tolua_function(tolua_S,"setCapInsets",lua_cocos2dx_ui_Button_setCapInsets);
        tolua_function(tolua_S,"loadTextureDisabled",lua_cocos2dx_ui_Button_loadTextureDisabled);
        tolua_function(tolua_S,"setTitleText",lua_cocos2dx_ui_Button_setTitleText);
        tolua_function(tolua_S,"setCapInsetsNormalRenderer",lua_cocos2dx_ui_Button_setCapInsetsNormalRenderer);
        tolua_function(tolua_S,"loadTexturePressed",lua_cocos2dx_ui_Button_loadTexturePressed);
        tolua_function(tolua_S,"setTitleFontName",lua_cocos2dx_ui_Button_setTitleFontName);
        tolua_function(tolua_S,"getCapInsetsNormalRenderer",lua_cocos2dx_ui_Button_getCapInsetsNormalRenderer);
        tolua_function(tolua_S,"getCapInsetsPressedRenderer",lua_cocos2dx_ui_Button_getCapInsetsPressedRenderer);
        tolua_function(tolua_S,"loadTextures",lua_cocos2dx_ui_Button_loadTextures);
        tolua_function(tolua_S,"isScale9Enabled",lua_cocos2dx_ui_Button_isScale9Enabled);
        tolua_function(tolua_S,"loadTextureNormal",lua_cocos2dx_ui_Button_loadTextureNormal);
        tolua_function(tolua_S,"setCapInsetsPressedRenderer",lua_cocos2dx_ui_Button_setCapInsetsPressedRenderer);
        tolua_function(tolua_S,"getTitleFontSize",lua_cocos2dx_ui_Button_getTitleFontSize);
        tolua_function(tolua_S,"getTitleFontName",lua_cocos2dx_ui_Button_getTitleFontName);
        tolua_function(tolua_S,"getTitleColor",lua_cocos2dx_ui_Button_getTitleColor);
        tolua_function(tolua_S,"setPressedActionEnabled",lua_cocos2dx_ui_Button_setPressedActionEnabled);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_Button_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_Button_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Button).name();
    g_luaType[typeName] = "ccui.Button";
    g_typeCast["Button"] = "ccui.Button";
    return 1;
}

int lua_cocos2dx_ui_CheckBox_getSelectedState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::CheckBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_CheckBox_getSelectedState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getSelectedState();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getSelectedState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_getSelectedState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_CheckBox_loadTextureBackGroundSelected(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::CheckBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_CheckBox_loadTextureBackGroundSelected'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextureBackGroundSelected(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureBackGroundSelected(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureBackGroundSelected",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_loadTextureBackGroundSelected'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_CheckBox_loadTextureBackGroundDisabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::CheckBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_CheckBox_loadTextureBackGroundDisabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextureBackGroundDisabled(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureBackGroundDisabled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureBackGroundDisabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_loadTextureBackGroundDisabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_CheckBox_loadTextureFrontCross(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::CheckBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_CheckBox_loadTextureFrontCross'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextureFrontCross(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureFrontCross(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureFrontCross",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_loadTextureFrontCross'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_CheckBox_loadTextures(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::CheckBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_CheckBox_loadTextures'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextures(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    if (argc == 6) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        cocos2d::ui::TextureResType arg5;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 7,(int *)&arg5);
        if(!ok)
            return 0;
        cobj->loadTextures(arg0, arg1, arg2, arg3, arg4, arg5);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextures",argc, 5);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_loadTextures'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_CheckBox_loadTextureBackGround(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::CheckBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_CheckBox_loadTextureBackGround'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextureBackGround(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureBackGround(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureBackGround",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_loadTextureBackGround'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_CheckBox_setSelectedState(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::CheckBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_CheckBox_setSelectedState'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setSelectedState(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setSelectedState",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_setSelectedState'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_CheckBox_loadTextureFrontCrossDisabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::CheckBox*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_CheckBox_loadTextureFrontCrossDisabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTextureFrontCrossDisabled(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTextureFrontCrossDisabled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTextureFrontCrossDisabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_loadTextureFrontCrossDisabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_CheckBox_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.CheckBox",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::CheckBox* ret = cocos2d::ui::CheckBox::create();
        object_to_luaval<cocos2d::ui::CheckBox>(tolua_S, "ccui.CheckBox",(cocos2d::ui::CheckBox*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_CheckBox_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::CheckBox* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::CheckBox();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.CheckBox");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "CheckBox",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_CheckBox_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_CheckBox_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (CheckBox)");
    return 0;
}

int lua_register_cocos2dx_ui_CheckBox(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.CheckBox");
    tolua_cclass(tolua_S,"CheckBox","ccui.CheckBox","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"CheckBox");
        tolua_function(tolua_S,"getSelectedState",lua_cocos2dx_ui_CheckBox_getSelectedState);
        tolua_function(tolua_S,"loadTextureBackGroundSelected",lua_cocos2dx_ui_CheckBox_loadTextureBackGroundSelected);
        tolua_function(tolua_S,"loadTextureBackGroundDisabled",lua_cocos2dx_ui_CheckBox_loadTextureBackGroundDisabled);
        tolua_function(tolua_S,"loadTextureFrontCross",lua_cocos2dx_ui_CheckBox_loadTextureFrontCross);
        tolua_function(tolua_S,"loadTextures",lua_cocos2dx_ui_CheckBox_loadTextures);
        tolua_function(tolua_S,"loadTextureBackGround",lua_cocos2dx_ui_CheckBox_loadTextureBackGround);
        tolua_function(tolua_S,"setSelectedState",lua_cocos2dx_ui_CheckBox_setSelectedState);
        tolua_function(tolua_S,"loadTextureFrontCrossDisabled",lua_cocos2dx_ui_CheckBox_loadTextureFrontCrossDisabled);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_CheckBox_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_CheckBox_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::CheckBox).name();
    g_luaType[typeName] = "ccui.CheckBox";
    g_typeCast["CheckBox"] = "ccui.CheckBox";
    return 1;
}

int lua_cocos2dx_ui_ImageView_loadTexture(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ImageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ImageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ImageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ImageView_loadTexture'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTexture(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTexture(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTexture",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ImageView_loadTexture'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ImageView_setScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ImageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ImageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ImageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ImageView_setScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setScale9Enabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setScale9Enabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ImageView_setScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ImageView_setTextureRect(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ImageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ImageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ImageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ImageView_setTextureRect'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setTextureRect(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTextureRect",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ImageView_setTextureRect'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ImageView_setCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ImageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ImageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ImageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ImageView_setCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsets(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ImageView_setCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ImageView_getCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ImageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ImageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ImageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ImageView_getCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Rect& ret = cobj->getCapInsets();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsets",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ImageView_getCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ImageView_isScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ImageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ImageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ImageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ImageView_isScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isScale9Enabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isScale9Enabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ImageView_isScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ImageView_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.ImageView",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::ImageView* ret = cocos2d::ui::ImageView::create();
        object_to_luaval<cocos2d::ui::ImageView>(tolua_S, "ccui.ImageView",(cocos2d::ui::ImageView*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ImageView_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_ImageView_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ImageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::ImageView();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.ImageView");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ImageView",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ImageView_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_ImageView_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ImageView)");
    return 0;
}

int lua_register_cocos2dx_ui_ImageView(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.ImageView");
    tolua_cclass(tolua_S,"ImageView","ccui.ImageView","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"ImageView");
        tolua_function(tolua_S,"loadTexture",lua_cocos2dx_ui_ImageView_loadTexture);
        tolua_function(tolua_S,"setScale9Enabled",lua_cocos2dx_ui_ImageView_setScale9Enabled);
        tolua_function(tolua_S,"setTextureRect",lua_cocos2dx_ui_ImageView_setTextureRect);
        tolua_function(tolua_S,"setCapInsets",lua_cocos2dx_ui_ImageView_setCapInsets);
        tolua_function(tolua_S,"getCapInsets",lua_cocos2dx_ui_ImageView_getCapInsets);
        tolua_function(tolua_S,"isScale9Enabled",lua_cocos2dx_ui_ImageView_isScale9Enabled);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_ImageView_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_ImageView_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::ImageView).name();
    g_luaType[typeName] = "ccui.ImageView";
    g_typeCast["ImageView"] = "ccui.ImageView";
    return 1;
}

int lua_cocos2dx_ui_Text_getStringLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_getStringLength'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        ssize_t ret = cobj->getStringLength();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStringLength",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_getStringLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_setFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_setFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFontName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_setFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_setTouchScaleChangeEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_setTouchScaleChangeEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setTouchScaleChangeEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTouchScaleChangeEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_setTouchScaleChangeEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_getFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_getFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getFontSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFontSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_getFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_getTextVerticalAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_getTextVerticalAlignment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getTextVerticalAlignment();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextVerticalAlignment",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_getTextVerticalAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_getStringValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_getStringValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getStringValue();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStringValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_getStringValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_setText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_setText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setText(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setText",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_setText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_getTextHorizontalAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_getTextHorizontalAlignment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getTextHorizontalAlignment();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextHorizontalAlignment",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_getTextHorizontalAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_getTextAreaSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_getTextAreaSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getTextAreaSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTextAreaSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_getTextAreaSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_setTextVerticalAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_setTextVerticalAlignment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::TextVAlignment arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setTextVerticalAlignment(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTextVerticalAlignment",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_setTextVerticalAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_setFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_setFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setFontSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_setFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_isTouchScaleChangeEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_isTouchScaleChangeEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isTouchScaleChangeEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isTouchScaleChangeEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_isTouchScaleChangeEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_setTextHorizontalAlignment(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_setTextHorizontalAlignment'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::TextHAlignment arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setTextHorizontalAlignment(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTextHorizontalAlignment",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_setTextHorizontalAlignment'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_getFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_getFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getFontName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFontName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_getFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_setTextAreaSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Text*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Text_setTextAreaSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setTextAreaSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTextAreaSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_setTextAreaSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Text_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Text",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::Text* ret = cocos2d::ui::Text::create();
        object_to_luaval<cocos2d::ui::Text>(tolua_S, "ccui.Text",(cocos2d::ui::Text*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Text_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Text* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::Text();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.Text");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Text",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Text_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_Text_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Text)");
    return 0;
}

int lua_register_cocos2dx_ui_Text(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Text");
    tolua_cclass(tolua_S,"Text","ccui.Text","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"Text");
        tolua_function(tolua_S,"getStringLength",lua_cocos2dx_ui_Text_getStringLength);
        tolua_function(tolua_S,"setFontName",lua_cocos2dx_ui_Text_setFontName);
        tolua_function(tolua_S,"setTouchScaleChangeEnabled",lua_cocos2dx_ui_Text_setTouchScaleChangeEnabled);
        tolua_function(tolua_S,"getFontSize",lua_cocos2dx_ui_Text_getFontSize);
        tolua_function(tolua_S,"getTextVerticalAlignment",lua_cocos2dx_ui_Text_getTextVerticalAlignment);
        tolua_function(tolua_S,"getStringValue",lua_cocos2dx_ui_Text_getStringValue);
        tolua_function(tolua_S,"setText",lua_cocos2dx_ui_Text_setText);
        tolua_function(tolua_S,"getTextHorizontalAlignment",lua_cocos2dx_ui_Text_getTextHorizontalAlignment);
        tolua_function(tolua_S,"getTextAreaSize",lua_cocos2dx_ui_Text_getTextAreaSize);
        tolua_function(tolua_S,"setTextVerticalAlignment",lua_cocos2dx_ui_Text_setTextVerticalAlignment);
        tolua_function(tolua_S,"setFontSize",lua_cocos2dx_ui_Text_setFontSize);
        tolua_function(tolua_S,"isTouchScaleChangeEnabled",lua_cocos2dx_ui_Text_isTouchScaleChangeEnabled);
        tolua_function(tolua_S,"setTextHorizontalAlignment",lua_cocos2dx_ui_Text_setTextHorizontalAlignment);
        tolua_function(tolua_S,"getFontName",lua_cocos2dx_ui_Text_getFontName);
        tolua_function(tolua_S,"setTextAreaSize",lua_cocos2dx_ui_Text_setTextAreaSize);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_Text_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_Text_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Text).name();
    g_luaType[typeName] = "ccui.Text";
    g_typeCast["Text"] = "ccui.Text";
    return 1;
}

int lua_cocos2dx_ui_TextAtlas_setProperty(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextAtlas* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextAtlas",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextAtlas*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextAtlas_setProperty'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        std::string arg0;
        std::string arg1;
        int arg2;
        int arg3;
        std::string arg4;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);

        ok &= luaval_to_std_string(tolua_S, 3,&arg1);

        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2);

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3);

        ok &= luaval_to_std_string(tolua_S, 6,&arg4);
        if(!ok)
            return 0;
        cobj->setProperty(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setProperty",argc, 5);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextAtlas_setProperty'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextAtlas_getStringValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextAtlas* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextAtlas",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextAtlas*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextAtlas_getStringValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getStringValue();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStringValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextAtlas_getStringValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextAtlas_setStringValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextAtlas* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextAtlas",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextAtlas*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextAtlas_setStringValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setStringValue(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setStringValue",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextAtlas_setStringValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextAtlas_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.TextAtlas",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::TextAtlas* ret = cocos2d::ui::TextAtlas::create();
        object_to_luaval<cocos2d::ui::TextAtlas>(tolua_S, "ccui.TextAtlas",(cocos2d::ui::TextAtlas*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextAtlas_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_TextAtlas_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextAtlas* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::TextAtlas();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.TextAtlas");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "TextAtlas",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextAtlas_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_TextAtlas_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TextAtlas)");
    return 0;
}

int lua_register_cocos2dx_ui_TextAtlas(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.TextAtlas");
    tolua_cclass(tolua_S,"TextAtlas","ccui.TextAtlas","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"TextAtlas");
        tolua_function(tolua_S,"setProperty",lua_cocos2dx_ui_TextAtlas_setProperty);
        tolua_function(tolua_S,"getStringValue",lua_cocos2dx_ui_TextAtlas_getStringValue);
        tolua_function(tolua_S,"setStringValue",lua_cocos2dx_ui_TextAtlas_setStringValue);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_TextAtlas_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_TextAtlas_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::TextAtlas).name();
    g_luaType[typeName] = "ccui.TextAtlas";
    g_typeCast["TextAtlas"] = "ccui.TextAtlas";
    return 1;
}

int lua_cocos2dx_ui_LoadingBar_setPercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_setPercent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setPercent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPercent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_setPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_loadTexture(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_loadTexture'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadTexture(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadTexture(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadTexture",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_loadTexture'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_setDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_setDirection'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::LoadingBarType arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setDirection(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDirection",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_setDirection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_setScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_setScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setScale9Enabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setScale9Enabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_setScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_setCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_setCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsets(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_setCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_getDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_getDirection'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getDirection();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDirection",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_getDirection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_getCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_getCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Rect& ret = cobj->getCapInsets();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsets",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_getCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_isScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_isScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isScale9Enabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isScale9Enabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_isScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_getPercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::LoadingBar*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_LoadingBar_getPercent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getPercent();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPercent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_getPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_LoadingBar_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.LoadingBar",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::LoadingBar* ret = cocos2d::ui::LoadingBar::create();
        object_to_luaval<cocos2d::ui::LoadingBar>(tolua_S, "ccui.LoadingBar",(cocos2d::ui::LoadingBar*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_LoadingBar_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::LoadingBar* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::LoadingBar();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.LoadingBar");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "LoadingBar",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_LoadingBar_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_LoadingBar_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (LoadingBar)");
    return 0;
}

int lua_register_cocos2dx_ui_LoadingBar(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.LoadingBar");
    tolua_cclass(tolua_S,"LoadingBar","ccui.LoadingBar","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"LoadingBar");
        tolua_function(tolua_S,"setPercent",lua_cocos2dx_ui_LoadingBar_setPercent);
        tolua_function(tolua_S,"loadTexture",lua_cocos2dx_ui_LoadingBar_loadTexture);
        tolua_function(tolua_S,"setDirection",lua_cocos2dx_ui_LoadingBar_setDirection);
        tolua_function(tolua_S,"setScale9Enabled",lua_cocos2dx_ui_LoadingBar_setScale9Enabled);
        tolua_function(tolua_S,"setCapInsets",lua_cocos2dx_ui_LoadingBar_setCapInsets);
        tolua_function(tolua_S,"getDirection",lua_cocos2dx_ui_LoadingBar_getDirection);
        tolua_function(tolua_S,"getCapInsets",lua_cocos2dx_ui_LoadingBar_getCapInsets);
        tolua_function(tolua_S,"isScale9Enabled",lua_cocos2dx_ui_LoadingBar_isScale9Enabled);
        tolua_function(tolua_S,"getPercent",lua_cocos2dx_ui_LoadingBar_getPercent);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_LoadingBar_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_LoadingBar_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::LoadingBar).name();
    g_luaType[typeName] = "ccui.LoadingBar";
    g_typeCast["LoadingBar"] = "ccui.LoadingBar";
    return 1;
}

int lua_cocos2dx_ui_ScrollView_scrollToTop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToTop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->scrollToTop(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToTop",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToTop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToPercentHorizontal(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToPercentHorizontal'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        double arg0;
        double arg1;
        bool arg2;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->scrollToPercentHorizontal(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToPercentHorizontal",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToPercentHorizontal'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_isInertiaScrollEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_isInertiaScrollEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isInertiaScrollEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isInertiaScrollEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_isInertiaScrollEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToPercentBothDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToPercentBothDirection'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::Point arg0;
        double arg1;
        bool arg2;

        ok &= luaval_to_point(tolua_S, 2, &arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->scrollToPercentBothDirection(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToPercentBothDirection",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToPercentBothDirection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_getDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_getDirection'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = (int)cobj->getDirection();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDirection",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_getDirection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToBottomLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToBottomLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->scrollToBottomLeft(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToBottomLeft",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToBottomLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_getInnerContainer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_getInnerContainer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::ui::Layout* ret = cobj->getInnerContainer();
        object_to_luaval<cocos2d::ui::Layout>(tolua_S, "ccui.Layout",(cocos2d::ui::Layout*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInnerContainer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_getInnerContainer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToBottom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToBottom'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->jumpToBottom();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToBottom",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToBottom'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_setDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_setDirection'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::SCROLLVIEW_DIR arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setDirection(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDirection",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_setDirection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToTopLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToTopLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->scrollToTopLeft(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToTopLeft",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToTopLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToTopRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToTopRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->jumpToTopRight();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToTopRight",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToTopRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToBottomLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToBottomLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->jumpToBottomLeft();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToBottomLeft",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToBottomLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_setInnerContainerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_setInnerContainerSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setInnerContainerSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInnerContainerSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_setInnerContainerSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_getInnerContainerSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_getInnerContainerSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Size& ret = cobj->getInnerContainerSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInnerContainerSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_getInnerContainerSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_isBounceEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_isBounceEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isBounceEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isBounceEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_isBounceEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToPercentVertical(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToPercentVertical'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->jumpToPercentVertical(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToPercentVertical",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToPercentVertical'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_setInertiaScrollEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_setInertiaScrollEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setInertiaScrollEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInertiaScrollEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_setInertiaScrollEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToTopLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToTopLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->jumpToTopLeft();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToTopLeft",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToTopLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToPercentHorizontal(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToPercentHorizontal'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->jumpToPercentHorizontal(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToPercentHorizontal",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToPercentHorizontal'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToBottomRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToBottomRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->jumpToBottomRight();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToBottomRight",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToBottomRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_setBounceEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_setBounceEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setBounceEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setBounceEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_setBounceEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToTop(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToTop'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->jumpToTop();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToTop",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToTop'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->scrollToLeft(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToLeft",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToPercentBothDirection(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToPercentBothDirection'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Point arg0;

        ok &= luaval_to_point(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->jumpToPercentBothDirection(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToPercentBothDirection",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToPercentBothDirection'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToPercentVertical(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToPercentVertical'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        double arg0;
        double arg1;
        bool arg2;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_number(tolua_S, 3,&arg1);

        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->scrollToPercentVertical(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToPercentVertical",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToPercentVertical'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToBottom(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToBottom'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->scrollToBottom(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToBottom",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToBottom'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToBottomRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToBottomRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->scrollToBottomRight(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToBottomRight",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToBottomRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToLeft(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToLeft'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->jumpToLeft();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToLeft",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToLeft'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->scrollToRight(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToRight",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_jumpToRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_jumpToRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->jumpToRight();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "jumpToRight",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_jumpToRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_scrollToTopRight(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ScrollView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ScrollView_scrollToTopRight'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        double arg0;
        bool arg1;

        ok &= luaval_to_number(tolua_S, 2,&arg0);

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->scrollToTopRight(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToTopRight",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_scrollToTopRight'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ScrollView_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.ScrollView",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::ScrollView* ret = cocos2d::ui::ScrollView::create();
        object_to_luaval<cocos2d::ui::ScrollView>(tolua_S, "ccui.ScrollView",(cocos2d::ui::ScrollView*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_ScrollView_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ScrollView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::ScrollView();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.ScrollView");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ScrollView",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ScrollView_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_ScrollView_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ScrollView)");
    return 0;
}

int lua_register_cocos2dx_ui_ScrollView(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.ScrollView");
    tolua_cclass(tolua_S,"ScrollView","ccui.ScrollView","ccui.Layout",NULL);

    tolua_beginmodule(tolua_S,"ScrollView");
        tolua_function(tolua_S,"scrollToTop",lua_cocos2dx_ui_ScrollView_scrollToTop);
        tolua_function(tolua_S,"scrollToPercentHorizontal",lua_cocos2dx_ui_ScrollView_scrollToPercentHorizontal);
        tolua_function(tolua_S,"isInertiaScrollEnabled",lua_cocos2dx_ui_ScrollView_isInertiaScrollEnabled);
        tolua_function(tolua_S,"scrollToPercentBothDirection",lua_cocos2dx_ui_ScrollView_scrollToPercentBothDirection);
        tolua_function(tolua_S,"getDirection",lua_cocos2dx_ui_ScrollView_getDirection);
        tolua_function(tolua_S,"scrollToBottomLeft",lua_cocos2dx_ui_ScrollView_scrollToBottomLeft);
        tolua_function(tolua_S,"getInnerContainer",lua_cocos2dx_ui_ScrollView_getInnerContainer);
        tolua_function(tolua_S,"jumpToBottom",lua_cocos2dx_ui_ScrollView_jumpToBottom);
        tolua_function(tolua_S,"setDirection",lua_cocos2dx_ui_ScrollView_setDirection);
        tolua_function(tolua_S,"scrollToTopLeft",lua_cocos2dx_ui_ScrollView_scrollToTopLeft);
        tolua_function(tolua_S,"jumpToTopRight",lua_cocos2dx_ui_ScrollView_jumpToTopRight);
        tolua_function(tolua_S,"jumpToBottomLeft",lua_cocos2dx_ui_ScrollView_jumpToBottomLeft);
        tolua_function(tolua_S,"setInnerContainerSize",lua_cocos2dx_ui_ScrollView_setInnerContainerSize);
        tolua_function(tolua_S,"getInnerContainerSize",lua_cocos2dx_ui_ScrollView_getInnerContainerSize);
        tolua_function(tolua_S,"isBounceEnabled",lua_cocos2dx_ui_ScrollView_isBounceEnabled);
        tolua_function(tolua_S,"jumpToPercentVertical",lua_cocos2dx_ui_ScrollView_jumpToPercentVertical);
        tolua_function(tolua_S,"setInertiaScrollEnabled",lua_cocos2dx_ui_ScrollView_setInertiaScrollEnabled);
        tolua_function(tolua_S,"jumpToTopLeft",lua_cocos2dx_ui_ScrollView_jumpToTopLeft);
        tolua_function(tolua_S,"jumpToPercentHorizontal",lua_cocos2dx_ui_ScrollView_jumpToPercentHorizontal);
        tolua_function(tolua_S,"jumpToBottomRight",lua_cocos2dx_ui_ScrollView_jumpToBottomRight);
        tolua_function(tolua_S,"setBounceEnabled",lua_cocos2dx_ui_ScrollView_setBounceEnabled);
        tolua_function(tolua_S,"jumpToTop",lua_cocos2dx_ui_ScrollView_jumpToTop);
        tolua_function(tolua_S,"scrollToLeft",lua_cocos2dx_ui_ScrollView_scrollToLeft);
        tolua_function(tolua_S,"jumpToPercentBothDirection",lua_cocos2dx_ui_ScrollView_jumpToPercentBothDirection);
        tolua_function(tolua_S,"scrollToPercentVertical",lua_cocos2dx_ui_ScrollView_scrollToPercentVertical);
        tolua_function(tolua_S,"scrollToBottom",lua_cocos2dx_ui_ScrollView_scrollToBottom);
        tolua_function(tolua_S,"scrollToBottomRight",lua_cocos2dx_ui_ScrollView_scrollToBottomRight);
        tolua_function(tolua_S,"jumpToLeft",lua_cocos2dx_ui_ScrollView_jumpToLeft);
        tolua_function(tolua_S,"scrollToRight",lua_cocos2dx_ui_ScrollView_scrollToRight);
        tolua_function(tolua_S,"jumpToRight",lua_cocos2dx_ui_ScrollView_jumpToRight);
        tolua_function(tolua_S,"scrollToTopRight",lua_cocos2dx_ui_ScrollView_scrollToTopRight);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_ScrollView_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_ScrollView_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::ScrollView).name();
    g_luaType[typeName] = "ccui.ScrollView";
    g_typeCast["ScrollView"] = "ccui.ScrollView";
    return 1;
}

int lua_cocos2dx_ui_ListView_getIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_getIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Widget* arg0;

        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        if(!ok)
            return 0;
        ssize_t ret = cobj->getIndex(arg0);
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getIndex",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_getIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_removeAllItems(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_removeAllItems'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeAllItems();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAllItems",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_removeAllItems'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_setGravity(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_setGravity'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::ListViewGravity arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setGravity(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setGravity",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_setGravity'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_pushBackCustomItem(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_pushBackCustomItem'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Widget* arg0;

        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        if(!ok)
            return 0;
        cobj->pushBackCustomItem(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pushBackCustomItem",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_pushBackCustomItem'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_getItems(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_getItems'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::ui::Widget *>& ret = cobj->getItems();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getItems",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_getItems'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_removeItem(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_removeItem'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ssize_t arg0;

        ok &= luaval_to_ssize(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->removeItem(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeItem",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_removeItem'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_getCurSelectedIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_getCurSelectedIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        ssize_t ret = cobj->getCurSelectedIndex();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurSelectedIndex",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_getCurSelectedIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_insertDefaultItem(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_insertDefaultItem'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ssize_t arg0;

        ok &= luaval_to_ssize(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->insertDefaultItem(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "insertDefaultItem",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_insertDefaultItem'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_setItemsMargin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_setItemsMargin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setItemsMargin(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setItemsMargin",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_setItemsMargin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_removeLastItem(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_removeLastItem'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeLastItem();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeLastItem",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_removeLastItem'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_getItemsMargin(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_getItemsMargin'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        double ret = cobj->getItemsMargin();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getItemsMargin",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_getItemsMargin'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_getItem(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_getItem'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ssize_t arg0;

        ok &= luaval_to_ssize(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::ui::Widget* ret = cobj->getItem(arg0);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getItem",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_getItem'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_setItemModel(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_setItemModel'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Widget* arg0;

        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        if(!ok)
            return 0;
        cobj->setItemModel(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setItemModel",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_setItemModel'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_requestRefreshView(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_requestRefreshView'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->requestRefreshView();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "requestRefreshView",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_requestRefreshView'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_pushBackDefaultItem(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_pushBackDefaultItem'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->pushBackDefaultItem();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pushBackDefaultItem",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_pushBackDefaultItem'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_insertCustomItem(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::ListView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_ListView_insertCustomItem'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::ui::Widget* arg0;
        ssize_t arg1;

        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);

        ok &= luaval_to_ssize(tolua_S, 3, &arg1);
        if(!ok)
            return 0;
        cobj->insertCustomItem(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "insertCustomItem",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_insertCustomItem'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_ListView_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.ListView",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::ListView* ret = cocos2d::ui::ListView::create();
        object_to_luaval<cocos2d::ui::ListView>(tolua_S, "ccui.ListView",(cocos2d::ui::ListView*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_ListView_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::ListView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::ListView();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.ListView");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "ListView",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_ListView_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_ListView_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ListView)");
    return 0;
}

int lua_register_cocos2dx_ui_ListView(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.ListView");
    tolua_cclass(tolua_S,"ListView","ccui.ListView","ccui.ScrollView",NULL);

    tolua_beginmodule(tolua_S,"ListView");
        tolua_function(tolua_S,"getIndex",lua_cocos2dx_ui_ListView_getIndex);
        tolua_function(tolua_S,"removeAllItems",lua_cocos2dx_ui_ListView_removeAllItems);
        tolua_function(tolua_S,"setGravity",lua_cocos2dx_ui_ListView_setGravity);
        tolua_function(tolua_S,"pushBackCustomItem",lua_cocos2dx_ui_ListView_pushBackCustomItem);
        tolua_function(tolua_S,"getItems",lua_cocos2dx_ui_ListView_getItems);
        tolua_function(tolua_S,"removeItem",lua_cocos2dx_ui_ListView_removeItem);
        tolua_function(tolua_S,"getCurSelectedIndex",lua_cocos2dx_ui_ListView_getCurSelectedIndex);
        tolua_function(tolua_S,"insertDefaultItem",lua_cocos2dx_ui_ListView_insertDefaultItem);
        tolua_function(tolua_S,"setItemsMargin",lua_cocos2dx_ui_ListView_setItemsMargin);
        tolua_function(tolua_S,"removeLastItem",lua_cocos2dx_ui_ListView_removeLastItem);
        tolua_function(tolua_S,"getItemsMargin",lua_cocos2dx_ui_ListView_getItemsMargin);
        tolua_function(tolua_S,"getItem",lua_cocos2dx_ui_ListView_getItem);
        tolua_function(tolua_S,"setItemModel",lua_cocos2dx_ui_ListView_setItemModel);
        tolua_function(tolua_S,"requestRefreshView",lua_cocos2dx_ui_ListView_requestRefreshView);
        tolua_function(tolua_S,"pushBackDefaultItem",lua_cocos2dx_ui_ListView_pushBackDefaultItem);
        tolua_function(tolua_S,"insertCustomItem",lua_cocos2dx_ui_ListView_insertCustomItem);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_ListView_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_ListView_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::ListView).name();
    g_luaType[typeName] = "ccui.ListView";
    g_typeCast["ListView"] = "ccui.ListView";
    return 1;
}

int lua_cocos2dx_ui_Slider_setPercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_setPercent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setPercent(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPercent",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_setPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadSlidBallTextureDisabled(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadSlidBallTextureDisabled(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadSlidBallTextureDisabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadSlidBallTextureNormal(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadSlidBallTextureNormal(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadSlidBallTextureNormal",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_loadBarTexture(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_loadBarTexture'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadBarTexture(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadBarTexture(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadBarTexture",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_loadBarTexture'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_loadProgressBarTexture(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_loadProgressBarTexture'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadProgressBarTexture(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadProgressBarTexture(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadProgressBarTexture",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_loadProgressBarTexture'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_loadSlidBallTextures(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_loadSlidBallTextures'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadSlidBallTextures(arg0, arg1, arg2);
        return 0;
    }
    if (argc == 4) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        cocos2d::ui::TextureResType arg3;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3);
        if(!ok)
            return 0;
        cobj->loadSlidBallTextures(arg0, arg1, arg2, arg3);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadSlidBallTextures",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_loadSlidBallTextures'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_setCapInsetProgressBarRebderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_setCapInsetProgressBarRebderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsetProgressBarRebderer(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsetProgressBarRebderer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_setCapInsetProgressBarRebderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_setCapInsetsBarRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_setCapInsetsBarRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsetsBarRenderer(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsetsBarRenderer",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_setCapInsetsBarRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_getCapInsetsProgressBarRebderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_getCapInsetsProgressBarRebderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Rect& ret = cobj->getCapInsetsProgressBarRebderer();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsetsProgressBarRebderer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_getCapInsetsProgressBarRebderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_setScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_setScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setScale9Enabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setScale9Enabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_setScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_setCapInsets(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_setCapInsets'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Rect arg0;

        ok &= luaval_to_rect(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setCapInsets(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setCapInsets",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_setCapInsets'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->loadSlidBallTexturePressed(arg0);
        return 0;
    }
    if (argc == 2) 
    {
        const char* arg0;
        cocos2d::ui::TextureResType arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->loadSlidBallTexturePressed(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loadSlidBallTexturePressed",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_isScale9Enabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_isScale9Enabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isScale9Enabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isScale9Enabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_isScale9Enabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_getCapInsetsBarRenderer(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_getCapInsetsBarRenderer'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const cocos2d::Rect& ret = cobj->getCapInsetsBarRenderer();
        rect_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCapInsetsBarRenderer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_getCapInsetsBarRenderer'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_getPercent(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::Slider*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_Slider_getPercent'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getPercent();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPercent",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_getPercent'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_Slider_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Slider",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::Slider* ret = cocos2d::ui::Slider::create();
        object_to_luaval<cocos2d::ui::Slider>(tolua_S, "ccui.Slider",(cocos2d::ui::Slider*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Slider_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::Slider* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::Slider();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.Slider");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "Slider",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Slider_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_Slider_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Slider)");
    return 0;
}

int lua_register_cocos2dx_ui_Slider(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Slider");
    tolua_cclass(tolua_S,"Slider","ccui.Slider","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"Slider");
        tolua_function(tolua_S,"setPercent",lua_cocos2dx_ui_Slider_setPercent);
        tolua_function(tolua_S,"loadSlidBallTextureDisabled",lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled);
        tolua_function(tolua_S,"loadSlidBallTextureNormal",lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal);
        tolua_function(tolua_S,"loadBarTexture",lua_cocos2dx_ui_Slider_loadBarTexture);
        tolua_function(tolua_S,"loadProgressBarTexture",lua_cocos2dx_ui_Slider_loadProgressBarTexture);
        tolua_function(tolua_S,"loadSlidBallTextures",lua_cocos2dx_ui_Slider_loadSlidBallTextures);
        tolua_function(tolua_S,"setCapInsetProgressBarRebderer",lua_cocos2dx_ui_Slider_setCapInsetProgressBarRebderer);
        tolua_function(tolua_S,"setCapInsetsBarRenderer",lua_cocos2dx_ui_Slider_setCapInsetsBarRenderer);
        tolua_function(tolua_S,"getCapInsetsProgressBarRebderer",lua_cocos2dx_ui_Slider_getCapInsetsProgressBarRebderer);
        tolua_function(tolua_S,"setScale9Enabled",lua_cocos2dx_ui_Slider_setScale9Enabled);
        tolua_function(tolua_S,"setCapInsets",lua_cocos2dx_ui_Slider_setCapInsets);
        tolua_function(tolua_S,"loadSlidBallTexturePressed",lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed);
        tolua_function(tolua_S,"isScale9Enabled",lua_cocos2dx_ui_Slider_isScale9Enabled);
        tolua_function(tolua_S,"getCapInsetsBarRenderer",lua_cocos2dx_ui_Slider_getCapInsetsBarRenderer);
        tolua_function(tolua_S,"getPercent",lua_cocos2dx_ui_Slider_getPercent);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_Slider_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_Slider_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Slider).name();
    g_luaType[typeName] = "ccui.Slider";
    g_typeCast["Slider"] = "ccui.Slider";
    return 1;
}

int lua_cocos2dx_ui_TextField_setAttachWithIME(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setAttachWithIME'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setAttachWithIME(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setAttachWithIME",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setAttachWithIME'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getFontSize();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFontSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getStringValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getStringValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getStringValue();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStringValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getStringValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getDeleteBackward(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getDeleteBackward'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getDeleteBackward();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDeleteBackward",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getDeleteBackward'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getPlaceHolder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getPlaceHolder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getPlaceHolder();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPlaceHolder",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getPlaceHolder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getAttachWithIME(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getAttachWithIME'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getAttachWithIME();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getAttachWithIME",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getAttachWithIME'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setFontName(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontName",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getInsertText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getInsertText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getInsertText();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getInsertText",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getInsertText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setInsertText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setInsertText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setInsertText(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setInsertText",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setInsertText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getDetachWithIME(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getDetachWithIME'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->getDetachWithIME();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDetachWithIME",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getDetachWithIME'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_didNotSelectSelf(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_didNotSelectSelf'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->didNotSelectSelf();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "didNotSelectSelf",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_didNotSelectSelf'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getFontName(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getFontName'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const std::string& ret = cobj->getFontName();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getFontName",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getFontName'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_attachWithIME(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_attachWithIME'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->attachWithIME();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "attachWithIME",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_attachWithIME'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setPasswordEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setPasswordEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setPasswordEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPasswordEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setPasswordEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getPasswordStyleText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getPasswordStyleText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getPasswordStyleText();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPasswordStyleText",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getPasswordStyleText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setMaxLengthEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setMaxLengthEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setMaxLengthEnabled(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaxLengthEnabled",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setMaxLengthEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setPasswordStyleText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setPasswordStyleText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setPasswordStyleText(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPasswordStyleText",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setPasswordStyleText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setDeleteBackward(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setDeleteBackward'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDeleteBackward(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDeleteBackward",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setDeleteBackward'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setFontSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setFontSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setFontSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFontSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setFontSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setPlaceHolder(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setPlaceHolder'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setPlaceHolder(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlaceHolder",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setPlaceHolder'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_isPasswordEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_isPasswordEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isPasswordEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isPasswordEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_isPasswordEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getMaxLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getMaxLength'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        int ret = cobj->getMaxLength();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getMaxLength",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getMaxLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_isMaxLengthEnabled(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_isMaxLengthEnabled'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        bool ret = cobj->isMaxLengthEnabled();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "isMaxLengthEnabled",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_isMaxLengthEnabled'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setDetachWithIME(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setDetachWithIME'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setDetachWithIME(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setDetachWithIME",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setDetachWithIME'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->setText(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setText",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setMaxLength(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setMaxLength'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setMaxLength(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setMaxLength",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setMaxLength'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_setTouchSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_setTouchSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::Size arg0;

        ok &= luaval_to_size(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->setTouchSize(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setTouchSize",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_setTouchSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_getTouchSize(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextField*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextField_getTouchSize'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Size ret = cobj->getTouchSize();
        size_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getTouchSize",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_getTouchSize'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextField_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.TextField",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::TextField* ret = cocos2d::ui::TextField::create();
        object_to_luaval<cocos2d::ui::TextField>(tolua_S, "ccui.TextField",(cocos2d::ui::TextField*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_TextField_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextField* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::TextField();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.TextField");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "TextField",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextField_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_TextField_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TextField)");
    return 0;
}

int lua_register_cocos2dx_ui_TextField(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.TextField");
    tolua_cclass(tolua_S,"TextField","ccui.TextField","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"TextField");
        tolua_function(tolua_S,"setAttachWithIME",lua_cocos2dx_ui_TextField_setAttachWithIME);
        tolua_function(tolua_S,"getFontSize",lua_cocos2dx_ui_TextField_getFontSize);
        tolua_function(tolua_S,"getStringValue",lua_cocos2dx_ui_TextField_getStringValue);
        tolua_function(tolua_S,"getDeleteBackward",lua_cocos2dx_ui_TextField_getDeleteBackward);
        tolua_function(tolua_S,"getPlaceHolder",lua_cocos2dx_ui_TextField_getPlaceHolder);
        tolua_function(tolua_S,"getAttachWithIME",lua_cocos2dx_ui_TextField_getAttachWithIME);
        tolua_function(tolua_S,"setFontName",lua_cocos2dx_ui_TextField_setFontName);
        tolua_function(tolua_S,"getInsertText",lua_cocos2dx_ui_TextField_getInsertText);
        tolua_function(tolua_S,"setInsertText",lua_cocos2dx_ui_TextField_setInsertText);
        tolua_function(tolua_S,"getDetachWithIME",lua_cocos2dx_ui_TextField_getDetachWithIME);
        tolua_function(tolua_S,"didNotSelectSelf",lua_cocos2dx_ui_TextField_didNotSelectSelf);
        tolua_function(tolua_S,"getFontName",lua_cocos2dx_ui_TextField_getFontName);
        tolua_function(tolua_S,"attachWithIME",lua_cocos2dx_ui_TextField_attachWithIME);
        tolua_function(tolua_S,"setPasswordEnabled",lua_cocos2dx_ui_TextField_setPasswordEnabled);
        tolua_function(tolua_S,"getPasswordStyleText",lua_cocos2dx_ui_TextField_getPasswordStyleText);
        tolua_function(tolua_S,"setMaxLengthEnabled",lua_cocos2dx_ui_TextField_setMaxLengthEnabled);
        tolua_function(tolua_S,"setPasswordStyleText",lua_cocos2dx_ui_TextField_setPasswordStyleText);
        tolua_function(tolua_S,"setDeleteBackward",lua_cocos2dx_ui_TextField_setDeleteBackward);
        tolua_function(tolua_S,"setFontSize",lua_cocos2dx_ui_TextField_setFontSize);
        tolua_function(tolua_S,"setPlaceHolder",lua_cocos2dx_ui_TextField_setPlaceHolder);
        tolua_function(tolua_S,"isPasswordEnabled",lua_cocos2dx_ui_TextField_isPasswordEnabled);
        tolua_function(tolua_S,"getMaxLength",lua_cocos2dx_ui_TextField_getMaxLength);
        tolua_function(tolua_S,"isMaxLengthEnabled",lua_cocos2dx_ui_TextField_isMaxLengthEnabled);
        tolua_function(tolua_S,"setDetachWithIME",lua_cocos2dx_ui_TextField_setDetachWithIME);
        tolua_function(tolua_S,"setText",lua_cocos2dx_ui_TextField_setText);
        tolua_function(tolua_S,"setMaxLength",lua_cocos2dx_ui_TextField_setMaxLength);
        tolua_function(tolua_S,"setTouchSize",lua_cocos2dx_ui_TextField_setTouchSize);
        tolua_function(tolua_S,"getTouchSize",lua_cocos2dx_ui_TextField_getTouchSize);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_TextField_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_TextField_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::TextField).name();
    g_luaType[typeName] = "ccui.TextField";
    g_typeCast["TextField"] = "ccui.TextField";
    return 1;
}

int lua_cocos2dx_ui_TextBMFont_setFntFile(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextBMFont* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextBMFont",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextBMFont*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextBMFont_setFntFile'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setFntFile(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setFntFile",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextBMFont_setFntFile'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextBMFont_getStringValue(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextBMFont* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextBMFont",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextBMFont*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextBMFont_getStringValue'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        const char* ret = cobj->getStringValue();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getStringValue",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextBMFont_getStringValue'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextBMFont_setText(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextBMFont* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.TextBMFont",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::TextBMFont*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_TextBMFont_setText'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->setText(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setText",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextBMFont_setText'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_TextBMFont_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.TextBMFont",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::TextBMFont* ret = cocos2d::ui::TextBMFont::create();
        object_to_luaval<cocos2d::ui::TextBMFont>(tolua_S, "ccui.TextBMFont",(cocos2d::ui::TextBMFont*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextBMFont_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_TextBMFont_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::TextBMFont* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::TextBMFont();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.TextBMFont");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "TextBMFont",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_TextBMFont_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_TextBMFont_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (TextBMFont)");
    return 0;
}

int lua_register_cocos2dx_ui_TextBMFont(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.TextBMFont");
    tolua_cclass(tolua_S,"TextBMFont","ccui.TextBMFont","ccui.Widget",NULL);

    tolua_beginmodule(tolua_S,"TextBMFont");
        tolua_function(tolua_S,"setFntFile",lua_cocos2dx_ui_TextBMFont_setFntFile);
        tolua_function(tolua_S,"getStringValue",lua_cocos2dx_ui_TextBMFont_getStringValue);
        tolua_function(tolua_S,"setText",lua_cocos2dx_ui_TextBMFont_setText);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_TextBMFont_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_TextBMFont_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::TextBMFont).name();
    g_luaType[typeName] = "ccui.TextBMFont";
    g_typeCast["TextBMFont"] = "ccui.TextBMFont";
    return 1;
}

int lua_cocos2dx_ui_PageView_getCurPageIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_getCurPageIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        ssize_t ret = cobj->getCurPageIndex();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getCurPageIndex",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_getCurPageIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_addWidgetToPage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_addWidgetToPage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        cocos2d::ui::Widget* arg0;
        ssize_t arg1;
        bool arg2;

        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);

        ok &= luaval_to_ssize(tolua_S, 3, &arg1);

        ok &= luaval_to_boolean(tolua_S, 4,&arg2);
        if(!ok)
            return 0;
        cobj->addWidgetToPage(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addWidgetToPage",argc, 3);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_addWidgetToPage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_getPage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_getPage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ssize_t arg0;

        ok &= luaval_to_ssize(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cocos2d::ui::Layout* ret = cobj->getPage(arg0);
        object_to_luaval<cocos2d::ui::Layout>(tolua_S, "ccui.Layout",(cocos2d::ui::Layout*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_getPage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_removePage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_removePage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Layout* arg0;

        ok &= luaval_to_object<cocos2d::ui::Layout>(tolua_S, 2, "ccui.Layout",&arg0);
        if(!ok)
            return 0;
        cobj->removePage(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removePage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_removePage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_insertPage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_insertPage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        cocos2d::ui::Layout* arg0;
        int arg1;

        ok &= luaval_to_object<cocos2d::ui::Layout>(tolua_S, 2, "ccui.Layout",&arg0);

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->insertPage(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "insertPage",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_insertPage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_scrollToPage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_scrollToPage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ssize_t arg0;

        ok &= luaval_to_ssize(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->scrollToPage(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "scrollToPage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_scrollToPage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_removePageAtIndex(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_removePageAtIndex'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        ssize_t arg0;

        ok &= luaval_to_ssize(tolua_S, 2, &arg0);
        if(!ok)
            return 0;
        cobj->removePageAtIndex(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removePageAtIndex",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_removePageAtIndex'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_getPages(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_getPages'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cocos2d::Vector<cocos2d::ui::Layout *>& ret = cobj->getPages();
        ccvector_to_luaval(tolua_S, ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getPages",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_getPages'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_removeAllPages(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_removeAllPages'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->removeAllPages();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "removeAllPages",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_removeAllPages'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_addPage(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (cocos2d::ui::PageView*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_cocos2dx_ui_PageView_addPage'", NULL);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        cocos2d::ui::Layout* arg0;

        ok &= luaval_to_object<cocos2d::ui::Layout>(tolua_S, 2, "ccui.Layout",&arg0);
        if(!ok)
            return 0;
        cobj->addPage(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addPage",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_addPage'.",&tolua_err);
#endif

    return 0;
}
int lua_cocos2dx_ui_PageView_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.PageView",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        cocos2d::ui::PageView* ret = cocos2d::ui::PageView::create();
        object_to_luaval<cocos2d::ui::PageView>(tolua_S, "ccui.PageView",(cocos2d::ui::PageView*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_create'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_PageView_constructor(lua_State* tolua_S)
{
    int argc = 0;
    cocos2d::ui::PageView* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj = new cocos2d::ui::PageView();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"ccui.PageView");
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "PageView",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_PageView_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_cocos2dx_ui_PageView_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (PageView)");
    return 0;
}

int lua_register_cocos2dx_ui_PageView(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.PageView");
    tolua_cclass(tolua_S,"PageView","ccui.PageView","ccui.Layout",NULL);

    tolua_beginmodule(tolua_S,"PageView");
        tolua_function(tolua_S,"getCurPageIndex",lua_cocos2dx_ui_PageView_getCurPageIndex);
        tolua_function(tolua_S,"addWidgetToPage",lua_cocos2dx_ui_PageView_addWidgetToPage);
        tolua_function(tolua_S,"getPage",lua_cocos2dx_ui_PageView_getPage);
        tolua_function(tolua_S,"removePage",lua_cocos2dx_ui_PageView_removePage);
        tolua_function(tolua_S,"insertPage",lua_cocos2dx_ui_PageView_insertPage);
        tolua_function(tolua_S,"scrollToPage",lua_cocos2dx_ui_PageView_scrollToPage);
        tolua_function(tolua_S,"removePageAtIndex",lua_cocos2dx_ui_PageView_removePageAtIndex);
        tolua_function(tolua_S,"getPages",lua_cocos2dx_ui_PageView_getPages);
        tolua_function(tolua_S,"removeAllPages",lua_cocos2dx_ui_PageView_removeAllPages);
        tolua_function(tolua_S,"addPage",lua_cocos2dx_ui_PageView_addPage);
        tolua_function(tolua_S,"new",lua_cocos2dx_ui_PageView_constructor);
        tolua_function(tolua_S,"create", lua_cocos2dx_ui_PageView_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::PageView).name();
    g_luaType[typeName] = "ccui.PageView";
    g_typeCast["PageView"] = "ccui.PageView";
    return 1;
}

int lua_cocos2dx_ui_Helper_seekActionWidgetByActionTag(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::ui::Widget* arg0;
        int arg1;
        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cocos2d::ui::Widget* ret = cocos2d::ui::Helper::seekActionWidgetByActionTag(arg0, arg1);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "seekActionWidgetByActionTag",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_seekActionWidgetByActionTag'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Helper_seekWidgetByTag(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::ui::Widget* arg0;
        int arg1;
        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cocos2d::ui::Widget* ret = cocos2d::ui::Helper::seekWidgetByTag(arg0, arg1);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "seekWidgetByTag",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_seekWidgetByTag'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Helper_seekWidgetByRelativeName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::ui::Widget* arg0;
        const char* arg1;
        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cocos2d::ui::Widget* ret = cocos2d::ui::Helper::seekWidgetByRelativeName(arg0, arg1);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "seekWidgetByRelativeName",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_seekWidgetByRelativeName'.",&tolua_err);
#endif
    return 0;
}
int lua_cocos2dx_ui_Helper_seekWidgetByName(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ccui.Helper",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        cocos2d::ui::Widget* arg0;
        const char* arg1;
        ok &= luaval_to_object<cocos2d::ui::Widget>(tolua_S, 2, "ccui.Widget",&arg0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cocos2d::ui::Widget* ret = cocos2d::ui::Helper::seekWidgetByName(arg0, arg1);
        object_to_luaval<cocos2d::ui::Widget>(tolua_S, "ccui.Widget",(cocos2d::ui::Widget*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "seekWidgetByName",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_cocos2dx_ui_Helper_seekWidgetByName'.",&tolua_err);
#endif
    return 0;
}
static int lua_cocos2dx_ui_Helper_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (Helper)");
    return 0;
}

int lua_register_cocos2dx_ui_Helper(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ccui.Helper");
    tolua_cclass(tolua_S,"Helper","ccui.Helper","",NULL);

    tolua_beginmodule(tolua_S,"Helper");
        tolua_function(tolua_S,"seekActionWidgetByActionTag", lua_cocos2dx_ui_Helper_seekActionWidgetByActionTag);
        tolua_function(tolua_S,"seekWidgetByTag", lua_cocos2dx_ui_Helper_seekWidgetByTag);
        tolua_function(tolua_S,"seekWidgetByRelativeName", lua_cocos2dx_ui_Helper_seekWidgetByRelativeName);
        tolua_function(tolua_S,"seekWidgetByName", lua_cocos2dx_ui_Helper_seekWidgetByName);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::ui::Helper).name();
    g_luaType[typeName] = "ccui.Helper";
    g_typeCast["Helper"] = "ccui.Helper";
    return 1;
}
TOLUA_API int register_all_cocos2dx_ui(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ccui",0);
	tolua_beginmodule(tolua_S,"ccui");

	lua_register_cocos2dx_ui_Widget(tolua_S);
	lua_register_cocos2dx_ui_Layout(tolua_S);
	lua_register_cocos2dx_ui_PageView(tolua_S);
	lua_register_cocos2dx_ui_CheckBox(tolua_S);
	lua_register_cocos2dx_ui_Helper(tolua_S);
	lua_register_cocos2dx_ui_Text(tolua_S);
	lua_register_cocos2dx_ui_Button(tolua_S);
	lua_register_cocos2dx_ui_LayoutParameter(tolua_S);
	lua_register_cocos2dx_ui_LinearLayoutParameter(tolua_S);
	lua_register_cocos2dx_ui_TextBMFont(tolua_S);
	lua_register_cocos2dx_ui_ScrollView(tolua_S);
	lua_register_cocos2dx_ui_LoadingBar(tolua_S);
	lua_register_cocos2dx_ui_Slider(tolua_S);
	lua_register_cocos2dx_ui_RelativeLayoutParameter(tolua_S);
	lua_register_cocos2dx_ui_ImageView(tolua_S);
	lua_register_cocos2dx_ui_TextAtlas(tolua_S);
	lua_register_cocos2dx_ui_TextField(tolua_S);
	lua_register_cocos2dx_ui_ListView(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

