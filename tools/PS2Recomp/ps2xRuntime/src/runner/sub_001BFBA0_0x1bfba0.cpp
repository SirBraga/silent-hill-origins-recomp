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

// Function: sub_001BFBA0
// Address: 0x1bfba0 - 0x1bff38
void sub_001BFBA0_0x1bfba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFBA0_0x1bfba0");
#endif

    switch (ctx->pc) {
        case 0x1bfbc8u: goto label_1bfbc8;
        case 0x1bfc78u: goto label_1bfc78;
        case 0x1bfc84u: goto label_1bfc84;
        case 0x1bfd50u: goto label_1bfd50;
        case 0x1bfd5cu: goto label_1bfd5c;
        case 0x1bfe04u: goto label_1bfe04;
        case 0x1bfe24u: goto label_1bfe24;
        case 0x1bfe30u: goto label_1bfe30;
        case 0x1bfef0u: goto label_1bfef0;
        case 0x1bff10u: goto label_1bff10;
        case 0x1bff1cu: goto label_1bff1c;
        default: break;
    }

    ctx->pc = 0x1bfba0u;

    // 0x1bfba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bfba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bfba4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bfba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bfba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bfba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bfbac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bfbacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbb0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1bfbb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1bfbb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bfbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bfbb8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1bfbb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1bfbbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bfbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bfbc0: 0xc06d004  jal         func_1B4010
    ctx->pc = 0x1BFBC0u;
    SET_GPR_U32(ctx, 31, 0x1BFBC8u);
    ctx->pc = 0x1BFBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBC0u;
    // 0x1bfbc4: 0x8e24029c  lw          $a0, 0x29C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x1BFBC0u, 0x1BFBC8u)) {
        return;
    }
    ctx->pc = 0x1BFBC8u;
label_1bfbc8:
    // 0x1bfbc8: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x1bfbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bfbcc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1bfbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bfbd0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1bfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1bfbd4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1bfbd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bfbd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bfbd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbdc: 0x244294d8  addiu       $v0, $v0, -0x6B28
    ctx->pc = 0x1bfbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939864));
    // 0x1bfbe0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bfbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bfbe4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1bfbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bfbe8: 0x4600026  bltz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1BFBE8u;
    {
        const bool branch_taken_0x1bfbe8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1BFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBE8u;
        // 0x1bfbec: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbe8) {
            ctx->pc = 0x1BFC84u;
            goto label_1bfc84;
        }
    }
    ctx->pc = 0x1BFBF0u;
    // 0x1bfbf0: 0x8e240280  lw          $a0, 0x280($s1)
    ctx->pc = 0x1bfbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x1bfbf4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bfbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bfbf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfbf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfbfc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bfbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bfc00: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1bfc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bfc04: 0x8e2302b4  lw          $v1, 0x2B4($s1)
    ctx->pc = 0x1bfc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1bfc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bfc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfc0c: 0x0  nop
    ctx->pc = 0x1bfc0cu;
    // NOP
    // 0x1bfc10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bfc10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bfc14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFC14u;
    {
        const bool branch_taken_0x1bfc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC14u;
        // 0x1bfc18: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc14) {
            ctx->pc = 0x1BFC20u;
            goto label_1bfc20;
        }
    }
    ctx->pc = 0x1BFC1Cu;
    // 0x1bfc1c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1bfc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bfc20:
    // 0x1bfc20: 0xa22502a3  sb          $a1, 0x2A3($s1)
    ctx->pc = 0x1bfc20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 675), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bfc24: 0xc62d0288  lwc1        $f13, 0x288($s1)
    ctx->pc = 0x1bfc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bfc28: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1bfc28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1bfc2c: 0xc62f0284  lwc1        $f15, 0x284($s1)
    ctx->pc = 0x1bfc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bfc30: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x1bfc30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1bfc34: 0xc6200294  lwc1        $f0, 0x294($s1)
    ctx->pc = 0x1bfc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfc38: 0xc6210298  lwc1        $f1, 0x298($s1)
    ctx->pc = 0x1bfc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfc3c: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x1bfc3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bfc40: 0x0  nop
    ctx->pc = 0x1bfc40u;
    // NOP
    // 0x1bfc44: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1bfc44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1bfc48: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1bfc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1bfc4c: 0xc632028c  lwc1        $f18, 0x28C($s1)
    ctx->pc = 0x1bfc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1bfc50: 0xc6330290  lwc1        $f19, 0x290($s1)
    ctx->pc = 0x1bfc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1bfc54: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1bfc58: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1bfc58u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bfc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc60: 0x262502a0  addiu       $a1, $s1, 0x2A0
    ctx->pc = 0x1bfc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x1bfc64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bfc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bfc68: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1bfc68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bfc6c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bfc6cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1bfc70: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1BFC70u;
    SET_GPR_U32(ctx, 31, 0x1BFC78u);
    ctx->pc = 0x1BFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC70u;
    // 0x1bfc74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BFC70u, 0x1BFC78u)) {
        return;
    }
    ctx->pc = 0x1BFC78u;
