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

// Function: sub_00158828
// Address: 0x158828 - 0x1588c8
void sub_00158828_0x158828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158828_0x158828");
#endif

    switch (ctx->pc) {
        case 0x158854u: goto label_158854;
        case 0x158868u: goto label_158868;
        case 0x158894u: goto label_158894;
        case 0x1588a0u: goto label_1588a0;
        default: break;
    }

    ctx->pc = 0x158828u;

    // 0x158828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15882c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15882cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x158830: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x158830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x158834: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x158834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158838: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x158838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15883c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15883cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158840: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x158840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158848: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x158848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15884c: 0xc080924  jal         func_202490
    ctx->pc = 0x15884Cu;
    SET_GPR_U32(ctx, 31, 0x158854u);
    ctx->pc = 0x158850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15884Cu;
    // 0x158850: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x15884Cu, 0x158854u)) {
        return;
    }
    ctx->pc = 0x158854u;
label_158854:
    // 0x158854: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x158854u;
    {
        const bool branch_taken_0x158854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x158858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158854u;
        // 0x158858: 0x2603ffff  addiu       $v1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158854) {
            ctx->pc = 0x158880u;
            goto label_158880;
        }
    }
    ctx->pc = 0x15885Cu;
    // 0x15885c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15885cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158860: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x158860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x158864: 0x0  nop
    ctx->pc = 0x158864u;
    // NOP
label_158868:
    // 0x158868: 0x0  nop
    ctx->pc = 0x158868u;
    // NOP
    // 0x15886c: 0x0  nop
    ctx->pc = 0x15886cu;
    // NOP
    // 0x158870: 0x0  nop
    ctx->pc = 0x158870u;
    // NOP
    // 0x158874: 0x0  nop
    ctx->pc = 0x158874u;
    // NOP
    // 0x158878: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x158878u;
    {
        const bool branch_taken_0x158878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158878u;
        // 0x15887c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158878) {
            ctx->pc = 0x158868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158868;
        }
    }
    ctx->pc = 0x158880u;
label_158880:
    // 0x158880: 0x103140  sll         $a2, $s0, 5
    ctx->pc = 0x158880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x158884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x158884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x158888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15888c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15888Cu;
    SET_GPR_U32(ctx, 31, 0x158894u);
    ctx->pc = 0x158890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15888Cu;
    // 0x158890: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15888Cu, 0x158894u)) {
        return;
    }
    ctx->pc = 0x158894u;
label_158894:
    // 0x158894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158898: 0xc056408  jal         func_159020
    ctx->pc = 0x158898u;
    SET_GPR_U32(ctx, 31, 0x1588A0u);
    ctx->pc = 0x15889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158898u;
    // 0x15889c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x159020u, 0x158898u, 0x1588A0u)) {
        return;
    }
    ctx->pc = 0x1588A0u;
label_1588a0:
    // 0x1588a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1588a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1588a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1588a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1588a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1588ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1588acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1588b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1588b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1588b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1588b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1588b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1588b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1588bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1588BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1588C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1588BCu;
        // 0x1588c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1588BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1588C4u;
    // 0x1588c4: 0x0  nop
    ctx->pc = 0x1588c4u;
    // NOP
    ctx->pc = 0x1588c8u;
}
