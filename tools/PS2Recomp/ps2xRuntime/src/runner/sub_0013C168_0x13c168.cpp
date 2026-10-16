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

// Function: sub_0013C168
// Address: 0x13c168 - 0x13c210
void sub_0013C168_0x13c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C168_0x13c168");
#endif

    switch (ctx->pc) {
        case 0x13c1f0u: goto label_13c1f0;
        case 0x13c1fcu: goto label_13c1fc;
        default: break;
    }

    ctx->pc = 0x13c168u;

    // 0x13c168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c16c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x13c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x13c170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13c170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13c174: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x13c174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x13c178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c180: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x13c180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13c184: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13c184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13c188: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x13c188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x13c18c: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x13c18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x13c190: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13c190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13c194: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x13c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13c198: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13c198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x13c19c: 0x26060024  addiu       $a2, $s0, 0x24
    ctx->pc = 0x13c19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x13c1a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x13c1a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x13c1a8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x13c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x13c1ac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13c1b0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x13c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x13c1b4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13c1b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x13c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x13c1bc: 0x2463f730  addiu       $v1, $v1, -0x8D0
    ctx->pc = 0x13c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965040));
    // 0x13c1c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13c1c4: 0x2484f778  addiu       $a0, $a0, -0x888
    ctx->pc = 0x13c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965112));
    // 0x13c1c8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x13c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x13c1cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c1d0: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x13c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x13c1d4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x13c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x13c1d8: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x13c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x13c1dc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13c1e0: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x13c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x13c1e4: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x13c1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x13c1e8: 0xc089892  jal         func_226248
    ctx->pc = 0x13C1E8u;
    SET_GPR_U32(ctx, 31, 0x13C1F0u);
    ctx->pc = 0x13C1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C1E8u;
    // 0x13c1ec: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x13C1E8u, 0x13C1F0u)) {
        return;
    }
    ctx->pc = 0x13C1F0u;
label_13c1f0:
    // 0x13c1f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13c1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1f4: 0xc089a04  jal         func_226810
    ctx->pc = 0x13C1F4u;
    SET_GPR_U32(ctx, 31, 0x13C1FCu);
    ctx->pc = 0x13C1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C1F4u;
    // 0x13c1f8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x13C1F4u, 0x13C1FCu)) {
        return;
    }
    ctx->pc = 0x13C1FCu;
label_13c1fc:
    // 0x13c1fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13c1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13c204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c208: 0x3e00008  jr          $ra
    ctx->pc = 0x13C208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C208u;
        // 0x13c20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C210u;
}
