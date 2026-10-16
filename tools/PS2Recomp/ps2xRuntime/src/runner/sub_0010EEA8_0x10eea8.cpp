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

// Function: sub_0010EEA8
// Address: 0x10eea8 - 0x10ef20
void sub_0010EEA8_0x10eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EEA8_0x10eea8");
#endif

    switch (ctx->pc) {
        case 0x10eed0u: goto label_10eed0;
        case 0x10eef4u: goto label_10eef4;
        case 0x10ef0cu: goto label_10ef0c;
        default: break;
    }

    ctx->pc = 0x10eea8u;

    // 0x10eea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10eea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10eeac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10eeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10eeb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10eeb4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10EEB4u;
    {
        const bool branch_taken_0x10eeb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEB4u;
        // 0x10eeb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eeb4) {
            ctx->pc = 0x10EF0Cu;
            goto label_10ef0c;
        }
    }
    ctx->pc = 0x10EEBCu;
    // 0x10eebc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10EEBCu;
    {
        const bool branch_taken_0x10eebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEBCu;
        // 0x10eec0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eebc) {
            ctx->pc = 0x10EEFCu;
            goto label_10eefc;
        }
    }
    ctx->pc = 0x10EEC4u;
    // 0x10eec4: 0x2610a2a8  addiu       $s0, $s0, -0x5D58
    ctx->pc = 0x10eec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943400));
    // 0x10eec8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x10EEC8u;
    SET_GPR_U32(ctx, 31, 0x10EED0u);
    ctx->pc = 0x10EECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEC8u;
    // 0x10eecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x10EEC8u, 0x10EED0u)) {
        return;
    }
    ctx->pc = 0x10EED0u;
label_10eed0:
    // 0x10eed0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x10eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x10eed4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10eed8: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x10eed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x10eedc: 0xac624360  sw          $v0, 0x4360($v1)
    ctx->pc = 0x10eedcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4360u, _value); } while (0);
    // 0x10eee0: 0x24844368  addiu       $a0, $a0, 0x4368
    ctx->pc = 0x10eee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17256));
    // 0x10eee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10eee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eee8: 0x24c6ef20  addiu       $a2, $a2, -0x10E0
    ctx->pc = 0x10eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962976));
    // 0x10eeec: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x10EEECu;
    SET_GPR_U32(ctx, 31, 0x10EEF4u);
    ctx->pc = 0x10EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EEECu;
    // 0x10eef0: 0x24070090  addiu       $a3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x10EEECu, 0x10EEF4u)) {
        return;
    }
    ctx->pc = 0x10EEF4u;
label_10eef4:
    // 0x10eef4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10EEF4u;
    {
        const bool branch_taken_0x10eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF4u;
        // 0x10eef8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eef4) {
            ctx->pc = 0x10EF10u;
            goto label_10ef10;
        }
    }
    ctx->pc = 0x10EEFCu;
label_10eefc:
    // 0x10eefc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10ef00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ef04: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x10EF04u;
    SET_GPR_U32(ctx, 31, 0x10EF0Cu);
    ctx->pc = 0x10EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF04u;
    // 0x10ef08: 0x24844368  addiu       $a0, $a0, 0x4368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x10EF04u, 0x10EF0Cu)) {
        return;
    }
    ctx->pc = 0x10EF0Cu;
label_10ef0c:
    // 0x10ef0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10ef0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10ef10:
    // 0x10ef10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ef10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ef14: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF14u;
        // 0x10ef18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EF1Cu;
    // 0x10ef1c: 0x0  nop
    ctx->pc = 0x10ef1cu;
    // NOP
    ctx->pc = 0x10ef20u;
}
