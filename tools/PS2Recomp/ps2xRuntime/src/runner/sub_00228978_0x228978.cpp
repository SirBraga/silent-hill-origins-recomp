#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228978
// Address: 0x228978 - 0x228cd0
void sub_00228978_0x228978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228978_0x228978");
#endif

    switch (ctx->pc) {
        case 0x228b10u: goto label_228b10;
        default: break;
    }

    ctx->pc = 0x228978u;

    // 0x228978: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x228978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22897c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x22897cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x228980: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x228980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x228984: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x228984u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x228988: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x228988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x22898c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22898cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228990: 0x0  nop
    ctx->pc = 0x228990u;
    // NOP
    // 0x228994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228998: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x228998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22899c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x22899cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2289a0: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x2289a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x2289a4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2289a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2289a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2289a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2289ac: 0x65403  sra         $t2, $a2, 16
    ctx->pc = 0x2289acu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2289b0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2289b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2289b4: 0x46060202  mul.s       $f8, $f0, $f6
    ctx->pc = 0x2289b4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2289b8: 0x152a0025  bne         $t1, $t2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2289B8u;
    {
        const bool branch_taken_0x2289b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x2289BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2289B8u;
        // 0x2289bc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2289b8) {
            ctx->pc = 0x228A50u;
            goto label_228a50;
        }
    }
    ctx->pc = 0x2289C0u;
    // 0x2289c0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2289c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2289c4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2289c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2289c8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x2289c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x2289cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2289ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2289d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2289d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2289d4: 0x0  nop
    ctx->pc = 0x2289d4u;
    // NOP
    // 0x2289d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2289d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2289dc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2289dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2289e0: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x2289e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2289e4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2289e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2289e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2289e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2289ec: 0x0  nop
    ctx->pc = 0x2289ecu;
    // NOP
    // 0x2289f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2289f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2289f4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2289f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2289f8: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x2289f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2289fc: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2289fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x228a00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228a04: 0x0  nop
    ctx->pc = 0x228a04u;
    // NOP
    // 0x228a08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228a0c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x228a0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x228a10: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x228a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x228a14: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x228a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x228a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228a1c: 0x0  nop
    ctx->pc = 0x228a1cu;
    // NOP
    // 0x228a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228a24: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x228a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x228a28: 0x460041c6  mov.s       $f7, $f8
    ctx->pc = 0x228a28u;
    ctx->f[7] = FPU_MOV_S(ctx->f[8]);
    // 0x228a2c: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x228a2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x228a30: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x228a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x228a34: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x228a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x228a38: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x228a38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x228a3c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x228a3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x228a40: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x228a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x228a44: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x228a44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x228a48: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x228A48u;
    {
        const bool branch_taken_0x228a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228A48u;
        // 0x228a4c: 0xe5010008  swc1        $f1, 0x8($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a48) {
            ctx->pc = 0x228C88u;
            goto label_228c88;
        }
    }
    ctx->pc = 0x228A50u;
label_228a50:
    // 0x228a50: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x228a54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x228a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x228a58: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x228a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x228a5c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x228a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x228a60: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x228a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x228a64: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x228a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x228a68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x228a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228a6c: 0x0  nop
    ctx->pc = 0x228a6cu;
    // NOP
    // 0x228a70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x228a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x228a74: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x228a74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x228a78: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x228a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x228a7c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x228a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x228a80: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x228a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x228a84: 0x0  nop
    ctx->pc = 0x228a84u;
    // NOP
    // 0x228a88: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x228a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x228a8c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x228a8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x228a90: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x228a90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x228a94: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x228a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x228a98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228a9c: 0x0  nop
    ctx->pc = 0x228a9cu;
    // NOP
    // 0x228aa0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228aa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228aa4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x228aa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x228aa8: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x228aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x228aac: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x228aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x228ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ab4: 0x0  nop
    ctx->pc = 0x228ab4u;
    // NOP
    // 0x228ab8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228abc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x228abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x228ac0: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x228ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x228ac4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x228ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x228ac8: 0x0  nop
    ctx->pc = 0x228ac8u;
    // NOP
    // 0x228acc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x228accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x228ad0: 0x460621c2  mul.s       $f7, $f4, $f6
    ctx->pc = 0x228ad0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x228ad4: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x228ad4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x228ad8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x228ad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x228adc: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x228adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x228ae0: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x228ae0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x228ae4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x228ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x228ae8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x228ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x228aec: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x228aecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x228af0: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x228af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x228af4: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x228af4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x228af8: 0x104a002d  beq         $v0, $t2, . + 4 + (0x2D << 2)
    ctx->pc = 0x228AF8u;
    {
        const bool branch_taken_0x228af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x228AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228AF8u;
        // 0x228afc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228af8) {
            ctx->pc = 0x228BB0u;
            goto label_228bb0;
        }
    }
    ctx->pc = 0x228B00u;
    // 0x228b00: 0x460029c6  mov.s       $f7, $f5
    ctx->pc = 0x228b00u;
    ctx->f[7] = FPU_MOV_S(ctx->f[5]);
    // 0x228b04: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x228b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b08: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x228b08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x228b0c: 0x0  nop
    ctx->pc = 0x228b0cu;
    // NOP
