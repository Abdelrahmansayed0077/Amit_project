#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(Reg, Bit_No) Reg |= (1<<Bit_No)
#define CLR_BIT(Reg, Bit_No) Reg &=~ (1<<Bit_No)
#define CHK_BIT(Reg, Bit_No) Reg &= (1<<Bit_No)
#define TOG_BIT(Reg, Bit_No) Reg ^= (1<<Bit_No)

#endif /* 2__SOURCE_1__LIBRARY_BIT_MATH_H_ */