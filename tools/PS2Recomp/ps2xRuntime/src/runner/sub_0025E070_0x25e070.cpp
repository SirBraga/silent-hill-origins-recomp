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

// Function: sub_0025E070
// Address: 0x25e070 - 0x25e0b8
void sub_0025E070_0x25e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E070_0x25e070");
#endif

    switch (ctx->pc) {
        case 0x25e090u: goto label_25e090;
        case 0x25e0a4u: goto label_25e0a4;
        default: break;
    }

    ctx->pc = 0x25e070u;

    // 0x25e070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e074: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25e074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25e078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e07c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25e07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e088: 0xc097188  jal         func_25C620
    ctx->pc = 0x25E088u;
    SET_GPR_U32(ctx, 31, 0x25E090u);
    ctx->pc = 0x25E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E088u;
    // 0x25e08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C620u, 0x25E088u, 0x25E090u)) {
        return;
    }
    ctx->pc = 0x25E090u;
label_25e090:
    // 0x25e090: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x25e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x25e094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e098: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25e098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e09c: 0xc09632a  jal         func_258CA8
    ctx->pc = 0x25E09Cu;
    SET_GPR_U32(ctx, 31, 0x25E0A4u);
    ctx->pc = 0x25E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E09Cu;
    // 0x25e0a0: 0x24a70010  addiu       $a3, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258CA8u, 0x25E09Cu, 0x25E0A4u)) {
        return;
    }
    ctx->pc = 0x25E0A4u;
label_25e0a4:
    // 0x25e0a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25e0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e0a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25E0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E0B0u;
        // 0x25e0b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E0B8u;
}
