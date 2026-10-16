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

// Function: sub_0016D040
// Address: 0x16d040 - 0x16d098
void sub_0016D040_0x16d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D040_0x16d040");
#endif

    switch (ctx->pc) {
        case 0x16d080u: goto label_16d080;
        case 0x16d088u: goto label_16d088;
        default: break;
    }

    ctx->pc = 0x16d040u;

    // 0x16d040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d044: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16d048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d04c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d050: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x16d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d054: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x16d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d058: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x16d058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x16d05c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16d05cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16d060: 0x0  nop
    ctx->pc = 0x16d060u;
    // NOP
    // 0x16d064: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16D064u;
    {
        const bool branch_taken_0x16d064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D064u;
        // 0x16d068: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d064) {
            ctx->pc = 0x16D088u;
            goto label_16d088;
        }
    }
    ctx->pc = 0x16D06Cu;
    // 0x16d06c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x16d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x16d070: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16d070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16d074: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x16d074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x16d078: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16D078u;
    SET_GPR_U32(ctx, 31, 0x16D080u);
    ctx->pc = 0x16D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D078u;
    // 0x16d07c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16D078u, 0x16D080u)) {
        return;
    }
    ctx->pc = 0x16D080u;
label_16d080:
    // 0x16d080: 0xc05b426  jal         func_16D098
    ctx->pc = 0x16D080u;
    SET_GPR_U32(ctx, 31, 0x16D088u);
    ctx->pc = 0x16D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D080u;
    // 0x16d084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16D098u, 0x16D080u, 0x16D088u)) {
        return;
    }
    ctx->pc = 0x16D088u;
label_16d088:
    // 0x16d088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d090: 0x3e00008  jr          $ra
    ctx->pc = 0x16D090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D090u;
        // 0x16d094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D098u;
}
