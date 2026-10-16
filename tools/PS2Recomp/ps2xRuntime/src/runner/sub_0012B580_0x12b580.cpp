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

// Function: sub_0012B580
// Address: 0x12b580 - 0x12b610
void sub_0012B580_0x12b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B580_0x12b580");
#endif

    switch (ctx->pc) {
        case 0x12b5a8u: goto label_12b5a8;
        case 0x12b5b8u: goto label_12b5b8;
        case 0x12b5dcu: goto label_12b5dc;
        case 0x12b5f0u: goto label_12b5f0;
        case 0x12b600u: goto label_12b600;
        default: break;
    }

    ctx->pc = 0x12b580u;

    // 0x12b580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b584: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12b584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12b588: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12b58c: 0x14a2001c  bne         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12B58Cu;
    {
        const bool branch_taken_0x12b58c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B58Cu;
        // 0x12b590: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b58c) {
            ctx->pc = 0x12B600u;
            goto label_12b600;
        }
    }
    ctx->pc = 0x12B594u;
    // 0x12b594: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x12B594u;
    {
        const bool branch_taken_0x12b594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b594) {
            ctx->pc = 0x12B598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B594u;
            // 0x12b598: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B5E4u;
            goto label_12b5e4;
        }
    }
    ctx->pc = 0x12B59Cu;
    // 0x12b59c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12b5a0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x12B5A0u;
    SET_GPR_U32(ctx, 31, 0x12B5A8u);
    ctx->pc = 0x12B5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5A0u;
    // 0x12b5a4: 0x24844668  addiu       $a0, $a0, 0x4668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x12B5A0u, 0x12B5A8u)) {
        return;
    }
    ctx->pc = 0x12B5A8u;
label_12b5a8:
    // 0x12b5a8: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x12b5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x12b5ac: 0x2610ced0  addiu       $s0, $s0, -0x3130
    ctx->pc = 0x12b5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954704));
    // 0x12b5b0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x12B5B0u;
    SET_GPR_U32(ctx, 31, 0x12B5B8u);
    ctx->pc = 0x12B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5B0u;
    // 0x12b5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x12B5B0u, 0x12B5B8u)) {
        return;
    }
    ctx->pc = 0x12B5B8u;
label_12b5b8:
    // 0x12b5b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x12b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x12b5bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12b5c0: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x12b5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x12b5c4: 0xac624670  sw          $v0, 0x4670($v1)
    ctx->pc = 0x12b5c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4670u, _value); } while (0);
    // 0x12b5c8: 0x24844678  addiu       $a0, $a0, 0x4678
    ctx->pc = 0x12b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18040));
    // 0x12b5cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b5d0: 0x24c6b630  addiu       $a2, $a2, -0x49D0
    ctx->pc = 0x12b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948400));
    // 0x12b5d4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x12B5D4u;
    SET_GPR_U32(ctx, 31, 0x12B5DCu);
    ctx->pc = 0x12B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5D4u;
    // 0x12b5d8: 0x24072d90  addiu       $a3, $zero, 0x2D90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x12B5D4u, 0x12B5DCu)) {
        return;
    }
    ctx->pc = 0x12B5DCu;
label_12b5dc:
    // 0x12b5dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12B5DCu;
    {
        const bool branch_taken_0x12b5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B5DCu;
        // 0x12b5e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b5dc) {
            ctx->pc = 0x12B604u;
            goto label_12b604;
        }
    }
    ctx->pc = 0x12B5E4u;
label_12b5e4:
    // 0x12b5e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b5e8: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x12B5E8u;
    SET_GPR_U32(ctx, 31, 0x12B5F0u);
    ctx->pc = 0x12B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5E8u;
    // 0x12b5ec: 0x24844678  addiu       $a0, $a0, 0x4678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x12B5E8u, 0x12B5F0u)) {
        return;
    }
    ctx->pc = 0x12B5F0u;
label_12b5f0:
    // 0x12b5f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12b5f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12b5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b5f8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x12B5F8u;
    SET_GPR_U32(ctx, 31, 0x12B600u);
    ctx->pc = 0x12B5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B5F8u;
    // 0x12b5fc: 0x24844668  addiu       $a0, $a0, 0x4668 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x12B5F8u, 0x12B600u)) {
        return;
    }
    ctx->pc = 0x12B600u;
label_12b600:
    // 0x12b600: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12b600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b604:
    // 0x12b604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b608: 0x3e00008  jr          $ra
    ctx->pc = 0x12B608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B608u;
        // 0x12b60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B610u;
}
