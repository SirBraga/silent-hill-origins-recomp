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

// Function: sub_00158F98
// Address: 0x158f98 - 0x159020
void sub_00158F98_0x158f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158F98_0x158f98");
#endif

    switch (ctx->pc) {
        case 0x158fc8u: goto label_158fc8;
        case 0x158ff8u: goto label_158ff8;
        case 0x15900cu: goto label_15900c;
        default: break;
    }

    ctx->pc = 0x158f98u;

    // 0x158f98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158f9c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x158f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x158fa0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x158fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x158fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x158fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x158fac: 0x8c448620  lw          $a0, -0x79E0($v0)
    ctx->pc = 0x158facu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338620u));
    // 0x158fb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x158fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158fb8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x158FB8u;
    {
        const bool branch_taken_0x158fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FB8u;
        // 0x158fbc: 0xac408620  sw          $zero, -0x79E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936096), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fb8) {
            ctx->pc = 0x158FE4u;
            goto label_158fe4;
        }
    }
    ctx->pc = 0x158FC0u;
    // 0x158fc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x158fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x158fc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158fc8:
    // 0x158fc8: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158FC8u;
    {
        const bool branch_taken_0x158fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x158FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FC8u;
        // 0x158fcc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fc8) {
            ctx->pc = 0x158FDCu;
            goto label_158fdc;
        }
    }
    ctx->pc = 0x158FD0u;
    // 0x158fd0: 0x8ca28620  lw          $v0, -0x79E0($a1)
    ctx->pc = 0x158fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936096)));
    // 0x158fd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x158fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x158fd8: 0xaca38620  sw          $v1, -0x79E0($a1)
    ctx->pc = 0x158fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936096), GPR_U32(ctx, 3));
label_158fdc:
    // 0x158fdc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x158FDCu;
    {
        const bool branch_taken_0x158fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x158FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FDCu;
        // 0x158fe0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fdc) {
            ctx->pc = 0x158FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158fc8;
        }
    }
    ctx->pc = 0x158FE4u;
label_158fe4:
    // 0x158fe4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x158fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x158fe8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x158FE8u;
    {
        const bool branch_taken_0x158fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x158FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE8u;
        // 0x158fec: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fe8) {
            ctx->pc = 0x158FFCu;
            goto label_158ffc;
        }
    }
    ctx->pc = 0x158FF0u;
    // 0x158ff0: 0xc0808d4  jal         func_202350
    ctx->pc = 0x158FF0u;
    SET_GPR_U32(ctx, 31, 0x158FF8u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x158FF0u, 0x158FF8u)) {
        return;
    }
    ctx->pc = 0x158FF8u;
label_158ff8:
    // 0x158ff8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x158ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_158ffc:
    // 0x158ffc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x158FFCu;
    {
        const bool branch_taken_0x158ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158ffc) {
            ctx->pc = 0x159000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158FFCu;
            // 0x159000: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159010u;
            goto label_159010;
        }
    }
    ctx->pc = 0x159004u;
    // 0x159004: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x159004u;
    SET_GPR_U32(ctx, 31, 0x15900Cu);
    ctx->pc = 0x159008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159004u;
    // 0x159008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x159004u, 0x15900Cu)) {
        return;
    }
    ctx->pc = 0x15900Cu;
label_15900c:
    // 0x15900c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15900cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_159010:
    // 0x159010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159018: 0x3e00008  jr          $ra
    ctx->pc = 0x159018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159018u;
        // 0x15901c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159020u;
}
