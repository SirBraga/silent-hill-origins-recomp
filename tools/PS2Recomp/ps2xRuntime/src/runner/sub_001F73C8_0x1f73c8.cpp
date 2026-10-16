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

// Function: sub_001F73C8
// Address: 0x1f73c8 - 0x1f7608
void sub_001F73C8_0x1f73c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F73C8_0x1f73c8");
#endif

    switch (ctx->pc) {
        case 0x1f73dcu: goto label_1f73dc;
        case 0x1f73f0u: goto label_1f73f0;
        case 0x1f74a8u: goto label_1f74a8;
        case 0x1f74e0u: goto label_1f74e0;
        case 0x1f7590u: goto label_1f7590;
        default: break;
    }

    ctx->pc = 0x1f73c8u;

    // 0x1f73c8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1f73c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73cc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1f73ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f73d0: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1f73d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f73d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F73D4u;
    {
        const bool branch_taken_0x1f73d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f73d4) {
            ctx->pc = 0x1F73D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F73D4u;
            // 0x1f73d8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F73E4u;
            goto label_1f73e4;
        }
    }
    ctx->pc = 0x1F73DCu;
label_1f73dc:
    // 0x1f73dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F73DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73DCu;
        // 0x1f73e0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F73DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F73E4u;
label_1f73e4:
    // 0x1f73e4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1f73e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f73e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F73E8u;
    {
        const bool branch_taken_0x1f73e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73E8u;
        // 0x1f73ec: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73e8) {
            ctx->pc = 0x1F73F8u;
            goto label_1f73f8;
        }
    }
    ctx->pc = 0x1F73F0u;
label_1f73f0:
    // 0x1f73f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F73F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73F0u;
        // 0x1f73f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F73F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F73F8u;
label_1f73f8:
    // 0x1f73f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F73F8u;
    {
        const bool branch_taken_0x1f73f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73F8u;
        // 0x1f73fc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73f8) {
            ctx->pc = 0x1F7420u;
            goto label_1f7420;
        }
    }
    ctx->pc = 0x1F7400u;
    // 0x1f7400: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F7400u;
    {
        const bool branch_taken_0x1f7400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7400) {
            ctx->pc = 0x1F73DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73dc;
        }
    }
    ctx->pc = 0x1F7408u;
    // 0x1f7408: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1f7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f740c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1f740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f7410: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F7410u;
    {
        const bool branch_taken_0x1f7410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7410u;
        // 0x1f7414: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7410) {
            ctx->pc = 0x1F73DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73dc;
        }
    }
    ctx->pc = 0x1F7418u;
    // 0x1f7418: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7418u;
        // 0x1f741c: 0x24421a08  addiu       $v0, $v0, 0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7420u;
label_1f7420:
    // 0x1f7420: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F7420u;
    {
        const bool branch_taken_0x1f7420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7420u;
        // 0x1f7424: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7420) {
            ctx->pc = 0x1F73F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73f0;
        }
    }
    ctx->pc = 0x1F7428u;
    // 0x1f7428: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7428u;
    {
        const bool branch_taken_0x1f7428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7428u;
        // 0x1f742c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7428) {
            ctx->pc = 0x1F7464u;
            goto label_1f7464;
        }
    }
    ctx->pc = 0x1F7430u;
    // 0x1f7430: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1F7430u;
    {
        const bool branch_taken_0x1f7430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7430u;
        // 0x1f7434: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7430) {
            ctx->pc = 0x1F73DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73dc;
        }
    }
    ctx->pc = 0x1F7438u;
    // 0x1f7438: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x1f7438u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f743c: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1f743cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1f7440: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x1f7440u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f7444: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1f7444u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1f7448: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x1f7448u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1f744c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1f744cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x1f7450: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1f7450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f7454: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f7454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f7458: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f7458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f745c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F745Cu;
        // 0x1f7460: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F745Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7464u;
label_1f7464:
    // 0x1f7464: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F7464u;
    {
        const bool branch_taken_0x1f7464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7464u;
        // 0x1f7468: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7464) {
            ctx->pc = 0x1F73F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f73f0;
        }
    }
    ctx->pc = 0x1F746Cu;
    // 0x1f746c: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x1f746cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f7470: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x1f7470u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f7474: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x1f7474u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1f7478: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x1f7478u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1f747c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f747cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f7480: 0x32023  negu        $a0, $v1
    ctx->pc = 0x1f7480u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1f7484: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1f7484u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x1f7488: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x1f7488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1f748c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F748Cu;
    {
        const bool branch_taken_0x1f748c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F748Cu;
        // 0x1f7490: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f748c) {
            ctx->pc = 0x1F7504u;
            goto label_1f7504;
        }
    }
    ctx->pc = 0x1F7494u;
    // 0x1f7494: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x1f7494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1f7498: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7498u;
    {
        const bool branch_taken_0x1f7498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7498u;
        // 0x1f749c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7498) {
            ctx->pc = 0x1F74CCu;
            goto label_1f74cc;
        }
    }
    ctx->pc = 0x1F74A0u;
    // 0x1f74a0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1f74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f74a4: 0x0  nop
    ctx->pc = 0x1f74a4u;
    // NOP
label_1f74a8:
    // 0x1f74a8: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x1f74a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x1f74ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f74acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f74b0: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x1f74b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1f74b4: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x1f74b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1f74b8: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1f74b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f74bc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F74BCu;
    {
        const bool branch_taken_0x1f74bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f74bc) {
            ctx->pc = 0x1F74A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f74a8;
        }
    }
    ctx->pc = 0x1F74C4u;
    // 0x1f74c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F74C4u;
    {
        const bool branch_taken_0x1f74c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74C4u;
        // 0x1f74c8: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74c4) {
            ctx->pc = 0x1F74D4u;
            goto label_1f74d4;
        }
    }
    ctx->pc = 0x1F74CCu;
