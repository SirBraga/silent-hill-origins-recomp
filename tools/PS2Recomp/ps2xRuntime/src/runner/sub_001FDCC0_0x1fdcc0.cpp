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

// Function: sub_001FDCC0
// Address: 0x1fdcc0 - 0x1fde68
void sub_001FDCC0_0x1fdcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDCC0_0x1fdcc0");
#endif

    switch (ctx->pc) {
        case 0x1fdd00u: goto label_1fdd00;
        case 0x1fdd0cu: goto label_1fdd0c;
        case 0x1fdd54u: goto label_1fdd54;
        case 0x1fdda8u: goto label_1fdda8;
        case 0x1fddd8u: goto label_1fddd8;
        case 0x1fde00u: goto label_1fde00;
        case 0x1fde20u: goto label_1fde20;
        default: break;
    }

    ctx->pc = 0x1fdcc0u;

    // 0x1fdcc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fdcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fdcc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdcc8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1fdcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1fdccc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1fdcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1fdcd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fdcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdcd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fdcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fdcd8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1fdcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1fdcdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fdcdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdce0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fdce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1fdce4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1fdce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1fdce8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x1fdce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fdcec: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1fdcecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fdcf0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDCF0u;
    {
        const bool branch_taken_0x1fdcf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCF0u;
        // 0x1fdcf4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcf0) {
            ctx->pc = 0x1FDD24u;
            goto label_1fdd24;
        }
    }
    ctx->pc = 0x1FDCF8u;
    // 0x1fdcf8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1fdcf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdcfc: 0x0  nop
    ctx->pc = 0x1fdcfcu;
    // NOP
label_1fdd00:
    // 0x1fdd00: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1fdd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fdd04: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FDD04u;
    SET_GPR_U32(ctx, 31, 0x1FDD0Cu);
    ctx->pc = 0x1FDD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD04u;
    // 0x1fdd08: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FDD04u, 0x1FDD0Cu)) {
        return;
    }
    ctx->pc = 0x1FDD0Cu;
label_1fdd0c:
    // 0x1fdd0c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1fdd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1fdd10: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDD10u;
    {
        const bool branch_taken_0x1fdd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd10) {
            ctx->pc = 0x1FDD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDD10u;
            // 0x1fdd14: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD1Cu;
            goto label_1fdd1c;
        }
    }
    ctx->pc = 0x1FDD18u;
    // 0x1fdd18: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1fdd18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fdd1c:
    // 0x1fdd1c: 0x5620fff8  bnel        $s1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FDD1Cu;
    {
        const bool branch_taken_0x1fdd1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd1c) {
            ctx->pc = 0x1FDD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDD1Cu;
            // 0x1fdd20: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdd00;
        }
    }
    ctx->pc = 0x1FDD24u;
label_1fdd24:
    // 0x1fdd24: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FDD24u;
    {
        const bool branch_taken_0x1fdd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD24u;
        // 0x1fdd28: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd24) {
            ctx->pc = 0x1FDDF0u;
            goto label_1fddf0;
        }
    }
    ctx->pc = 0x1FDD2Cu;
    // 0x1fdd2c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1fdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fdd30: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fdd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fdd34: 0x16030009  bne         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDD34u;
    {
        const bool branch_taken_0x1fdd34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD34u;
        // 0x1fdd38: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd34) {
            ctx->pc = 0x1FDD5Cu;
            goto label_1fdd5c;
        }
    }
    ctx->pc = 0x1FDD3Cu;
    // 0x1fdd3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fdd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fdd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fdd44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd48: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fdd48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd4c: 0xc07f64c  jal         func_1FD930
    ctx->pc = 0x1FDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD54u);
    ctx->pc = 0x1FDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD4Cu;
    // 0x1fdd50: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD930u, 0x1FDD4Cu, 0x1FDD54u)) {
        return;
    }
    ctx->pc = 0x1FDD54u;
label_1fdd54:
    // 0x1fdd54: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1FDD54u;
    {
        const bool branch_taken_0x1fdd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD54u;
        // 0x1fdd58: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd54) {
            ctx->pc = 0x1FDE24u;
            goto label_1fde24;
        }
    }
    ctx->pc = 0x1FDD5Cu;
label_1fdd5c:
    // 0x1fdd5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fdd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fdd60: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDD60u;
    {
        const bool branch_taken_0x1fdd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD60u;
        // 0x1fdd64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd60) {
            ctx->pc = 0x1FDD84u;
            goto label_1fdd84;
        }
    }
    ctx->pc = 0x1FDD68u;
    // 0x1fdd68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fdd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fdd6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1fdd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fdd70: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDD70u;
    {
        const bool branch_taken_0x1fdd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1fdd70) {
            ctx->pc = 0x1FDD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDD70u;
            // 0x1fdd74: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD88u;
            goto label_1fdd88;
        }
    }
    ctx->pc = 0x1FDD78u;
    // 0x1fdd78: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fdd7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FDD7Cu;
    {
        const bool branch_taken_0x1fdd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD7Cu;
        // 0x1fdd80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd7c) {
            ctx->pc = 0x1FDDF0u;
            goto label_1fddf0;
        }
    }
    ctx->pc = 0x1FDD84u;
