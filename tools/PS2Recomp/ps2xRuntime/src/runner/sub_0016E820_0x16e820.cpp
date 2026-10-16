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

// Function: sub_0016E820
// Address: 0x16e820 - 0x16e898
void sub_0016E820_0x16e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E820_0x16e820");
#endif

    switch (ctx->pc) {
        case 0x16e834u: goto label_16e834;
        case 0x16e858u: goto label_16e858;
        case 0x16e860u: goto label_16e860;
        case 0x16e87cu: goto label_16e87c;
        case 0x16e884u: goto label_16e884;
        default: break;
    }

    ctx->pc = 0x16e820u;

    // 0x16e820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16e824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16e828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e82c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16E82Cu;
    SET_GPR_U32(ctx, 31, 0x16E834u);
    ctx->pc = 0x16E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E82Cu;
    // 0x16e830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16E82Cu, 0x16E834u)) {
        return;
    }
    ctx->pc = 0x16E834u;
label_16e834:
    // 0x16e834: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16e834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16e838: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16e838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16e83c: 0x24634eb0  addiu       $v1, $v1, 0x4EB0
    ctx->pc = 0x16e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20144));
    // 0x16e840: 0x24424ed0  addiu       $v0, $v0, 0x4ED0
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20176));
    // 0x16e844: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x16e844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x16e848: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x16e848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x16e84c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16e850: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16E850u;
    SET_GPR_U32(ctx, 31, 0x16E858u);
    ctx->pc = 0x16E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E850u;
    // 0x16e854: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16E850u, 0x16E858u)) {
        return;
    }
    ctx->pc = 0x16E858u;
label_16e858:
    // 0x16e858: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16E858u;
    SET_GPR_U32(ctx, 31, 0x16E860u);
    ctx->pc = 0x16E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E858u;
    // 0x16e85c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16E858u, 0x16E860u)) {
        return;
    }
    ctx->pc = 0x16E860u;
label_16e860:
    // 0x16e860: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x16e860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x16e864: 0x260400bc  addiu       $a0, $s0, 0xBC
    ctx->pc = 0x16e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x16e868: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x16e868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x16e86c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16e870: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x16e870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x16e874: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16E874u;
    SET_GPR_U32(ctx, 31, 0x16E87Cu);
    ctx->pc = 0x16E878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E874u;
    // 0x16e878: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16E874u, 0x16E87Cu)) {
        return;
    }
    ctx->pc = 0x16E87Cu;
label_16e87c:
    // 0x16e87c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16E87Cu;
    SET_GPR_U32(ctx, 31, 0x16E884u);
    ctx->pc = 0x16E880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E87Cu;
    // 0x16e880: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16E87Cu, 0x16E884u)) {
        return;
    }
    ctx->pc = 0x16E884u;
label_16e884:
    // 0x16e884: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16e884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e88c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16e88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e890: 0x3e00008  jr          $ra
    ctx->pc = 0x16E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E890u;
        // 0x16e894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E898u;
}
