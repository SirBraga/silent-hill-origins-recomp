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

// Function: sub_0025D260
// Address: 0x25d260 - 0x25d2b0
void sub_0025D260_0x25d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D260_0x25d260");
#endif

    switch (ctx->pc) {
        case 0x25d29cu: goto label_25d29c;
        default: break;
    }

    ctx->pc = 0x25d260u;

    // 0x25d260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d264: 0x8f8285f8  lw          $v0, -0x7A08($gp)
    ctx->pc = 0x25d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x25d268: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25d26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d274: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x25d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25d278: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25d278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25d27c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x25d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x25d280: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25d280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x25d284: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x25d284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x25d288: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x25d288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x25d28c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D28Cu;
    {
        const bool branch_taken_0x25d28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D28Cu;
        // 0x25d290: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d28c) {
            ctx->pc = 0x25D2A0u;
            goto label_25d2a0;
        }
    }
    ctx->pc = 0x25D294u;
    // 0x25d294: 0xc097910  jal         func_25E440
    ctx->pc = 0x25D294u;
    SET_GPR_U32(ctx, 31, 0x25D29Cu);
    ctx->pc = 0x25D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D294u;
    // 0x25d298: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x25D294u, 0x25D29Cu)) {
        return;
    }
    ctx->pc = 0x25D29Cu;
label_25d29c:
    // 0x25d29c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d2a0:
    // 0x25d2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d2a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x25D2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2A8u;
        // 0x25d2ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D2B0u;
}
