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

// Function: sub_0020FCE8
// Address: 0x20fce8 - 0x20ff10
void sub_0020FCE8_0x20fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FCE8_0x20fce8");
#endif

    switch (ctx->pc) {
        case 0x20fd40u: goto label_20fd40;
        case 0x20fd58u: goto label_20fd58;
        case 0x20fd98u: goto label_20fd98;
        case 0x20fe30u: goto label_20fe30;
        default: break;
    }

    ctx->pc = 0x20fce8u;

    // 0x20fce8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x20fcec: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x20fcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x20fcf0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x20fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x20fcf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20fcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fcf8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x20fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x20fcfc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x20fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x20fd00: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x20fd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x20fd04: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x20fd08: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x20fd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x20fd0c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x20fd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x20fd10: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x20fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x20fd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20fd18: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x20fd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x20fd1c: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x20fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x20fd20: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x20fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x20fd24: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x20fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x20fd28: 0x8c9301cc  lw          $s3, 0x1CC($a0)
    ctx->pc = 0x20fd28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x20fd2c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x20fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x20fd30: 0x8c940078  lw          $s4, 0x78($a0)
    ctx->pc = 0x20fd30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x20fd34: 0x18e0006a  blez        $a3, . + 4 + (0x6A << 2)
    ctx->pc = 0x20FD34u;
    {
        const bool branch_taken_0x20fd34 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x20FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD34u;
        // 0x20fd38: 0x8c950070  lw          $s5, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd34) {
            ctx->pc = 0x20FEE0u;
            goto label_20fee0;
        }
    }
    ctx->pc = 0x20FD3Cu;
    // 0x20fd3c: 0x0  nop
    ctx->pc = 0x20fd3cu;
    // NOP
label_20fd40:
    // 0x20fd40: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20fd44: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x20fd44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x20fd48: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20fd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd4c: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x20fd4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20fd50: 0xc08489c  jal         func_212270
    ctx->pc = 0x20FD50u;
    SET_GPR_U32(ctx, 31, 0x20FD58u);
    ctx->pc = 0x20FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FD50u;
    // 0x20fd54: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212270u, 0x20FD50u, 0x20FD58u)) {
        return;
    }
    ctx->pc = 0x20FD58u;
label_20fd58:
    // 0x20fd58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20fd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20fd5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20fd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd60: 0x1a800058  blez        $s4, . + 4 + (0x58 << 2)
    ctx->pc = 0x20FD60u;
    {
        const bool branch_taken_0x20fd60 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x20FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD60u;
        // 0x20fd64: 0xafb0001c  sw          $s0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd60) {
            ctx->pc = 0x20FEC4u;
            goto label_20fec4;
        }
    }
    ctx->pc = 0x20FD68u;
    // 0x20fd68: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x20fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x20fd6c: 0x26b7ffff  addiu       $s7, $s5, -0x1
    ctx->pc = 0x20fd6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x20fd70: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x20fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x20fd74: 0x2f42018  mult        $a0, $s7, $s4
    ctx->pc = 0x20fd74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20fd78: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x20fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x20fd7c: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x20fd7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fd84: 0x26790044  addiu       $t9, $s3, 0x44
    ctx->pc = 0x20fd84u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
    // 0x20fd88: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x20fd88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20fd8c: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x20fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x20fd90: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x20fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x20fd94: 0x0  nop
    ctx->pc = 0x20fd94u;
    // NOP
label_20fd98:
    // 0x20fd98: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x20fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fd9c: 0x8fcb0000  lw          $t3, 0x0($fp)
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20fda0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fda4: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x20fda8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20FDA8u;
    {
        const bool branch_taken_0x20fda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDA8u;
        // 0x20fdac: 0x456021  addu        $t4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fda8) {
            ctx->pc = 0x20FDE0u;
            goto label_20fde0;
        }
    }
    ctx->pc = 0x20FDB0u;
    // 0x20fdb0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x20fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x20fdb4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20fdb8: 0x3221821  addu        $v1, $t9, $v0
    ctx->pc = 0x20fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x20fdbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20fdbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdc0: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x20fdc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x20fdc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20fdc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fdcc: 0x1775821  addu        $t3, $t3, $s7
    ctx->pc = 0x20fdccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 23)));
    // 0x20fdd0: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x20fdd0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20fdd4: 0x147023  negu        $t6, $s4
    ctx->pc = 0x20fdd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x20fdd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20FDD8u;
    {
        const bool branch_taken_0x20fdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDD8u;
        // 0x20fddc: 0x825021  addu        $t2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdd8) {
            ctx->pc = 0x20FDF8u;
            goto label_20fdf8;
        }
    }
    ctx->pc = 0x20FDE0u;