label_1fdd84:
    // 0x1fdd84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fdd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fdd88:
    // 0x1fdd88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fdd8c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1FDD8Cu;
    {
        const bool branch_taken_0x1fdd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd8c) {
            ctx->pc = 0x1FDD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDD8Cu;
            // 0x1fdd90: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDC8u;
            goto label_1fddc8;
        }
    }
    ctx->pc = 0x1FDD94u;
    // 0x1fdd94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fdd94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd98: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fdd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fdd9c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FDD9Cu;
    {
        const bool branch_taken_0x1fdd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd9c) {
            ctx->pc = 0x1FDDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDD9Cu;
            // 0x1fdda0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDF0u;
            goto label_1fddf0;
        }
    }
    ctx->pc = 0x1FDDA4u;
    // 0x1fdda4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1fdda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fdda8:
    // 0x1fdda8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fdda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fddac: 0x0  nop
    ctx->pc = 0x1fddacu;
    // NOP
    // 0x1fddb0: 0x0  nop
    ctx->pc = 0x1fddb0u;
    // NOP
    // 0x1fddb4: 0x0  nop
    ctx->pc = 0x1fddb4u;
    // NOP
    // 0x1fddb8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FDDB8u;
    {
        const bool branch_taken_0x1fddb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fddb8) {
            ctx->pc = 0x1FDDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDDB8u;
            // 0x1fddbc: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdda8;
        }
    }
    ctx->pc = 0x1FDDC0u;
    // 0x1fddc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FDDC0u;
    {
        const bool branch_taken_0x1fddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC0u;
        // 0x1fddc4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddc0) {
            ctx->pc = 0x1FDDF0u;
            goto label_1fddf0;
        }
    }
    ctx->pc = 0x1FDDC8u;
label_1fddc8:
    // 0x1fddc8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fddcc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDDCCu;
    {
        const bool branch_taken_0x1fddcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDCCu;
        // 0x1fddd0: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddcc) {
            ctx->pc = 0x1FDDF0u;
            goto label_1fddf0;
        }
    }
    ctx->pc = 0x1FDDD4u;
    // 0x1fddd4: 0x0  nop
    ctx->pc = 0x1fddd4u;
    // NOP
label_1fddd8:
    // 0x1fddd8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fdddc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fdddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fdde0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1fdde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fdde4: 0x0  nop
    ctx->pc = 0x1fdde4u;
    // NOP
    // 0x1fdde8: 0x1062fffb  beq         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FDDE8u;
    {
        const bool branch_taken_0x1fdde8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE8u;
        // 0x1fddec: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde8) {
            ctx->pc = 0x1FDDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fddd8;
        }
    }
    ctx->pc = 0x1FDDF0u;
label_1fddf0:
    // 0x1fddf0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fddf4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1fddf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fddf8: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x1FDDF8u;
    SET_GPR_U32(ctx, 31, 0x1FDE00u);
    ctx->pc = 0x1FDDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDDF8u;
    // 0x1fddfc: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x1FDDF8u, 0x1FDE00u)) {
        return;
    }
    ctx->pc = 0x1FDE00u;
label_1fde00:
    // 0x1fde00: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FDE00u;
    {
        const bool branch_taken_0x1fde00 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1FDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE00u;
        // 0x1fde04: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde00) {
            ctx->pc = 0x1FDE34u;
            goto label_1fde34;
        }
    }
    ctx->pc = 0x1FDE08u;
    // 0x1fde08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fde08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fde0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fde10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde14: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fde14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde18: 0xc07f64c  jal         func_1FD930
    ctx->pc = 0x1FDE18u;
    SET_GPR_U32(ctx, 31, 0x1FDE20u);
    ctx->pc = 0x1FDE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE18u;
    // 0x1fde1c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD930u, 0x1FDE18u, 0x1FDE20u)) {
        return;
    }
    ctx->pc = 0x1FDE20u;
label_1fde20:
    // 0x1fde20: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1fde20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1fde24:
    // 0x1fde24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fde24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fde28: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1fde28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1fde2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDE2Cu;
    {
        const bool branch_taken_0x1fde2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE2Cu;
        // 0x1fde30: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde2c) {
            ctx->pc = 0x1FDE3Cu;
            goto label_1fde3c;
        }
    }
    ctx->pc = 0x1FDE34u;
label_1fde34:
    // 0x1fde34: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1fde34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1fde38: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1fde38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1fde3c:
    // 0x1fde3c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fde3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde40: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1fde40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fde44: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1fde44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fde48: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1fde48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fde4c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1fde4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fde50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fde50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fde54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fde54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fde58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE58u;
        // 0x1fde5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDE60u;
    // 0x1fde60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fde60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fde64: 0x0  nop
    ctx->pc = 0x1fde64u;
    // NOP
    ctx->pc = 0x1fde68u;
}
