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

// Function: sub_0011EEF8
// Address: 0x11eef8 - 0x11efa8
void sub_0011EEF8_0x11eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EEF8_0x11eef8");
#endif

    ctx->pc = 0x11eef8u;

    // 0x11eef8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11eef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x11eefc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11eefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11ef00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ef00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ef04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ef04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ef08: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x11ef08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x11ef0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ef0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ef10: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x11ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x11ef14: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x11ef14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ef18: 0xe7ac0004  swc1        $f12, 0x4($sp)
    ctx->pc = 0x11ef18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11ef1c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11ef1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11ef20: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x11ef20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11EF24u;
    {
        const bool branch_taken_0x11ef24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF24u;
        // 0x11ef28: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef24) {
            ctx->pc = 0x11EF30u;
            goto label_11ef30;
        }
    }
    ctx->pc = 0x11EF2Cu;
    // 0x11ef2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11ef2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ef30:
    // 0x11ef30: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x11ef30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ef34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x11ef34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ef38: 0x0  nop
    ctx->pc = 0x11ef38u;
    // NOP
    // 0x11ef3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x11EF3Cu;
    {
        const bool branch_taken_0x11ef3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF3Cu;
        // 0x11ef40: 0x37a20008  ori         $v0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef3c) {
            ctx->pc = 0x11EF48u;
            goto label_11ef48;
        }
    }
    ctx->pc = 0x11EF44u;
    // 0x11ef44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11ef44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11ef48:
    // 0x11ef48: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x11ef48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ef4c: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x11ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ef50: 0x248200bc  addiu       $v0, $a0, 0xBC
    ctx->pc = 0x11ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 188));
    // 0x11ef54: 0xc48200dc  lwc1        $f2, 0xDC($a0)
    ctx->pc = 0x11ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ef58: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x11ef58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x11ef5c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x11ef5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ef60: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x11ef60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11ef64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x11ef64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x11ef68: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x11EF68u;
    {
        const bool branch_taken_0x11ef68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF68u;
        // 0x11ef6c: 0xc4820058  lwc1        $f2, 0x58($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef68) {
            ctx->pc = 0x11EF84u;
            goto label_11ef84;
        }
    }
    ctx->pc = 0x11EF70u;
    // 0x11ef70: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x11ef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ef74: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x11ef74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ef78: 0x0  nop
    ctx->pc = 0x11ef78u;
    // NOP
    // 0x11ef7c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x11EF7Cu;
    {
        const bool branch_taken_0x11ef7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11ef7c) {
            ctx->pc = 0x11EF9Cu;
            goto label_11ef9c;
        }
    }
    ctx->pc = 0x11EF84u;
label_11ef84:
    // 0x11ef84: 0xe48300bc  swc1        $f3, 0xBC($a0)
    ctx->pc = 0x11ef84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
    // 0x11ef88: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x11ef88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x11ef8c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x11ef8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x11ef90: 0xe44d0010  swc1        $f13, 0x10($v0)
    ctx->pc = 0x11ef90u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x11ef94: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x11ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x11ef98: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x11ef98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_11ef9c:
    // 0x11ef9c: 0x3e00008  jr          $ra
    ctx->pc = 0x11EF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF9Cu;
        // 0x11efa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EFA4u;
    // 0x11efa4: 0x0  nop
    ctx->pc = 0x11efa4u;
    // NOP
    ctx->pc = 0x11efa8u;
}
