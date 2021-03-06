/* DO NOT MODIFY
   This file is automatically generated by Makefile.  */
enum Module_Id {
   Id_None = 0,
   Id_Free = 1,
   Id_Design = 2,
   Id_User_None  = 128,
   Id_User_Parameters = 129,
   Id_User_First = Id_User_Parameters + 1,
   Id_And  = 3,
   Id_Or   = 4,
   Id_Xor  = 5,
   Id_Nand = 6,
   Id_Nor  = 7,
   Id_Xnor = 8,
   Id_Add = 9,
   Id_Sub = 10,
   Id_Umin = 11,
   Id_Smin = 12,
   Id_Umax = 13,
   Id_Smax = 14,
   Id_Umul = 15,
   Id_Smul = 16,
   Id_Udiv = 17,
   Id_Sdiv = 18,
   Id_Umod = 19,
   Id_Smod = 20,
   Id_Srem = 21,
   Id_Not = 22,
   Id_Neg = 23,
   Id_Abs = 24,
   Id_Lsl = 25,
   Id_Lsr = 26,
   Id_Asr = 27,
   Id_Rol = 28,
   Id_Ror = 29,
   Id_Eq  = 30,
   Id_Ne  = 31,
   Id_Ule = 32,
   Id_Sle = 33,
   Id_Ult = 34,
   Id_Slt = 35,
   Id_Uge = 36,
   Id_Sge = 37,
   Id_Ugt = 38,
   Id_Sgt = 39,
   Id_Red_And = 40,
   Id_Red_Or  = 41,
   Id_Concat2 = 42,
   Id_Concat3 = 43,
   Id_Concat4 = 44,
   Id_Concatn = 45,
   Id_Mux2 = 46,
   Id_Mux4 = 47,
   Id_Signal  = 48,
   Id_Isignal = 49,
   Id_Output  = 50,
   Id_Ioutput = 51,
   Id_Port    = 52,
   Id_Inout   = 53,
   Id_Dff   = 56,
   Id_Adff  = 57,
   Id_Idff  = 58,
   Id_Iadff = 59,
   Id_Mdff = 60,
   Id_Midff = 61,
   Id_Nop = 62,
   Id_Tri = 63,
   Id_Utrunc = 64,
   Id_Strunc = 65,
   Id_Uextend = 66,
   Id_Sextend = 67,
   Id_Extract = 68,
   Id_Dyn_Extract = 69,
   Id_Dyn_Insert = 70,
   Id_Dyn_Insert_En = 71,
   Id_Memidx = 72,
   Id_Addidx = 73,

   Id_Memory = 74,
   Id_Memory_Init = 75,
   Id_Mem_Rd = 76,
   Id_Mem_Rd_Sync = 77,
   Id_Mem_Wr_Sync = 78,
   Id_Mem_Multiport = 79,
   Id_Posedge = 80,
   Id_Negedge = 81,
   Id_Assert = 82,
   Id_Assume = 83,
   Id_Cover = 84,
   Id_Assert_Cover = 85,
   Id_Allconst = 90,
   Id_Anyconst = 91,
   Id_Allseq = 92,
   Id_Anyseq = 93,
   Id_Resolver = 94,
   Id_Const_UB32 = 112,
   Id_Const_SB32 = 113,
   Id_Const_UL32 = 114,
   Id_Const_UB64 = 115,
   Id_Const_UL64 = 116,
   Id_Const_X = 117,
   Id_Const_Z = 118,
   Id_Const_0 = 119,
   Id_Const_Bit = 120,
   Id_Const_Log = 121,
};

enum Param_Type {
      Param_Invalid,
      Param_Uns32,
      Param_Pval_Vector,
      Param_Pval_String,
      Param_Pval_Integer,
      Param_Pval_Real,
      Param_Pval_Time_Ps
};
