/**
 * This file is part of RagEmu.
 * http://ragemu.org - https://github.com/RagEmu/Renewal
 *
 * Copyright (C) 2016  RagEmu Dev Team
 * RagEmu is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#define RAGEMU_CORE

#include "date.h"

#include "common/cbasetypes.h"

#include <time.h>

int date_get_year(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_year+1900;
}
int date_get_month(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_mon+1;
}
int date_get_day(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_mday;
}
int date_get_hour(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_hour;
}

int date_get_min(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_min;
}

int date_get_sec(void)
{
	time_t t;
	struct tm * lt;
	t = time(NULL);
	lt = localtime(&t);
	return lt->tm_sec;
}

/*==========================================
 * Star gladiator related checks
 *------------------------------------------*/

bool is_day_of_sun(void)
{
	return date_get_day()%2 == 0;
}

bool is_day_of_moon(void)
{
	return date_get_day()%2 == 1;
}

bool is_day_of_star(void)
{
	return date_get_day()%5 == 0;
}
