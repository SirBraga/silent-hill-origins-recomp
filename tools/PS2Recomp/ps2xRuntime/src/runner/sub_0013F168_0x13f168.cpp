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

// Function: sub_0013F168
// Address: 0x13f168 - 0x13f1e8
void sub_0013F168_0x13f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F168_0x13f168");
#endif

    switch (ctx->pc) {
        case 0x13f190u: goto label_13f190;
        case 0x13f1b4u: goto label_13f1b4;
        case 0x13f1ccu: goto label_13f1cc;
        default: break;
    }

    ctx->pc = 0x13f168u;

    // 0x13f168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13f168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13f16c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13f16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13f170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13f174: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13F174u;
    {
        const bool branch_taken_0x13f174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F174u;
        // 0x13f178: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f174) {
            ctx->pc = 0x13F1CCu;
            goto label_13f1cc;
        }
    }
    ctx->pc = 0x13F17Cu;
    // 0x13f17c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13F17Cu;
    {
        const bool branch_taken_0x13f17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F17Cu;
        // 0x13f180: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f17c) {
            ctx->pc = 0x13F1BCu;
            goto label_13f1bc;
        }
    }
    ctx->pc = 0x13F184u;
    // 0x13f184: 0x26100328  addiu       $s0, $s0, 0x328
    ctx->pc = 0x13f184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 808));
    // 0x13f188: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13F188u;
    SET_GPR_U32(ctx, 31, 0x13F190u);
    ctx->pc = 0x13F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F188u;
    // 0x13f18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13F188u, 0x13F190u)) {
        return;
    }
    ctx->pc = 0x13F190u;
label_13f190:
    // 0x13f190: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13f194: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13f194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13f198: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13f198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13f19c: 0xac624800  sw          $v0, 0x4800($v1)
    ctx->pc = 0x13f19cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4800u, _value); } while (0);
    // 0x13f1a0: 0x24844808  addiu       $a0, $a0, 0x4808
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18440));
    // 0x13f1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13f1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1a8: 0x24c6f1e8  addiu       $a2, $a2, -0xE18
    ctx->pc = 0x13f1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963688));
    // 0x13f1ac: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13F1ACu;
    SET_GPR_U32(ctx, 31, 0x13F1B4u);
    ctx->pc = 0x13F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1ACu;
    // 0x13f1b0: 0x240703b0  addiu       $a3, $zero, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13F1ACu, 0x13F1B4u)) {
        return;
    }
    ctx->pc = 0x13F1B4u;
label_13f1b4:
    // 0x13f1b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13F1B4u;
    {
        const bool branch_taken_0x13f1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1B4u;
        // 0x13f1b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1b4) {
            ctx->pc = 0x13F1D0u;
            goto label_13f1d0;
        }
    }
    ctx->pc = 0x13F1BCu;
label_13f1bc:
    // 0x13f1bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13f1c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f1c4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13F1C4u;
    SET_GPR_U32(ctx, 31, 0x13F1CCu);
    ctx->pc = 0x13F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F1C4u;
    // 0x13f1c8: 0x24844808  addiu       $a0, $a0, 0x4808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13F1C4u, 0x13F1CCu)) {
        return;
    }
    ctx->pc = 0x13F1CCu;
label_13f1cc:
    // 0x13f1cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13f1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f1d0:
    // 0x13f1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x13F1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D4u;
        // 0x13f1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F1DCu;
    // 0x13f1dc: 0x0  nop
    ctx->pc = 0x13f1dcu;
    // NOP
    // 0x13f1e0: 0x0  nop
    ctx->pc = 0x13f1e0u;
    // NOP
    // 0x13f1e4: 0x0  nop
    ctx->pc = 0x13f1e4u;
    // NOP
    ctx->pc = 0x13f1e8u;
}
