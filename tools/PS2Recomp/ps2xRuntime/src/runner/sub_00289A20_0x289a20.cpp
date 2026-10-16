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

// Function: sub_00289A20
// Address: 0x289a20 - 0x289a9c
void sub_00289A20_0x289a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289A20_0x289a20");
#endif

    switch (ctx->pc) {
        case 0x289a60u: goto label_289a60;
        case 0x289a70u: goto label_289a70;
        case 0x289a80u: goto label_289a80;
        case 0x289a90u: goto label_289a90;
        default: break;
    }

    ctx->pc = 0x289a20u;

    // 0x289a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289a24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x289a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x289a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289a30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x289a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289a34: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x289a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x289a38: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x289A38u;
    {
        const bool branch_taken_0x289a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A38u;
        // 0x289a3c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a38) {
            ctx->pc = 0x289A98u;
            goto label_289a98;
        }
    }
    ctx->pc = 0x289A40u;
    // 0x289a40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x289a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289a44: 0x2442ce20  addiu       $v0, $v0, -0x31E0
    ctx->pc = 0x289a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954528));
    // 0x289a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x289a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x289a4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x289a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289a50: 0x800008  jr          $a0
    ctx->pc = 0x289A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289A58u: goto label_289a58;
            case 0x289A68u: goto label_289a68;
            case 0x289A78u: goto label_289a78;
            case 0x289A88u: goto label_289a88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289A50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x289A58u;
label_289a58:
    // 0x289a58: 0xc0a28c8  jal         func_28A320
    ctx->pc = 0x289A58u;
    SET_GPR_U32(ctx, 31, 0x289A60u);
    ctx->pc = 0x289A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A58u;
    // 0x289a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28A320u, 0x289A58u, 0x289A60u)) {
        return;
    }
    ctx->pc = 0x289A60u;
label_289a60:
    // 0x289a60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x289A60u;
    {
        const bool branch_taken_0x289a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A60u;
        // 0x289a64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a60) {
            ctx->pc = 0x289AA0u;
            return;
        }
    }
    ctx->pc = 0x289A68u;
label_289a68:
    // 0x289a68: 0xc0a319e  jal         func_28C678
    ctx->pc = 0x289A68u;
    SET_GPR_U32(ctx, 31, 0x289A70u);
    ctx->pc = 0x289A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A68u;
    // 0x289a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28C678u, 0x289A68u, 0x289A70u)) {
        return;
    }
    ctx->pc = 0x289A70u;
label_289a70:
    // 0x289a70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x289A70u;
    {
        const bool branch_taken_0x289a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A70u;
        // 0x289a74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a70) {
            ctx->pc = 0x289AA0u;
            return;
        }
    }
    ctx->pc = 0x289A78u;
label_289a78:
    // 0x289a78: 0xc0a26fe  jal         func_289BF8
    ctx->pc = 0x289A78u;
    SET_GPR_U32(ctx, 31, 0x289A80u);
    ctx->pc = 0x289A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A78u;
    // 0x289a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289BF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289BF8u, 0x289A78u, 0x289A80u)) {
        return;
    }
    ctx->pc = 0x289A80u;
label_289a80:
    // 0x289a80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x289A80u;
    {
        const bool branch_taken_0x289a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A80u;
        // 0x289a84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a80) {
            ctx->pc = 0x289AA0u;
            return;
        }
    }
    ctx->pc = 0x289A88u;
label_289a88:
    // 0x289a88: 0xc0a41fe  jal         func_2907F8
    ctx->pc = 0x289A88u;
    SET_GPR_U32(ctx, 31, 0x289A90u);
    ctx->pc = 0x289A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289A88u;
    // 0x289a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2907F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2907F8u, 0x289A88u, 0x289A90u)) {
        return;
    }
    ctx->pc = 0x289A90u;
label_289a90:
    // 0x289a90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289A90u;
    {
        const bool branch_taken_0x289a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289A90u;
        // 0x289a94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a90) {
            ctx->pc = 0x289AA0u;
            return;
        }
    }
    ctx->pc = 0x289A98u;
label_289a98:
    // 0x289a98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x289a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x289a9cu;
}
