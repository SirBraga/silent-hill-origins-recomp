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

// Function: sub_00188FD0
// Address: 0x188fd0 - 0x189050
void sub_00188FD0_0x188fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188FD0_0x188fd0");
#endif

    switch (ctx->pc) {
        case 0x188ff8u: goto label_188ff8;
        case 0x18901cu: goto label_18901c;
        case 0x189034u: goto label_189034;
        default: break;
    }

    ctx->pc = 0x188fd0u;

    // 0x188fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188fd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x188fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x188fd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x188fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x188fdc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x188FDCu;
    {
        const bool branch_taken_0x188fdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x188FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FDCu;
        // 0x188fe0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fdc) {
            ctx->pc = 0x189034u;
            goto label_189034;
        }
    }
    ctx->pc = 0x188FE4u;
    // 0x188fe4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x188FE4u;
    {
        const bool branch_taken_0x188fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FE4u;
        // 0x188fe8: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fe4) {
            ctx->pc = 0x189024u;
            goto label_189024;
        }
    }
    ctx->pc = 0x188FECu;
    // 0x188fec: 0x26108c58  addiu       $s0, $s0, -0x73A8
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937688));
    // 0x188ff0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x188FF0u;
    SET_GPR_U32(ctx, 31, 0x188FF8u);
    ctx->pc = 0x188FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FF0u;
    // 0x188ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x188FF0u, 0x188FF8u)) {
        return;
    }
    ctx->pc = 0x188FF8u;
label_188ff8:
    // 0x188ff8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x188ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x188ffc: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x188ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x189000: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x189000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x189004: 0xac62bd20  sw          $v0, -0x42E0($v1)
    ctx->pc = 0x189004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBD20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBD20u, _value); } while (0);
    // 0x189008: 0x2484bd28  addiu       $a0, $a0, -0x42D8
    ctx->pc = 0x189008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950184));
    // 0x18900c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189010: 0x24c69050  addiu       $a2, $a2, -0x6FB0
    ctx->pc = 0x189010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938704));
    // 0x189014: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x189014u;
    SET_GPR_U32(ctx, 31, 0x18901Cu);
    ctx->pc = 0x189018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189014u;
    // 0x189018: 0x240700c0  addiu       $a3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x189014u, 0x18901Cu)) {
        return;
    }
    ctx->pc = 0x18901Cu;
label_18901c:
    // 0x18901c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18901Cu;
    {
        const bool branch_taken_0x18901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18901Cu;
        // 0x189020: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18901c) {
            ctx->pc = 0x189038u;
            goto label_189038;
        }
    }
    ctx->pc = 0x189024u;
label_189024:
    // 0x189024: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x189024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x189028: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18902c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x18902Cu;
    SET_GPR_U32(ctx, 31, 0x189034u);
    ctx->pc = 0x189030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18902Cu;
    // 0x189030: 0x2484bd28  addiu       $a0, $a0, -0x42D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x18902Cu, 0x189034u)) {
        return;
    }
    ctx->pc = 0x189034u;
label_189034:
    // 0x189034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_189038:
    // 0x189038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18903c: 0x3e00008  jr          $ra
    ctx->pc = 0x18903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18903Cu;
        // 0x189040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189044u;
    // 0x189044: 0x0  nop
    ctx->pc = 0x189044u;
    // NOP
    // 0x189048: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x189048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18904c: 0x0  nop
    ctx->pc = 0x18904cu;
    // NOP
    ctx->pc = 0x189050u;
}
