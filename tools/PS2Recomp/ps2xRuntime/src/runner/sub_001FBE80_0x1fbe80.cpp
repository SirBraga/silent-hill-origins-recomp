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

// Function: sub_001FBE80
// Address: 0x1fbe80 - 0x1fbed0
void sub_001FBE80_0x1fbe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBE80_0x1fbe80");
#endif

    switch (ctx->pc) {
        case 0x1fbea4u: goto label_1fbea4;
        case 0x1fbebcu: goto label_1fbebc;
        default: break;
    }

    ctx->pc = 0x1fbe80u;

    // 0x1fbe80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbe84: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fbe84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fbe88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbe8c: 0x8c625540  lw          $v0, 0x5540($v1)
    ctx->pc = 0x1fbe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735540u));
    // 0x1fbe90: 0x24705540  addiu       $s0, $v1, 0x5540
    ctx->pc = 0x1fbe90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21824));
    // 0x1fbe94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBE94u;
    {
        const bool branch_taken_0x1fbe94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE94u;
        // 0x1fbe98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe94) {
            ctx->pc = 0x1FBEBCu;
            goto label_1fbebc;
        }
    }
    ctx->pc = 0x1FBE9Cu;
    // 0x1fbe9c: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FBE9Cu;
    SET_GPR_U32(ctx, 31, 0x1FBEA4u);
    ctx->pc = 0x1FB210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB210u, 0x1FBE9Cu, 0x1FBEA4u)) {
        return;
    }
    ctx->pc = 0x1FBEA4u;
label_1fbea4:
    // 0x1fbea4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fbea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fbea8: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fbea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fbeac: 0x24a530b8  addiu       $a1, $a1, 0x30B8
    ctx->pc = 0x1fbeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12472));
    // 0x1fbeb0: 0x24c64150  addiu       $a2, $a2, 0x4150
    ctx->pc = 0x1fbeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16720));
    // 0x1fbeb4: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FBEB4u;
    SET_GPR_U32(ctx, 31, 0x1FBEBCu);
    ctx->pc = 0x1FBEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBEB4u;
    // 0x1fbeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FBEB4u, 0x1FBEBCu)) {
        return;
    }
    ctx->pc = 0x1FBEBCu;
label_1fbebc:
    // 0x1fbebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEC8u;
        // 0x1fbecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBED0u;
}
