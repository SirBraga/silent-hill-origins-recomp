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

// Function: sub_00203108
// Address: 0x203108 - 0x203170
void sub_00203108_0x203108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203108_0x203108");
#endif

    switch (ctx->pc) {
        case 0x20311cu: goto label_20311c;
        case 0x203140u: goto label_203140;
        default: break;
    }

    ctx->pc = 0x203108u;

    // 0x203108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20310c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x203110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203114: 0xc080b60  jal         func_202D80
    ctx->pc = 0x203114u;
    SET_GPR_U32(ctx, 31, 0x20311Cu);
    ctx->pc = 0x203118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203114u;
    // 0x203118: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202D80u, 0x203114u, 0x20311Cu)) {
        return;
    }
    ctx->pc = 0x20311Cu;
label_20311c:
    // 0x20311c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20311cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203120: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x203120u;
    {
        const bool branch_taken_0x203120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x203124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203120u;
        // 0x203124: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203120) {
            ctx->pc = 0x203158u;
            goto label_203158;
        }
    }
    ctx->pc = 0x203128u;
    // 0x203128: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x203128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x20312c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20312cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x203130: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x203130u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16));
    // 0x203134: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x203134u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x203138: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x203138u;
    {
        const bool branch_taken_0x203138 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x20313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203138u;
        // 0x20313c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203138) {
            ctx->pc = 0x203158u;
            goto label_203158;
        }
    }
    ctx->pc = 0x203140u;
label_203140:
    // 0x203140: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x203140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x203144: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x203144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x203148: 0x0  nop
    ctx->pc = 0x203148u;
    // NOP
    // 0x20314c: 0x0  nop
    ctx->pc = 0x20314cu;
    // NOP
    // 0x203150: 0x1c60fffb  bgtz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x203150u;
    {
        const bool branch_taken_0x203150 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x203154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203150u;
        // 0x203154: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203150) {
            ctx->pc = 0x203140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203140;
        }
    }
    ctx->pc = 0x203158u;
label_203158:
    // 0x203158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x203158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20315c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20315cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203164: 0x3e00008  jr          $ra
    ctx->pc = 0x203164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203164u;
        // 0x203168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20316Cu;
    // 0x20316c: 0x0  nop
    ctx->pc = 0x20316cu;
    // NOP
    ctx->pc = 0x203170u;
}
