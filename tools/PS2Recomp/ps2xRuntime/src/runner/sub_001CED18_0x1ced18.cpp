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

// Function: sub_001CED18
// Address: 0x1ced18 - 0x1ced80
void sub_001CED18_0x1ced18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CED18_0x1ced18");
#endif

    switch (ctx->pc) {
        case 0x1ced6cu: goto label_1ced6c;
        default: break;
    }

    ctx->pc = 0x1ced18u;

    // 0x1ced18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ced18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ced1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ced1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ced20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ced20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ced24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ced24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced28: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x1ced28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x1ced2c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CED2Cu;
    {
        const bool branch_taken_0x1ced2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ced2c) {
            ctx->pc = 0x1CED30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CED2Cu;
            // 0x1ced30: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CED74u;
            goto label_1ced74;
        }
    }
    ctx->pc = 0x1CED34u;
    // 0x1ced34: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1ced34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ced38: 0xc601028c  lwc1        $f1, 0x28C($s0)
    ctx->pc = 0x1ced38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ced3c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1ced3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x1ced40: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ced40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ced44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ced44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ced48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ced48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ced4c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1ced4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ced50: 0x0  nop
    ctx->pc = 0x1ced50u;
    // NOP
    // 0x1ced54: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CED54u;
    {
        const bool branch_taken_0x1ced54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED54u;
        // 0x1ced58: 0xe601028c  swc1        $f1, 0x28C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced54) {
            ctx->pc = 0x1CED70u;
            goto label_1ced70;
        }
    }
    ctx->pc = 0x1CED5Cu;
    // 0x1ced5c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1ced60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ced60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ced64: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1CED64u;
    SET_GPR_U32(ctx, 31, 0x1CED6Cu);
    ctx->pc = 0x1CED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED64u;
    // 0x1ced68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1CED64u, 0x1CED6Cu)) {
        return;
    }
    ctx->pc = 0x1CED6Cu;
label_1ced6c:
    // 0x1ced6c: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1ced6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
label_1ced70:
    // 0x1ced70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ced70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ced74:
    // 0x1ced74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ced74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ced78: 0x3e00008  jr          $ra
    ctx->pc = 0x1CED78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED78u;
        // 0x1ced7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CED78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CED80u;
}
