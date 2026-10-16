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

// Function: sub_00197A10
// Address: 0x197a10 - 0x197a90
void sub_00197A10_0x197a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197A10_0x197a10");
#endif

    switch (ctx->pc) {
        case 0x197a4cu: goto label_197a4c;
        case 0x197a5cu: goto label_197a5c;
        default: break;
    }

    ctx->pc = 0x197a10u;

    // 0x197a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x197a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197a14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197a18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x197a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x197a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197a20: 0x8c8209dc  lw          $v0, 0x9DC($a0)
    ctx->pc = 0x197a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2524)));
    // 0x197a24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197A24u;
    {
        const bool branch_taken_0x197a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A24u;
        // 0x197a28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a24) {
            ctx->pc = 0x197A6Cu;
            goto label_197a6c;
        }
    }
    ctx->pc = 0x197A2Cu;
    // 0x197a2c: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x197a2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x197a30: 0x2483000d  addiu       $v1, $a0, 0xD
    ctx->pc = 0x197a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
    // 0x197a34: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x197a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x197a38: 0x3842002f  xori        $v0, $v0, 0x2F
    ctx->pc = 0x197a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)47);
    // 0x197a3c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x197A3Cu;
    {
        const bool branch_taken_0x197a3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A3Cu;
        // 0x197a40: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a3c) {
            ctx->pc = 0x197A64u;
            goto label_197a64;
        }
    }
    ctx->pc = 0x197A44u;
    // 0x197a44: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x197A44u;
    SET_GPR_U32(ctx, 31, 0x197A4Cu);
    ctx->pc = 0x197A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A44u;
    // 0x197a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x197A44u, 0x197A4Cu)) {
        return;
    }
    ctx->pc = 0x197A4Cu;
label_197a4c:
    // 0x197a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x197a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a54: 0xc0c4b78  jal         func_312DE0
    ctx->pc = 0x197A54u;
    SET_GPR_U32(ctx, 31, 0x197A5Cu);
    ctx->pc = 0x197A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A54u;
    // 0x197a58: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312DE0u, 0x197A54u, 0x197A5Cu)) {
        return;
    }
    ctx->pc = 0x197A5Cu;
label_197a5c:
    // 0x197a5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197A5Cu;
    {
        const bool branch_taken_0x197a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A5Cu;
        // 0x197a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a5c) {
            ctx->pc = 0x197A70u;
            goto label_197a70;
        }
    }
    ctx->pc = 0x197A64u;
label_197a64:
    // 0x197a64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197A64u;
    {
        const bool branch_taken_0x197a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A64u;
        // 0x197a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a64) {
            ctx->pc = 0x197A70u;
            goto label_197a70;
        }
    }
    ctx->pc = 0x197A6Cu;
label_197a6c:
    // 0x197a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197a70:
    // 0x197a70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x197a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x197A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A7Cu;
        // 0x197a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197A84u;
    // 0x197a84: 0x0  nop
    ctx->pc = 0x197a84u;
    // NOP
    // 0x197a88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x197a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x197a8c: 0x0  nop
    ctx->pc = 0x197a8cu;
    // NOP
    ctx->pc = 0x197a90u;
}
