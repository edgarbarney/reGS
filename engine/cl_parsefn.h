#ifndef ENGINE_CL_PARSEFN_H
#define ENGINE_CL_PARSEFN_H

#include "event_args.h"
#include "progs.h"

typedef struct event_hook_s
{
	event_hook_s* next;
	char* name;
	void (*pfnEvent)(event_args_s*);
} event_hook_t;

void CL_InitEventSystem();

void CL_HookEvent( char* name, void( *pfnEvent )( event_args_t* ) );

void CL_QueueEvent( int flags, int index, float delay, event_args_t* pargs );

void CL_ResetEvent( event_info_t* ei );

#endif //ENGINE_CL_PARSEFN_H
