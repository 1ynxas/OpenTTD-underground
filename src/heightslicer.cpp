/*
 * This file is part of OpenTTD-underground, a fork of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

 /** @file heightslicer.cpp For viewing underground stuff. */

/*  TODO:
 *  
 */


#include "stdafx.h"
#include "gfx_func.h"
#include "console_func.h"

uint _slice_height;
bool _view_slice;

 /** Print slicer settings to game console */
void ConPrintSlicerSettings()
{
	IConsolePrint(TC_SILVER, "Height slicer settings: slice at z = {}, slicing set to {}", _slice_height, _view_slice);
}

void SetSlicerHeight(uint new_height)
{
    _slice_height = new_height;
}

void SetSlicer(bool enable_flag)
{
    _view_slice = enable_flag;
    MarkWholeScreenDirty();
}