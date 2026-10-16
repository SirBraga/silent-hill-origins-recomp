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

// Function: sub_0016F998
// Address: 0x16f998 - 0x16fa68
void sub_0016F998_0x16f998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F998_0x16f998");
#endif

    switch (ctx->pc) {
        case 0x16f9c0u: goto label_16f9c0;
        default: break;
    }

    ctx->pc = 0x16f998u;

    // 0x16f998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f99c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x16f99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x16f9a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16f9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16f9a4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f9a8: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x16F9A8u;
    {
        const bool branch_taken_0x16f9a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x16F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9A8u;
        // 0x16f9ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9a8) {
            ctx->pc = 0x16FA58u;
            goto label_16fa58;
        }
    }
    ctx->pc = 0x16F9B0u;
    // 0x16f9b0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x16f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16f9b4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x16f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x16f9b8: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x16f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x16f9bc: 0x0  nop
    ctx->pc = 0x16f9bcu;
    // NOP
label_16f9c0:
    // 0x16f9c0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x16f9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f9c4: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x16f9c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f9c8: 0x0  nop
    ctx->pc = 0x16f9c8u;
    // NOP
    // 0x16f9cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16F9CCu;
    {
        const bool branch_taken_0x16f9cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f9cc) {
            ctx->pc = 0x16F9E8u;
            goto label_16f9e8;
        }
    }
    ctx->pc = 0x16F9D4u;
    // 0x16f9d4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x16f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f9d8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x16f9d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f9dc: 0x0  nop
    ctx->pc = 0x16f9dcu;
    // NOP
    // 0x16f9e0: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x16F9E0u;
    {
        const bool branch_taken_0x16f9e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f9e0) {
            ctx->pc = 0x16F9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F9E0u;
            // 0x16f9e4: 0xc4a40008  lwc1        $f4, 0x8($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FA10u;
            goto label_16fa10;
        }
    }
    ctx->pc = 0x16F9E8u;
label_16f9e8:
    // 0x16f9e8: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x16f9e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f9ec: 0x0  nop
    ctx->pc = 0x16f9ecu;
    // NOP
    // 0x16f9f0: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x16F9F0u;
    {
        const bool branch_taken_0x16f9f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f9f0) {
            ctx->pc = 0x16F9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F9F0u;
            // 0x16f9f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FA50u;
            goto label_16fa50;
        }
    }
    ctx->pc = 0x16F9F8u;
    // 0x16f9f8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x16f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f9fc: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x16f9fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fa00: 0x0  nop
    ctx->pc = 0x16fa00u;
    // NOP
    // 0x16fa04: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x16FA04u;
    {
        const bool branch_taken_0x16fa04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fa04) {
            ctx->pc = 0x16FA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FA04u;
            // 0x16fa08: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FA50u;
            goto label_16fa50;
        }
    }
    ctx->pc = 0x16FA0Cu;
    // 0x16fa0c: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x16fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_16fa10:
    // 0x16fa10: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x16fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16fa14: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x16fa14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x16fa18: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x16fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16fa1c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x16fa1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x16fa20: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x16fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fa24: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16fa24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16fa28: 0x0  nop
    ctx->pc = 0x16fa28u;
    // NOP
    // 0x16fa2c: 0x0  nop
    ctx->pc = 0x16fa2cu;
    // NOP
    // 0x16fa30: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x16fa30u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[3]);
    // 0x16fa34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x16fa34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16fa38: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x16fa38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x16fa3c: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x16fa3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fa40: 0x0  nop
    ctx->pc = 0x16fa40u;
    // NOP
    // 0x16fa44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16FA44u;
    {
        const bool branch_taken_0x16fa44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16fa44) {
            ctx->pc = 0x16FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FA44u;
            // 0x16fa48: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FA4Cu;
            goto label_16fa4c;
        }
    }
    ctx->pc = 0x16FA4Cu;
label_16fa4c:
    // 0x16fa4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_16fa50:
    // 0x16fa50: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x16FA50u;
    {
        const bool branch_taken_0x16fa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA50u;
        // 0x16fa54: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa50) {
            ctx->pc = 0x16F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f9c0;
        }
    }
    ctx->pc = 0x16FA58u;
label_16fa58:
    // 0x16fa58: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x16fa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x16fa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x16FA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA5Cu;
        // 0x16fa60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FA64u;
    // 0x16fa64: 0x0  nop
    ctx->pc = 0x16fa64u;
    // NOP
    ctx->pc = 0x16fa68u;
}
