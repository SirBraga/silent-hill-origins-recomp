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

// Function: sub_001A5210
// Address: 0x1a5210 - 0x1a5268
void sub_001A5210_0x1a5210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5210_0x1a5210");
#endif

    switch (ctx->pc) {
        case 0x1a5224u: goto label_1a5224;
        default: break;
    }

    ctx->pc = 0x1a5210u;

    // 0x1a5210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a521c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1A521Cu;
    SET_GPR_U32(ctx, 31, 0x1A5224u);
    ctx->pc = 0x1A5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A521Cu;
    // 0x1a5220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1A521Cu, 0x1A5224u)) {
        return;
    }
    ctx->pc = 0x1A5224u;
label_1a5224:
    // 0x1a5224: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1a5224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1a5228: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1a5228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1a522c: 0x2463b228  addiu       $v1, $v1, -0x4DD8
    ctx->pc = 0x1a522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947368));
    // 0x1a5230: 0x2484b248  addiu       $a0, $a0, -0x4DB8
    ctx->pc = 0x1a5230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947400));
    // 0x1a5234: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1a5234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1a5238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a5238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a523c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x1a523cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x1a5240: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1a5240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1a5244: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1a5244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1a5248: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1a5248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1a524c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1a524cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1a5250: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1a5250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1a5254: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1a5254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1a5258: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a5258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a525c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5260: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5260u;
        // 0x1a5264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5268u;
}
