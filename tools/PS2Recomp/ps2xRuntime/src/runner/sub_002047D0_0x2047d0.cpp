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

// Function: sub_002047D0
// Address: 0x2047d0 - 0x204868
void sub_002047D0_0x2047d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002047D0_0x2047d0");
#endif

    switch (ctx->pc) {
        case 0x204800u: goto label_204800;
        case 0x204840u: goto label_204840;
        default: break;
    }

    ctx->pc = 0x2047d0u;

    // 0x2047d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2047d4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x2047d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x2047d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2047d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2047dc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2047dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2047e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2047e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2047e4: 0x24502ce0  addiu       $s0, $v0, 0x2CE0
    ctx->pc = 0x2047e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11488));
    // 0x2047e8: 0x24636a30  addiu       $v1, $v1, 0x6A30
    ctx->pc = 0x2047e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27184));
    // 0x2047ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2047ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702CE4u));
    // 0x2047f0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2047F0u;
    {
        const bool branch_taken_0x2047f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047F0u;
        // 0x2047f4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047f0) {
            ctx->pc = 0x204858u;
            goto label_204858;
        }
    }
    ctx->pc = 0x2047F8u;
    // 0x2047f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2047f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2047fc: 0x0  nop
    ctx->pc = 0x2047fcu;
    // NOP
label_204800:
    // 0x204800: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x204800u;
    {
        const bool branch_taken_0x204800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x204800) {
            ctx->pc = 0x204804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204800u;
            // 0x204804: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204850u;
            goto label_204850;
        }
    }
    ctx->pc = 0x204808u;
    // 0x204808: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x204808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20480c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20480Cu;
    {
        const bool branch_taken_0x20480c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20480Cu;
        // 0x204810: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20480c) {
            ctx->pc = 0x20481Cu;
            goto label_20481c;
        }
    }
    ctx->pc = 0x204814u;
    // 0x204814: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x204814u;
    {
        const bool branch_taken_0x204814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204814u;
        // 0x204818: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204814) {
            ctx->pc = 0x204820u;
            goto label_204820;
        }
    }
    ctx->pc = 0x20481Cu;
label_20481c:
    // 0x20481c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x20481cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_204820:
    // 0x204820: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x204820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204824: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204824u;
    {
        const bool branch_taken_0x204824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204824u;
        // 0x204828: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204824) {
            ctx->pc = 0x204834u;
            goto label_204834;
        }
    }
    ctx->pc = 0x20482Cu;
    // 0x20482c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20482Cu;
    {
        const bool branch_taken_0x20482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20482Cu;
        // 0x204830: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20482c) {
            ctx->pc = 0x204838u;
            goto label_204838;
        }
    }
    ctx->pc = 0x204834u;
label_204834:
    // 0x204834: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x204834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_204838:
    // 0x204838: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x204838u;
    SET_GPR_U32(ctx, 31, 0x204840u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x204838u, 0x204840u)) {
        return;
    }
    ctx->pc = 0x204840u;
label_204840:
    // 0x204840: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x204844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204848: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x204848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20484c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_204850:
    // 0x204850: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x204850u;
    {
        const bool branch_taken_0x204850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204850) {
            ctx->pc = 0x204854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204850u;
            // 0x204854: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x204800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_204800;
        }
    }
    ctx->pc = 0x204858u;
label_204858:
    // 0x204858: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x204858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20485c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20485cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204860: 0x3e00008  jr          $ra
    ctx->pc = 0x204860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204860u;
        // 0x204864: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204868u;
}
