/*****************************************************************
|
|   Platinum - ConnectionManager SCPD
|
| Copyright (c) 2004-2010, Plutinosoft, LLC.
| All rights reserved.
| http://www.plutinosoft.com
|
| This program is free software; you can redistribute it and/or
| modify it under the terms of the GNU General Public License
| as published by the Free Software Foundation; either version 2
| of the License, or (at your option) any later version.
|
| OEMs, ISVs, VARs and other distributors that combine and 
| distribute commercially licensed software with Platinum software
| and do not wish to distribute the source code for the commercially
| licensed software under version 2, or (at your option) any later
| version, of the GNU General Public License (the "GPL") must enter
| into a commercial license agreement with Plutinosoft, LLC.
| licensing@plutinosoft.com
| 
| This program is distributed in the hope that it will be useful,
| but WITHOUT ANY WARRANTY; without even the implied warranty of
| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
| GNU General Public License for more details.
|
| You should have received a copy of the GNU General Public License
| along with this program; see the file LICENSE.txt. If not, write to
| the Free Software Foundation, Inc., 
| 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
| http://www.gnu.org/licenses/gpl-2.0.html
|
****************************************************************/

/*----------------------------------------------------------------------
|   includes
+---------------------------------------------------------------------*/
#include "Neptune.h"