label_1f74cc:
    // 0x1f74cc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1f74ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f74d0: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x1f74d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1f74d4:
    // 0x1f74d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F74D4u;
    {
        const bool branch_taken_0x1f74d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f74d4) {
            ctx->pc = 0x1F7528u;
            goto label_1f7528;
        }
    }
    ctx->pc = 0x1F74DCu;
    // 0x1f74dc: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x1f74dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_1f74e0:
    // 0x1f74e0: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x1f74e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x1f74e4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x1f74e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x1f74e8: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x1f74e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f74ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1f74ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f74f0: 0x0  nop
    ctx->pc = 0x1f74f0u;
    // NOP
    // 0x1f74f4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F74F4u;
    {
        const bool branch_taken_0x1f74f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f74f4) {
            ctx->pc = 0x1F74E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f74e0;
        }
    }
    ctx->pc = 0x1F74FCu;
    // 0x1f74fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F74FCu;
    {
        const bool branch_taken_0x1f74fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74FCu;
        // 0x1f7500: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74fc) {
            ctx->pc = 0x1F7528u;
            goto label_1f7528;
        }
    }
    ctx->pc = 0x1F7504u;
label_1f7504:
    // 0x1f7504: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x1f7504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1f7508: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7508u;
    {
        const bool branch_taken_0x1f7508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7508u;
        // 0x1f750c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7508) {
            ctx->pc = 0x1F751Cu;
            goto label_1f751c;
        }
    }
    ctx->pc = 0x1F7510u;
    // 0x1f7510: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f7510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7514: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7514u;
    {
        const bool branch_taken_0x1f7514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7514u;
        // 0x1f7518: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7514) {
            ctx->pc = 0x1F7528u;
            goto label_1f7528;
        }
    }
    ctx->pc = 0x1F751Cu;
label_1f751c:
    // 0x1f751c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1f751cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7520: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1f7520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f7524: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f7524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7528:
    // 0x1f7528: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F7528u;
    {
        const bool branch_taken_0x1f7528 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7528u;
        // 0x1f752c: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7528) {
            ctx->pc = 0x1F75BCu;
            goto label_1f75bc;
        }
    }
    ctx->pc = 0x1F7530u;
    // 0x1f7530: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7530u;
    {
        const bool branch_taken_0x1f7530 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7530u;
        // 0x1f7534: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7530) {
            ctx->pc = 0x1F753Cu;
            goto label_1f753c;
        }
    }
    ctx->pc = 0x1F7538u;
    // 0x1f7538: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x1f7538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_1f753c:
    // 0x1f753c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F753Cu;
    {
        const bool branch_taken_0x1f753c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1F7540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F753Cu;
        // 0x1f7540: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f753c) {
            ctx->pc = 0x1F7554u;
            goto label_1f7554;
        }
    }
    ctx->pc = 0x1F7544u;
    // 0x1f7544: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x1f7544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x1f7548: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1f7548u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x1f754c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F754Cu;
    {
        const bool branch_taken_0x1f754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F754Cu;
        // 0x1f7550: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f754c) {
            ctx->pc = 0x1F7564u;
            goto label_1f7564;
        }
    }
    ctx->pc = 0x1F7554u;
label_1f7554:
    // 0x1f7554: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x1f7554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x1f7558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f755c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1f755cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1f7560: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1f7560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1f7564:
    // 0x1f7564: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x1f7564u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1f7568: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f756c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x1f756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x1f7570: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1f7570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1f7574: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x1f7574u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x1f7578: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f7578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f757c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F757Cu;
    {
        const bool branch_taken_0x1f757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F757Cu;
        // 0x1f7580: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f757c) {
            ctx->pc = 0x1F75CCu;
            goto label_1f75cc;
        }
    }
    ctx->pc = 0x1F7584u;
    // 0x1f7584: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f7584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7588: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1f7588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1f758c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x1f758cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_1f7590:
    // 0x1f7590: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1f7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f7594: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x1f7594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x1f7598: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x1f7598u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x1f759c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1f759cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x1f75a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f75a4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1f75a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f75a8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1f75a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1f75ac: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F75ACu;
    {
        const bool branch_taken_0x1f75ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75ACu;
        // 0x1f75b0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75ac) {
            ctx->pc = 0x1F7590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7590;
        }
    }
    ctx->pc = 0x1F75B4u;
    // 0x1f75b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F75B4u;
    {
        const bool branch_taken_0x1f75b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75B4u;
        // 0x1f75b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75b4) {
            ctx->pc = 0x1F75CCu;
            goto label_1f75cc;
        }
    }
    ctx->pc = 0x1F75BCu;
label_1f75bc:
    // 0x1f75bc: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x1f75bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x1f75c0: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x1f75c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x1f75c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f75c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75c8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1f75c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_1f75cc:
    // 0x1f75cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f75d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f75d4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1f75d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x1f75d8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1f75d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f75dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F75DCu;
    {
        const bool branch_taken_0x1f75dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75DCu;
        // 0x1f75e0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75dc) {
            ctx->pc = 0x1F7600u;
            goto label_1f7600;
        }
    }
    ctx->pc = 0x1F75E4u;
    // 0x1f75e4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f75e8: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x1f75e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x1f75ec: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1f75ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f75f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f75f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f75f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f75f8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1f75f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1f75fc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1f75fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1f7600:
    // 0x1f7600: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7600u;
        // 0x1f7604: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7608u;
}
