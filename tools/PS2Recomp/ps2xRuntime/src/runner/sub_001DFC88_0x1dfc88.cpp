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

// Function: sub_001DFC88
// Address: 0x1dfc88 - 0x1dfdf0
void sub_001DFC88_0x1dfc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFC88_0x1dfc88");
#endif

    switch (ctx->pc) {
        case 0x1dfce0u: goto label_1dfce0;
        case 0x1dfcf0u: goto label_1dfcf0;
        case 0x1dfd04u: goto label_1dfd04;
        case 0x1dfd18u: goto label_1dfd18;
        case 0x1dfd2cu: goto label_1dfd2c;
        case 0x1dfd40u: goto label_1dfd40;
        case 0x1dfd54u: goto label_1dfd54;
        default: break;
    }

    ctx->pc = 0x1dfc88u;

    // 0x1dfc88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dfc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dfc8c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1dfc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1dfc90: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1dfc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1dfc94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dfc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc98: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dfc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1dfc9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dfc9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfca0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1dfca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1dfca4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1dfca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfca8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1dfca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1dfcac: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1dfcacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfcb0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1dfcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1dfcb4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1dfcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1dfcb8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1dfcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1dfcbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dfcc0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1dfcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1dfcc4: 0x8eb40004  lw          $s4, 0x4($s5)
    ctx->pc = 0x1dfcc4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1dfcc8: 0x1a80003a  blez        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x1DFCC8u;
    {
        const bool branch_taken_0x1dfcc8 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x1DFCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCC8u;
        // 0x1dfccc: 0x8eb30010  lw          $s3, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcc8) {
            ctx->pc = 0x1DFDB4u;
            goto label_1dfdb4;
        }
    }
    ctx->pc = 0x1DFCD0u;
    // 0x1dfcd0: 0x241e0018  addiu       $fp, $zero, 0x18
    ctx->pc = 0x1dfcd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1dfcd4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1dfcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcd8: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1dfcd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfcdc: 0x0  nop
    ctx->pc = 0x1dfcdcu;
    // NOP
label_1dfce0:
    // 0x1dfce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfce4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dfce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfce8: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x1DFCE8u;
    SET_GPR_U32(ctx, 31, 0x1DFCF0u);
    ctx->pc = 0x1DFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCE8u;
    // 0x1dfcec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x1DFCE8u, 0x1DFCF0u)) {
        return;
    }
    ctx->pc = 0x1DFCF0u;
label_1dfcf0:
    // 0x1dfcf0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DFCF0u;
    {
        const bool branch_taken_0x1dfcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFCF0u;
        // 0x1dfcf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcf0) {
            ctx->pc = 0x1DFD5Cu;
            goto label_1dfd5c;
        }
    }
    ctx->pc = 0x1DFCF8u;
    // 0x1dfcf8: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1dfcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1dfcfc: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1DFCFCu;
    SET_GPR_U32(ctx, 31, 0x1DFD04u);
    ctx->pc = 0x1DFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCFCu;
    // 0x1dfd00: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1DFCFCu, 0x1DFD04u)) {
        return;
    }
    ctx->pc = 0x1DFD04u;
label_1dfd04:
    // 0x1dfd04: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFD04u;
    {
        const bool branch_taken_0x1dfd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD04u;
        // 0x1dfd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd04) {
            ctx->pc = 0x1DFD5Cu;
            goto label_1dfd5c;
        }
    }
    ctx->pc = 0x1DFD0Cu;
    // 0x1dfd0c: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1dfd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1dfd10: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1DFD10u;
    SET_GPR_U32(ctx, 31, 0x1DFD18u);
    ctx->pc = 0x1DFD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD10u;
    // 0x1dfd14: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1DFD10u, 0x1DFD18u)) {
        return;
    }
    ctx->pc = 0x1DFD18u;
label_1dfd18:
    // 0x1dfd18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DFD18u;
    {
        const bool branch_taken_0x1dfd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD18u;
        // 0x1dfd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd18) {
            ctx->pc = 0x1DFD5Cu;
            goto label_1dfd5c;
        }
    }
    ctx->pc = 0x1DFD20u;
    // 0x1dfd20: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x1dfd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1dfd24: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1DFD24u;
    SET_GPR_U32(ctx, 31, 0x1DFD2Cu);
    ctx->pc = 0x1DFD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD24u;
    // 0x1dfd28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1DFD24u, 0x1DFD2Cu)) {
        return;
    }
    ctx->pc = 0x1DFD2Cu;
