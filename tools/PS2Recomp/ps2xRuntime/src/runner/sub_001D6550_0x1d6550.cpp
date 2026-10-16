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

// Function: sub_001D6550
// Address: 0x1d6550 - 0x1d65a8
void sub_001D6550_0x1d6550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6550_0x1d6550");
#endif

    switch (ctx->pc) {
        case 0x1d6550u: goto label_1d6550;
        case 0x1d6554u: goto label_1d6554;
        case 0x1d6558u: goto label_1d6558;
        case 0x1d655cu: goto label_1d655c;
        case 0x1d6560u: goto label_1d6560;
        case 0x1d6564u: goto label_1d6564;
        case 0x1d6568u: goto label_1d6568;
        case 0x1d656cu: goto label_1d656c;
        case 0x1d6570u: goto label_1d6570;
        case 0x1d6574u: goto label_1d6574;
        case 0x1d6578u: goto label_1d6578;
        case 0x1d657cu: goto label_1d657c;
        case 0x1d6580u: goto label_1d6580;
        case 0x1d6584u: goto label_1d6584;
        case 0x1d6588u: goto label_1d6588;
        case 0x1d658cu: goto label_1d658c;
        case 0x1d6590u: goto label_1d6590;
        case 0x1d6594u: goto label_1d6594;
        case 0x1d6598u: goto label_1d6598;
        case 0x1d659cu: goto label_1d659c;
        case 0x1d65a0u: goto label_1d65a0;
        case 0x1d65a4u: goto label_1d65a4;
        default: break;
    }

    ctx->pc = 0x1d6550u;

label_1d6550:
    // 0x1d6550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d6554:
    // 0x1d6554: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d6554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d6558:
    // 0x1d6558: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d655c:
    // 0x1d655c: 0x24428818  addiu       $v0, $v0, -0x77E8
    ctx->pc = 0x1d655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936600));
label_1d6560:
    // 0x1d6560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6564:
    // 0x1d6564: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6568:
    // 0x1d6568: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d6568u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d656c:
    // 0x1d656c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1d656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d6570:
    // 0x1d6570: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d6570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1d6574:
    // 0x1d6574: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d6574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6578:
    // 0x1d6578: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1d6578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1d657c:
    // 0x1d657c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1d657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1d6580:
    // 0x1d6580: 0x40f809  jalr        $v0
label_1d6584:
    if (ctx->pc == 0x1D6584u) {
        ctx->pc = 0x1D6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6580u;
        // 0x1d6584: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6588u;
        goto label_1d6588;
    }
    ctx->pc = 0x1D6580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6588u);
        ctx->pc = 0x1D6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6580u;
        // 0x1d6584: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6580u, 0x1D6588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6588u;
label_1d6588:
    // 0x1d6588: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d6588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1d658c:
    // 0x1d658c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d6590:
    // 0x1d6590: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6594:
    // 0x1d6594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6598:
    // 0x1d6598: 0xac408828  sw          $zero, -0x77D8($v0)
    ctx->pc = 0x1d6598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936616), GPR_U32(ctx, 0));
label_1d659c:
    // 0x1d659c: 0x3e00008  jr          $ra
label_1d65a0:
    if (ctx->pc == 0x1D65A0u) {
        ctx->pc = 0x1D65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D659Cu;
        // 0x1d65a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D65A4u;
        goto label_1d65a4;
    }
    ctx->pc = 0x1D659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D65A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D659Cu;
        // 0x1d65a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D659Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D65A4u;
label_1d65a4:
    // 0x1d65a4: 0x0  nop
    ctx->pc = 0x1d65a4u;
    // NOP
    ctx->pc = 0x1d65a8u;
}
