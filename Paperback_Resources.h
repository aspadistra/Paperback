
#define M_FILE_OPEN    1001
#define M_FILE_SAVEBMP 1002
#define M_FILE_SELECT  1003
#define M_FILE_ACQUIRE 1004

#define M_FILE_PAGE    1005
#define M_FILE_PRINT   1006
#define M_FILE_EXIT    1007

#define M_HELP_ABOUT   2001

#define ABOUT_TEXT     3001
#define ABOUT_OK       IDOK
#define ABOUT_CANCEL   IDCANCEL

#define OPT_DENSITY    3101
#define OPT_DOTSIZE    3102

#define OPT_COMPRESS   3103
#define OPT_REDUND     3104

#define OPT_HEADER     3106
#define OPT_BORDER     3107

#define OPT_AUTOSAVE   3108
#define OPT_HIQ        3109
#define OPT_ENCRYPT    3110
#define OPT_OPENTEXT   3111
#define OPT_OK         IDOK
#define OPT_CANCEL     IDCANCEL

#define PAS_TEXT       3201
#define PAS_ENTER      3202
#define PAS_CONFIRM    3203
#define PAS_OK         IDOK
#define PAS_CANCEL     IDCANCEL

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// PaperBack -- high density backups on the plain paper                       //
//                                                                            //
// Copyright (c) 2007 Oleh Yuschuk                                            //
// ollydbg at t-online de (set Subject to 'paperback' or be filtered out!)    //
//                                                                            //
//                                                                            //
// This file is part of PaperBack.                                            //
//                                                                            //
// Paperback is free software; you can redistribute it and/or modify it under //
// the terms of the GNU General Public License as published by the Free       //
// Software Foundation; either version 3 of the License, or (at your option)  //
// any later version.                                                         //
//                                                                            //
// PaperBack is distributed in the hope that it will be useful, but WITHOUT   //
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or      //
// FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for   //
// more details.                                                              //
//                                                                            //
// You should have received a copy of the GNU General Public License along    //
// with this program. If not, see <http://www.gnu.org/licenses/>.             //
//                                                                            //
//                                                                            //
// Note that bzip2 compression/decompression library, which is the part of    //
// this project, is covered by different license, which, in my opinion, is    //
// compatible with GPL.                                                       //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

ICON_MAIN ICON
{
 '00 00 01 00 02 00 20 20 10 00 00 00 00 00 E8 02'
 '00 00 26 00 00 00 10 10 10 00 00 00 00 00 28 01'
 '00 00 0E 03 00 00 28 00 00 00 20 00 00 00 40 00'
 '00 00 01 00 04 00 00 00 00 00 80 02 00 00 00 00'
 '00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00'
 '00 00 00 00 80 00 00 80 00 00 00 80 80 00 80 00'
 '00 00 80 00 80 00 80 80 00 00 80 80 80 00 C0 C0'
 'C0 00 00 00 FF 00 00 FF 00 00 00 FF FF 00 FF 00'
 '00 00 FF 00 FF 00 FF FF 00 00 FF FF FF 00 00 00'
 '00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00'
 '00 FF FF FF FF FF FF FF FF FF FF 00 00 00 00 00'
 '00 FF 0F 0F 0F 0F 0F 0F 0F 0F 0F 00 00 00 00 00'
 '00 FF FF FF FF FF FF FF FF FF FF 00 00 00 00 00'
 '00 FF 0F 0F 0F 0F 0F 0F 0F 0F 0F 00 00 00 00 00'
 '00 FF FF FF FF FF FF FF FF FF FF 00 00 00 00 00'
