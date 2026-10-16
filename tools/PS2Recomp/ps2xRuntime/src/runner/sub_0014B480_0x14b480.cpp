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

// Function: sub_0014B480
// Address: 0x14b480 - 0x14b4f8
void sub_0014B480_0x14b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B480_0x14b480");
#endif

    switch (ctx->pc) {
        case 0x14b4a8u: goto label_14b4a8;
        case 0x14b4ccu: goto label_14b4cc;
        case 0x14b4e4u: goto label_14b4e4;
        default: break;
    }

    ctx->pc = 0x14b480u;

    // 0x14b480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b484: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14b488: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b48c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14B48Cu;
    {
        const bool branch_taken_0x14b48c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B48Cu;
        // 0x14b490: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b48c) {
            ctx->pc = 0x14B4E4u;
            goto label_14b4e4;
        }
    }
    ctx->pc = 0x14B494u;
    // 0x14b494: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x14B494u;
    {
        const bool branch_taken_0x14b494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B494u;
        // 0x14b498: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b494) {
            ctx->pc = 0x14B4D4u;
            goto label_14b4d4;
        }
    }
    ctx->pc = 0x14B49Cu;
    // 0x14b49c: 0x26101d80  addiu       $s0, $s0, 0x1D80
    ctx->pc = 0x14b49cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7552));
    // 0x14b4a0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x14B4A0u;
    SET_GPR_U32(ctx, 31, 0x14B4A8u);
    ctx->pc = 0x14B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4A0u;
    // 0x14b4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x14B4A0u, 0x14B4A8u)) {
        return;
    }
    ctx->pc = 0x14B4A8u;
label_14b4a8:
    // 0x14b4a8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14b4ac: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14b4b0: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b4b4: 0xac62ef50  sw          $v0, -0x10B0($v1)
    ctx->pc = 0x14b4b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEF50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEF50u, _value); } while (0);
    // 0x14b4b8: 0x2484ef58  addiu       $a0, $a0, -0x10A8
    ctx->pc = 0x14b4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963032));
    // 0x14b4bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b4c0: 0x24c6b4f8  addiu       $a2, $a2, -0x4B08
    ctx->pc = 0x14b4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948088));
    // 0x14b4c4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x14B4C4u;
    SET_GPR_U32(ctx, 31, 0x14B4CCu);
    ctx->pc = 0x14B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4C4u;
    // 0x14b4c8: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x14B4C4u, 0x14B4CCu)) {
        return;
    }
    ctx->pc = 0x14B4CCu;
label_14b4cc:
    // 0x14b4cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14B4CCu;
    {
        const bool branch_taken_0x14b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4CCu;
        // 0x14b4d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4cc) {
            ctx->pc = 0x14B4E8u;
            goto label_14b4e8;
        }
    }
    ctx->pc = 0x14B4D4u;
label_14b4d4:
    // 0x14b4d4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14b4d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b4dc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x14B4DCu;
    SET_GPR_U32(ctx, 31, 0x14B4E4u);
    ctx->pc = 0x14B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4DCu;
    // 0x14b4e0: 0x2484ef58  addiu       $a0, $a0, -0x10A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x14B4DCu, 0x14B4E4u)) {
        return;
    }
    ctx->pc = 0x14B4E4u;
label_14b4e4:
    // 0x14b4e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14b4e8:
    // 0x14b4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4ECu;
        // 0x14b4f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B4F4u;
    // 0x14b4f4: 0x0  nop
    ctx->pc = 0x14b4f4u;
    // NOP
    ctx->pc = 0x14b4f8u;
}
