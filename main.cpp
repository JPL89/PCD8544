/*
	@File 		main.cpp
	@Author		JOSIMAR PEREIRA LEITE
	@country	Brazil
	@Date		07/06/2021
	

    Copyright (C) 2021  JOSIMAR PEREIRA LEITE

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
*/

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

#include "nokia5110.h"

NOKIA5110 nokia5110;

int main(void)
{
	nokia5110.Init();
	
	nokia5110.WriteString("Nokia", 0, 0, Font_Arial_16x16);
	
    while(1)
    {
        
    }
}
