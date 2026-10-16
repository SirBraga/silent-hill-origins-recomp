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

// Function: sub_0016F790
// Address: 0x16f790 - 0x16f808
void sub_0016F790_0x16f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F790_0x16f790");
#endif

    switch (ctx->pc) {
        case 0x16f7b8u: goto label_16f7b8;
        case 0x16f7dcu: goto label_16f7dc;
        case 0x16f7f4u: goto label_16f7f4;
        default: break;
    }

    ctx->pc = 0x16f790u;

    // 0x16f790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f794: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16f794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16f798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16f79c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16F79Cu;
    {
        const bool branch_taken_0x16f79c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F79Cu;
        // 0x16f7a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f79c) {
            ctx->pc = 0x16F7F4u;
            goto label_16f7f4;
        }
    }
    ctx->pc = 0x16F7A4u;
    // 0x16f7a4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16F7A4u;
    {
        const bool branch_taken_0x16f7a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7A4u;
        // 0x16f7a8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7a4) {
            ctx->pc = 0x16F7E4u;
            goto label_16f7e4;
        }
    }
    ctx->pc = 0x16F7ACu;
    // 0x16f7ac: 0x26105180  addiu       $s0, $s0, 0x5180
    ctx->pc = 0x16f7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20864));
    // 0x16f7b0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16F7B0u;
    SET_GPR_U32(ctx, 31, 0x16F7B8u);
    ctx->pc = 0x16F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7B0u;
    // 0x16f7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16F7B0u, 0x16F7B8u)) {
        return;
    }
    ctx->pc = 0x16F7B8u;
label_16f7b8:
    // 0x16f7b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16f7bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16f7c0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16f7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16f7c4: 0xac62f718  sw          $v0, -0x8E8($v1)
    ctx->pc = 0x16f7c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF718u, _value); } while (0);
    // 0x16f7c8: 0x2484f720  addiu       $a0, $a0, -0x8E0
    ctx->pc = 0x16f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965024));
    // 0x16f7cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f7d0: 0x24c6f808  addiu       $a2, $a2, -0x7F8
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965256));
    // 0x16f7d4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16F7D4u;
    SET_GPR_U32(ctx, 31, 0x16F7DCu);
    ctx->pc = 0x16F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7D4u;
    // 0x16f7d8: 0x24070054  addiu       $a3, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16F7D4u, 0x16F7DCu)) {
        return;
    }
    ctx->pc = 0x16F7DCu;
label_16f7dc:
    // 0x16f7dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16F7DCu;
    {
        const bool branch_taken_0x16f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7DCu;
        // 0x16f7e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7dc) {
            ctx->pc = 0x16F7F8u;
            goto label_16f7f8;
        }
    }
    ctx->pc = 0x16F7E4u;
label_16f7e4:
    // 0x16f7e4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16f7e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f7ec: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16F7ECu;
    SET_GPR_U32(ctx, 31, 0x16F7F4u);
    ctx->pc = 0x16F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F7ECu;
    // 0x16f7f0: 0x2484f720  addiu       $a0, $a0, -0x8E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16F7ECu, 0x16F7F4u)) {
        return;
    }
    ctx->pc = 0x16F7F4u;
label_16f7f4:
    // 0x16f7f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16f7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16f7f8:
    // 0x16f7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x16F7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F7FCu;
        // 0x16f800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F804u;
    // 0x16f804: 0x0  nop
    ctx->pc = 0x16f804u;
    // NOP
    ctx->pc = 0x16f808u;
}
