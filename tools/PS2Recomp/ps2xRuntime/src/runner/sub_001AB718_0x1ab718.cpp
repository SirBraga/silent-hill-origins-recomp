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

// Function: sub_001AB718
// Address: 0x1ab718 - 0x1ab768
void sub_001AB718_0x1ab718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB718_0x1ab718");
#endif

    switch (ctx->pc) {
        case 0x1ab754u: goto label_1ab754;
        default: break;
    }

    ctx->pc = 0x1ab718u;

    // 0x1ab718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab71c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ab71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ab720: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ab720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ab724: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ab724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ab728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ab72c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ab72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ab730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab738: 0x2442b690  addiu       $v0, $v0, -0x4970
    ctx->pc = 0x1ab738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948496));
    // 0x1ab73c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ab73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ab740: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ab740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1ab744: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1ab744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ab748: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1ab748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1ab74c: 0xc06ae08  jal         func_1AB820
    ctx->pc = 0x1AB74Cu;
    SET_GPR_U32(ctx, 31, 0x1AB754u);
    ctx->pc = 0x1AB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB74Cu;
    // 0x1ab750: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AB820u, 0x1AB74Cu, 0x1AB754u)) {
        return;
    }
    ctx->pc = 0x1AB754u;
label_1ab754:
    // 0x1ab754: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ab754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab75c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ab75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab760: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB760u;
        // 0x1ab764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB768u;
}
