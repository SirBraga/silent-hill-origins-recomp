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

// Function: sub_00148148
// Address: 0x148148 - 0x1481c8
void sub_00148148_0x148148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148148_0x148148");
#endif

    switch (ctx->pc) {
        case 0x148170u: goto label_148170;
        case 0x148194u: goto label_148194;
        case 0x1481acu: goto label_1481ac;
        default: break;
    }

    ctx->pc = 0x148148u;

    // 0x148148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14814c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14814cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x148150: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148154: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x148154u;
    {
        const bool branch_taken_0x148154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x148158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148154u;
        // 0x148158: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148154) {
            ctx->pc = 0x1481ACu;
            goto label_1481ac;
        }
    }
    ctx->pc = 0x14815Cu;
    // 0x14815c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x14815Cu;
    {
        const bool branch_taken_0x14815c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14815Cu;
        // 0x148160: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14815c) {
            ctx->pc = 0x14819Cu;
            goto label_14819c;
        }
    }
    ctx->pc = 0x148164u;
    // 0x148164: 0x261015b8  addiu       $s0, $s0, 0x15B8
    ctx->pc = 0x148164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5560));
    // 0x148168: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x148168u;
    SET_GPR_U32(ctx, 31, 0x148170u);
    ctx->pc = 0x14816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148168u;
    // 0x14816c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x148168u, 0x148170u)) {
        return;
    }
    ctx->pc = 0x148170u;
label_148170:
    // 0x148170: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x148170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x148174: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x148174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x148178: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14817c: 0xac62ee68  sw          $v0, -0x1198($v1)
    ctx->pc = 0x14817cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEE68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEE68u, _value); } while (0);
    // 0x148180: 0x2484ee70  addiu       $a0, $a0, -0x1190
    ctx->pc = 0x148180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962800));
    // 0x148184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148188: 0x24c681c8  addiu       $a2, $a2, -0x7E38
    ctx->pc = 0x148188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934984));
    // 0x14818c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x14818Cu;
    SET_GPR_U32(ctx, 31, 0x148194u);
    ctx->pc = 0x148190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14818Cu;
    // 0x148190: 0x24070154  addiu       $a3, $zero, 0x154 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x14818Cu, 0x148194u)) {
        return;
    }
    ctx->pc = 0x148194u;
label_148194:
    // 0x148194: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x148194u;
    {
        const bool branch_taken_0x148194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148194u;
        // 0x148198: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148194) {
            ctx->pc = 0x1481B0u;
            goto label_1481b0;
        }
    }
    ctx->pc = 0x14819Cu;
label_14819c:
    // 0x14819c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14819cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1481a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1481a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1481a4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1481A4u;
    SET_GPR_U32(ctx, 31, 0x1481ACu);
    ctx->pc = 0x1481A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1481A4u;
    // 0x1481a8: 0x2484ee70  addiu       $a0, $a0, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1481A4u, 0x1481ACu)) {
        return;
    }
    ctx->pc = 0x1481ACu;
label_1481ac:
    // 0x1481ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1481acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1481b0:
    // 0x1481b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1481b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1481b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1481B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1481B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1481B4u;
        // 0x1481b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1481B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1481BCu;
    // 0x1481bc: 0x0  nop
    ctx->pc = 0x1481bcu;
    // NOP
    // 0x1481c0: 0x0  nop
    ctx->pc = 0x1481c0u;
    // NOP
    // 0x1481c4: 0x0  nop
    ctx->pc = 0x1481c4u;
    // NOP
    ctx->pc = 0x1481c8u;
}
