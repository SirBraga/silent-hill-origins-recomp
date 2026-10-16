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

// Function: sub_001F60C0
// Address: 0x1f60c0 - 0x1f6168
void sub_001F60C0_0x1f60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F60C0_0x1f60c0");
#endif

    switch (ctx->pc) {
        case 0x1f60f4u: goto label_1f60f4;
        case 0x1f6104u: goto label_1f6104;
        case 0x1f6120u: goto label_1f6120;
        case 0x1f6140u: goto label_1f6140;
        case 0x1f6150u: goto label_1f6150;
        default: break;
    }

    ctx->pc = 0x1f60c0u;

    // 0x1f60c0: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x1f60c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
    // 0x1f60c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f60c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60c8: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x1f60c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
    // 0x1f60cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f60ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60d0: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x1f60d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
    // 0x1f60d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f60d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f60d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60dc: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1f60e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f60e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f60e4: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1f60e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1f60e8: 0x24a52a38  addiu       $a1, $a1, 0x2A38
    ctx->pc = 0x1f60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10808));
    // 0x1f60ec: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F60ECu;
    SET_GPR_U32(ctx, 31, 0x1F60F4u);
    ctx->pc = 0x1F60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60ECu;
    // 0x1f60f0: 0x24c62a20  addiu       $a2, $a2, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F60ECu, 0x1F60F4u)) {
        return;
    }
    ctx->pc = 0x1F60F4u;
label_1f60f4:
    // 0x1f60f4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f60f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f60f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f60f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60fc: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F60FCu;
    SET_GPR_U32(ctx, 31, 0x1F6104u);
    ctx->pc = 0x1F6100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60FCu;
    // 0x1f6100: 0x24a52a40  addiu       $a1, $a1, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F60FCu, 0x1F6104u)) {
        return;
    }
    ctx->pc = 0x1F6104u;
label_1f6104:
    // 0x1f6104: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1f6104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6108: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6108u;
    {
        const bool branch_taken_0x1f6108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6108u;
        // 0x1f610c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6108) {
            ctx->pc = 0x1F6138u;
            goto label_1f6138;
        }
    }
    ctx->pc = 0x1F6110u;
    // 0x1f6110: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f6114: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6114u;
    {
        const bool branch_taken_0x1f6114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6114u;
        // 0x1f6118: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6114) {
            ctx->pc = 0x1F6138u;
            goto label_1f6138;
        }
    }
    ctx->pc = 0x1F611Cu;
    // 0x1f611c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f6120:
    // 0x1f6120: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f6120u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6124u;
    {
        const bool branch_taken_0x1f6124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6124) {
            ctx->pc = 0x1F6138u;
            goto label_1f6138;
        }
    }
    ctx->pc = 0x1F612Cu;
    // 0x1f612c: 0x0  nop
    ctx->pc = 0x1f612cu;
    // NOP
    // 0x1f6130: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F6130u;
    {
        const bool branch_taken_0x1f6130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f6130) {
            ctx->pc = 0x1F6134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6130u;
            // 0x1f6134: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6120;
        }
    }
    ctx->pc = 0x1F6138u;
label_1f6138:
    // 0x1f6138: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F6138u;
    SET_GPR_U32(ctx, 31, 0x1F6140u);
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F6138u, 0x1F6140u)) {
        return;
    }
    ctx->pc = 0x1F6140u;
label_1f6140:
    // 0x1f6140: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6144: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f6144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6148: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F6148u;
    SET_GPR_U32(ctx, 31, 0x1F6150u);
    ctx->pc = 0x1F614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6148u;
    // 0x1f614c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F6148u, 0x1F6150u)) {
        return;
    }
    ctx->pc = 0x1F6150u;
label_1f6150:
    // 0x1f6150: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x1f6150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1f6154: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x1f6154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x1f6158: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1f6158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1f615c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F615Cu;
        // 0x1f6160: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6164u;
    // 0x1f6164: 0x0  nop
    ctx->pc = 0x1f6164u;
    // NOP
    ctx->pc = 0x1f6168u;
}
