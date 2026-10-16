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

// Function: sub_001E3E30
// Address: 0x1e3e30 - 0x1e3ec8
void sub_001E3E30_0x1e3e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3E30_0x1e3e30");
#endif

    switch (ctx->pc) {
        case 0x1e3ebcu: goto label_1e3ebc;
        default: break;
    }

    ctx->pc = 0x1e3e30u;

    // 0x1e3e30: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e3e34: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e3e38: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e3e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e3e3c: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1e3e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1e3e40: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1e3e40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1e3e44: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1e3e44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
    // 0x1e3e48: 0x3c0a001e  lui         $t2, 0x1E
    ctx->pc = 0x1e3e48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)30 << 16));
    // 0x1e3e4c: 0x3c0b001e  lui         $t3, 0x1E
    ctx->pc = 0x1e3e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)30 << 16));
    // 0x1e3e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e3e54: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x1e3e54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e3e58: 0x24633ec8  addiu       $v1, $v1, 0x3EC8
    ctx->pc = 0x1e3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16072));
    // 0x1e3e5c: 0x24a53f18  addiu       $a1, $a1, 0x3F18
    ctx->pc = 0x1e3e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16152));
    // 0x1e3e60: 0x24c63ee0  addiu       $a2, $a2, 0x3EE0
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16096));
    // 0x1e3e64: 0x24e73f50  addiu       $a3, $a3, 0x3F50
    ctx->pc = 0x1e3e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16208));
    // 0x1e3e68: 0x25083f78  addiu       $t0, $t0, 0x3F78
    ctx->pc = 0x1e3e68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16248));
    // 0x1e3e6c: 0x25293bf0  addiu       $t1, $t1, 0x3BF0
    ctx->pc = 0x1e3e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15344));
    // 0x1e3e70: 0x254a3d10  addiu       $t2, $t2, 0x3D10
    ctx->pc = 0x1e3e70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15632));
    // 0x1e3e74: 0x256b3e20  addiu       $t3, $t3, 0x3E20
    ctx->pc = 0x1e3e74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15904));
    // 0x1e3e78: 0x24020a0b  addiu       $v0, $zero, 0xA0B
    ctx->pc = 0x1e3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x1e3e7c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e3e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e3e80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e3e84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e3e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3e88: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1e3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1e3e8c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1e3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1e3e90: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1e3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1e3e94: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1e3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1e3e98: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1e3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1e3e9c: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x1e3e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x1e3ea0: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x1e3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x1e3ea4: 0xafaa0024  sw          $t2, 0x24($sp)
    ctx->pc = 0x1e3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 10));
    // 0x1e3ea8: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x1e3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x1e3eac: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1e3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1e3eb0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1e3eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1e3eb4: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1E3EB4u;
    SET_GPR_U32(ctx, 31, 0x1E3EBCu);
    ctx->pc = 0x1E3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3EB4u;
    // 0x1e3eb8: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1E3EB4u, 0x1E3EBCu)) {
        return;
    }
    ctx->pc = 0x1E3EBCu;
label_1e3ebc:
    // 0x1e3ebc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e3ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EC0u;
        // 0x1e3ec4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3EC8u;
}
