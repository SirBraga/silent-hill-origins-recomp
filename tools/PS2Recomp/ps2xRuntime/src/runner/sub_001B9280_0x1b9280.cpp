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

// Function: sub_001B9280
// Address: 0x1b9280 - 0x1b9308
void sub_001B9280_0x1b9280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9280_0x1b9280");
#endif

    switch (ctx->pc) {
        case 0x1b92a0u: goto label_1b92a0;
        case 0x1b92c4u: goto label_1b92c4;
        case 0x1b92dcu: goto label_1b92dc;
        case 0x1b92e8u: goto label_1b92e8;
        case 0x1b92f4u: goto label_1b92f4;
        default: break;
    }

    ctx->pc = 0x1b9280u;

    // 0x1b9280: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b9280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b9284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9288: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1b9288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1b928c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9294: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b9294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b9298: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B9298u;
    SET_GPR_U32(ctx, 31, 0x1B92A0u);
    ctx->pc = 0x1B929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9298u;
    // 0x1b929c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B9298u, 0x1B92A0u)) {
        return;
    }
    ctx->pc = 0x1B92A0u;
label_1b92a0:
    // 0x1b92a0: 0x8e070264  lw          $a3, 0x264($s0)
    ctx->pc = 0x1b92a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1b92a4: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x1b92a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1b92a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B92A8u;
    {
        const bool branch_taken_0x1b92a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92A8u;
        // 0x1b92ac: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92a8) {
            ctx->pc = 0x1B92CCu;
            goto label_1b92cc;
        }
    }
    ctx->pc = 0x1B92B0u;
    // 0x1b92b0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b92b4: 0x8e0602ac  lw          $a2, 0x2AC($s0)
    ctx->pc = 0x1b92b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1b92b8: 0x24a5ce40  addiu       $a1, $a1, -0x31C0
    ctx->pc = 0x1b92b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954560));
    // 0x1b92bc: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1B92BCu;
    SET_GPR_U32(ctx, 31, 0x1B92C4u);
    ctx->pc = 0x1B92C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92BCu;
    // 0x1b92c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1B92BCu, 0x1B92C4u)) {
        return;
    }
    ctx->pc = 0x1B92C4u;
label_1b92c4:
    // 0x1b92c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B92C4u;
    {
        const bool branch_taken_0x1b92c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92C4u;
        // 0x1b92c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b92c4) {
            ctx->pc = 0x1B92E0u;
            goto label_1b92e0;
        }
    }
    ctx->pc = 0x1B92CCu;
label_1b92cc:
    // 0x1b92cc: 0x8e0602ac  lw          $a2, 0x2AC($s0)
    ctx->pc = 0x1b92ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1b92d0: 0x24a5ce48  addiu       $a1, $a1, -0x31B8
    ctx->pc = 0x1b92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954568));
    // 0x1b92d4: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1B92D4u;
    SET_GPR_U32(ctx, 31, 0x1B92DCu);
    ctx->pc = 0x1B92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92D4u;
    // 0x1b92d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1B92D4u, 0x1B92DCu)) {
        return;
    }
    ctx->pc = 0x1B92DCu;
label_1b92dc:
    // 0x1b92dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b92dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b92e0:
    // 0x1b92e0: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1B92E0u;
    SET_GPR_U32(ctx, 31, 0x1B92E8u);
    ctx->pc = 0x1B92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92E0u;
    // 0x1b92e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1B92E0u, 0x1B92E8u)) {
        return;
    }
    ctx->pc = 0x1B92E8u;
label_1b92e8:
    // 0x1b92e8: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1b92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
    // 0x1b92ec: 0xc06e1f8  jal         func_1B87E0
    ctx->pc = 0x1B92ECu;
    SET_GPR_U32(ctx, 31, 0x1B92F4u);
    ctx->pc = 0x1B92F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92ECu;
    // 0x1b92f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B87E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B87E0u, 0x1B92ECu, 0x1B92F4u)) {
        return;
    }
    ctx->pc = 0x1B92F4u;
label_1b92f4:
    // 0x1b92f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1b92f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b92f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b92f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b92fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B92FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92FCu;
        // 0x1b9300: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B92FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9304u;
    // 0x1b9304: 0x0  nop
    ctx->pc = 0x1b9304u;
    // NOP
    ctx->pc = 0x1b9308u;
}
