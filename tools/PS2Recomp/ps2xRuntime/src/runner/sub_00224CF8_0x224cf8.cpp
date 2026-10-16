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

// Function: sub_00224CF8
// Address: 0x224cf8 - 0x224d58
void sub_00224CF8_0x224cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224CF8_0x224cf8");
#endif

    switch (ctx->pc) {
        case 0x224cf8u: goto label_224cf8;
        case 0x224cfcu: goto label_224cfc;
        case 0x224d00u: goto label_224d00;
        case 0x224d04u: goto label_224d04;
        case 0x224d08u: goto label_224d08;
        case 0x224d0cu: goto label_224d0c;
        case 0x224d10u: goto label_224d10;
        case 0x224d14u: goto label_224d14;
        case 0x224d18u: goto label_224d18;
        case 0x224d1cu: goto label_224d1c;
        case 0x224d20u: goto label_224d20;
        case 0x224d24u: goto label_224d24;
        case 0x224d28u: goto label_224d28;
        case 0x224d2cu: goto label_224d2c;
        case 0x224d30u: goto label_224d30;
        case 0x224d34u: goto label_224d34;
        case 0x224d38u: goto label_224d38;
        case 0x224d3cu: goto label_224d3c;
        case 0x224d40u: goto label_224d40;
        case 0x224d44u: goto label_224d44;
        case 0x224d48u: goto label_224d48;
        case 0x224d4cu: goto label_224d4c;
        case 0x224d50u: goto label_224d50;
        case 0x224d54u: goto label_224d54;
        default: break;
    }

    ctx->pc = 0x224cf8u;

label_224cf8:
    // 0x224cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_224cfc:
    // 0x224cfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x224cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_224d00:
    // 0x224d00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_224d04:
    // 0x224d04: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x224d04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_224d08:
    // 0x224d08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224d0c:
    // 0x224d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224d10:
    // 0x224d10: 0xae110fc8  sw          $s1, 0xFC8($s0)
    ctx->pc = 0x224d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4040), GPR_U32(ctx, 17));
label_224d14:
    // 0x224d14: 0xc08a530  jal         func_2294C0
label_224d18:
    if (ctx->pc == 0x224D18u) {
        ctx->pc = 0x224D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D14u;
        // 0x224d18: 0x26100fc8  addiu       $s0, $s0, 0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D1Cu;
        goto label_224d1c;
    }
    ctx->pc = 0x224D14u;
    SET_GPR_U32(ctx, 31, 0x224D1Cu);
    ctx->pc = 0x224D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D14u;
    // 0x224d18: 0x26100fc8  addiu       $s0, $s0, 0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2294C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2294C0u, 0x224D14u, 0x224D1Cu)) {
        return;
    }
    ctx->pc = 0x224D1Cu;
label_224d1c:
    // 0x224d1c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x224d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_224d20:
    // 0x224d20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x224d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224d24:
    // 0x224d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x224d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224d28:
    // 0x224d28: 0x40f809  jalr        $v0
label_224d2c:
    if (ctx->pc == 0x224D2Cu) {
        ctx->pc = 0x224D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D28u;
        // 0x224d2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D30u;
        goto label_224d30;
    }
    ctx->pc = 0x224D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224D30u);
        ctx->pc = 0x224D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D28u;
        // 0x224d2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224D28u, 0x224D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224D30u;
label_224d30:
    // 0x224d30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_224d34:
    if (ctx->pc == 0x224D34u) {
        ctx->pc = 0x224D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D30u;
        // 0x224d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D38u;
        goto label_224d38;
    }
    ctx->pc = 0x224D30u;
    {
        const bool branch_taken_0x224d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D30u;
        // 0x224d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224d30) {
            ctx->pc = 0x224D44u;
            goto label_224d44;
        }
    }
    ctx->pc = 0x224D38u;
label_224d38:
    // 0x224d38: 0xc0922aa  jal         func_248AA8
label_224d3c:
    if (ctx->pc == 0x224D3Cu) {
        ctx->pc = 0x224D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D38u;
        // 0x224d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D40u;
        goto label_224d40;
    }
    ctx->pc = 0x224D38u;
    SET_GPR_U32(ctx, 31, 0x224D40u);
    ctx->pc = 0x224D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D38u;
    // 0x224d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248AA8u, 0x224D38u, 0x224D40u)) {
        return;
    }
    ctx->pc = 0x224D40u;
label_224d40:
    // 0x224d40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x224d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224d44:
    // 0x224d44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x224d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224d48:
    // 0x224d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224d4c:
    // 0x224d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224d50:
    // 0x224d50: 0x3e00008  jr          $ra
label_224d54:
    if (ctx->pc == 0x224D54u) {
        ctx->pc = 0x224D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D50u;
        // 0x224d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x224D58u;
        goto label_fallthrough_0x224d50;
    }
    ctx->pc = 0x224D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D50u;
        // 0x224d54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x224d50:
    ctx->pc = 0x224D58u;
}
