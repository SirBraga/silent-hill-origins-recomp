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

// Function: sub_001EE910
// Address: 0x1ee910 - 0x1ee978
void sub_001EE910_0x1ee910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE910_0x1ee910");
#endif

    switch (ctx->pc) {
        case 0x1ee93cu: goto label_1ee93c;
        case 0x1ee950u: goto label_1ee950;
        case 0x1ee964u: goto label_1ee964;
        default: break;
    }

    ctx->pc = 0x1ee910u;

label_1ee910:
    // 0x1ee910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee914: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ee914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ee918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ee918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee91c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EE91Cu;
    {
        const bool branch_taken_0x1ee91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE91Cu;
        // 0x1ee920: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee91c) {
            ctx->pc = 0x1EE964u;
            goto label_1ee964;
        }
    }
    ctx->pc = 0x1EE924u;
    // 0x1ee924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ee924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee928: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ee928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ee92c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE92Cu;
    {
        const bool branch_taken_0x1ee92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee92c) {
            ctx->pc = 0x1EE930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE92Cu;
            // 0x1ee930: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE940u;
            goto label_1ee940;
        }
    }
    ctx->pc = 0x1EE934u;
    // 0x1ee934: 0xc07b83c  jal         func_1EE0F0
    ctx->pc = 0x1EE934u;
    SET_GPR_U32(ctx, 31, 0x1EE93Cu);
    ctx->pc = 0x1EE0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE0F0u, 0x1EE934u, 0x1EE93Cu)) {
        return;
    }
    ctx->pc = 0x1EE93Cu;
label_1ee93c:
    // 0x1ee93c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ee93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ee940:
    // 0x1ee940: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE940u;
    {
        const bool branch_taken_0x1ee940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee940) {
            ctx->pc = 0x1EE944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE940u;
            // 0x1ee944: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE954u;
            goto label_1ee954;
        }
    }
    ctx->pc = 0x1EE948u;
    // 0x1ee948: 0xc07ba44  jal         func_1EE910
    ctx->pc = 0x1EE948u;
    SET_GPR_U32(ctx, 31, 0x1EE950u);
    ctx->pc = 0x1EE910u;
    goto label_1ee910;
    ctx->pc = 0x1EE950u;
label_1ee950:
    // 0x1ee950: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ee950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ee954:
    // 0x1ee954: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE954u;
    {
        const bool branch_taken_0x1ee954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE954u;
        // 0x1ee958: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee954) {
            ctx->pc = 0x1EE968u;
            goto label_1ee968;
        }
    }
    ctx->pc = 0x1EE95Cu;
    // 0x1ee95c: 0xc07ba44  jal         func_1EE910
    ctx->pc = 0x1EE95Cu;
    SET_GPR_U32(ctx, 31, 0x1EE964u);
    ctx->pc = 0x1EE910u;
    goto label_1ee910;
    ctx->pc = 0x1EE964u;
label_1ee964:
    // 0x1ee964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ee964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ee968:
    // 0x1ee968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee96c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE96Cu;
        // 0x1ee970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE974u;
    // 0x1ee974: 0x0  nop
    ctx->pc = 0x1ee974u;
    // NOP
    ctx->pc = 0x1ee978u;
}
