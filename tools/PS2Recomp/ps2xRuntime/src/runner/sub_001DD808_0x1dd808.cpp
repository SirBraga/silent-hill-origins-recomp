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

// Function: sub_001DD808
// Address: 0x1dd808 - 0x1dd888
void sub_001DD808_0x1dd808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD808_0x1dd808");
#endif

    switch (ctx->pc) {
        case 0x1dd848u: goto label_1dd848;
        default: break;
    }

    ctx->pc = 0x1dd808u;

    // 0x1dd808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd80c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dd80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dd810: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dd814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dd81c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DD81Cu;
    {
        const bool branch_taken_0x1dd81c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD81Cu;
        // 0x1dd820: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd81c) {
            ctx->pc = 0x1DD870u;
            goto label_1dd870;
        }
    }
    ctx->pc = 0x1DD824u;
    // 0x1dd824: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1dd824u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1dd828: 0x8e22e680  lw          $v0, -0x1980($s1)
    ctx->pc = 0x1dd828u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E680u));
    // 0x1dd82c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dd830: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dd830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd834: 0x1065000e  beq         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD834u;
    {
        const bool branch_taken_0x1dd834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DD838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD834u;
        // 0x1dd838: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd834) {
            ctx->pc = 0x1DD870u;
            goto label_1dd870;
        }
    }
    ctx->pc = 0x1DD83Cu;
    // 0x1dd83c: 0x24a5d8d0  addiu       $a1, $a1, -0x2730
    ctx->pc = 0x1dd83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957264));
    // 0x1dd840: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DD840u;
    SET_GPR_U32(ctx, 31, 0x1DD848u);
    ctx->pc = 0x1DD844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD840u;
    // 0x1dd844: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DD840u, 0x1DD848u)) {
        return;
    }
    ctx->pc = 0x1DD848u;
label_1dd848:
    // 0x1dd848: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd84c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1dd84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dd850: 0x8e25e680  lw          $a1, -0x1980($s1)
    ctx->pc = 0x1dd850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960768)));
    // 0x1dd854: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1dd854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd858: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x1dd858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1dd85c: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x1dd85cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6));
    // 0x1dd860: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1dd860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dd864: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1dd864u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dd868: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x1dd868u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x1dd86c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1dd870:
    // 0x1dd870: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dd870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd87c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD87Cu;
        // 0x1dd880: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD884u;
    // 0x1dd884: 0x0  nop
    ctx->pc = 0x1dd884u;
    // NOP
    ctx->pc = 0x1dd888u;
}
