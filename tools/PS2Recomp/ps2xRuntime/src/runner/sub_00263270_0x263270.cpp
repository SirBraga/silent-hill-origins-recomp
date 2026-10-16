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

// Function: sub_00263270
// Address: 0x263270 - 0x2632b0
void sub_00263270_0x263270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263270_0x263270");
#endif

    switch (ctx->pc) {
        case 0x263298u: goto label_263298;
        default: break;
    }

    ctx->pc = 0x263270u;

    // 0x263270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263274: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x263274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x263278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26327c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263280: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x263280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x263284: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x263284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263288: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263288u;
    {
        const bool branch_taken_0x263288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263288u;
        // 0x26328c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263288) {
            ctx->pc = 0x26329Cu;
            goto label_26329c;
        }
    }
    ctx->pc = 0x263290u;
    // 0x263290: 0xc099376  jal         func_264DD8
    ctx->pc = 0x263290u;
    SET_GPR_U32(ctx, 31, 0x263298u);
    ctx->pc = 0x264DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264DD8u, 0x263290u, 0x263298u)) {
        return;
    }
    ctx->pc = 0x263298u;
label_263298:
    // 0x263298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x263298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26329c:
    // 0x26329c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26329cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2632a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2632a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2632a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2632A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2632A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2632A4u;
        // 0x2632a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2632A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2632ACu;
    // 0x2632ac: 0x0  nop
    ctx->pc = 0x2632acu;
    // NOP
    ctx->pc = 0x2632b0u;
}