label_1bfc78:
    // 0x1bfc78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc7c: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1BFC7Cu;
    SET_GPR_U32(ctx, 31, 0x1BFC84u);
    ctx->pc = 0x1BFC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFC7Cu;
    // 0x1bfc80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BFC7Cu, 0x1BFC84u)) {
        return;
    }
    ctx->pc = 0x1BFC84u;
label_1bfc84:
    // 0x1bfc84: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x1bfc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bfc88: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1bfc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bfc8c: 0x264294d8  addiu       $v0, $s2, -0x6B28
    ctx->pc = 0x1bfc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939864));
    // 0x1bfc90: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1bfc90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bfc94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfc98: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1bfc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bfc9c: 0x480002f  bltz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BFC9Cu;
    {
        const bool branch_taken_0x1bfc9c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1BFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC9Cu;
        // 0x1bfca0: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc9c) {
            ctx->pc = 0x1BFD5Cu;
            goto label_1bfd5c;
        }
    }
    ctx->pc = 0x1BFCA4u;
    // 0x1bfca4: 0x8e260280  lw          $a2, 0x280($s1)
    ctx->pc = 0x1bfca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x1bfca8: 0x8e240288  lw          $a0, 0x288($s1)
    ctx->pc = 0x1bfca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x1bfcac: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1bfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1bfcb0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1bfcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1bfcb4: 0x8e250284  lw          $a1, 0x284($s1)
    ctx->pc = 0x1bfcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x1bfcb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bfcb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfcbc: 0x0  nop
    ctx->pc = 0x1bfcbcu;
    // NOP
    // 0x1bfcc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bfcc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bfcc4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1bfcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bfcc8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1bfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bfccc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bfcccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bfcd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bfcd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfcd4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1bfcd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bfcd8: 0x0  nop
    ctx->pc = 0x1bfcd8u;
    // NOP
    // 0x1bfcdc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1bfcdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1bfce0: 0x8e2302b8  lw          $v1, 0x2B8($s1)
    ctx->pc = 0x1bfce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
    // 0x1bfce4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1bfce4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bfce8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFCE8u;
    {
        const bool branch_taken_0x1bfce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCE8u;
        // 0x1bfcec: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfce8) {
            ctx->pc = 0x1BFCF4u;
            goto label_1bfcf4;
        }
    }
    ctx->pc = 0x1BFCF0u;
    // 0x1bfcf0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bfcf4:
    // 0x1bfcf4: 0xc6330298  lwc1        $f19, 0x298($s1)
    ctx->pc = 0x1bfcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1bfcf8: 0x44867000  mtc1        $a2, $f14
    ctx->pc = 0x1bfcf8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bfcfc: 0x0  nop
    ctx->pc = 0x1bfcfcu;
    // NOP
    // 0x1bfd00: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1bfd00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1bfd04: 0xc6200290  lwc1        $f0, 0x290($s1)
    ctx->pc = 0x1bfd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfd08: 0x44857800  mtc1        $a1, $f15
    ctx->pc = 0x1bfd08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1bfd0c: 0x0  nop
    ctx->pc = 0x1bfd0cu;
    // NOP
    // 0x1bfd10: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x1bfd10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1bfd14: 0xa22202a3  sb          $v0, 0x2A3($s1)
    ctx->pc = 0x1bfd14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 675), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bfd18: 0x46009887  neg.s       $f2, $f19
    ctx->pc = 0x1bfd18u;
    ctx->f[2] = FPU_NEG_S(ctx->f[19]);
    // 0x1bfd1c: 0xc6210294  lwc1        $f1, 0x294($s1)
    ctx->pc = 0x1bfd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfd20: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1bfd24: 0x461304c0  add.s       $f19, $f0, $f19
    ctx->pc = 0x1bfd24u;
    ctx->f[19] = FPU_ADD_S(ctx->f[0], ctx->f[19]);
    // 0x1bfd28: 0xc632028c  lwc1        $f18, 0x28C($s1)
    ctx->pc = 0x1bfd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1bfd2c: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x1bfd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1bfd30: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1bfd30u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bfd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd38: 0x262502a0  addiu       $a1, $s1, 0x2A0
    ctx->pc = 0x1bfd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x1bfd3c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1bfd3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bfd40: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bfd40u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1bfd44: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1bfd44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bfd48: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1BFD48u;
    SET_GPR_U32(ctx, 31, 0x1BFD50u);
    ctx->pc = 0x1BFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD48u;
    // 0x1bfd4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BFD48u, 0x1BFD50u)) {
        return;
    }
    ctx->pc = 0x1BFD50u;
