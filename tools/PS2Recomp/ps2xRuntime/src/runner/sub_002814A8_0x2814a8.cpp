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

// Function: sub_002814A8
// Address: 0x2814a8 - 0x281508
void sub_002814A8_0x2814a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002814A8_0x2814a8");
#endif

    switch (ctx->pc) {
        case 0x2814ccu: goto label_2814cc;
        case 0x2814ecu: goto label_2814ec;
        default: break;
    }

    ctx->pc = 0x2814a8u;

    // 0x2814a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2814a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2814ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2814acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2814b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2814b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2814b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2814b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2814b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2814bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2814c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2814c4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2814C4u;
    SET_GPR_U32(ctx, 31, 0x2814CCu);
    ctx->pc = 0x2814C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2814C4u;
    // 0x2814c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2814C4u, 0x2814CCu)) {
        return;
    }
    ctx->pc = 0x2814CCu;
label_2814cc:
    // 0x2814cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2814CCu;
    {
        const bool branch_taken_0x2814cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2814D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814CCu;
        // 0x2814d0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814cc) {
            ctx->pc = 0x2814DCu;
            goto label_2814dc;
        }
    }
    ctx->pc = 0x2814D4u;
    // 0x2814d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2814D4u;
    {
        const bool branch_taken_0x2814d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2814D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814D4u;
        // 0x2814d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814d4) {
            ctx->pc = 0x2814F0u;
            goto label_2814f0;
        }
    }
    ctx->pc = 0x2814DCu;
label_2814dc:
    // 0x2814dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2814DCu;
    {
        const bool branch_taken_0x2814dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2814E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814DCu;
        // 0x2814e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814dc) {
            ctx->pc = 0x2814F0u;
            goto label_2814f0;
        }
    }
    ctx->pc = 0x2814E4u;
    // 0x2814e4: 0xc0a02ae  jal         func_280AB8
    ctx->pc = 0x2814E4u;
    SET_GPR_U32(ctx, 31, 0x2814ECu);
    ctx->pc = 0x2814E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2814E4u;
    // 0x2814e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x280AB8u, 0x2814E4u, 0x2814ECu)) {
        return;
    }
    ctx->pc = 0x2814ECu;
label_2814ec:
    // 0x2814ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2814ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2814f0:
    // 0x2814f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2814f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2814f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2814f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2814f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2814f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2814fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2814FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814FCu;
        // 0x281500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2814FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281504u;
    // 0x281504: 0x0  nop
    ctx->pc = 0x281504u;
    // NOP
    ctx->pc = 0x281508u;
}
