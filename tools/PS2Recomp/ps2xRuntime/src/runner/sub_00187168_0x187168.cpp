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

// Function: sub_00187168
// Address: 0x187168 - 0x187200
void sub_00187168_0x187168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187168_0x187168");
#endif

    switch (ctx->pc) {
        case 0x187190u: goto label_187190;
        case 0x1871f4u: goto label_1871f4;
        default: break;
    }

    ctx->pc = 0x187168u;

    // 0x187168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18716c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x187170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187174: 0x24428768  addiu       $v0, $v0, -0x7898
    ctx->pc = 0x187174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936424));
    // 0x187178: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x187178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x18717c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x187180: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x187180u;
    {
        const bool branch_taken_0x187180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187180u;
        // 0x187184: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187180) {
            ctx->pc = 0x1871E4u;
            goto label_1871e4;
        }
    }
    ctx->pc = 0x187188u;
    // 0x187188: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x187188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18718c: 0x0  nop
    ctx->pc = 0x18718cu;
    // NOP
label_187190:
    // 0x187190: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x187190u;
    {
        const bool branch_taken_0x187190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187190) {
            ctx->pc = 0x187194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187190u;
            // 0x187194: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1871D8u;
            goto label_1871d8;
        }
    }
    ctx->pc = 0x187198u;
    // 0x187198: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x187198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x18719c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18719Cu;
    {
        const bool branch_taken_0x18719c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1871A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18719Cu;
        // 0x1871a0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18719c) {
            ctx->pc = 0x1871ACu;
            goto label_1871ac;
        }
    }
    ctx->pc = 0x1871A4u;
    // 0x1871a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1871A4u;
    {
        const bool branch_taken_0x1871a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871A4u;
        // 0x1871a8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871a4) {
            ctx->pc = 0x1871B0u;
            goto label_1871b0;
        }
    }
    ctx->pc = 0x1871ACu;
label_1871ac:
    // 0x1871ac: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1871acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1871b0:
    // 0x1871b0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1871b4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1871B4u;
    {
        const bool branch_taken_0x1871b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1871B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871B4u;
        // 0x1871b8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871b4) {
            ctx->pc = 0x1871C4u;
            goto label_1871c4;
        }
    }
    ctx->pc = 0x1871BCu;
    // 0x1871bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1871BCu;
    {
        const bool branch_taken_0x1871bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871BCu;
        // 0x1871c0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871bc) {
            ctx->pc = 0x1871C8u;
            goto label_1871c8;
        }
    }
    ctx->pc = 0x1871C4u;
label_1871c4:
    // 0x1871c4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1871c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1871c8:
    // 0x1871c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1871cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1871ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1871d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1871d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1871d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1871d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1871d8:
    // 0x1871d8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1871D8u;
    {
        const bool branch_taken_0x1871d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1871d8) {
            ctx->pc = 0x1871DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1871D8u;
            // 0x1871dc: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187190;
        }
    }
    ctx->pc = 0x1871E0u;
    // 0x1871e0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1871e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1871e4:
    // 0x1871e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1871E4u;
    {
        const bool branch_taken_0x1871e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871E4u;
        // 0x1871e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871e4) {
            ctx->pc = 0x1871F8u;
            goto label_1871f8;
        }
    }
    ctx->pc = 0x1871ECu;
    // 0x1871ec: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1871ECu;
    SET_GPR_U32(ctx, 31, 0x1871F4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1871ECu, 0x1871F4u)) {
        return;
    }
    ctx->pc = 0x1871F4u;
label_1871f4:
    // 0x1871f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1871f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1871f8:
    // 0x1871f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1871F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1871FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871F8u;
        // 0x1871fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1871F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187200u;
}
