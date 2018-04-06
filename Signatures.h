//HANDLE hDungreed = FindWindow(TEXT("Dungreed"), NULL); //UnityWndClass

#define PlayerHealthSig "\xd9\x58\x00\x8b\x43\x00\xd9\x40\x00\xd9\xee\xdf\xf1\xdd\xd8\x7a" //D9 58 10 8B 43 14 D9 40 10 D9 EE DF F1 DD D8 7A 02 73 1D
//#define PlayerHealthSigIDA "d9 58 ? 8b 43 ? d9 40 ? d9 ee df f1 dd d8 7a"
#define PlayerHealthMask "xx?xx?xx?xxxxxxx"

/*
fstp dword ptr [eax+10]
mov eax,[ebx+14]
*/



#define PlayerMoneySig "\x89\x86\x00\x00\x00\x00\x89\x86" //89 86 10 01 00 00 89 86 14 01 00 00 8B
//#define PlayerHealthSigIDA "89 86 ? ? ? ? 89 86"
#define PlayerMoneyMask "xx????xx"

/*
mov [esi+00000110],eax
*/


#define PlayerDashSig "\x89\x87\x00\x00\x00\x00\xc6\x87\xe9\x00\x00\x00" //89 87 9C 00 00 00 C6
//#define PlayerDashIDA "89 87 ? ? ? ? c6 87 e9 00 00 00"
#define PlayerDashMask "xx????xxxxxx"

/*
mov [edi+0000009C],eax
*/
