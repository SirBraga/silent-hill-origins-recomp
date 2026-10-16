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

// Function: sub_00187330
// Address: 0x187330 - 0x1873c8
void sub_00187330_0x187330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187330_0x187330");
#endif

    switch (ctx->pc) {
        case 0x187358u: goto label_187358;
        case 0x1873bcu: goto label_1873bc;
        default: break;
    }

    ctx->pc = 0x187330u;

    // 0x187330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187334: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x187338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18733c: 0x24428720  addiu       $v0, $v0, -0x78E0
    ctx->pc = 0x18733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936352));
    // 0x187340: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x187340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x187344: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x187344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x187348: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x187348u;
    {
        const bool branch_taken_0x187348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187348u;
        // 0x18734c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187348) {
            ctx->pc = 0x1873ACu;
            goto label_1873ac;
        }
    }
    ctx->pc = 0x187350u;
    // 0x187350: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x187350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x187354: 0x0  nop
    ctx->pc = 0x187354u;
    // NOP
label_187358:
    // 0x187358: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x187358u;
    {
        const bool branch_taken_0x187358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187358) {
            ctx->pc = 0x18735Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187358u;
            // 0x18735c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1873A0u;
            goto label_1873a0;
        }
    }
    ctx->pc = 0x187360u;
    // 0x187360: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x187364: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x187364u;
    {
        const bool branch_taken_0x187364 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x187368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187364u;
        // 0x187368: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187364) {
            ctx->pc = 0x187374u;
            goto label_187374;
        }
    }
    ctx->pc = 0x18736Cu;
    // 0x18736c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18736Cu;
    {
        const bool branch_taken_0x18736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18736Cu;
        // 0x187370: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18736c) {
            ctx->pc = 0x187378u;
            goto label_187378;
        }
    }
    ctx->pc = 0x187374u;
label_187374:
    // 0x187374: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x187374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_187378:
    // 0x187378: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x187378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18737c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18737Cu;
    {
        const bool branch_taken_0x18737c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x187380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18737Cu;
        // 0x187380: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18737c) {
            ctx->pc = 0x18738Cu;
            goto label_18738c;
        }
    }
    ctx->pc = 0x187384u;
    // 0x187384: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187384u;
    {
        const bool branch_taken_0x187384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187384u;
        // 0x187388: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187384) {
            ctx->pc = 0x187390u;
            goto label_187390;
        }
    }
    ctx->pc = 0x18738Cu;
label_18738c:
    // 0x18738c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x18738cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_187390:
    // 0x187390: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x187390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187394: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x187394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187398: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x187398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x18739c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1873a0:
    // 0x1873a0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1873A0u;
    {
        const bool branch_taken_0x1873a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1873a0) {
            ctx->pc = 0x1873A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1873A0u;
            // 0x1873a4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187358;
        }
    }
    ctx->pc = 0x1873A8u;
    // 0x1873a8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1873a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1873ac:
    // 0x1873ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1873ACu;
    {
        const bool branch_taken_0x1873ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1873B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873ACu;
        // 0x1873b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1873ac) {
            ctx->pc = 0x1873C0u;
            goto label_1873c0;
        }
    }
    ctx->pc = 0x1873B4u;
    // 0x1873b4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1873B4u;
    SET_GPR_U32(ctx, 31, 0x1873BCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1873B4u, 0x1873BCu)) {
        return;
    }
    ctx->pc = 0x1873BCu;
label_1873bc:
    // 0x1873bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1873bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1873c0:
    // 0x1873c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1873C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873C0u;
        // 0x1873c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873C8u;
}
