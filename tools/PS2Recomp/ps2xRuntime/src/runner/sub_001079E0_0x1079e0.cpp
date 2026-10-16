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

// Function: sub_001079E0
// Address: 0x1079e0 - 0x107a18
void sub_001079E0_0x1079e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001079E0_0x1079e0");
#endif

    switch (ctx->pc) {
        case 0x107a04u: goto label_107a04;
        default: break;
    }

    ctx->pc = 0x1079e0u;

    // 0x1079e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1079e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1079e4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1079e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1079e8: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1079E8u;
    {
        const bool branch_taken_0x1079e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1079ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079E8u;
        // 0x1079ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079e8) {
            ctx->pc = 0x107A0Cu;
            goto label_107a0c;
        }
    }
    ctx->pc = 0x1079F0u;
    // 0x1079f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1079F0u;
    {
        const bool branch_taken_0x1079f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1079F0u;
        // 0x1079f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079f0) {
            ctx->pc = 0x107A10u;
            goto label_107a10;
        }
    }
    ctx->pc = 0x1079F8u;
    // 0x1079f8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1079f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1079fc: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1079FCu;
    SET_GPR_U32(ctx, 31, 0x107A04u);
    ctx->pc = 0x107A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1079FCu;
    // 0x107a00: 0x24849c00  addiu       $a0, $a0, -0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1079FCu, 0x107A04u)) {
        return;
    }
    ctx->pc = 0x107A04u;
label_107a04:
    // 0x107a04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x107a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x107a08: 0xac624234  sw          $v0, 0x4234($v1)
    ctx->pc = 0x107a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4234u, _value); } while (0);
label_107a0c:
    // 0x107a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107a10:
    // 0x107a10: 0x3e00008  jr          $ra
    ctx->pc = 0x107A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A10u;
        // 0x107a14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107A18u;
}
