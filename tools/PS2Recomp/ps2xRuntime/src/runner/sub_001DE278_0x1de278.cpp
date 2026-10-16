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

// Function: sub_001DE278
// Address: 0x1de278 - 0x1de2f8
void sub_001DE278_0x1de278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE278_0x1de278");
#endif

    switch (ctx->pc) {
        case 0x1de288u: goto label_1de288;
        case 0x1de298u: goto label_1de298;
        case 0x1de2a8u: goto label_1de2a8;
        case 0x1de2b8u: goto label_1de2b8;
        case 0x1de2c8u: goto label_1de2c8;
        case 0x1de2d8u: goto label_1de2d8;
        case 0x1de2e8u: goto label_1de2e8;
        default: break;
    }

    ctx->pc = 0x1de278u;

    // 0x1de278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de280: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1DE280u;
    SET_GPR_U32(ctx, 31, 0x1DE288u);
    ctx->pc = 0x1DFF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DFF68u, 0x1DE280u, 0x1DE288u)) {
        return;
    }
    ctx->pc = 0x1DE288u;
label_1de288:
    // 0x1de288: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DE288u;
    {
        const bool branch_taken_0x1de288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE288u;
        // 0x1de28c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de288) {
            ctx->pc = 0x1DE2ECu;
            goto label_1de2ec;
        }
    }
    ctx->pc = 0x1DE290u;
    // 0x1de290: 0xc0776c0  jal         func_1DDB00
    ctx->pc = 0x1DE290u;
    SET_GPR_U32(ctx, 31, 0x1DE298u);
    ctx->pc = 0x1DDB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DDB00u, 0x1DE290u, 0x1DE298u)) {
        return;
    }
    ctx->pc = 0x1DE298u;
label_1de298:
    // 0x1de298: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DE298u;
    {
        const bool branch_taken_0x1de298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE298u;
        // 0x1de29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de298) {
            ctx->pc = 0x1DE2ECu;
            goto label_1de2ec;
        }
    }
    ctx->pc = 0x1DE2A0u;
    // 0x1de2a0: 0xc078126  jal         func_1E0498
    ctx->pc = 0x1DE2A0u;
    SET_GPR_U32(ctx, 31, 0x1DE2A8u);
    ctx->pc = 0x1E0498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E0498u, 0x1DE2A0u, 0x1DE2A8u)) {
        return;
    }
    ctx->pc = 0x1DE2A8u;
label_1de2a8:
    // 0x1de2a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DE2A8u;
    {
        const bool branch_taken_0x1de2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2A8u;
        // 0x1de2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2a8) {
            ctx->pc = 0x1DE2ECu;
            goto label_1de2ec;
        }
    }
    ctx->pc = 0x1DE2B0u;
    // 0x1de2b0: 0xc077e9e  jal         func_1DFA78
    ctx->pc = 0x1DE2B0u;
    SET_GPR_U32(ctx, 31, 0x1DE2B8u);
    ctx->pc = 0x1DFA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DFA78u, 0x1DE2B0u, 0x1DE2B8u)) {
        return;
    }
    ctx->pc = 0x1DE2B8u;
label_1de2b8:
    // 0x1de2b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DE2B8u;
    {
        const bool branch_taken_0x1de2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2B8u;
        // 0x1de2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2b8) {
            ctx->pc = 0x1DE2ECu;
            goto label_1de2ec;
        }
    }
    ctx->pc = 0x1DE2C0u;
    // 0x1de2c0: 0xc0773f8  jal         func_1DCFE0
    ctx->pc = 0x1DE2C0u;
    SET_GPR_U32(ctx, 31, 0x1DE2C8u);
    ctx->pc = 0x1DCFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCFE0u, 0x1DE2C0u, 0x1DE2C8u)) {
        return;
    }
    ctx->pc = 0x1DE2C8u;
label_1de2c8:
    // 0x1de2c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE2C8u;
    {
        const bool branch_taken_0x1de2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2C8u;
        // 0x1de2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2c8) {
            ctx->pc = 0x1DE2ECu;
            goto label_1de2ec;
        }
    }
    ctx->pc = 0x1DE2D0u;
    // 0x1de2d0: 0xc077da4  jal         func_1DF690
    ctx->pc = 0x1DE2D0u;
    SET_GPR_U32(ctx, 31, 0x1DE2D8u);
    ctx->pc = 0x1DF690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DF690u, 0x1DE2D0u, 0x1DE2D8u)) {
        return;
    }
    ctx->pc = 0x1DE2D8u;
label_1de2d8:
    // 0x1de2d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE2D8u;
    {
        const bool branch_taken_0x1de2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de2d8) {
            ctx->pc = 0x1DE2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE2D8u;
            // 0x1de2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE2ECu;
            goto label_1de2ec;
        }
    }
    ctx->pc = 0x1DE2E0u;
    // 0x1de2e0: 0xc0775e8  jal         func_1DD7A0
    ctx->pc = 0x1DE2E0u;
    SET_GPR_U32(ctx, 31, 0x1DE2E8u);
    ctx->pc = 0x1DD7A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DD7A0u, 0x1DE2E0u, 0x1DE2E8u)) {
        return;
    }
    ctx->pc = 0x1DE2E8u;
label_1de2e8:
    // 0x1de2e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1de2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1de2ec:
    // 0x1de2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE2F0u;
        // 0x1de2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE2F8u;
}
