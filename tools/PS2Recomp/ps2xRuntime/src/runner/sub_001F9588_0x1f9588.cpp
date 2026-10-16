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

// Function: sub_001F9588
// Address: 0x1f9588 - 0x1f9618
void sub_001F9588_0x1f9588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9588_0x1f9588");
#endif

    switch (ctx->pc) {
        case 0x1f95b4u: goto label_1f95b4;
        case 0x1f95f0u: goto label_1f95f0;
        default: break;
    }

    ctx->pc = 0x1f9588u;

    // 0x1f9588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f9588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f958c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1f958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1f9590: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f9590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9594: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f9598: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f9598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f959c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f959cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f95a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f95a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f95a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f95a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f95ac: 0xc07e534  jal         func_1F94D0
    ctx->pc = 0x1F95ACu;
    SET_GPR_U32(ctx, 31, 0x1F95B4u);
    ctx->pc = 0x1F95B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95ACu;
    // 0x1f95b0: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F94D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F94D0u, 0x1F95ACu, 0x1F95B4u)) {
        return;
    }
    ctx->pc = 0x1F95B4u;
label_1f95b4:
    // 0x1f95b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f95b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f95b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f95bc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1f95c0: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x1f95c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x1f95c4: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1f95c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1f95c8: 0x24429518  addiu       $v0, $v0, -0x6AE8
    ctx->pc = 0x1f95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939928));
    // 0x1f95cc: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x1f95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x1f95d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f95d4: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1f95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1f95d8: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x1f95d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x1f95dc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1f95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1f95e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f95e4: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x1f95e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f95e8: 0xc07e144  jal         func_1F8510
    ctx->pc = 0x1F95E8u;
    SET_GPR_U32(ctx, 31, 0x1F95F0u);
    ctx->pc = 0x1F95ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95E8u;
    // 0x1f95ec: 0xa6030006  sh          $v1, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F95E8u, 0x1F95F0u)) {
        return;
    }
    ctx->pc = 0x1F95F0u;
label_1f95f0:
    // 0x1f95f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f95f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f95f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f95f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f95f8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1f95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1f95fc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1f95fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1f9600: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1f9600u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9604: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f9604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9608: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f9608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f960c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f960cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9610: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9610u;
        // 0x1f9614: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9618u;
}
