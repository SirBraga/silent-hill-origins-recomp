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

// Function: sub_0017B700
// Address: 0x17b700 - 0x17b7c0
void sub_0017B700_0x17b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B700_0x17b700");
#endif

    switch (ctx->pc) {
        case 0x17b72cu: goto label_17b72c;
        case 0x17b744u: goto label_17b744;
        case 0x17b750u: goto label_17b750;
        case 0x17b75cu: goto label_17b75c;
        case 0x17b768u: goto label_17b768;
        case 0x17b780u: goto label_17b780;
        case 0x17b7a4u: goto label_17b7a4;
        default: break;
    }

    ctx->pc = 0x17b700u;

    // 0x17b700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b704: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b70c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b710: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x17b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17b714: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B714u;
    {
        const bool branch_taken_0x17b714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B714u;
        // 0x17b718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b714) {
            ctx->pc = 0x17B724u;
            goto label_17b724;
        }
    }
    ctx->pc = 0x17B71Cu;
    // 0x17b71c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B71Cu;
    {
        const bool branch_taken_0x17b71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B71Cu;
        // 0x17b720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b71c) {
            ctx->pc = 0x17B730u;
            goto label_17b730;
        }
    }
    ctx->pc = 0x17B724u;
label_17b724:
    // 0x17b724: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17B724u;
    SET_GPR_U32(ctx, 31, 0x17B72Cu);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17B724u, 0x17B72Cu)) {
        return;
    }
    ctx->pc = 0x17B72Cu;
label_17b72c:
    // 0x17b72c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17b72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17b730:
    // 0x17b730: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x17B730u;
    {
        const bool branch_taken_0x17b730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B730u;
        // 0x17b734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b730) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B738u;
    // 0x17b738: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x17b738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x17b73c: 0xc0809cc  jal         func_202730
    ctx->pc = 0x17B73Cu;
    SET_GPR_U32(ctx, 31, 0x17B744u);
    ctx->pc = 0x17B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B73Cu;
    // 0x17b740: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202730u, 0x17B73Cu, 0x17B744u)) {
        return;
    }
    ctx->pc = 0x17B744u;
label_17b744:
    // 0x17b744: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17b744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17b748: 0xc062cc8  jal         func_18B320
    ctx->pc = 0x17B748u;
    SET_GPR_U32(ctx, 31, 0x17B750u);
    ctx->pc = 0x17B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B748u;
    // 0x17b74c: 0x8c448acc  lw          $a0, -0x7534($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18B320u, 0x17B748u, 0x17B750u)) {
        return;
    }
    ctx->pc = 0x17B750u;
label_17b750:
    // 0x17b750: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17b750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17b754: 0xc064098  jal         func_190260
    ctx->pc = 0x17B754u;
    SET_GPR_U32(ctx, 31, 0x17B75Cu);
    ctx->pc = 0x17B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B754u;
    // 0x17b758: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190260u, 0x17B754u, 0x17B75Cu)) {
        return;
    }
    ctx->pc = 0x17B75Cu;
label_17b75c:
    // 0x17b75c: 0x8e249168  lw          $a0, -0x6E98($s1)
    ctx->pc = 0x17b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938984)));
    // 0x17b760: 0xc06c90c  jal         func_1B2430
    ctx->pc = 0x17B760u;
    SET_GPR_U32(ctx, 31, 0x17B768u);
    ctx->pc = 0x17B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B760u;
    // 0x17b764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2430u, 0x17B760u, 0x17B768u)) {
        return;
    }
    ctx->pc = 0x17B768u;
label_17b768:
    // 0x17b768: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17b76c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b770: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x17b770u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x17b774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b778: 0xc043642  jal         func_10D908
    ctx->pc = 0x17B778u;
    SET_GPR_U32(ctx, 31, 0x17B780u);
    ctx->pc = 0x17B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B778u;
    // 0x17b77c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x17B778u, 0x17B780u)) {
        return;
    }
    ctx->pc = 0x17B780u;
label_17b780:
    // 0x17b780: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x17b780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b784: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B784u;
    {
        const bool branch_taken_0x17b784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B784u;
        // 0x17b788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b784) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B78Cu;
    // 0x17b78c: 0x8e249168  lw          $a0, -0x6E98($s1)
    ctx->pc = 0x17b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938984)));
    // 0x17b790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b794: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b798: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17b798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b79c: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x17B79Cu;
    SET_GPR_U32(ctx, 31, 0x17B7A4u);
    ctx->pc = 0x17B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B79Cu;
    // 0x17b7a0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x17B79Cu, 0x17B7A4u)) {
        return;
    }
    ctx->pc = 0x17B7A4u;
label_17b7a4:
    // 0x17b7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b7a8:
    // 0x17b7a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b7ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7B4u;
        // 0x17b7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B7BCu;
    // 0x17b7bc: 0x0  nop
    ctx->pc = 0x17b7bcu;
    // NOP
    ctx->pc = 0x17b7c0u;
}
