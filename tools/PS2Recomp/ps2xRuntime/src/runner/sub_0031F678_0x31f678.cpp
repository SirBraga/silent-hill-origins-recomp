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

// Function: sub_0031F678
// Address: 0x31f678 - 0x31f6d8
void sub_0031F678_0x31f678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F678_0x31f678");
#endif

    switch (ctx->pc) {
        case 0x31f6a4u: goto label_31f6a4;
        default: break;
    }

    ctx->pc = 0x31f678u;

    // 0x31f678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31f678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31f67c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31f680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31f680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f684: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31f688: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x31f688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f68c: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x31f68cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x31f690: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31f690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f698: 0xae2092b8  sw          $zero, -0x6D48($s1)
    ctx->pc = 0x31f698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7292B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7292B8u, _value); } while (0);
    // 0x31f69c: 0xc0c865a  jal         func_321968
    ctx->pc = 0x31F69Cu;
    SET_GPR_U32(ctx, 31, 0x31F6A4u);
    ctx->pc = 0x31F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F69Cu;
    // 0x31f6a0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321968u, 0x31F69Cu, 0x31F6A4u)) {
        return;
    }
    ctx->pc = 0x31F6A4u;
label_31f6a4:
    // 0x31f6a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f6a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f6ac: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F6ACu;
    {
        const bool branch_taken_0x31f6ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31f6ac) {
            ctx->pc = 0x31F6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F6ACu;
            // 0x31f6b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F6C4u;
            goto label_31f6c4;
        }
    }
    ctx->pc = 0x31F6B4u;
    // 0x31f6b4: 0x8e2292b8  lw          $v0, -0x6D48($s1)
    ctx->pc = 0x31f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939320)));
    // 0x31f6b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31F6B8u;
    {
        const bool branch_taken_0x31f6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f6b8) {
            ctx->pc = 0x31F6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F6B8u;
            // 0x31f6bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F6C0u;
            goto label_31f6c0;
        }
    }
    ctx->pc = 0x31F6C0u;
label_31f6c0:
    // 0x31f6c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31f6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31f6c4:
    // 0x31f6c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31f6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f6c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f6cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x31F6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F6D0u;
        // 0x31f6d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F6D8u;
}
