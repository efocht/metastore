/*
 * Main functions of the program.
 *
 * Copyright (C) 2007 David Härdeman <david@hardeman.nu>
 *
 *      This program is free software; you can redistribute it and/or modify it
 *      under the terms of the GNU General Public License as published by the
 *      Free Software Foundation version 2 of the License.
 * 
 *      This program is distributed in the hope that it will be useful, but
 *      WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *      General Public License for more details.
 * 
 *      You should have received a copy of the GNU General Public License along
 *      with this program; if not, write to the Free Software Foundation, Inc.,
 *      51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

/* Each file starts with SIGNATURE and VERSION */
#define SIGNATURE    "MeTaSt00r3"
#define SIGNATURELEN 10
#define VERSION      "\0\0\0\0\0\0\0\0"
#define VERSIONLEN   8

/* Default filename */
#define METAFILE     "./.metadata"

/* Utility defines for the action to take */
#define ACTION_DIFF  0x01
#define ACTION_SAVE  0x02
#define ACTION_APPLY 0x04
#define ACTION_HELP  0x08

/* Used to store the name of the file containing the metadata */
extern char *metafile;

/* Path to look for passwd file. if NULL, use the normal getpwent() call */
extern char *pwdfilepath;
extern char *grpfilepath;
