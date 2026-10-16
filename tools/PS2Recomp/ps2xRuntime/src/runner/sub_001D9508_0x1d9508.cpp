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

// Function: sub_001D9508
// Address: 0x1d9508 - 0x1d9598
void sub_001D9508_0x1d9508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9508_0x1d9508");
#endif

    switch (ctx->pc) {
        case 0x1d9574u: goto label_1d9574;
        default: break;
    }

    ctx->pc = 0x1d9508u;

    // 0x1d9508: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d950c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d9510: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d9510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d9514: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d951c: 0x8c439dd8  lw          $v1, -0x6228($v0)
    ctx->pc = 0x1d951cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339DD8u));
    // 0x1d9520: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9524: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1d9524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d9528: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9528u;
    {
        const bool branch_taken_0x1d9528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9528u;
        // 0x1d952c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9528) {
            ctx->pc = 0x1D9544u;
            goto label_1d9544;
        }
    }
    ctx->pc = 0x1D9530u;
    // 0x1d9530: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1d9530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d9534: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1d9534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d9538: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9538u;
    {
        const bool branch_taken_0x1d9538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9538u;
        // 0x1d953c: 0xae229dd8  sw          $v0, -0x6228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294942168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9538) {
            ctx->pc = 0x1D9564u;
            goto label_1d9564;
        }
    }
    ctx->pc = 0x1D9540u;
    // 0x1d9540: 0xae309dd8  sw          $s0, -0x6228($s1)
    ctx->pc = 0x1d9540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942168), GPR_U32(ctx, 16));
label_1d9544:
    // 0x1d9544: 0x8e239dd8  lw          $v1, -0x6228($s1)
    ctx->pc = 0x1d9544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942168)));
    // 0x1d9548: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1d9548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d954c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D954Cu;
    {
        const bool branch_taken_0x1d954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D954Cu;
        // 0x1d9550: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d954c) {
            ctx->pc = 0x1D9564u;
            goto label_1d9564;
        }
    }
    ctx->pc = 0x1D9554u;
    // 0x1d9554: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1d9554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d9558: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9558u;
    {
        const bool branch_taken_0x1d9558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9558u;
        // 0x1d955c: 0xae229dd8  sw          $v0, -0x6228($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294942168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9558) {
            ctx->pc = 0x1D9564u;
            goto label_1d9564;
        }
    }
    ctx->pc = 0x1D9560u;
    // 0x1d9560: 0xae309dd8  sw          $s0, -0x6228($s1)
    ctx->pc = 0x1d9560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942168), GPR_U32(ctx, 16));
label_1d9564:
    // 0x1d9564: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d9564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d9568: 0x26259dd8  addiu       $a1, $s1, -0x6228
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942168));
    // 0x1d956c: 0xc0bab48  jal         func_2EAD20
    ctx->pc = 0x1D956Cu;
    SET_GPR_U32(ctx, 31, 0x1D9574u);
    ctx->pc = 0x1D9570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D956Cu;
    // 0x1d9570: 0x8c448a64  lw          $a0, -0x759C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EAD20u, 0x1D956Cu, 0x1D9574u)) {
        return;
    }
    ctx->pc = 0x1D9574u;
label_1d9574:
    // 0x1d9574: 0x8e229dd8  lw          $v0, -0x6228($s1)
    ctx->pc = 0x1d9574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942168)));
    // 0x1d9578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d957c: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1d957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x1d9580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9584: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d9584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9588: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1d958c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D958Cu;
        // 0x1d9590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9594u;
    // 0x1d9594: 0x0  nop
    ctx->pc = 0x1d9594u;
    // NOP
    ctx->pc = 0x1d9598u;
}
