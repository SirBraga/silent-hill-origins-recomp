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

// Function: sub_0031F5B8
// Address: 0x31f5b8 - 0x31f618
void sub_0031F5B8_0x31f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F5B8_0x31f5b8");
#endif

    switch (ctx->pc) {
        case 0x31f5e0u: goto label_31f5e0;
        default: break;
    }

    ctx->pc = 0x31f5b8u;

    // 0x31f5b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31f5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31f5bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31f5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31f5c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31f5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31f5c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31f5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x31f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5cc: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x31f5ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x31f5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f5d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31f5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5d8: 0xc0c86b4  jal         func_321AD0
    ctx->pc = 0x31F5D8u;
    SET_GPR_U32(ctx, 31, 0x31F5E0u);
    ctx->pc = 0x31F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5D8u;
    // 0x31f5dc: 0xae2092b8  sw          $zero, -0x6D48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939320), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321AD0u, 0x31F5D8u, 0x31F5E0u)) {
        return;
    }
    ctx->pc = 0x31F5E0u;
label_31f5e0:
    // 0x31f5e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f5e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f5e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31f5e8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F5E8u;
    {
        const bool branch_taken_0x31f5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31f5e8) {
            ctx->pc = 0x31F5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F5E8u;
            // 0x31f5ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F600u;
            goto label_31f600;
        }
    }
    ctx->pc = 0x31F5F0u;
    // 0x31f5f0: 0x8e2292b8  lw          $v0, -0x6D48($s1)
    ctx->pc = 0x31f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939320)));
    // 0x31f5f4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31F5F4u;
    {
        const bool branch_taken_0x31f5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f5f4) {
            ctx->pc = 0x31F5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F5F4u;
            // 0x31f5f8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F5FCu;
            goto label_31f5fc;
        }
    }
    ctx->pc = 0x31F5FCu;
label_31f5fc:
    // 0x31f5fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31f5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31f600:
    // 0x31f600: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x31f600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31f604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f60c: 0x3e00008  jr          $ra
    ctx->pc = 0x31F60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F60Cu;
        // 0x31f610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F614u;
    // 0x31f614: 0x0  nop
    ctx->pc = 0x31f614u;
    // NOP
    ctx->pc = 0x31f618u;
}
