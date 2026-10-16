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

// Function: sub_0013E750
// Address: 0x13e750 - 0x13e7d0
void sub_0013E750_0x13e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E750_0x13e750");
#endif

    switch (ctx->pc) {
        case 0x13e778u: goto label_13e778;
        case 0x13e79cu: goto label_13e79c;
        case 0x13e7b4u: goto label_13e7b4;
        default: break;
    }

    ctx->pc = 0x13e750u;

    // 0x13e750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e754: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13e754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13e758: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e75c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13E75Cu;
    {
        const bool branch_taken_0x13e75c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E75Cu;
        // 0x13e760: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e75c) {
            ctx->pc = 0x13E7B4u;
            goto label_13e7b4;
        }
    }
    ctx->pc = 0x13E764u;
    // 0x13e764: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13E764u;
    {
        const bool branch_taken_0x13e764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E764u;
        // 0x13e768: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e764) {
            ctx->pc = 0x13E7A4u;
            goto label_13e7a4;
        }
    }
    ctx->pc = 0x13E76Cu;
    // 0x13e76c: 0x261000b8  addiu       $s0, $s0, 0xB8
    ctx->pc = 0x13e76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x13e770: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13E770u;
    SET_GPR_U32(ctx, 31, 0x13E778u);
    ctx->pc = 0x13E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E770u;
    // 0x13e774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13E770u, 0x13E778u)) {
        return;
    }
    ctx->pc = 0x13E778u;
label_13e778:
    // 0x13e778: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13e778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13e77c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13e780: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13e780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13e784: 0xac6247f0  sw          $v0, 0x47F0($v1)
    ctx->pc = 0x13e784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B47F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B47F0u, _value); } while (0);
    // 0x13e788: 0x248447f8  addiu       $a0, $a0, 0x47F8
    ctx->pc = 0x13e788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18424));
    // 0x13e78c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13e78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e790: 0x24c6e7d0  addiu       $a2, $a2, -0x1830
    ctx->pc = 0x13e790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961104));
    // 0x13e794: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13E794u;
    SET_GPR_U32(ctx, 31, 0x13E79Cu);
    ctx->pc = 0x13E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E794u;
    // 0x13e798: 0x240701e0  addiu       $a3, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13E794u, 0x13E79Cu)) {
        return;
    }
    ctx->pc = 0x13E79Cu;
label_13e79c:
    // 0x13e79c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E79Cu;
    {
        const bool branch_taken_0x13e79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E79Cu;
        // 0x13e7a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e79c) {
            ctx->pc = 0x13E7B8u;
            goto label_13e7b8;
        }
    }
    ctx->pc = 0x13E7A4u;
label_13e7a4:
    // 0x13e7a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13e7a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13e7ac: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13E7ACu;
    SET_GPR_U32(ctx, 31, 0x13E7B4u);
    ctx->pc = 0x13E7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E7ACu;
    // 0x13e7b0: 0x248447f8  addiu       $a0, $a0, 0x47F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13E7ACu, 0x13E7B4u)) {
        return;
    }
    ctx->pc = 0x13E7B4u;
label_13e7b4:
    // 0x13e7b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e7b8:
    // 0x13e7b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x13E7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7BCu;
        // 0x13e7c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E7C4u;
    // 0x13e7c4: 0x0  nop
    ctx->pc = 0x13e7c4u;
    // NOP
    // 0x13e7c8: 0x0  nop
    ctx->pc = 0x13e7c8u;
    // NOP
    // 0x13e7cc: 0x0  nop
    ctx->pc = 0x13e7ccu;
    // NOP
    ctx->pc = 0x13e7d0u;
}
