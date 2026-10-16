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

// Function: sub_001B9EC8
// Address: 0x1b9ec8 - 0x1b9f48
void sub_001B9EC8_0x1b9ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9EC8_0x1b9ec8");
#endif

    switch (ctx->pc) {
        case 0x1b9ee8u: goto label_1b9ee8;
        case 0x1b9f10u: goto label_1b9f10;
        case 0x1b9f18u: goto label_1b9f18;
        case 0x1b9f34u: goto label_1b9f34;
        default: break;
    }

    ctx->pc = 0x1b9ec8u;

    // 0x1b9ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9ecc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b9ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9ed4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b9ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b9ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9ee0: 0xc0893a2  jal         func_224E88
    ctx->pc = 0x1B9EE0u;
    SET_GPR_U32(ctx, 31, 0x1B9EE8u);
    ctx->pc = 0x1B9EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9EE0u;
    // 0x1b9ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x1B9EE0u, 0x1B9EE8u)) {
        return;
    }
    ctx->pc = 0x1B9EE8u;
label_1b9ee8:
    // 0x1b9ee8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B9EE8u;
    {
        const bool branch_taken_0x1b9ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ee8) {
            ctx->pc = 0x1B9EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9EE8u;
            // 0x1b9eec: 0xc62c0284  lwc1        $f12, 0x284($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9F1Cu;
            goto label_1b9f1c;
        }
    }
    ctx->pc = 0x1B9EF0u;
    // 0x1b9ef0: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x1b9ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9ef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9ef8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9efc: 0x0  nop
    ctx->pc = 0x1b9efcu;
    // NOP
    // 0x1b9f00: 0x0  nop
    ctx->pc = 0x1b9f00u;
    // NOP
    // 0x1b9f04: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1b9f04u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x1b9f08: 0xc06e64c  jal         func_1B9930
    ctx->pc = 0x1B9F08u;
    SET_GPR_U32(ctx, 31, 0x1B9F10u);
    ctx->pc = 0x1B9F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F08u;
    // 0x1b9f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B9930u, 0x1B9F08u, 0x1B9F10u)) {
        return;
    }
    ctx->pc = 0x1B9F10u;
label_1b9f10:
    // 0x1b9f10: 0xc08939a  jal         func_224E68
    ctx->pc = 0x1B9F10u;
    SET_GPR_U32(ctx, 31, 0x1B9F18u);
    ctx->pc = 0x1B9F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F10u;
    // 0x1b9f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x1B9F10u, 0x1B9F18u)) {
        return;
    }
    ctx->pc = 0x1B9F18u;
label_1b9f18:
    // 0x1b9f18: 0xc62c0284  lwc1        $f12, 0x284($s1)
    ctx->pc = 0x1b9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b9f1c:
    // 0x1b9f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f20: 0x8e240270  lw          $a0, 0x270($s1)
    ctx->pc = 0x1b9f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x1b9f24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9f28: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b9f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b9f2c: 0xc06d1c6  jal         func_1B4718
    ctx->pc = 0x1B9F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F34u);
    ctx->pc = 0x1B9F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F2Cu;
    // 0x1b9f30: 0x8e25026c  lw          $a1, 0x26C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4718u, 0x1B9F2Cu, 0x1B9F34u)) {
        return;
    }
    ctx->pc = 0x1B9F34u;
label_1b9f34:
    // 0x1b9f34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b9f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F40u;
        // 0x1b9f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9F48u;
}
