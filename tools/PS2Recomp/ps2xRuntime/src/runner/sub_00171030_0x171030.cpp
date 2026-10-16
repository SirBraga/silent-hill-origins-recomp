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

// Function: sub_00171030
// Address: 0x171030 - 0x1710a8
void sub_00171030_0x171030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171030_0x171030");
#endif

    switch (ctx->pc) {
        case 0x171058u: goto label_171058;
        case 0x17107cu: goto label_17107c;
        case 0x171094u: goto label_171094;
        default: break;
    }

    ctx->pc = 0x171030u;

    // 0x171030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171034: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x171034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x171038: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17103c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17103Cu;
    {
        const bool branch_taken_0x17103c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x171040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17103Cu;
        // 0x171040: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17103c) {
            ctx->pc = 0x171094u;
            goto label_171094;
        }
    }
    ctx->pc = 0x171044u;
    // 0x171044: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x171044u;
    {
        const bool branch_taken_0x171044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x171048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171044u;
        // 0x171048: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171044) {
            ctx->pc = 0x171084u;
            goto label_171084;
        }
    }
    ctx->pc = 0x17104Cu;
    // 0x17104c: 0x261054d8  addiu       $s0, $s0, 0x54D8
    ctx->pc = 0x17104cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21720));
    // 0x171050: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x171050u;
    SET_GPR_U32(ctx, 31, 0x171058u);
    ctx->pc = 0x171054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171050u;
    // 0x171054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x171050u, 0x171058u)) {
        return;
    }
    ctx->pc = 0x171058u;
label_171058:
    // 0x171058: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x171058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x17105c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17105cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x171060: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x171060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x171064: 0xac62f760  sw          $v0, -0x8A0($v1)
    ctx->pc = 0x171064u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF760u, _value); } while (0);
    // 0x171068: 0x2484f768  addiu       $a0, $a0, -0x898
    ctx->pc = 0x171068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965096));
    // 0x17106c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17106cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171070: 0x24c610a8  addiu       $a2, $a2, 0x10A8
    ctx->pc = 0x171070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4264));
    // 0x171074: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x171074u;
    SET_GPR_U32(ctx, 31, 0x17107Cu);
    ctx->pc = 0x171078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171074u;
    // 0x171078: 0x24070170  addiu       $a3, $zero, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x171074u, 0x17107Cu)) {
        return;
    }
    ctx->pc = 0x17107Cu;
label_17107c:
    // 0x17107c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17107Cu;
    {
        const bool branch_taken_0x17107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17107Cu;
        // 0x171080: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17107c) {
            ctx->pc = 0x171098u;
            goto label_171098;
        }
    }
    ctx->pc = 0x171084u;
label_171084:
    // 0x171084: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x171084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x171088: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x171088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17108c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x17108Cu;
    SET_GPR_U32(ctx, 31, 0x171094u);
    ctx->pc = 0x171090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17108Cu;
    // 0x171090: 0x2484f768  addiu       $a0, $a0, -0x898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x17108Cu, 0x171094u)) {
        return;
    }
    ctx->pc = 0x171094u;
label_171094:
    // 0x171094: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_171098:
    // 0x171098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17109c: 0x3e00008  jr          $ra
    ctx->pc = 0x17109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1710A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17109Cu;
        // 0x1710a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1710A4u;
    // 0x1710a4: 0x0  nop
    ctx->pc = 0x1710a4u;
    // NOP
    ctx->pc = 0x1710a8u;
}
