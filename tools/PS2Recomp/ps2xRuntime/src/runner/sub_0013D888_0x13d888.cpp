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

// Function: sub_0013D888
// Address: 0x13d888 - 0x13d908
void sub_0013D888_0x13d888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D888_0x13d888");
#endif

    switch (ctx->pc) {
        case 0x13d8e4u: goto label_13d8e4;
        case 0x13d8f4u: goto label_13d8f4;
        default: break;
    }

    ctx->pc = 0x13d888u;

    // 0x13d888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d88c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13d890: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13d894: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13d894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13d898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d89c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d8a4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13d8a8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13d8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13d8ac: 0x2442fb90  addiu       $v0, $v0, -0x470
    ctx->pc = 0x13d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966160));
    // 0x13d8b0: 0x2463fa70  addiu       $v1, $v1, -0x590
    ctx->pc = 0x13d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965872));
    // 0x13d8b4: 0x2484fa30  addiu       $a0, $a0, -0x5D0
    ctx->pc = 0x13d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
    // 0x13d8b8: 0x24c6fbb0  addiu       $a2, $a2, -0x450
    ctx->pc = 0x13d8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966192));
    // 0x13d8bc: 0x8e0700d8  lw          $a3, 0xD8($s0)
    ctx->pc = 0x13d8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x13d8c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13d8c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8c4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x13d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x13d8c8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x13d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x13d8cc: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x13d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
    // 0x13d8d0: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D8D0u;
    {
        const bool branch_taken_0x13d8d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D8D0u;
        // 0x13d8d4: 0xae060034  sw          $a2, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8d0) {
            ctx->pc = 0x13D8E8u;
            goto label_13d8e8;
        }
    }
    ctx->pc = 0x13D8D8u;
    // 0x13d8d8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x13d8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8dc: 0xc04207c  jal         func_1081F0
    ctx->pc = 0x13D8DCu;
    SET_GPR_U32(ctx, 31, 0x13D8E4u);
    ctx->pc = 0x13D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D8DCu;
    // 0x13d8e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1081F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1081F0u, 0x13D8DCu, 0x13D8E4u)) {
        return;
    }
    ctx->pc = 0x13D8E4u;
label_13d8e4:
    // 0x13d8e4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x13d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_13d8e8:
    // 0x13d8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d8ec: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x13D8ECu;
    SET_GPR_U32(ctx, 31, 0x13D8F4u);
    ctx->pc = 0x13D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D8ECu;
    // 0x13d8f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x13D8ECu, 0x13D8F4u)) {
        return;
    }
    ctx->pc = 0x13D8F4u;
label_13d8f4:
    // 0x13d8f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13d8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d900: 0x3e00008  jr          $ra
    ctx->pc = 0x13D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D900u;
        // 0x13d904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D908u;
}
