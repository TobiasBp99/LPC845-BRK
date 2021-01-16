/**
 \file		: LPC845.h
 \brief     : Declarations for type of data
 \details   : Only contains macros
 \author    : Tobias Bavasso Piizzi
 \date 	    : 04/01/2021
*/

#ifndef LPC845_H_
#define LPC845_H_

#define		__R		volatile const
#define		__W		volatile
#define		__RW		volatile

typedef 	unsigned int 	uint32_t;
typedef 	unsigned short 	uint16_t;
typedef 	unsigned char 	uint8_t;

#define	_ISER ( (__RW uint32_t *) 0xE000E100UL)
#define ISER0 _ISER[0]


#endif /* LPC845_H_ */
