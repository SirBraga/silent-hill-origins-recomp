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

// Function: sub_0013DEF8
// Address: 0x13def8 - 0x13df78
void sub_0013DEF8_0x13def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DEF8_0x13def8");
#endif

    switch (ctx->pc) {
        case 0x13df20u: goto label_13df20;
        case 0x13df44u: goto label_13df44;
        case 0x13df5cu: goto label_13df5c;
        default: break;
    }

    ctx->pc = 0x13def8u;

    // 0x13def8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13def8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13defc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13defcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13df00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13df00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13df04: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13DF04u;
    {
        const bool branch_taken_0x13df04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF04u;
        // 0x13df08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df04) {
            ctx->pc = 0x13DF5Cu;
            goto label_13df5c;
        }
    }
    ctx->pc = 0x13DF0Cu;
    // 0x13df0c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13DF0Cu;
    {
        const bool branch_taken_0x13df0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF0Cu;
        // 0x13df10: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df0c) {
            ctx->pc = 0x13DF4Cu;
            goto label_13df4c;
        }
    }
    ctx->pc = 0x13DF14u;
    // 0x13df14: 0x2610fe78  addiu       $s0, $s0, -0x188
    ctx->pc = 0x13df14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966904));
    // 0x13df18: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13DF18u;
    SET_GPR_U32(ctx, 31, 0x13DF20u);
    ctx->pc = 0x13DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF18u;
    // 0x13df1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13DF18u, 0x13DF20u)) {
        return;
    }
    ctx->pc = 0x13DF20u;
label_13df20:
    // 0x13df20: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13df20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13df24: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13df24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13df28: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13df28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13df2c: 0xac6247e0  sw          $v0, 0x47E0($v1)
    ctx->pc = 0x13df2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B47E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B47E0u, _value); } while (0);
    // 0x13df30: 0x248447e8  addiu       $a0, $a0, 0x47E8
    ctx->pc = 0x13df30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18408));
    // 0x13df34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13df34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df38: 0x24c6df78  addiu       $a2, $a2, -0x2088
    ctx->pc = 0x13df38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958968));
    // 0x13df3c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13DF3Cu;
    SET_GPR_U32(ctx, 31, 0x13DF44u);
    ctx->pc = 0x13DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF3Cu;
    // 0x13df40: 0x2407011c  addiu       $a3, $zero, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13DF3Cu, 0x13DF44u)) {
        return;
    }
    ctx->pc = 0x13DF44u;
label_13df44:
    // 0x13df44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13DF44u;
    {
        const bool branch_taken_0x13df44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF44u;
        // 0x13df48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df44) {
            ctx->pc = 0x13DF60u;
            goto label_13df60;
        }
    }
    ctx->pc = 0x13DF4Cu;
label_13df4c:
    // 0x13df4c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13df50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13df54: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13DF54u;
    SET_GPR_U32(ctx, 31, 0x13DF5Cu);
    ctx->pc = 0x13DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF54u;
    // 0x13df58: 0x248447e8  addiu       $a0, $a0, 0x47E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13DF54u, 0x13DF5Cu)) {
        return;
    }
    ctx->pc = 0x13DF5Cu;
label_13df5c:
    // 0x13df5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13df5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13df60:
    // 0x13df60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13df60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13df64: 0x3e00008  jr          $ra
    ctx->pc = 0x13DF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF64u;
        // 0x13df68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DF6Cu;
    // 0x13df6c: 0x0  nop
    ctx->pc = 0x13df6cu;
    // NOP
    // 0x13df70: 0x0  nop
    ctx->pc = 0x13df70u;
    // NOP
    // 0x13df74: 0x0  nop
    ctx->pc = 0x13df74u;
    // NOP
    ctx->pc = 0x13df78u;
}