label_1bfd50:
    // 0x1bfd50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd54: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1BFD54u;
    SET_GPR_U32(ctx, 31, 0x1BFD5Cu);
    ctx->pc = 0x1BFD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD54u;
    // 0x1bfd58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BFD54u, 0x1BFD5Cu)) {
        return;
    }
    ctx->pc = 0x1BFD5Cu;
label_1bfd5c:
    // 0x1bfd5c: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x1bfd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bfd60: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1bfd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bfd64: 0x264294d8  addiu       $v0, $s2, -0x6B28
    ctx->pc = 0x1bfd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939864));
    // 0x1bfd68: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1bfd68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bfd6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfd70: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1bfd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1bfd74: 0x480002e  bltz        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BFD74u;
    {
        const bool branch_taken_0x1bfd74 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1BFD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD74u;
        // 0x1bfd78: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd74) {
            ctx->pc = 0x1BFE30u;
            goto label_1bfe30;
        }
    }
    ctx->pc = 0x1BFD7Cu;
    // 0x1bfd7c: 0x8e240280  lw          $a0, 0x280($s1)
    ctx->pc = 0x1bfd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x1bfd80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bfd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bfd84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfd88: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bfd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bfd8c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1bfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1bfd90: 0x8e2302bc  lw          $v1, 0x2BC($s1)
    ctx->pc = 0x1bfd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x1bfd94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bfd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfd98: 0x0  nop
    ctx->pc = 0x1bfd98u;
    // NOP
    // 0x1bfd9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bfd9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bfda0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFDA0u;
    {
        const bool branch_taken_0x1bfda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDA0u;
        // 0x1bfda4: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfda0) {
            ctx->pc = 0x1BFDACu;
            goto label_1bfdac;
        }
    }
    ctx->pc = 0x1BFDA8u;
    // 0x1bfda8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1bfda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bfdac:
    // 0x1bfdac: 0xa22502a3  sb          $a1, 0x2A3($s1)
    ctx->pc = 0x1bfdacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 675), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bfdb0: 0xc62c0288  lwc1        $f12, 0x288($s1)
    ctx->pc = 0x1bfdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfdb4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1bfdb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bfdb8: 0xc62f0284  lwc1        $f15, 0x284($s1)
    ctx->pc = 0x1bfdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bfdbc: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x1bfdbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1bfdc0: 0xc6200294  lwc1        $f0, 0x294($s1)
    ctx->pc = 0x1bfdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfdc4: 0xc6210298  lwc1        $f1, 0x298($s1)
    ctx->pc = 0x1bfdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfdc8: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x1bfdc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bfdcc: 0x0  nop
    ctx->pc = 0x1bfdccu;
    // NOP
    // 0x1bfdd0: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1bfdd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1bfdd4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1bfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1bfdd8: 0xc632028c  lwc1        $f18, 0x28C($s1)
    ctx->pc = 0x1bfdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1bfddc: 0xc6330290  lwc1        $f19, 0x290($s1)
    ctx->pc = 0x1bfddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1bfde0: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x1bfde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1bfde4: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1bfde4u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bfde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfdec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bfdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bfdf0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bfdf0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1bfdf4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1bfdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bfdf8: 0x262502a0  addiu       $a1, $s1, 0x2A0
    ctx->pc = 0x1bfdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x1bfdfc: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1BFDFCu;
    SET_GPR_U32(ctx, 31, 0x1BFE04u);
    ctx->pc = 0x1BFE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFDFCu;
    // 0x1bfe00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BFDFCu, 0x1BFE04u)) {
        return;
    }
    ctx->pc = 0x1BFE04u;
label_1bfe04:
    // 0x1bfe04: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1bfe04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bfe08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe0c: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1bfe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1bfe10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bfe10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1bfe14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bfe14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfe18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe1c: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x1BFE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BFE24u);
    ctx->pc = 0x1BFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE1Cu;
    // 0x1bfe20: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x1BFE1Cu, 0x1BFE24u)) {
        return;
    }
    ctx->pc = 0x1BFE24u;
label_1bfe24:
    // 0x1bfe24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfe28: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1BFE28u;
    SET_GPR_U32(ctx, 31, 0x1BFE30u);
    ctx->pc = 0x1BFE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE28u;
    // 0x1bfe2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BFE28u, 0x1BFE30u)) {
        return;
    }
    ctx->pc = 0x1BFE30u;
