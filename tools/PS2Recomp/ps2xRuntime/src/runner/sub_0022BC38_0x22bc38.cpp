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

// Function: sub_0022BC38
// Address: 0x22bc38 - 0x22bd50
void sub_0022BC38_0x22bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BC38_0x22bc38");
#endif

    switch (ctx->pc) {
        case 0x22bc90u: goto label_22bc90;
        default: break;
    }

    ctx->pc = 0x22bc38u;

    // 0x22bc38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22bc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22bc3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22bc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22bc48: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x22bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22bc4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22bc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22bc50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22bc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bc54: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x22bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22bc58: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x22bc58u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x22bc5c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x22bc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bc60: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x22bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22bc64: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x22bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22bc68: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x22bc68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x22bc6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22bc6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22bc70: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x22bc70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22bc74: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x22bc74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x22bc78: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x22bc78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x22bc7c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x22bc7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22bc80: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x22bc80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22bc84: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x22bc84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22bc88: 0xc08ada0  jal         func_22B680
    ctx->pc = 0x22BC88u;
    SET_GPR_U32(ctx, 31, 0x22BC90u);
    ctx->pc = 0x22BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC88u;
    // 0x22bc8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B680u, 0x22BC88u, 0x22BC90u)) {
        return;
    }
    ctx->pc = 0x22BC90u;
label_22bc90:
    // 0x22bc90: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x22bc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x22bc94: 0x3421fd71  ori         $at, $at, 0xFD71
    ctx->pc = 0x22bc94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64881);
    // 0x22bc98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22bc98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bc9c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x22bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x22bca0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x22bca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22bca4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x22bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22bca8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x22bca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22bcac: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bcb0: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x22bcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22bcb4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x22bcb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x22bcb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22bcb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22bcbc: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x22bcbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22bcc0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x22bcc0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x22bcc4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bcc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22bcc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22bcc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22bccc: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bcccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22bcd0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x22bcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x22bcd4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bcd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22bcd8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x22bcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x22bcdc: 0x284300ff  slti        $v1, $v0, 0xFF
    ctx->pc = 0x22bcdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x22bce0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x22bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x22bce4: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22bce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22bce8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x22bce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x22bcec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BCECu;
    {
        const bool branch_taken_0x22bcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCECu;
        // 0x22bcf0: 0x93a20010  lbu         $v0, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bcec) {
            ctx->pc = 0x22BCF8u;
            goto label_22bcf8;
        }
    }
    ctx->pc = 0x22BCF4u;
    // 0x22bcf4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22bcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_22bcf8:
    // 0x22bcf8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x22bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22bcfc: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x22bcfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x22bd00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BD00u;
    {
        const bool branch_taken_0x22bd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD00u;
        // 0x22bd04: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd00) {
            ctx->pc = 0x22BD10u;
            goto label_22bd10;
        }
    }
    ctx->pc = 0x22BD08u;
    // 0x22bd08: 0x93a20014  lbu         $v0, 0x14($sp)
    ctx->pc = 0x22bd08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22bd0c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x22bd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_22bd10:
    // 0x22bd10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bd14: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x22bd14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x22bd18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BD18u;
    {
        const bool branch_taken_0x22bd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD18u;
        // 0x22bd1c: 0xa2040002  sb          $a0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd18) {
            ctx->pc = 0x22BD28u;
            goto label_22bd28;
        }
    }
    ctx->pc = 0x22BD20u;
    // 0x22bd20: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x22bd20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22bd24: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x22bd24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_22bd28:
    // 0x22bd28: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x22bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22bd2c: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x22bd2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x22bd30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BD30u;
    {
        const bool branch_taken_0x22bd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD30u;
        // 0x22bd34: 0xa2040003  sb          $a0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd30) {
            ctx->pc = 0x22BD40u;
            goto label_22bd40;
        }
    }
    ctx->pc = 0x22BD38u;
    // 0x22bd38: 0x93a2001c  lbu         $v0, 0x1C($sp)
    ctx->pc = 0x22bd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22bd3c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x22bd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_22bd40:
    // 0x22bd40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22bd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22bd44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22bd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bd48: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD48u;
        // 0x22bd4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BD50u;
}
