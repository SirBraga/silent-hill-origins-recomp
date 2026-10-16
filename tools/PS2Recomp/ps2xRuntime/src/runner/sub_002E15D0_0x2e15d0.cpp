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

// Function: sub_002E15D0
// Address: 0x2e15d0 - 0x2e1630
void sub_002E15D0_0x2e15d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E15D0_0x2e15d0");
#endif

    switch (ctx->pc) {
        case 0x2e15ecu: goto label_2e15ec;
        default: break;
    }

    ctx->pc = 0x2e15d0u;

    // 0x2e15d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e15d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e15d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e15d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e15d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e15d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e15dc: 0x34a50800  ori         $a1, $a1, 0x800
    ctx->pc = 0x2e15dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x2e15e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e15e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e15e4: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2E15E4u;
    SET_GPR_U32(ctx, 31, 0x2E15ECu);
    ctx->pc = 0x2E15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E15E4u;
    // 0x2e15e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2E15E4u, 0x2E15ECu)) {
        return;
    }
    ctx->pc = 0x2E15ECu;
label_2e15ec:
    // 0x2e15ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e15ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e15f0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E15F0u;
    {
        const bool branch_taken_0x2e15f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15F0u;
        // 0x2e15f4: 0x24a30010  addiu       $v1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15f0) {
            ctx->pc = 0x2E161Cu;
            goto label_2e161c;
        }
    }
    ctx->pc = 0x2E15F8u;
    // 0x2e15f8: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2e15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2e15fc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2e15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2e1600: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e1600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e1604: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e1604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e1608: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2e1608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e160c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e160cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e1610: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2e1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e1614: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2e1614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e1618: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e1618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2e161c:
    // 0x2e161c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e161cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1620: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2e1620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1628: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1628u;
        // 0x2e162c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1630u;
}
