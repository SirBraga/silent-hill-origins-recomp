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

// Function: sub_00289130
// Address: 0x289130 - 0x2891a0
void sub_00289130_0x289130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289130_0x289130");
#endif

    switch (ctx->pc) {
        case 0x289158u: goto label_289158;
        case 0x289184u: goto label_289184;
        default: break;
    }

    ctx->pc = 0x289130u;

    // 0x289130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x289130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x289134: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x289134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x289138: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x289138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28913c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x289140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289144: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x289144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289148: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28914c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289150: 0xc093546  jal         func_24D518
    ctx->pc = 0x289150u;
    SET_GPR_U32(ctx, 31, 0x289158u);
    ctx->pc = 0x289154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289150u;
    // 0x289154: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x289150u, 0x289158u)) {
        return;
    }
    ctx->pc = 0x289158u;
label_289158:
    // 0x289158: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x289158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28915c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28915Cu;
    {
        const bool branch_taken_0x28915c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x289160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28915Cu;
        // 0x289160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28915c) {
            ctx->pc = 0x28918Cu;
            goto label_28918c;
        }
    }
    ctx->pc = 0x289164u;
    // 0x289164: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x289164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28916c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28916Cu;
    {
        const bool branch_taken_0x28916c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28916Cu;
        // 0x289170: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28916c) {
            ctx->pc = 0x28918Cu;
            goto label_28918c;
        }
    }
    ctx->pc = 0x289174u;
    // 0x289174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289178: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x289178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28917c: 0xc0a2192  jal         func_288648
    ctx->pc = 0x28917Cu;
    SET_GPR_U32(ctx, 31, 0x289184u);
    ctx->pc = 0x289180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28917Cu;
    // 0x289180: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288648u, 0x28917Cu, 0x289184u)) {
        return;
    }
    ctx->pc = 0x289184u;
label_289184:
    // 0x289184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x289184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289188: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28918c:
    // 0x28918c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28918cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289190: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x289190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x289194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289198: 0x3e00008  jr          $ra
    ctx->pc = 0x289198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289198u;
        // 0x28919c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2891A0u;
}
