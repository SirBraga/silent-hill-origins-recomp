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

// Function: sub_001C4210
// Address: 0x1c4210 - 0x1c4280
void sub_001C4210_0x1c4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4210_0x1c4210");
#endif

    switch (ctx->pc) {
        case 0x1c4228u: goto label_1c4228;
        case 0x1c4248u: goto label_1c4248;
        case 0x1c4264u: goto label_1c4264;
        default: break;
    }

    ctx->pc = 0x1c4210u;

    // 0x1c4210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4214: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c4214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c4218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c421c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4220: 0xc06d778  jal         func_1B5DE0
    ctx->pc = 0x1C4220u;
    SET_GPR_U32(ctx, 31, 0x1C4228u);
    ctx->pc = 0x1C4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4220u;
    // 0x1c4224: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5DE0u, 0x1C4220u, 0x1C4228u)) {
        return;
    }
    ctx->pc = 0x1C4228u;
label_1c4228:
    // 0x1c4228: 0x8e0202e8  lw          $v0, 0x2E8($s0)
    ctx->pc = 0x1c4228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x1c422c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C422Cu;
    {
        const bool branch_taken_0x1c422c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C422Cu;
        // 0x1c4230: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c422c) {
            ctx->pc = 0x1C426Cu;
            goto label_1c426c;
        }
    }
    ctx->pc = 0x1C4234u;
    // 0x1c4234: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1c4234u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x1c4238: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c423c: 0x8e0482f0  lw          $a0, -0x7D10($s0)
    ctx->pc = 0x1c423cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3382F0u));
    // 0x1c4240: 0xc04392a  jal         func_10E4A8
    ctx->pc = 0x1C4240u;
    SET_GPR_U32(ctx, 31, 0x1C4248u);
    ctx->pc = 0x1C4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4240u;
    // 0x1c4244: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E4A8u, 0x1C4240u, 0x1C4248u)) {
        return;
    }
    ctx->pc = 0x1C4248u;
label_1c4248:
    // 0x1c4248: 0x8e229838  lw          $v0, -0x67C8($s1)
    ctx->pc = 0x1c4248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940728)));
    // 0x1c424c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C424Cu;
    {
        const bool branch_taken_0x1c424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C424Cu;
        // 0x1c4250: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c424c) {
            ctx->pc = 0x1C4268u;
            goto label_1c4268;
        }
    }
    ctx->pc = 0x1C4254u;
    // 0x1c4254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4258: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c4258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c425c: 0xc043642  jal         func_10D908
    ctx->pc = 0x1C425Cu;
    SET_GPR_U32(ctx, 31, 0x1C4264u);
    ctx->pc = 0x1C4260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C425Cu;
    // 0x1c4260: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x1C425Cu, 0x1C4264u)) {
        return;
    }
    ctx->pc = 0x1C4264u;
label_1c4264:
    // 0x1c4264: 0xae209838  sw          $zero, -0x67C8($s1)
    ctx->pc = 0x1c4264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940728), GPR_U32(ctx, 0));
label_1c4268:
    // 0x1c4268: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c4268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c426c:
    // 0x1c426c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c426cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4274: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4274u;
        // 0x1c4278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C427Cu;
    // 0x1c427c: 0x0  nop
    ctx->pc = 0x1c427cu;
    // NOP
    ctx->pc = 0x1c4280u;
}
