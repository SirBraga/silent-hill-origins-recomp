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

// Function: sub_001FBF60
// Address: 0x1fbf60 - 0x1fbfb0
void sub_001FBF60_0x1fbf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBF60_0x1fbf60");
#endif

    switch (ctx->pc) {
        case 0x1fbf84u: goto label_1fbf84;
        case 0x1fbf9cu: goto label_1fbf9c;
        default: break;
    }

    ctx->pc = 0x1fbf60u;

    // 0x1fbf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbf64: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1fbf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1fbf68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fbf6c: 0x8c625560  lw          $v0, 0x5560($v1)
    ctx->pc = 0x1fbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735560u));
    // 0x1fbf70: 0x24705560  addiu       $s0, $v1, 0x5560
    ctx->pc = 0x1fbf70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21856));
    // 0x1fbf74: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBF74u;
    {
        const bool branch_taken_0x1fbf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF74u;
        // 0x1fbf78: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf74) {
            ctx->pc = 0x1FBF9Cu;
            goto label_1fbf9c;
        }
    }
    ctx->pc = 0x1FBF7Cu;
    // 0x1fbf7c: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FBF7Cu;
    SET_GPR_U32(ctx, 31, 0x1FBF84u);
    ctx->pc = 0x1FB210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB210u, 0x1FBF7Cu, 0x1FBF84u)) {
        return;
    }
    ctx->pc = 0x1FBF84u;
label_1fbf84:
    // 0x1fbf84: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1fbf84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1fbf88: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1fbf88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1fbf8c: 0x24a530e8  addiu       $a1, $a1, 0x30E8
    ctx->pc = 0x1fbf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12520));
    // 0x1fbf90: 0x24c64150  addiu       $a2, $a2, 0x4150
    ctx->pc = 0x1fbf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16720));
    // 0x1fbf94: 0xc07eb06  jal         func_1FAC18
    ctx->pc = 0x1FBF94u;
    SET_GPR_U32(ctx, 31, 0x1FBF9Cu);
    ctx->pc = 0x1FBF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBF94u;
    // 0x1fbf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FAC18u, 0x1FBF94u, 0x1FBF9Cu)) {
        return;
    }
    ctx->pc = 0x1FBF9Cu;
label_1fbf9c:
    // 0x1fbf9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbf9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbfa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFA8u;
        // 0x1fbfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBFB0u;
}
