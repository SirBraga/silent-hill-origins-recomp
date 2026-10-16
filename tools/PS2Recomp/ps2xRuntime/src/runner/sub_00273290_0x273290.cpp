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

// Function: sub_00273290
// Address: 0x273290 - 0x2732e8
void sub_00273290_0x273290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273290_0x273290");
#endif

    switch (ctx->pc) {
        case 0x273290u: goto label_273290;
        case 0x273294u: goto label_273294;
        case 0x273298u: goto label_273298;
        case 0x27329cu: goto label_27329c;
        case 0x2732a0u: goto label_2732a0;
        case 0x2732a4u: goto label_2732a4;
        case 0x2732a8u: goto label_2732a8;
        case 0x2732acu: goto label_2732ac;
        case 0x2732b0u: goto label_2732b0;
        case 0x2732b4u: goto label_2732b4;
        case 0x2732b8u: goto label_2732b8;
        case 0x2732bcu: goto label_2732bc;
        case 0x2732c0u: goto label_2732c0;
        case 0x2732c4u: goto label_2732c4;
        case 0x2732c8u: goto label_2732c8;
        case 0x2732ccu: goto label_2732cc;
        case 0x2732d0u: goto label_2732d0;
        case 0x2732d4u: goto label_2732d4;
        case 0x2732d8u: goto label_2732d8;
        case 0x2732dcu: goto label_2732dc;
        case 0x2732e0u: goto label_2732e0;
        case 0x2732e4u: goto label_2732e4;
        default: break;
    }

    ctx->pc = 0x273290u;

label_273290:
    // 0x273290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_273294:
    // 0x273294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x273294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_273298:
    // 0x273298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27329c:
    // 0x27329c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27329cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2732a0:
    // 0x2732a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2732a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2732a4:
    // 0x2732a4: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x2732a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2732a8:
    // 0x2732a8: 0x8f848f80  lw          $a0, -0x7080($gp)
    ctx->pc = 0x2732a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
label_2732ac:
    // 0x2732ac: 0xc0c84d8  jal         func_321360
label_2732b0:
    if (ctx->pc == 0x2732B0u) {
        ctx->pc = 0x2732B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732ACu;
        // 0x2732b0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732B4u;
        goto label_2732b4;
    }
    ctx->pc = 0x2732ACu;
    SET_GPR_U32(ctx, 31, 0x2732B4u);
    ctx->pc = 0x2732B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732ACu;
    // 0x2732b0: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2732ACu, 0x2732B4u)) {
        return;
    }
    ctx->pc = 0x2732B4u;
label_2732b4:
    // 0x2732b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2732b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2732b8:
    // 0x2732b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2732b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2732bc:
    // 0x2732bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2732bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2732c0:
    // 0x2732c0: 0x60f809  jalr        $v1
label_2732c4:
    if (ctx->pc == 0x2732C4u) {
        ctx->pc = 0x2732C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732C0u;
        // 0x2732c4: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732C8u;
        goto label_2732c8;
    }
    ctx->pc = 0x2732C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2732C8u);
        ctx->pc = 0x2732C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732C0u;
        // 0x2732c4: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2732C0u, 0x2732C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2732C8u;
label_2732c8:
    // 0x2732c8: 0xc0c84d0  jal         func_321340
label_2732cc:
    if (ctx->pc == 0x2732CCu) {
        ctx->pc = 0x2732CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732C8u;
        // 0x2732cc: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732D0u;
        goto label_2732d0;
    }
    ctx->pc = 0x2732C8u;
    SET_GPR_U32(ctx, 31, 0x2732D0u);
    ctx->pc = 0x2732CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2732C8u;
    // 0x2732cc: 0x8f848f80  lw          $a0, -0x7080($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2732C8u, 0x2732D0u)) {
        return;
    }
    ctx->pc = 0x2732D0u;
label_2732d0:
    // 0x2732d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2732d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2732d4:
    // 0x2732d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2732d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2732d8:
    // 0x2732d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2732d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2732dc:
    // 0x2732dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2732dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2732e0:
    // 0x2732e0: 0x3e00008  jr          $ra
label_2732e4:
    if (ctx->pc == 0x2732E4u) {
        ctx->pc = 0x2732E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732E0u;
        // 0x2732e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2732E8u;
        goto label_fallthrough_0x2732e0;
    }
    ctx->pc = 0x2732E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2732E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2732E0u;
        // 0x2732e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2732E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2732e0:
    ctx->pc = 0x2732E8u;
}
