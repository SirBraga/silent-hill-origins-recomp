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

// Function: sub_001710F0
// Address: 0x1710f0 - 0x171168
void sub_001710F0_0x1710f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001710F0_0x1710f0");
#endif

    switch (ctx->pc) {
        case 0x171104u: goto label_171104;
        case 0x171140u: goto label_171140;
        case 0x171150u: goto label_171150;
        default: break;
    }

    ctx->pc = 0x1710f0u;

    // 0x1710f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1710f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1710f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1710f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1710f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1710fc: 0xc05c672  jal         func_1719C8
    ctx->pc = 0x1710FCu;
    SET_GPR_U32(ctx, 31, 0x171104u);
    ctx->pc = 0x171100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710FCu;
    // 0x171100: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1719C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1719C8u, 0x1710FCu, 0x171104u)) {
        return;
    }
    ctx->pc = 0x171104u;
label_171104:
    // 0x171104: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x171104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x171108: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17110c: 0x24635448  addiu       $v1, $v1, 0x5448
    ctx->pc = 0x17110cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21576));
    // 0x171110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x171110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171114: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x171114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171118: 0x24425468  addiu       $v0, $v0, 0x5468
    ctx->pc = 0x171118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21608));
    // 0x17111c: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x17111cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x171120: 0x2604012c  addiu       $a0, $s0, 0x12C
    ctx->pc = 0x171120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x171124: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x171124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x171128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17112c: 0xae070120  sw          $a3, 0x120($s0)
    ctx->pc = 0x17112cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 7));
    // 0x171130: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x171130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x171134: 0xae080124  sw          $t0, 0x124($s0)
    ctx->pc = 0x171134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 8));
    // 0x171138: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x171138u;
    SET_GPR_U32(ctx, 31, 0x171140u);
    ctx->pc = 0x17113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171138u;
    // 0x17113c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x171138u, 0x171140u)) {
        return;
    }
    ctx->pc = 0x171140u;
label_171140:
    // 0x171140: 0x26040158  addiu       $a0, $s0, 0x158
    ctx->pc = 0x171140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x171144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171148: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x171148u;
    SET_GPR_U32(ctx, 31, 0x171150u);
    ctx->pc = 0x17114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171148u;
    // 0x17114c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x171148u, 0x171150u)) {
        return;
    }
    ctx->pc = 0x171150u;
label_171150:
    // 0x171150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17115c: 0x3e00008  jr          $ra
    ctx->pc = 0x17115Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17115Cu;
        // 0x171160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17115Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171164u;
    // 0x171164: 0x0  nop
    ctx->pc = 0x171164u;
    // NOP
    ctx->pc = 0x171168u;
}