label_228b10:
    // 0x228b10: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x228b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x228b14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x228b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228b18: 0x0  nop
    ctx->pc = 0x228b18u;
    // NOP
    // 0x228b1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x228b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x228b20: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x228b20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x228b24: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x228b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x228b28: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x228b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x228b2c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x228b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x228b30: 0x0  nop
    ctx->pc = 0x228b30u;
    // NOP
    // 0x228b34: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x228b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x228b38: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x228b38u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x228b3c: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x228b3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x228b40: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x228b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x228b44: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x228b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x228b48: 0x0  nop
    ctx->pc = 0x228b48u;
    // NOP
    // 0x228b4c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x228b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x228b50: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x228b50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x228b54: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x228b54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x228b58: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x228b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x228b5c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x228b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x228b60: 0x0  nop
    ctx->pc = 0x228b60u;
    // NOP
    // 0x228b64: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x228b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x228b68: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x228b68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x228b6c: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x228b6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x228b70: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x228b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228b74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x228b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x228b78: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x228b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228b7c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x228b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228b80: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x228b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228b84: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x228b84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x228b88: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x228b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x228b8c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x228b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x228b90: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x228b90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x228b94: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x228b94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x228b98: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x228b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x228b9c: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x228b9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x228ba0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x228ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x228ba4: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x228ba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x228ba8: 0x1445ffd9  bne         $v0, $a1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x228BA8u;
    {
        const bool branch_taken_0x228ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x228BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228BA8u;
        // 0x228bac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ba8) {
            ctx->pc = 0x228B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228b10;
        }
    }
    ctx->pc = 0x228BB0u;
label_228bb0:
    // 0x228bb0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x228bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x228bb4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x228bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x228bb8: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x228bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x228bbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x228bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228bc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x228bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x228bc4: 0x0  nop
    ctx->pc = 0x228bc4u;
    // NOP
    // 0x228bc8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x228bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x228bcc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x228bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x228bd0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x228bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x228bd4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x228bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x228bd8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x228bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x228bdc: 0x0  nop
    ctx->pc = 0x228bdcu;
    // NOP
    // 0x228be0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x228be0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x228be4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x228be4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x228be8: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x228be8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x228bec: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x228becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x228bf0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x228bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x228bf4: 0x0  nop
    ctx->pc = 0x228bf4u;
    // NOP
    // 0x228bf8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x228bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x228bfc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x228bfcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x228c00: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x228c00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x228c04: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x228c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x228c08: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x228c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x228c0c: 0x0  nop
    ctx->pc = 0x228c0cu;
    // NOP
    // 0x228c10: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x228c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x228c14: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x228c14u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x228c18: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x228c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x228c1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x228c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228c20: 0x0  nop
    ctx->pc = 0x228c20u;
    // NOP
    // 0x228c24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x228c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x228c28: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x228c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x228c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x228c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228c30: 0x0  nop
    ctx->pc = 0x228c30u;
    // NOP
    // 0x228c34: 0x460009c2  mul.s       $f7, $f1, $f0
    ctx->pc = 0x228c34u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x228c38: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x228c38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x228c3c: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x228c3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x228c40: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x228c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x228c44: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x228c44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x228c48: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x228c48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x228c4c: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x228c4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x228c50: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x228c50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x228c54: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x228c54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x228c58: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x228c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c5c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x228c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x228c60: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x228c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228c64: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x228c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228c68: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x228c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228c6c: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x228c6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x228c70: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x228c70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x228c74: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x228c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x228c78: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x228c78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x228c7c: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x228c7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x228c80: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x228c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x228c84: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x228c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
label_228c88:
    // 0x228c88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x228c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x228c8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228c90: 0x0  nop
    ctx->pc = 0x228c90u;
    // NOP
    // 0x228c94: 0x460809c3  div.s       $f7, $f1, $f8
    ctx->pc = 0x228c94u;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[8]);
    // 0x228c98: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x228c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c9c: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x228c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x228ca0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x228ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x228ca4: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x228ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228ca8: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x228ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x228cac: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x228cacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x228cb0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x228cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x228cb4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x228cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x228cb8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x228cb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x228cbc: 0xe5030004  swc1        $f3, 0x4($t0)
    ctx->pc = 0x228cbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x228cc0: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x228cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x228cc4: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x228cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x228cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x228CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CC8u;
        // 0x228ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228CD0u;
}