label_1bfe30:
    // 0x1bfe30: 0x8e230260  lw          $v1, 0x260($s1)
    ctx->pc = 0x1bfe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1bfe34: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1bfe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bfe38: 0x264294d8  addiu       $v0, $s2, -0x6B28
    ctx->pc = 0x1bfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939864));
    // 0x1bfe3c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1bfe3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bfe40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfe44: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1bfe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1bfe48: 0x4800034  bltz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1BFE48u;
    {
        const bool branch_taken_0x1bfe48 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1BFE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE48u;
        // 0x1bfe4c: 0x240201c0  addiu       $v0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe48) {
            ctx->pc = 0x1BFF1Cu;
            goto label_1bff1c;
        }
    }
    ctx->pc = 0x1BFE50u;
    // 0x1bfe50: 0x8e250280  lw          $a1, 0x280($s1)
    ctx->pc = 0x1bfe50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 640)));
    // 0x1bfe54: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1bfe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1bfe58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bfe58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bfe5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfe5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bfe60: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1bfe60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1bfe64: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1bfe64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bfe68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bfe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bfe6c: 0x0  nop
    ctx->pc = 0x1bfe6cu;
    // NOP
    // 0x1bfe70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bfe70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bfe74: 0x8e2402c0  lw          $a0, 0x2C0($s1)
    ctx->pc = 0x1bfe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x1bfe78: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bfe78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bfe7c: 0x0  nop
    ctx->pc = 0x1bfe7cu;
    // NOP
    // 0x1bfe80: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bfe80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bfe84: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1bfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bfe88: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFE88u;
    {
        const bool branch_taken_0x1bfe88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE88u;
        // 0x1bfe8c: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe88) {
            ctx->pc = 0x1BFE94u;
            goto label_1bfe94;
        }
    }
    ctx->pc = 0x1BFE90u;
    // 0x1bfe90: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1bfe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bfe94:
    // 0x1bfe94: 0xc62c0288  lwc1        $f12, 0x288($s1)
    ctx->pc = 0x1bfe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfe98: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1bfe98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bfe9c: 0xa22202a3  sb          $v0, 0x2A3($s1)
    ctx->pc = 0x1bfe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 675), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bfea0: 0xc62f0284  lwc1        $f15, 0x284($s1)
    ctx->pc = 0x1bfea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bfea4: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x1bfea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1bfea8: 0xc6200294  lwc1        $f0, 0x294($s1)
    ctx->pc = 0x1bfea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfeac: 0xc6210298  lwc1        $f1, 0x298($s1)
    ctx->pc = 0x1bfeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfeb0: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x1bfeb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bfeb4: 0x0  nop
    ctx->pc = 0x1bfeb4u;
    // NOP
    // 0x1bfeb8: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1bfeb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1bfebc: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x1bfebcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x1bfec0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1bfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1bfec4: 0xc6330290  lwc1        $f19, 0x290($s1)
    ctx->pc = 0x1bfec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x1bfec8: 0x26300150  addiu       $s0, $s1, 0x150
    ctx->pc = 0x1bfec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x1bfecc: 0xc632028c  lwc1        $f18, 0x28C($s1)
    ctx->pc = 0x1bfeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x1bfed0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1bfed0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1bfed4: 0xc4500fe0  lwc1        $f16, 0xFE0($v0)
    ctx->pc = 0x1bfed4u;
    { uint32_t bits = FAST_READ32(0x730FE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1bfed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfedc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bfedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bfee0: 0x262502a0  addiu       $a1, $s1, 0x2A0
    ctx->pc = 0x1bfee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    // 0x1bfee4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1bfee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1bfee8: 0xc06ce2a  jal         func_1B38A8
    ctx->pc = 0x1BFEE8u;
    SET_GPR_U32(ctx, 31, 0x1BFEF0u);
    ctx->pc = 0x1BFEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFEE8u;
    // 0x1bfeec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1BFEE8u, 0x1BFEF0u)) {
        return;
    }
    ctx->pc = 0x1BFEF0u;
label_1bfef0:
    // 0x1bfef0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1bfef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bfef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bfef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfef8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1bfef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1bfefc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bfefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1bff00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bff00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bff04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bff04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff08: 0xc06cd24  jal         func_1B3490
    ctx->pc = 0x1BFF08u;
    SET_GPR_U32(ctx, 31, 0x1BFF10u);
    ctx->pc = 0x1BFF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF08u;
    // 0x1bff0c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3490u, 0x1BFF08u, 0x1BFF10u)) {
        return;
    }
    ctx->pc = 0x1BFF10u;
label_1bff10:
    // 0x1bff10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bff10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff14: 0xc06cff8  jal         func_1B3FE0
    ctx->pc = 0x1BFF14u;
    SET_GPR_U32(ctx, 31, 0x1BFF1Cu);
    ctx->pc = 0x1BFF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF14u;
    // 0x1bff18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1BFF14u, 0x1BFF1Cu)) {
        return;
    }
    ctx->pc = 0x1BFF1Cu;
label_1bff1c:
    // 0x1bff1c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bff1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bff20: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bff20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bff24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bff24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bff28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bff28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bff2c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1bff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bff30: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF30u;
        // 0x1bff34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFF38u;
}
