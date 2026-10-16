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

// Function: sub_0010B100
// Address: 0x10b100 - 0x10b1e8
void sub_0010B100_0x10b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B100_0x10b100");
#endif

    switch (ctx->pc) {
        case 0x10b120u: goto label_10b120;
        case 0x10b134u: goto label_10b134;
        case 0x10b150u: goto label_10b150;
        case 0x10b178u: goto label_10b178;
        case 0x10b18cu: goto label_10b18c;
        case 0x10b1a4u: goto label_10b1a4;
        case 0x10b1c0u: goto label_10b1c0;
        default: break;
    }

    ctx->pc = 0x10b100u;

    // 0x10b100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b104: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10b104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10b108: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10b108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10b10c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10b10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b110: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10b114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b118: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x10B118u;
    SET_GPR_U32(ctx, 31, 0x10B120u);
    ctx->pc = 0x10B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B118u;
    // 0x10b11c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x10B118u, 0x10B120u)) {
        return;
    }
    ctx->pc = 0x10B120u;
label_10b120:
    // 0x10b120: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x10b124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b128: 0x8c4642f0  lw          $a2, 0x42F0($v0)
    ctx->pc = 0x10b128u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B42F0u));
    // 0x10b12c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x10B12Cu;
    SET_GPR_U32(ctx, 31, 0x10B134u);
    ctx->pc = 0x10B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B12Cu;
    // 0x10b130: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x10B12Cu, 0x10B134u)) {
        return;
    }
    ctx->pc = 0x10B134u;
label_10b134:
    // 0x10b134: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b138: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b13c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x10B13Cu;
    {
        const bool branch_taken_0x10b13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B13Cu;
        // 0x10b140: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b13c) {
            ctx->pc = 0x10B1D0u;
            goto label_10b1d0;
        }
    }
    ctx->pc = 0x10B144u;
    // 0x10b144: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x10b144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b148: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x10b148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b14c: 0x0  nop
    ctx->pc = 0x10b14cu;
    // NOP
label_10b150:
    // 0x10b150: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10b154: 0x1052000f  beq         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x10B154u;
    {
        const bool branch_taken_0x10b154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x10B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B154u;
        // 0x10b158: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b154) {
            ctx->pc = 0x10B194u;
            goto label_10b194;
        }
    }
    ctx->pc = 0x10B15Cu;
    // 0x10b15c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B15Cu;
    {
        const bool branch_taken_0x10b15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B15Cu;
        // 0x10b160: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b15c) {
            ctx->pc = 0x10B180u;
            goto label_10b180;
        }
    }
    ctx->pc = 0x10B164u;
    // 0x10b164: 0x14500010  bne         $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10B164u;
    {
        const bool branch_taken_0x10b164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B164u;
        // 0x10b168: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b164) {
            ctx->pc = 0x10B1A8u;
            goto label_10b1a8;
        }
    }
    ctx->pc = 0x10B16Cu;
    // 0x10b16c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x10b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10b170: 0xc081b56  jal         func_206D58
    ctx->pc = 0x10B170u;
    SET_GPR_U32(ctx, 31, 0x10B178u);
    ctx->pc = 0x10B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B170u;
    // 0x10b174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x10B170u, 0x10B178u)) {
        return;
    }
    ctx->pc = 0x10B178u;
label_10b178:
    // 0x10b178: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10B178u;
    {
        const bool branch_taken_0x10b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B178u;
        // 0x10b17c: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b178) {
            ctx->pc = 0x10B1A4u;
            goto label_10b1a4;
        }
    }
    ctx->pc = 0x10B180u;
label_10b180:
    // 0x10b180: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x10b180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x10b184: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x10B184u;
    SET_GPR_U32(ctx, 31, 0x10B18Cu);
    ctx->pc = 0x10B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B184u;
    // 0x10b188: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x10B184u, 0x10B18Cu)) {
        return;
    }
    ctx->pc = 0x10B18Cu;
label_10b18c:
    // 0x10b18c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10B18Cu;
    {
        const bool branch_taken_0x10b18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B18Cu;
        // 0x10b190: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b18c) {
            ctx->pc = 0x10B1A8u;
            goto label_10b1a8;
        }
    }
    ctx->pc = 0x10B194u;
label_10b194:
    // 0x10b194: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x10b194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x10b198: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x10b198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x10b19c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x10B19Cu;
    SET_GPR_U32(ctx, 31, 0x10B1A4u);
    ctx->pc = 0x10B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B19Cu;
    // 0x10b1a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x10B19Cu, 0x10B1A4u)) {
        return;
    }
    ctx->pc = 0x10B1A4u;
label_10b1a4:
    // 0x10b1a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10b1a8:
    // 0x10b1a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10b1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b1b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b1b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b1b8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x10B1B8u;
    SET_GPR_U32(ctx, 31, 0x10B1C0u);
    ctx->pc = 0x10B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1B8u;
    // 0x10b1bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x10B1B8u, 0x10B1C0u)) {
        return;
    }
    ctx->pc = 0x10B1C0u;
label_10b1c0:
    // 0x10b1c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b1c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10b1c8: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x10B1C8u;
    {
        const bool branch_taken_0x10b1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1C8u;
        // 0x10b1cc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1c8) {
            ctx->pc = 0x10B150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b150;
        }
    }
    ctx->pc = 0x10B1D0u;
label_10b1d0:
    // 0x10b1d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10b1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b1d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10b1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b1d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10b1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b1dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1E0u;
        // 0x10b1e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B1E8u;
}