label_1dfd2c:
    // 0x1dfd2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DFD2Cu;
    {
        const bool branch_taken_0x1dfd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD2Cu;
        // 0x1dfd30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd2c) {
            ctx->pc = 0x1DFD5Cu;
            goto label_1dfd5c;
        }
    }
    ctx->pc = 0x1DFD34u;
    // 0x1dfd34: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1dfd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1dfd38: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1DFD38u;
    SET_GPR_U32(ctx, 31, 0x1DFD40u);
    ctx->pc = 0x1DFD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD38u;
    // 0x1dfd3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1DFD38u, 0x1DFD40u)) {
        return;
    }
    ctx->pc = 0x1DFD40u;
label_1dfd40:
    // 0x1dfd40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFD40u;
    {
        const bool branch_taken_0x1dfd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD40u;
        // 0x1dfd44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd40) {
            ctx->pc = 0x1DFD5Cu;
            goto label_1dfd5c;
        }
    }
    ctx->pc = 0x1DFD48u;
    // 0x1dfd48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1dfd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dfd4c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x1DFD4Cu;
    SET_GPR_U32(ctx, 31, 0x1DFD54u);
    ctx->pc = 0x1DFD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD4Cu;
    // 0x1dfd50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x1DFD4Cu, 0x1DFD54u)) {
        return;
    }
    ctx->pc = 0x1DFD54u;
label_1dfd54:
    // 0x1dfd54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFD54u;
    {
        const bool branch_taken_0x1dfd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD54u;
        // 0x1dfd58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd54) {
            ctx->pc = 0x1DFD64u;
            goto label_1dfd64;
        }
    }
    ctx->pc = 0x1DFD5Cu;
label_1dfd5c:
    // 0x1dfd5c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFD5Cu;
    {
        const bool branch_taken_0x1dfd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD5Cu;
        // 0x1dfd60: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd5c) {
            ctx->pc = 0x1DFDB4u;
            goto label_1dfdb4;
        }
    }
    ctx->pc = 0x1DFD64u;
label_1dfd64:
    // 0x1dfd64: 0x10570004  beq         $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFD64u;
    {
        const bool branch_taken_0x1dfd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1DFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD64u;
        // 0x1dfd68: 0x5e1818  mult        $v1, $v0, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd64) {
            ctx->pc = 0x1DFD78u;
            goto label_1dfd78;
        }
    }
    ctx->pc = 0x1DFD6Cu;
    // 0x1dfd6c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1dfd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1dfd70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFD70u;
    {
        const bool branch_taken_0x1dfd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD70u;
        // 0x1dfd74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd70) {
            ctx->pc = 0x1DFD7Cu;
            goto label_1dfd7c;
        }
    }
    ctx->pc = 0x1DFD78u;
label_1dfd78:
    // 0x1dfd78: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dfd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1dfd7c:
    // 0x1dfd7c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1dfd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfd80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dfd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1dfd84: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1dfd84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1dfd88: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1dfd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1dfd8c: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x1dfd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1dfd90: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x1dfd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1dfd94: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x1dfd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1dfd98: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x1dfd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1dfd9c: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x1dfd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfda0: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x1dfda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfda4: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x1dfda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfda8: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x1dfda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfdac: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1DFDACu;
    {
        const bool branch_taken_0x1dfdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDACu;
        // 0x1dfdb0: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfdac) {
            ctx->pc = 0x1DFCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfce0;
        }
    }
    ctx->pc = 0x1DFDB4u;
label_1dfdb4:
    // 0x1dfdb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dfdb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfdb8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1dfdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dfdbc: 0x2b6100b  movn        $v0, $s5, $s6
    ctx->pc = 0x1dfdbcu;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21));
    // 0x1dfdc0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1dfdc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dfdc4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1dfdc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dfdc8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1dfdc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfdcc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1dfdccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dfdd0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1dfdd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dfdd4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1dfdd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dfdd8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1dfdd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfddc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1dfddcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfde0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dfde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfde4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDE4u;
        // 0x1dfde8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFDECu;
    // 0x1dfdec: 0x0  nop
    ctx->pc = 0x1dfdecu;
    // NOP
    ctx->pc = 0x1dfdf0u;
}
