/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   camera_sensor_para.h
 *
 * Project:
 * --------
 *   DUMA
 *
 * Description:
 * ------------
 *   Header file of Sensor tuning parameters that should be generated by CCT
 *
 *
 * Author:
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 05 14 2012 hao.wang
 * [ALPS00283632] SP OV8830 Sensor Driver check in
 * .
 *
 * 
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _OV8830_CAMERA_SENSOR_PARA_H
#define _OV8830_CAMERA_SENSOR_PARA_H

#define OV8830_CAMERA_SENSOR_REG_DEFAULT_VALUE \
{ \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF}, \
  {0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,0xFFFFFFFF},{0xFFFFFFFF,ISP_DRIVING_6MA}, \
}

#define OV8830_CAMERA_SENSOR_CCT_DEFAULT_VALUE \
{ \
  {0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40}, \
}

#endif /* __CAMERA_SENSOR_PARA_H */
/* SENSOR FULL SIZE */
