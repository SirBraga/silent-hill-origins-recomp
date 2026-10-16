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

// Function: sub_001DFF68
// Address: 0x1dff68 - 0x1e0000
void sub_001DFF68_0x1dff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFF68_0x1dff68");
#endif

    switch (ctx->pc) {
        case 0x1dfff4u: goto label_1dfff4;
        default: break;
    }

    ctx->pc = 0x1dff68u;

    // 0x1dff68: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1dff68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1dff6c: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1dff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1dff70: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1dff70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1dff74: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1dff74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1dff78: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1dff78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1dff7c: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1dff7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
    // 0x1dff80: 0x3c0a001e  lui         $t2, 0x1E
    ctx->pc = 0x1dff80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)30 << 16));
    // 0x1dff84: 0x3c0b001e  lui         $t3, 0x1E
    ctx->pc = 0x1dff84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)30 << 16));
    // 0x1dff88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dff8c: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x1dff8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1dff90: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1dff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1dff94: 0x24a50178  addiu       $a1, $a1, 0x178
    ctx->pc = 0x1dff94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 376));
    // 0x1dff98: 0x24c60090  addiu       $a2, $a2, 0x90
    ctx->pc = 0x1dff98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x1dff9c: 0x24e70208  addiu       $a3, $a3, 0x208
    ctx->pc = 0x1dff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 520));
    // 0x1dffa0: 0x25080250  addiu       $t0, $t0, 0x250
    ctx->pc = 0x1dffa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 592));
    // 0x1dffa4: 0x2529fc88  addiu       $t1, $t1, -0x378
    ctx->pc = 0x1dffa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966408));
    // 0x1dffa8: 0x254afdf0  addiu       $t2, $t2, -0x210
    ctx->pc = 0x1dffa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966768));
    // 0x1dffac: 0x256bff58  addiu       $t3, $t3, -0xA8
    ctx->pc = 0x1dffacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967128));
    // 0x1dffb0: 0x24020a02  addiu       $v0, $zero, 0xA02
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
    // 0x1dffb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dffb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dffbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dffbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffc0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1dffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1dffc4: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1dffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1dffc8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dffcc: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1dffccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1dffd0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1dffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1dffd4: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x1dffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x1dffd8: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x1dffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x1dffdc: 0xafaa0024  sw          $t2, 0x24($sp)
    ctx->pc = 0x1dffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 10));
    // 0x1dffe0: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x1dffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x1dffe4: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1dffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1dffe8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1dffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1dffec: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1DFFECu;
    SET_GPR_U32(ctx, 31, 0x1DFFF4u);
    ctx->pc = 0x1DFFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFECu;
    // 0x1dfff0: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1DFFECu, 0x1DFFF4u)) {
        return;
    }
    ctx->pc = 0x1DFFF4u;
label_1dfff4:
    // 0x1dfff4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dfff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFF8u;
        // 0x1dfffc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0000u;
}
