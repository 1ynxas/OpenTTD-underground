/*
 * This file is part of OpenTTD-underground, a fork of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <https://www.gnu.org/licenses/old-licenses/gpl-2.0>.
 */

 /** @file heightslicer.h Functions related to viewing underground stuff. */

extern uint _slice_height;
extern bool _view_slice;

/**
 * ...
 * ..
 *
 * @param ti the info of the tile
 * @return \c true if the tile should not be drawn
 */
inline bool IsSlicedAway(const TileInfo *ti)
{	
    return (_view_slice && (GetTileZ(ti->tile) >= _slice_height));
}

/**
 * ...
 * ..
 *
 * @param ti the info of the tile
 * @return \c true if the tile should not be drawn
 */
inline bool IsSlicedAway(TileIndex tile)
{	
    return (_view_slice && (GetTileZ(tile) >= _slice_height));
}