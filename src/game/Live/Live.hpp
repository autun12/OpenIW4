#pragma once

#include "../stdafx.hpp"

std::int32_t* __stdcall Live_GetCurrentSession();
bool Live_IsSignedIn();
std::int32_t Live_GetLSPXuid(std::int32_t a1, std::int64_t* a2);
const char* Live_GetLocalClientName();