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

// Function: sub_00154148
// Address: 0x154148 - 0x1541d8
void sub_00154148_0x154148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154148_0x154148");
#endif

    switch (ctx->pc) {
        case 0x154170u: goto label_154170;
        case 0x154194u: goto label_154194;
        case 0x1541a0u: goto label_1541a0;
        case 0x1541b8u: goto label_1541b8;
        case 0x1541c8u: goto label_1541c8;
        default: break;
    }

    ctx->pc = 0x154148u;

    // 0x154148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15414c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x154150: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x154154: 0x14a2001c  bne         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x154154u;
    {
        const bool branch_taken_0x154154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x154158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154154u;
        // 0x154158: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154154) {
            ctx->pc = 0x1541C8u;
            goto label_1541c8;
        }
    }
    ctx->pc = 0x15415Cu;
    // 0x15415c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15415Cu;
    {
        const bool branch_taken_0x15415c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x154160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15415Cu;
        // 0x154160: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15415c) {
            ctx->pc = 0x1541A8u;
            goto label_1541a8;
        }
    }
    ctx->pc = 0x154164u;
    // 0x154164: 0x26102838  addiu       $s0, $s0, 0x2838
    ctx->pc = 0x154164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10296));
    // 0x154168: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x154168u;
    SET_GPR_U32(ctx, 31, 0x154170u);
    ctx->pc = 0x15416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154168u;
    // 0x15416c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x154168u, 0x154170u)) {
        return;
    }
    ctx->pc = 0x154170u;
label_154170:
    // 0x154170: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x154170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x154174: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x154178: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x154178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x15417c: 0x2484f018  addiu       $a0, $a0, -0xFE8
    ctx->pc = 0x15417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963224));
    // 0x154180: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x154180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x154184: 0x24c641d8  addiu       $a2, $a2, 0x41D8
    ctx->pc = 0x154184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16856));
    // 0x154188: 0xac62f010  sw          $v0, -0xFF0($v1)
    ctx->pc = 0x154188u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF010u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF010u, _value); } while (0);
    // 0x15418c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x15418Cu;
    SET_GPR_U32(ctx, 31, 0x154194u);
    ctx->pc = 0x154190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15418Cu;
    // 0x154190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x15418Cu, 0x154194u)) {
        return;
    }
    ctx->pc = 0x154194u;
label_154194:
    // 0x154194: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x154194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x154198: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x154198u;
    SET_GPR_U32(ctx, 31, 0x1541A0u);
    ctx->pc = 0x15419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154198u;
    // 0x15419c: 0x2484f020  addiu       $a0, $a0, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x154198u, 0x1541A0u)) {
        return;
    }
    ctx->pc = 0x1541A0u;
label_1541a0:
    // 0x1541a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1541A0u;
    {
        const bool branch_taken_0x1541a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1541A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541A0u;
        // 0x1541a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541a0) {
            ctx->pc = 0x1541CCu;
            goto label_1541cc;
        }
    }
    ctx->pc = 0x1541A8u;
label_1541a8:
    // 0x1541a8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1541a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1541ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1541acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1541b0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1541B0u;
    SET_GPR_U32(ctx, 31, 0x1541B8u);
    ctx->pc = 0x1541B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541B0u;
    // 0x1541b4: 0x2484f020  addiu       $a0, $a0, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1541B0u, 0x1541B8u)) {
        return;
    }
    ctx->pc = 0x1541B8u;
label_1541b8:
    // 0x1541b8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1541b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1541bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1541bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1541c0: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1541C0u;
    SET_GPR_U32(ctx, 31, 0x1541C8u);
    ctx->pc = 0x1541C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1541C0u;
    // 0x1541c4: 0x2484f018  addiu       $a0, $a0, -0xFE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1541C0u, 0x1541C8u)) {
        return;
    }
    ctx->pc = 0x1541C8u;
label_1541c8:
    // 0x1541c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1541c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1541cc:
    // 0x1541cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1541ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1541d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1541D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1541D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541D0u;
        // 0x1541d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1541D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1541D8u;
}
