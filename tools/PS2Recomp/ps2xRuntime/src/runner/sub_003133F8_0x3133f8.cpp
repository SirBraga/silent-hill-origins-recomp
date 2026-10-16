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

// Function: sub_003133F8
// Address: 0x3133f8 - 0x313498
void sub_003133F8_0x3133f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003133F8_0x3133f8");
#endif

    switch (ctx->pc) {
        case 0x313438u: goto label_313438;
        case 0x31344cu: goto label_31344c;
        case 0x313460u: goto label_313460;
        default: break;
    }

    ctx->pc = 0x3133f8u;

    // 0x3133f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3133f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3133fc: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x3133fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x313400: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x313400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x313404: 0x24423498  addiu       $v0, $v0, 0x3498
    ctx->pc = 0x313404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13464));
    // 0x313408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31340c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x313410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313418: 0x261101e4  addiu       $s1, $s0, 0x1E4
    ctx->pc = 0x313418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x31341c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x31341cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x313420: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x313420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x313424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313428: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x313428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31342c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31342cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313430: 0xc0c4ce4  jal         func_313390
    ctx->pc = 0x313430u;
    SET_GPR_U32(ctx, 31, 0x313438u);
    ctx->pc = 0x313434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313430u;
    // 0x313434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313390u, 0x313430u, 0x313438u)) {
        return;
    }
    ctx->pc = 0x313438u;
label_313438:
    // 0x313438: 0x2604023c  addiu       $a0, $s0, 0x23C
    ctx->pc = 0x313438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x31343c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x31343cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313440: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x313440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x313444: 0xc0c4ce4  jal         func_313390
    ctx->pc = 0x313444u;
    SET_GPR_U32(ctx, 31, 0x31344Cu);
    ctx->pc = 0x313448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313444u;
    // 0x313448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313390u, 0x313444u, 0x31344Cu)) {
        return;
    }
    ctx->pc = 0x31344Cu;
label_31344c:
    // 0x31344c: 0x26040294  addiu       $a0, $s0, 0x294
    ctx->pc = 0x31344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    // 0x313450: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x313450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313454: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x313454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x313458: 0xc0c4ce4  jal         func_313390
    ctx->pc = 0x313458u;
    SET_GPR_U32(ctx, 31, 0x313460u);
    ctx->pc = 0x31345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313458u;
    // 0x31345c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313390u, 0x313458u, 0x313460u)) {
        return;
    }
    ctx->pc = 0x313460u;
label_313460:
    // 0x313460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x313460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313464: 0xae1101e0  sw          $s1, 0x1E0($s0)
    ctx->pc = 0x313464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 17));
    // 0x313468: 0xae0201dc  sw          $v0, 0x1DC($s0)
    ctx->pc = 0x313468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 2));
    // 0x31346c: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x31346cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x313470: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x313470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31347c: 0x3e00008  jr          $ra
    ctx->pc = 0x31347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31347Cu;
        // 0x313480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31347Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313484u;
    // 0x313484: 0x0  nop
    ctx->pc = 0x313484u;
    // NOP
    // 0x313488: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x313488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31348c: 0x0  nop
    ctx->pc = 0x31348cu;
    // NOP
    // 0x313490: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x313490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x313494: 0x0  nop
    ctx->pc = 0x313494u;
    // NOP
    ctx->pc = 0x313498u;
}
