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

// Function: sub_00147648
// Address: 0x147648 - 0x1476c0
void sub_00147648_0x147648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147648_0x147648");
#endif

    switch (ctx->pc) {
        case 0x147670u: goto label_147670;
        case 0x147694u: goto label_147694;
        case 0x1476acu: goto label_1476ac;
        default: break;
    }

    ctx->pc = 0x147648u;

    // 0x147648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x147648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14764c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x147650: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x147650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x147654: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x147654u;
    {
        const bool branch_taken_0x147654 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x147658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147654u;
        // 0x147658: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147654) {
            ctx->pc = 0x1476ACu;
            goto label_1476ac;
        }
    }
    ctx->pc = 0x14765Cu;
    // 0x14765c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x14765Cu;
    {
        const bool branch_taken_0x14765c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x147660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14765Cu;
        // 0x147660: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14765c) {
            ctx->pc = 0x14769Cu;
            goto label_14769c;
        }
    }
    ctx->pc = 0x147664u;
    // 0x147664: 0x26101130  addiu       $s0, $s0, 0x1130
    ctx->pc = 0x147664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4400));
    // 0x147668: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x147668u;
    SET_GPR_U32(ctx, 31, 0x147670u);
    ctx->pc = 0x14766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147668u;
    // 0x14766c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x147668u, 0x147670u)) {
        return;
    }
    ctx->pc = 0x147670u;
label_147670:
    // 0x147670: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x147670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x147674: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x147674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x147678: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x14767c: 0xac62ee50  sw          $v0, -0x11B0($v1)
    ctx->pc = 0x14767cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEE50u, _value); } while (0);
    // 0x147680: 0x2484ee58  addiu       $a0, $a0, -0x11A8
    ctx->pc = 0x147680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962776));
    // 0x147684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147688: 0x24c676c0  addiu       $a2, $a2, 0x76C0
    ctx->pc = 0x147688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30400));
    // 0x14768c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x14768Cu;
    SET_GPR_U32(ctx, 31, 0x147694u);
    ctx->pc = 0x147690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14768Cu;
    // 0x147690: 0x24070060  addiu       $a3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x14768Cu, 0x147694u)) {
        return;
    }
    ctx->pc = 0x147694u;
label_147694:
    // 0x147694: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x147694u;
    {
        const bool branch_taken_0x147694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147694u;
        // 0x147698: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147694) {
            ctx->pc = 0x1476B0u;
            goto label_1476b0;
        }
    }
    ctx->pc = 0x14769Cu;
label_14769c:
    // 0x14769c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14769cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1476a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1476a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1476a4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1476A4u;
    SET_GPR_U32(ctx, 31, 0x1476ACu);
    ctx->pc = 0x1476A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1476A4u;
    // 0x1476a8: 0x2484ee58  addiu       $a0, $a0, -0x11A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1476A4u, 0x1476ACu)) {
        return;
    }
    ctx->pc = 0x1476ACu;
label_1476ac:
    // 0x1476ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1476acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1476b0:
    // 0x1476b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1476b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1476b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1476B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1476B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1476B4u;
        // 0x1476b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1476B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1476BCu;
    // 0x1476bc: 0x0  nop
    ctx->pc = 0x1476bcu;
    // NOP
    ctx->pc = 0x1476c0u;
}