/*----------------------------------------------------------------------
|   globals
+---------------------------------------------------------------------*/
NPT_UInt8 RDR_ConnectionManagerSCPD[] =
{
  0x3C, 0x3F, 0x78, 0x6D, 0x6C, 0x20, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x31, 0x2E, 0x30, 0x22, 0x20, 
  0x65, 0x6E, 0x63, 0x6F, 0x64, 0x69, 0x6E, 0x67, 0x3D, 0x22, 0x75, 0x74, 0x66, 0x2D, 0x38, 0x22, 0x3F, 0x3E, 0x0D, 0x0A, 
  0x3C, 0x73, 0x63, 0x70, 0x64, 0x20, 0x78, 0x6D, 0x6C, 0x6E, 0x73, 0x3D, 0x27, 0x75, 0x72, 0x6E, 0x3A, 0x73, 0x63, 0x68, 
  0x65, 0x6D, 0x61, 0x73, 0x2D, 0x75, 0x70, 0x6E, 0x70, 0x2D, 0x6F, 0x72, 0x67, 0x3A, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 
  0x65, 0x2D, 0x31, 0x2D, 0x30, 0x27, 0x3E, 0x0D, 0x0A, 0x09, 0x3C, 0x73, 0x70, 0x65, 0x63, 0x56, 0x65, 0x72, 0x73, 0x69, 
  0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x6D, 0x61, 0x6A, 0x6F, 0x72, 0x3E, 0x31, 0x3C, 0x2F, 0x6D, 0x61, 0x6A, 
  0x6F, 0x72, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x6D, 0x69, 0x6E, 0x6F, 0x72, 0x3E, 0x30, 0x3C, 0x2F, 0x6D, 0x69, 0x6E, 
  0x6F, 0x72, 0x3E, 0x0D, 0x0A, 0x09, 0x3C, 0x2F, 0x73, 0x70, 0x65, 0x63, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3E, 
  0x0D, 0x0A, 0x09, 0x3C, 0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 
  0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x47, 0x65, 
  0x74, 0x43, 0x75, 0x72, 0x72, 0x65, 0x6E, 0x74, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 0x6E, 
  0x66, 0x6F, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 
  0x65, 0x6E, 0x74, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 
  0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x43, 0x6F, 0x6E, 
  0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 0x44, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 
  0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x69, 0x6E, 0x3C, 0x2F, 0x64, 0x69, 
  0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x72, 0x65, 0x6C, 0x61, 
  0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x41, 0x5F, 0x41, 
  0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 0x44, 
  0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 
  0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 
  0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 
  0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x52, 0x63, 0x73, 0x49, 0x44, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 
  0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x6F, 
  0x75, 0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 
  0x09, 0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 
  0x6C, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x52, 0x63, 0x73, 0x49, 0x44, 0x3C, 
  0x2F, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 
  0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 
  0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 
  0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x41, 0x56, 0x54, 0x72, 0x61, 0x6E, 0x73, 0x70, 0x6F, 0x72, 0x74, 0x49, 
  0x44, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 
  0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x6F, 0x75, 0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 
  0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 
  0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 
  0x5F, 0x41, 0x56, 0x54, 0x72, 0x61, 0x6E, 0x73, 0x70, 0x6F, 0x72, 0x74, 0x49, 0x44, 0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 
  0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 
  0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 
  0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 
  0x6D, 0x65, 0x3E, 0x50, 0x72, 0x6F, 0x74, 0x6F, 0x63, 0x6F, 0x6C, 0x49, 0x6E, 0x66, 0x6F, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 
  0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 
  0x6F, 0x75, 0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 
  0x09, 0x09, 0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 
  0x62, 0x6C, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x50, 0x72, 0x6F, 0x74, 0x6F, 
  0x63, 0x6F, 0x6C, 0x49, 0x6E, 0x66, 0x6F, 0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 
  0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 
  0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 
  0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x50, 0x65, 0x65, 0x72, 
  0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72, 0x3C, 0x2F, 0x6E, 
  0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 
  0x6E, 0x3E, 0x6F, 0x75, 0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 
  0x09, 0x09, 0x09, 0x09, 0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 
  0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x43, 0x6F, 0x6E, 
  0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72, 0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 
  0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 
  0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 
  0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 
  0x6D, 0x65, 0x3E, 0x50, 0x65, 0x65, 0x72, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 0x44, 0x3C, 
  0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 
  0x69, 0x6F, 0x6E, 0x3E, 0x6F, 0x75, 0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 
  0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 
  0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x43, 
  0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 0x44, 0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 
  0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 
  0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 
  0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 
  0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 
  0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x6F, 0x75, 0x74, 0x3C, 0x2F, 0x64, 
  0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x72, 0x65, 0x6C, 
  0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x41, 0x5F, 
  0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3C, 0x2F, 
  0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 
  0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 
  0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 
  0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 
  0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x6F, 0x75, 
  0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 
  0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 
  0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 
  0x69, 0x6F, 0x6E, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73, 0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 
  0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x2F, 
  0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 
  0x6D, 0x65, 0x6E, 0x74, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x63, 0x74, 0x69, 0x6F, 
  0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 
  0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x47, 0x65, 0x74, 0x50, 0x72, 0x6F, 0x74, 0x6F, 0x63, 0x6F, 0x6C, 0x49, 0x6E, 0x66, 0x6F, 
  0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 
  0x74, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 
  0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x53, 0x6F, 0x75, 0x72, 0x63, 
  0x65, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 
  0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x6F, 0x75, 0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 
  0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 
  0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x50, 0x72, 0x6F, 0x74, 
  0x6F, 0x63, 0x6F, 0x6C, 0x49, 0x6E, 0x66, 0x6F, 0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 
  0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 
  0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 0x67, 0x75, 0x6D, 
  0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x53, 0x69, 0x6E, 
  0x6B, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 
  0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x6F, 0x75, 0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 
  0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 
  0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x53, 0x69, 0x6E, 0x6B, 0x50, 0x72, 0x6F, 0x74, 0x6F, 0x63, 
  0x6F, 0x6C, 0x49, 0x6E, 0x66, 0x6F, 0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 
  0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 
  0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 
  0x74, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 
  0x0A, 0x09, 0x09, 0x3C, 0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 
  0x65, 0x3E, 0x47, 0x65, 0x74, 0x43, 0x75, 0x72, 0x72, 0x65, 0x6E, 0x74, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 
  0x6F, 0x6E, 0x49, 0x44, 0x73, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 
  0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x61, 0x72, 
  0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 
  0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 0x44, 0x73, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 
  0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x6F, 0x75, 
  0x74, 0x3C, 0x2F, 0x64, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 
  0x3C, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 
  0x65, 0x3E, 0x43, 0x75, 0x72, 0x72, 0x65, 0x6E, 0x74, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 
  0x44, 0x73, 0x3C, 0x2F, 0x72, 0x65, 0x6C, 0x61, 0x74, 0x65, 0x64, 0x53, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 
  0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 
  0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x72, 0x67, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x4C, 0x69, 0x73, 
  0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x09, 0x3C, 0x2F, 
  0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x3C, 0x73, 0x65, 0x72, 0x76, 0x69, 
  0x63, 0x65, 0x53, 0x74, 0x61, 0x74, 0x65, 0x54, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 0x74, 
  0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 0x6E, 
  0x74, 0x73, 0x3D, 0x27, 0x6E, 0x6F, 0x27, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 0x61, 0x6D, 
  0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x50, 0x72, 0x6F, 0x74, 0x6F, 0x63, 0x6F, 
  0x6C, 0x49, 0x6E, 0x66, 0x6F, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 
  0x3C, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x73, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x3C, 0x2F, 0x64, 0x61, 
  0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 
  0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 
  0x69, 0x61, 0x62, 0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 0x6E, 0x74, 0x73, 0x3D, 0x27, 0x6E, 0x6F, 
  0x27, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 
  0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x53, 0x74, 0x61, 
  0x74, 0x75, 0x73, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x64, 
  0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x73, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 
  0x54, 0x79, 0x70, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 
  0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x20, 
  0x20, 0x20, 0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x3E, 0x4F, 0x4B, 0x3C, 
  0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x3E, 
  0x43, 0x6F, 0x6E, 0x74, 0x65, 0x6E, 0x74, 0x46, 0x6F, 0x72, 0x6D, 0x61, 0x74, 0x4D, 0x69, 0x73, 0x6D, 0x61, 0x74, 0x63, 
  0x68, 0x3C, 0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 
  0x65, 0x3E, 0x49, 0x6E, 0x73, 0x75, 0x66, 0x66, 0x69, 0x63, 0x69, 0x65, 0x6E, 0x74, 0x42, 0x61, 0x6E, 0x64, 0x77, 0x69, 
  0x64, 0x74, 0x68, 0x3C, 0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x3E, 0x0D, 0x0A, 
  0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 
  0x6C, 0x75, 0x65, 0x3E, 0x55, 0x6E, 0x72, 0x65, 0x6C, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x43, 0x68, 0x61, 0x6E, 0x6E, 0x65, 
  0x6C, 0x3C, 0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 
  0x65, 0x3E, 0x55, 0x6E, 0x6B, 0x6E, 0x6F, 0x77, 0x6E, 0x3C, 0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 
  0x6C, 0x75, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 
  0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x73, 0x74, 0x61, 
  0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 0x74, 0x61, 0x74, 
  0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 0x6E, 0x74, 0x73, 
  0x3D, 0x27, 0x6E, 0x6F, 0x27, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 
  0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x41, 0x56, 0x54, 0x72, 0x61, 0x6E, 0x73, 0x70, 0x6F, 
  0x72, 0x74, 0x49, 0x44, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 
  0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x69, 0x34, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 
  0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 
  0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 
  0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 0x6E, 0x74, 0x73, 0x3D, 0x27, 0x6E, 0x6F, 0x27, 0x3E, 0x0D, 0x0A, 0x09, 
  0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 
  0x45, 0x5F, 0x52, 0x63, 0x73, 0x49, 0x44, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 
  0x20, 0x20, 0x3C, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x69, 0x34, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 
  0x54, 0x79, 0x70, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 
  0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 
  0x62, 0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 0x6E, 0x74, 0x73, 0x3D, 0x27, 0x6E, 0x6F, 0x27, 0x3E, 
  0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 
  0x54, 0x59, 0x50, 0x45, 0x5F, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 0x44, 0x3C, 0x2F, 0x6E, 
  0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 
  0x65, 0x3E, 0x69, 0x34, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 
  0x2F, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 
  0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 
  0x65, 0x6E, 0x74, 0x73, 0x3D, 0x27, 0x6E, 0x6F, 0x27, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 
  0x61, 0x6D, 0x65, 0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 
  0x63, 0x74, 0x69, 0x6F, 0x6E, 0x4D, 0x61, 0x6E, 0x61, 0x67, 0x65, 0x72, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 
  0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x73, 0x74, 0x72, 
  0x69, 0x6E, 0x67, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 
  0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 
  0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 
  0x6E, 0x74, 0x73, 0x3D, 0x27, 0x79, 0x65, 0x73, 0x27, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 
  0x61, 0x6D, 0x65, 0x3E, 0x53, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x50, 0x72, 0x6F, 0x74, 0x6F, 0x63, 0x6F, 0x6C, 0x49, 0x6E, 
  0x66, 0x6F, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x64, 0x61, 
  0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x73, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 0x54, 
  0x79, 0x70, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 
  0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 
  0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 0x6E, 0x74, 0x73, 0x3D, 0x27, 0x79, 0x65, 0x73, 0x27, 0x3E, 
  0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x53, 0x69, 0x6E, 0x6B, 0x50, 0x72, 
  0x6F, 0x74, 0x6F, 0x63, 0x6F, 0x6C, 0x49, 0x6E, 0x66, 0x6F, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 
  0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x73, 0x74, 0x72, 0x69, 0x6E, 
  0x67, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x73, 0x74, 
  0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 0x74, 0x61, 
  0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 0x6E, 0x74, 
  0x73, 0x3D, 0x27, 0x6E, 0x6F, 0x27, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 
  0x3E, 0x41, 0x5F, 0x41, 0x52, 0x47, 0x5F, 0x54, 0x59, 0x50, 0x45, 0x5F, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6F, 
  0x6E, 0x3C, 0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x64, 0x61, 0x74, 
  0x61, 0x54, 0x79, 0x70, 0x65, 0x3E, 0x73, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 
  0x70, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 
  0x61, 0x6C, 0x75, 0x65, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
  0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x3E, 0x49, 0x6E, 0x70, 0x75, 0x74, 
  0x3C, 0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 0x65, 
  0x3E, 0x4F, 0x75, 0x74, 0x70, 0x75, 0x74, 0x3C, 0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 0x61, 0x6C, 0x75, 
  0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F, 0x61, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x56, 
  0x61, 0x6C, 0x75, 0x65, 0x4C, 0x69, 0x73, 0x74, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x73, 0x74, 0x61, 0x74, 0x65, 
  0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 
  0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x20, 0x73, 0x65, 0x6E, 0x64, 0x45, 0x76, 0x65, 0x6E, 0x74, 0x73, 0x3D, 0x27, 
  0x79, 0x65, 0x73, 0x27, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x43, 
  0x75, 0x72, 0x72, 0x65, 0x6E, 0x74, 0x43, 0x6F, 0x6E, 0x6E, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x49, 0x44, 0x73, 0x3C, 
  0x2F, 0x6E, 0x61, 0x6D, 0x65, 0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x64, 0x61, 0x74, 0x61, 0x54, 
  0x79, 0x70, 0x65, 0x3E, 0x73, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x3C, 0x2F, 0x64, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 
  0x3E, 0x0D, 0x0A, 0x09, 0x09, 0x3C, 0x2F, 0x73, 0x74, 0x61, 0x74, 0x65, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 
  0x3E, 0x0D, 0x0A, 0x09, 0x3C, 0x2F, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x53, 0x74, 0x61, 0x74, 0x65, 0x54, 0x61, 
  0x62, 0x6C, 0x65, 0x3E, 0x0D, 0x0A, 0x3C, 0x2F, 0x73, 0x63, 0x70, 0x64, 0x3E, 0x0D, 0x0A, 0x00
};

