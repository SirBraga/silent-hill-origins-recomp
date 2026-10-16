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

// Function: sub_00327D50
// Address: 0x327d50 - 0x327da8
void sub_00327D50_0x327d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327D50_0x327d50");
#endif

    switch (ctx->pc) {
        case 0x327d68u: goto label_327d68;
        case 0x327d70u: goto label_327d70;
        case 0x327d80u: goto label_327d80;
        default: break;
    }

    ctx->pc = 0x327d50u;

    // 0x327d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x327d54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x327d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327d5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x327d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x327d60: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x327D60u;
    SET_GPR_U32(ctx, 31, 0x327D68u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x327D60u, 0x327D68u)) {
        return;
    }
    ctx->pc = 0x327D68u;
label_327d68:
    // 0x327d68: 0xc0c9f38  jal         func_327CE0
    ctx->pc = 0x327D68u;
    SET_GPR_U32(ctx, 31, 0x327D70u);
    ctx->pc = 0x327D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D68u;
    // 0x327d6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327CE0u, 0x327D68u, 0x327D70u)) {
        return;
    }
    ctx->pc = 0x327D70u;
label_327d70:
    // 0x327d70: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327D70u;
    {
        const bool branch_taken_0x327d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D70u;
        // 0x327d74: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d70) {
            ctx->pc = 0x327D80u;
            goto label_327d80;
        }
    }
    ctx->pc = 0x327D78u;
    // 0x327d78: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x327D78u;
    SET_GPR_U32(ctx, 31, 0x327D80u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x327D78u, 0x327D80u)) {
        return;
    }
    ctx->pc = 0x327D80u;
label_327d80:
    // 0x327d80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x327d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x327d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327d88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x327d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327d90: 0x3e00008  jr          $ra
    ctx->pc = 0x327D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D90u;
        // 0x327d94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D98u;
    // 0x327d98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x327d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x327d9c: 0x0  nop
    ctx->pc = 0x327d9cu;
    // NOP
    // 0x327da0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x327da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327da4: 0x0  nop
    ctx->pc = 0x327da4u;
    // NOP
    ctx->pc = 0x327da8u;
}
