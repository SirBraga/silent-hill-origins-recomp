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

// Function: sub_0024C0F8
// Address: 0x24c0f8 - 0x24c150
void sub_0024C0F8_0x24c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C0F8_0x24c0f8");
#endif

    switch (ctx->pc) {
        case 0x24c118u: goto label_24c118;
        case 0x24c120u: goto label_24c120;
        case 0x24c138u: goto label_24c138;
        default: break;
    }

    ctx->pc = 0x24c0f8u;

    // 0x24c0f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c0fc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24c100: 0x8c843f68  lw          $a0, 0x3F68($a0)
    ctx->pc = 0x24c100u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F68u));
    // 0x24c104: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24c104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24c108: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x24c108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x24c10c: 0x26103f68  addiu       $s0, $s0, 0x3F68
    ctx->pc = 0x24c10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16232));
    // 0x24c110: 0x10900007  beq         $a0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C110u;
    {
        const bool branch_taken_0x24c110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x24C114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C110u;
        // 0x24c114: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c110) {
            ctx->pc = 0x24C130u;
            goto label_24c130;
        }
    }
    ctx->pc = 0x24C118u;
label_24c118:
    // 0x24c118: 0xc093106  jal         func_24C418
    ctx->pc = 0x24C118u;
    SET_GPR_U32(ctx, 31, 0x24C120u);
    ctx->pc = 0x24C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C118u;
    // 0x24c11c: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x24C118u, 0x24C120u)) {
        return;
    }
    ctx->pc = 0x24C120u;
label_24c120:
    // 0x24c120: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x24c120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x24c124: 0x8c843f68  lw          $a0, 0x3F68($a0)
    ctx->pc = 0x24c124u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3F68u));
    // 0x24c128: 0x1490fffb  bne         $a0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24C128u;
    {
        const bool branch_taken_0x24c128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x24c128) {
            ctx->pc = 0x24C118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c118;
        }
    }
    ctx->pc = 0x24C130u;
label_24c130:
    // 0x24c130: 0xc093106  jal         func_24C418
    ctx->pc = 0x24C130u;
    SET_GPR_U32(ctx, 31, 0x24C138u);
    ctx->pc = 0x24C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C130u;
    // 0x24c134: 0x8f848540  lw          $a0, -0x7AC0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x24C130u, 0x24C138u)) {
        return;
    }
    ctx->pc = 0x24C138u;
label_24c138:
    // 0x24c138: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24c138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c140: 0xaf808540  sw          $zero, -0x7AC0($gp)
    ctx->pc = 0x24c140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935872), GPR_U32(ctx, 0));
    // 0x24c144: 0xaf80853c  sw          $zero, -0x7AC4($gp)
    ctx->pc = 0x24c144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 0));
    // 0x24c148: 0x3e00008  jr          $ra
    ctx->pc = 0x24C148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C148u;
        // 0x24c14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C150u;
}
