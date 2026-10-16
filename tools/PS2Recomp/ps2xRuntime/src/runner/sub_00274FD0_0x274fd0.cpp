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

// Function: sub_00274FD0
// Address: 0x274fd0 - 0x275020
void sub_00274FD0_0x274fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274FD0_0x274fd0");
#endif

    switch (ctx->pc) {
        case 0x274fd0u: goto label_274fd0;
        case 0x274fd4u: goto label_274fd4;
        case 0x274fd8u: goto label_274fd8;
        case 0x274fdcu: goto label_274fdc;
        case 0x274fe0u: goto label_274fe0;
        case 0x274fe4u: goto label_274fe4;
        case 0x274fe8u: goto label_274fe8;
        case 0x274fecu: goto label_274fec;
        case 0x274ff0u: goto label_274ff0;
        case 0x274ff4u: goto label_274ff4;
        case 0x274ff8u: goto label_274ff8;
        case 0x274ffcu: goto label_274ffc;
        case 0x275000u: goto label_275000;
        case 0x275004u: goto label_275004;
        case 0x275008u: goto label_275008;
        case 0x27500cu: goto label_27500c;
        case 0x275010u: goto label_275010;
        case 0x275014u: goto label_275014;
        case 0x275018u: goto label_275018;
        case 0x27501cu: goto label_27501c;
        default: break;
    }

    ctx->pc = 0x274fd0u;

label_274fd0:
    // 0x274fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_274fd4:
    // 0x274fd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x274fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274fd8:
    // 0x274fd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x274fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_274fdc:
    // 0x274fdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274fe0:
    // 0x274fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x274fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274fe4:
    // 0x274fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_274fe8:
    // 0x274fe8: 0xc09ce38  jal         func_2738E0
label_274fec:
    if (ctx->pc == 0x274FECu) {
        ctx->pc = 0x274FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FE8u;
        // 0x274fec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FF0u;
        goto label_274ff0;
    }
    ctx->pc = 0x274FE8u;
    SET_GPR_U32(ctx, 31, 0x274FF0u);
    ctx->pc = 0x274FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274FE8u;
    // 0x274fec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2738E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2738E0u, 0x274FE8u, 0x274FF0u)) {
        return;
    }
    ctx->pc = 0x274FF0u;
label_274ff0:
    // 0x274ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x274ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274ff4:
    // 0x274ff4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_274ff8:
    if (ctx->pc == 0x274FF8u) {
        ctx->pc = 0x274FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FF4u;
        // 0x274ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274FFCu;
        goto label_274ffc;
    }
    ctx->pc = 0x274FF4u;
    {
        const bool branch_taken_0x274ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x274FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FF4u;
        // 0x274ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ff4) {
            ctx->pc = 0x27500Cu;
            goto label_27500c;
        }
    }
    ctx->pc = 0x274FFCu;
label_274ffc:
    // 0x274ffc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x274ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_275000:
    // 0x275000: 0x40f809  jalr        $v0
label_275004:
    if (ctx->pc == 0x275004u) {
        ctx->pc = 0x275008u;
        goto label_275008;
    }
    ctx->pc = 0x275000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275008u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275000u, 0x275008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275008u;
label_275008:
    // 0x275008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27500c:
    // 0x27500c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27500cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_275010:
    // 0x275010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275014:
    // 0x275014: 0x3e00008  jr          $ra
label_275018:
    if (ctx->pc == 0x275018u) {
        ctx->pc = 0x275018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275014u;
        // 0x275018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27501Cu;
        goto label_27501c;
    }
    ctx->pc = 0x275014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275014u;
        // 0x275018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27501Cu;
label_27501c:
    // 0x27501c: 0x0  nop
    ctx->pc = 0x27501cu;
    // NOP
    ctx->pc = 0x275020u;
}
