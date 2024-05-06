#include "extdll.h"
#include "util.h"
#include "cbase.h"

class CTriggerPrint : public CBaseEntity
{
public:
	//called when entity spawns (unneeded here)
	//void Spawn() override;

	//called when entity is triggered by another entity
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value) override;
};

//make an entity out of this class def
LINK_ENTITY_TO_CLASS(trigger_print, CTriggerPrint);

/*
void CTriggerPrint::Spawn()
{
	//does literally nothing
}
*/

void CTriggerPrint::Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE useType, float value)
{
	ALERT(at_console, "trigger_print says: %s\n", STRING(pev->message));
	int* ptr = nullptr;
	*ptr = 666; //because im evil mwahahaha
}