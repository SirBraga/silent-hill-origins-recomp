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

// Function: sub_00198B00
// Address: 0x198b00 - 0x198b60
void sub_00198B00_0x198b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198B00_0x198b00");
#endif

    switch (ctx->pc) {
        case 0x198b2cu: goto label_198b2c;
        case 0x198b38u: goto label_198b38;
        case 0x198b44u: goto label_198b44;
        default: break;
    }

    ctx->pc = 0x198b00u;

    // 0x198b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198b04: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x198b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x198b08: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x198b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x198b0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x198b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x198b10: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x198b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x198b14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x198b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198b1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x198b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198b24: 0xc0aa71a  jal         func_2A9C68
    ctx->pc = 0x198B24u;
    SET_GPR_U32(ctx, 31, 0x198B2Cu);
    ctx->pc = 0x198B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B24u;
    // 0x198b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9C68u, 0x198B24u, 0x198B2Cu)) {
        return;
    }
    ctx->pc = 0x198B2Cu;
label_198b2c:
    // 0x198b2c: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x198b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198b30: 0xc0aa756  jal         func_2A9D58
    ctx->pc = 0x198B30u;
    SET_GPR_U32(ctx, 31, 0x198B38u);
    ctx->pc = 0x198B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B30u;
    // 0x198b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9D58u, 0x198B30u, 0x198B38u)) {
        return;
    }
    ctx->pc = 0x198B38u;
label_198b38:
    // 0x198b38: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x198b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198b3c: 0xc0aa77a  jal         func_2A9DE8
    ctx->pc = 0x198B3Cu;
    SET_GPR_U32(ctx, 31, 0x198B44u);
    ctx->pc = 0x198B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B3Cu;
    // 0x198b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9DE8u, 0x198B3Cu, 0x198B44u)) {
        return;
    }
    ctx->pc = 0x198B44u;
label_198b44:
    // 0x198b44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198b50: 0x3e00008  jr          $ra
    ctx->pc = 0x198B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B50u;
        // 0x198b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B58u;
    // 0x198b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b5c: 0x0  nop
    ctx->pc = 0x198b5cu;
    // NOP
    ctx->pc = 0x198b60u;
}
