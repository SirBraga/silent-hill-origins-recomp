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

// Function: sub_0027E180
// Address: 0x27e180 - 0x27e1f0
void sub_0027E180_0x27e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E180_0x27e180");
#endif

    switch (ctx->pc) {
        case 0x27e1acu: goto label_27e1ac;
        case 0x27e1d4u: goto label_27e1d4;
        default: break;
    }

    ctx->pc = 0x27e180u;

    // 0x27e180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27e184: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x27e184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x27e188: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x27e188u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x27e18c: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27e18cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27e190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e194: 0x24c6e460  addiu       $a2, $a2, -0x1BA0
    ctx->pc = 0x27e194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960224));
    // 0x27e198: 0x24e7e478  addiu       $a3, $a3, -0x1B88
    ctx->pc = 0x27e198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960248));
    // 0x27e19c: 0x2508e4d0  addiu       $t0, $t0, -0x1B30
    ctx->pc = 0x27e19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960336));
    // 0x27e1a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27e1a4: 0xc095b24  jal         func_256C90
    ctx->pc = 0x27E1A4u;
    SET_GPR_U32(ctx, 31, 0x27E1ACu);
    ctx->pc = 0x27E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1A4u;
    // 0x27e1a8: 0x24050122  addiu       $a1, $zero, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C90u, 0x27E1A4u, 0x27E1ACu)) {
        return;
    }
    ctx->pc = 0x27E1ACu;
label_27e1ac:
    // 0x27e1ac: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27E1ACu;
    {
        const bool branch_taken_0x27e1ac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x27E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1ACu;
        // 0x27e1b0: 0xaf8287f0  sw          $v0, -0x7810($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1ac) {
            ctx->pc = 0x27E1E0u;
            goto label_27e1e0;
        }
    }
    ctx->pc = 0x27E1B4u;
    // 0x27e1b4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27e1b8: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x27e1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x27e1bc: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x27e1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
    // 0x27e1c0: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x27e1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
    // 0x27e1c4: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x27e1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
    // 0x27e1c8: 0x24e7e4d8  addiu       $a3, $a3, -0x1B28
    ctx->pc = 0x27e1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960344));
    // 0x27e1cc: 0xc095b36  jal         func_256CD8
    ctx->pc = 0x27E1CCu;
    SET_GPR_U32(ctx, 31, 0x27E1D4u);
    ctx->pc = 0x27E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E1CCu;
    // 0x27e1d0: 0x24040122  addiu       $a0, $zero, 0x122 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256CD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256CD8u, 0x27E1CCu, 0x27E1D4u)) {
        return;
    }
    ctx->pc = 0x27E1D4u;
label_27e1d4:
    // 0x27e1d4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x27e1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x27e1d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27E1D8u;
    {
        const bool branch_taken_0x27e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1D8u;
        // 0x27e1dc: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e1d8) {
            ctx->pc = 0x27E1E4u;
            goto label_27e1e4;
        }
    }
    ctx->pc = 0x27E1E0u;
label_27e1e0:
    // 0x27e1e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27e1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e1e4:
    // 0x27e1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x27E1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E1E8u;
        // 0x27e1ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E1F0u;
}
