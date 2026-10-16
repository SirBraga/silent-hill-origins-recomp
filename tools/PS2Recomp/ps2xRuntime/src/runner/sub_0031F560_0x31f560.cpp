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

// Function: sub_0031F560
// Address: 0x31f560 - 0x31f5b8
void sub_0031F560_0x31f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F560_0x31f560");
#endif

    switch (ctx->pc) {
        case 0x31f584u: goto label_31f584;
        default: break;
    }

    ctx->pc = 0x31f560u;

    // 0x31f560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31f560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31f564: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31f568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31f568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31f56c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x31f56cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x31f570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31f570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f578: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x31f578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f57c: 0xc0c8682  jal         func_321A08
    ctx->pc = 0x31F57Cu;
    SET_GPR_U32(ctx, 31, 0x31F584u);
    ctx->pc = 0x31F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F57Cu;
    // 0x31f580: 0xae0092b8  sw          $zero, -0x6D48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939320), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321A08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321A08u, 0x31F57Cu, 0x31F584u)) {
        return;
    }
    ctx->pc = 0x31F584u;
label_31f584:
    // 0x31f584: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f588: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31f588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f58c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F58Cu;
    {
        const bool branch_taken_0x31f58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31f58c) {
            ctx->pc = 0x31F590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F58Cu;
            // 0x31f590: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F5A4u;
            goto label_31f5a4;
        }
    }
    ctx->pc = 0x31F594u;
    // 0x31f594: 0x8e0292b8  lw          $v0, -0x6D48($s0)
    ctx->pc = 0x31f594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939320)));
    // 0x31f598: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31F598u;
    {
        const bool branch_taken_0x31f598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f598) {
            ctx->pc = 0x31F59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F598u;
            // 0x31f59c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F5A0u;
            goto label_31f5a0;
        }
    }
    ctx->pc = 0x31F5A0u;
label_31f5a0:
    // 0x31f5a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31f5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31f5a4:
    // 0x31f5a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31f5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x31F5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5B0u;
        // 0x31f5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F5B8u;
}
