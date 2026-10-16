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

// Function: sub_001A4770
// Address: 0x1a4770 - 0x1a47b0
void sub_001A4770_0x1a4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4770_0x1a4770");
#endif

    switch (ctx->pc) {
        case 0x1a4788u: goto label_1a4788;
        case 0x1a4790u: goto label_1a4790;
        default: break;
    }

    ctx->pc = 0x1a4770u;

    // 0x1a4770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4774: 0x24040478  addiu       $a0, $zero, 0x478
    ctx->pc = 0x1a4774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1144));
    // 0x1a4778: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a477c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4780: 0xc080858  jal         func_202160
    ctx->pc = 0x1A4780u;
    SET_GPR_U32(ctx, 31, 0x1A4788u);
    ctx->pc = 0x1A4784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4780u;
    // 0x1a4784: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1A4780u, 0x1A4788u)) {
        return;
    }
    ctx->pc = 0x1A4788u;
label_1a4788:
    // 0x1a4788: 0xc068a26  jal         func_1A2898
    ctx->pc = 0x1A4788u;
    SET_GPR_U32(ctx, 31, 0x1A4790u);
    ctx->pc = 0x1A478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4788u;
    // 0x1a478c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A2898u, 0x1A4788u, 0x1A4790u)) {
        return;
    }
    ctx->pc = 0x1A4790u;
label_1a4790:
    // 0x1a4790: 0xae0290a0  sw          $v0, -0x6F60($s0)
    ctx->pc = 0x1a4790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294938784), GPR_U32(ctx, 2));
    // 0x1a4794: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a4794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a479c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A479Cu;
        // 0x1a47a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A479Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47A4u;
    // 0x1a47a4: 0x0  nop
    ctx->pc = 0x1a47a4u;
    // NOP
    // 0x1a47a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a47a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a47ac: 0x0  nop
    ctx->pc = 0x1a47acu;
    // NOP
    ctx->pc = 0x1a47b0u;
}
