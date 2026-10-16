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

// Function: sub_0017BB18
// Address: 0x17bb18 - 0x17bb88
void sub_0017BB18_0x17bb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BB18_0x17bb18");
#endif

    switch (ctx->pc) {
        case 0x17bb44u: goto label_17bb44;
        case 0x17bb5cu: goto label_17bb5c;
        default: break;
    }

    ctx->pc = 0x17bb18u;

    // 0x17bb18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bb1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17bb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17bb20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17bb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17bb24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17bb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17bb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17bb2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17bb2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bb34: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x17BB34u;
    {
        const bool branch_taken_0x17bb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB34u;
        // 0x17bb38: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb34) {
            ctx->pc = 0x17BB68u;
            goto label_17bb68;
        }
    }
    ctx->pc = 0x17BB3Cu;
    // 0x17bb3c: 0xc05e396  jal         func_178E58
    ctx->pc = 0x17BB3Cu;
    SET_GPR_U32(ctx, 31, 0x17BB44u);
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x17BB3Cu, 0x17BB44u)) {
        return;
    }
    ctx->pc = 0x17BB44u;
label_17bb44:
    // 0x17bb44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BB44u;
    {
        const bool branch_taken_0x17bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB44u;
        // 0x17bb48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb44) {
            ctx->pc = 0x17BB68u;
            goto label_17bb68;
        }
    }
    ctx->pc = 0x17BB4Cu;
    // 0x17bb4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17bb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17bb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb54: 0xc086156  jal         func_218558
    ctx->pc = 0x17BB54u;
    SET_GPR_U32(ctx, 31, 0x17BB5Cu);
    ctx->pc = 0x17BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BB54u;
    // 0x17bb58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x17BB54u, 0x17BB5Cu)) {
        return;
    }
    ctx->pc = 0x17BB5Cu;
label_17bb5c:
    // 0x17bb5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17bb5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bb60: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17BB60u;
    {
        const bool branch_taken_0x17bb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB60u;
        // 0x17bb64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb60) {
            ctx->pc = 0x17BB6Cu;
            goto label_17bb6c;
        }
    }
    ctx->pc = 0x17BB68u;
label_17bb68:
    // 0x17bb68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17bb68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17bb6c:
    // 0x17bb6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17bb6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bb70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17bb70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bb74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17bb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB7Cu;
        // 0x17bb80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BB84u;
    // 0x17bb84: 0x0  nop
    ctx->pc = 0x17bb84u;
    // NOP
    ctx->pc = 0x17bb88u;
}
