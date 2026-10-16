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

// Function: sub_001D7F70
// Address: 0x1d7f70 - 0x1d8030
void sub_001D7F70_0x1d7f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7F70_0x1d7f70");
#endif

    switch (ctx->pc) {
        case 0x1d7fa0u: goto label_1d7fa0;
        case 0x1d7fe0u: goto label_1d7fe0;
        case 0x1d8008u: goto label_1d8008;
        default: break;
    }

    ctx->pc = 0x1d7f70u;

    // 0x1d7f70: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1d7f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f74: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x1d7f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1d7f78: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x1d7f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x1d7f7c: 0x30c40003  andi        $a0, $a2, 0x3
    ctx->pc = 0x1d7f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1d7f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7f84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d7f88: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D7F88u;
    {
        const bool branch_taken_0x1d7f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f88) {
            ctx->pc = 0x1D8000u;
            goto label_1d8000;
        }
    }
    ctx->pc = 0x1D7F90u;
    // 0x1d7f90: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1d7f94: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1d7f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d7f98: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D7F98u;
    {
        const bool branch_taken_0x1d7f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F98u;
        // 0x1d7f9c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f98) {
            ctx->pc = 0x1D7FD4u;
            goto label_1d7fd4;
        }
    }
    ctx->pc = 0x1D7FA0u;
label_1d7fa0:
    // 0x1d7fa0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7fa4: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x1d7fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1d7fa8: 0x28c40004  slti        $a0, $a2, 0x4
    ctx->pc = 0x1d7fa8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d7fac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1d7facu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1d7fb0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d7fb4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1d7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1d7fb8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d7fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d7fbc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1d7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1d7fc0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1d7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d7fc4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1d7fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1d7fc8: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1d7fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x1d7fcc: 0x1080fff4  beqz        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D7FCCu;
    {
        const bool branch_taken_0x1d7fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FCCu;
        // 0x1d7fd0: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fcc) {
            ctx->pc = 0x1D7FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fa0;
        }
    }
    ctx->pc = 0x1D7FD4u;
label_1d7fd4:
    // 0x1d7fd4: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7FD4u;
    {
        const bool branch_taken_0x1d7fd4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x1D7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FD4u;
        // 0x1d7fd8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fd4) {
            ctx->pc = 0x1D8024u;
            goto label_1d8024;
        }
    }
    ctx->pc = 0x1D7FDCu;
    // 0x1d7fdc: 0x0  nop
    ctx->pc = 0x1d7fdcu;
    // NOP
label_1d7fe0:
    // 0x1d7fe0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d7fe4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d7fe8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d7fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d7fec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1d7ff0: 0x1cc0fffb  bgtz        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7FF0u;
    {
        const bool branch_taken_0x1d7ff0 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x1D7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FF0u;
        // 0x1d7ff4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ff0) {
            ctx->pc = 0x1D7FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fe0;
        }
    }
    ctx->pc = 0x1D7FF8u;
    // 0x1d7ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FF8u;
        // 0x1d7ffc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8000u;
label_1d8000:
    // 0x1d8000: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8000u;
    {
        const bool branch_taken_0x1d8000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8000u;
        // 0x1d8004: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8000) {
            ctx->pc = 0x1D8020u;
            goto label_1d8020;
        }
    }
    ctx->pc = 0x1D8008u;
label_1d8008:
    // 0x1d8008: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1d8008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d800c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d800cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d8010: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d8014: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1d8014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8018: 0x14c0fffb  bnez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8018u;
    {
        const bool branch_taken_0x1d8018 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8018u;
        // 0x1d801c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8018) {
            ctx->pc = 0x1D8008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8008;
        }
    }
    ctx->pc = 0x1D8020u;
label_1d8020:
    // 0x1d8020: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1d8020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d8024:
    // 0x1d8024: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D802Cu;
    // 0x1d802c: 0x0  nop
    ctx->pc = 0x1d802cu;
    // NOP
    ctx->pc = 0x1d8030u;
}
