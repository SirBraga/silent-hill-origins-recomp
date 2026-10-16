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

// Function: sub_002D6FB0
// Address: 0x2d6fb0 - 0x2d7000
void sub_002D6FB0_0x2d6fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6FB0_0x2d6fb0");
#endif

    switch (ctx->pc) {
        case 0x2d6fb0u: goto label_2d6fb0;
        case 0x2d6fb4u: goto label_2d6fb4;
        case 0x2d6fb8u: goto label_2d6fb8;
        case 0x2d6fbcu: goto label_2d6fbc;
        case 0x2d6fc0u: goto label_2d6fc0;
        case 0x2d6fc4u: goto label_2d6fc4;
        case 0x2d6fc8u: goto label_2d6fc8;
        case 0x2d6fccu: goto label_2d6fcc;
        case 0x2d6fd0u: goto label_2d6fd0;
        case 0x2d6fd4u: goto label_2d6fd4;
        case 0x2d6fd8u: goto label_2d6fd8;
        case 0x2d6fdcu: goto label_2d6fdc;
        case 0x2d6fe0u: goto label_2d6fe0;
        case 0x2d6fe4u: goto label_2d6fe4;
        case 0x2d6fe8u: goto label_2d6fe8;
        case 0x2d6fecu: goto label_2d6fec;
        case 0x2d6ff0u: goto label_2d6ff0;
        case 0x2d6ff4u: goto label_2d6ff4;
        case 0x2d6ff8u: goto label_2d6ff8;
        case 0x2d6ffcu: goto label_2d6ffc;
        default: break;
    }

    ctx->pc = 0x2d6fb0u;

label_2d6fb0:
    // 0x2d6fb0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d6fb4:
    // 0x2d6fb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d6fb8:
    // 0x2d6fb8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d6fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d6fbc:
    // 0x2d6fbc: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2d6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2d6fc0:
    // 0x2d6fc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d6fc4:
    // 0x2d6fc4: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2d6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2d6fc8:
    // 0x2d6fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d6fcc:
    // 0x2d6fcc: 0x40f809  jalr        $v0
label_2d6fd0:
    if (ctx->pc == 0x2D6FD0u) {
        ctx->pc = 0x2D6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FCCu;
        // 0x2d6fd0: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6FD4u;
        goto label_2d6fd4;
    }
    ctx->pc = 0x2D6FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6FD4u);
        ctx->pc = 0x2D6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FCCu;
        // 0x2d6fd0: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FCCu, 0x2D6FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6FD4u;
label_2d6fd4:
    // 0x2d6fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6fd8:
    // 0x2d6fd8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2d6fdc:
    if (ctx->pc == 0x2D6FDCu) {
        ctx->pc = 0x2D6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FD8u;
        // 0x2d6fdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6FE0u;
        goto label_2d6fe0;
    }
    ctx->pc = 0x2D6FD8u;
    {
        const bool branch_taken_0x2d6fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FD8u;
        // 0x2d6fdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6fd8) {
            ctx->pc = 0x2D6FECu;
            goto label_2d6fec;
        }
    }
    ctx->pc = 0x2D6FE0u;
label_2d6fe0:
    // 0x2d6fe0: 0xc0b5c12  jal         func_2D7048
label_2d6fe4:
    if (ctx->pc == 0x2D6FE4u) {
        ctx->pc = 0x2D6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FE0u;
        // 0x2d6fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6FE8u;
        goto label_2d6fe8;
    }
    ctx->pc = 0x2D6FE0u;
    SET_GPR_U32(ctx, 31, 0x2D6FE8u);
    ctx->pc = 0x2D6FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6FE0u;
    // 0x2d6fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7048u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7048u, 0x2D6FE0u, 0x2D6FE8u)) {
        return;
    }
    ctx->pc = 0x2D6FE8u;
label_2d6fe8:
    // 0x2d6fe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d6fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6fec:
    // 0x2d6fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6ff0:
    // 0x2d6ff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6ff4:
    // 0x2d6ff4: 0x3e00008  jr          $ra
label_2d6ff8:
    if (ctx->pc == 0x2D6FF8u) {
        ctx->pc = 0x2D6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FF4u;
        // 0x2d6ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6FFCu;
        goto label_2d6ffc;
    }
    ctx->pc = 0x2D6FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FF4u;
        // 0x2d6ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6FFCu;
label_2d6ffc:
    // 0x2d6ffc: 0x0  nop
    ctx->pc = 0x2d6ffcu;
    // NOP
    ctx->pc = 0x2d7000u;
}
