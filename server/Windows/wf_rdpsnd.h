/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * FreeRDP Windows Server (Audio Output)
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WF_RDPSND_H
#define WF_RDPSND_H

#include <freerdp/freerdp.h>
#include <freerdp/listener.h>
#include <freerdp/server/rdpsnd.h>

#include "wf_interface.h"

int wf_rdpsnd_lock(void);
int wf_rdpsnd_unlock(void);
BOOL wf_peer_rdpsnd_init(wfPeerContext* context);

DWORD WINAPI wf_rdpsnd_thread(LPVOID lpParam);

#endif /* WF_RDPSND_H */