label_20fde0:
    // 0x20fde0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20fde4: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x20fde4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fde8: 0x3221821  addu        $v1, $t9, $v0
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x20fdec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20fdecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fdf0: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fdf4: 0x280702d  daddu       $t6, $s4, $zero
    ctx->pc = 0x20fdf4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20fdf8:
    // 0x20fdf8: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x20fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x20fdfc: 0x24b60001  addiu       $s6, $a1, 0x1
    ctx->pc = 0x20fdfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20fe00: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x20fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x20fe04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20fe04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe08: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20fe0c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x20fe0cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe10: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20fe14: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x20fe14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fe18: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x20fe18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fe1c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x20fe1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe20: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x20FE20u;
    {
        const bool branch_taken_0x20fe20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE20u;
        // 0x20fe24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe20) {
            ctx->pc = 0x20FEB4u;
            goto label_20feb4;
        }
    }
    ctx->pc = 0x20FE28u;
    // 0x20fe28: 0x186840  sll         $t5, $t8, 1
    ctx->pc = 0x20fe28u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x20fe2c: 0x14d4021  addu        $t0, $t2, $t5
    ctx->pc = 0x20fe2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_20fe30:
    // 0x20fe30: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x20fe30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20fe34: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x20fe34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe38: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x20fe38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20fe3c: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x20fe3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x20fe40: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x20fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20fe44: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x20fe44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x20fe48: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x20fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x20fe4c: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x20fe4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x20fe50: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x20fe50u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20fe54: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x20fe54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x20fe58: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x20fe58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x20fe5c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x20fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x20fe60: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x20fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20fe64: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x20fe64u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fe68: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x20fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x20fe6c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x20fe6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fe70: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x20fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20fe74: 0xa1650000  sb          $a1, 0x0($t3)
    ctx->pc = 0x20fe74u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20fe78: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x20fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x20fe7c: 0x1785821  addu        $t3, $t3, $t8
    ctx->pc = 0x20fe7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 24)));
    // 0x20fe80: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x20fe80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fe84: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x20fe84u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20fe88: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x20fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x20fe8c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x20fe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fe90: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x20fe90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x20fe94: 0x1e71021  addu        $v0, $t7, $a3
    ctx->pc = 0x20fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x20fe98: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x20fe98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x20fe9c: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x20fe9cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x20fea0: 0x2077821  addu        $t7, $s0, $a3
    ctx->pc = 0x20fea0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x20fea4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x20fea4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20fea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20feac: 0x1520ffe0  bnez        $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x20FEACu;
    {
        const bool branch_taken_0x20feac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEACu;
        // 0x20feb0: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20feac) {
            ctx->pc = 0x20FE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fe30;
        }
    }
    ctx->pc = 0x20FEB4u;
label_20feb4:
    // 0x20feb4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x20feb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20feb8: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x20feb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x20febc: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x20FEBCu;
    {
        const bool branch_taken_0x20febc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEBCu;
        // 0x20fec0: 0xa54f0000  sh          $t7, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20febc) {
            ctx->pc = 0x20FD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fd98;
        }
    }
    ctx->pc = 0x20FEC4u;
label_20fec4:
    // 0x20fec4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x20fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x20fec8: 0x8fb0001c  lw          $s0, 0x1C($sp)
    ctx->pc = 0x20fec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x20fecc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x20feccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20fed0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20fed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20fed4: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x20fed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20fed8: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x20FED8u;
    {
        const bool branch_taken_0x20fed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FED8u;
        // 0x20fedc: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fed8) {
            ctx->pc = 0x20FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fd40;
        }
    }
    ctx->pc = 0x20FEE0u;
label_20fee0:
    // 0x20fee0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x20fee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20fee4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x20fee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20fee8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x20fee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20feec: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x20feecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20fef0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x20fef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20fef4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20fef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20fef8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x20fef8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20fefc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x20fefcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ff00: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x20ff00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ff04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20ff04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ff08: 0x3e00008  jr          $ra
    ctx->pc = 0x20FF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF08u;
        // 0x20ff0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FF10u;
}
