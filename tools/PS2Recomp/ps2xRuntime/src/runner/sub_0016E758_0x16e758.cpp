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

// Function: sub_0016E758
// Address: 0x16e758 - 0x16e7d0
void sub_0016E758_0x16e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E758_0x16e758");
#endif

    switch (ctx->pc) {
        case 0x16e794u: goto label_16e794;
        case 0x16e79cu: goto label_16e79c;
        case 0x16e7b8u: goto label_16e7b8;
        default: break;
    }

    ctx->pc = 0x16e758u;

    // 0x16e758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16e75c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16e75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16e760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16e760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16e764: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16E764u;
    {
        const bool branch_taken_0x16e764 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E764u;
        // 0x16e768: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e764) {
            ctx->pc = 0x16E7B8u;
            goto label_16e7b8;
        }
    }
    ctx->pc = 0x16E76Cu;
    // 0x16e76c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x16E76Cu;
    {
        const bool branch_taken_0x16e76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E76Cu;
        // 0x16e770: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e76c) {
            ctx->pc = 0x16E7A8u;
            goto label_16e7a8;
        }
    }
    ctx->pc = 0x16E774u;
    // 0x16e774: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16e774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16e778: 0x26104f20  addiu       $s0, $s0, 0x4F20
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20256));
    // 0x16e77c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16e77cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16e780: 0x24c6e7d0  addiu       $a2, $a2, -0x1830
    ctx->pc = 0x16e780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961104));
    // 0x16e784: 0x2484f6e0  addiu       $a0, $a0, -0x920
    ctx->pc = 0x16e784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964960));
    // 0x16e788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e78c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16E78Cu;
    SET_GPR_U32(ctx, 31, 0x16E794u);
    ctx->pc = 0x16E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E78Cu;
    // 0x16e790: 0x240700d0  addiu       $a3, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16E78Cu, 0x16E794u)) {
        return;
    }
    ctx->pc = 0x16E794u;
label_16e794:
    // 0x16e794: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16E794u;
    SET_GPR_U32(ctx, 31, 0x16E79Cu);
    ctx->pc = 0x16E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E794u;
    // 0x16e798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16E794u, 0x16E79Cu)) {
        return;
    }
    ctx->pc = 0x16E79Cu;
label_16e79c:
    // 0x16e79c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16e7a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16E7A0u;
    {
        const bool branch_taken_0x16e7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7A0u;
        // 0x16e7a4: 0xac62f6e4  sw          $v0, -0x91C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7a0) {
            ctx->pc = 0x16E7B8u;
            goto label_16e7b8;
        }
    }
    ctx->pc = 0x16E7A8u;
label_16e7a8:
    // 0x16e7a8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16e7ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e7b0: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16E7B0u;
    SET_GPR_U32(ctx, 31, 0x16E7B8u);
    ctx->pc = 0x16E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E7B0u;
    // 0x16e7b4: 0x2484f6e0  addiu       $a0, $a0, -0x920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16E7B0u, 0x16E7B8u)) {
        return;
    }
    ctx->pc = 0x16E7B8u;
label_16e7b8:
    // 0x16e7b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16e7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x16E7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E7C0u;
        // 0x16e7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E7C8u;
    // 0x16e7c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16e7cc: 0x0  nop
    ctx->pc = 0x16e7ccu;
    // NOP
    ctx->pc = 0x16e7d0u;
}
