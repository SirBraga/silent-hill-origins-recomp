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

// Function: sub_001922D0
// Address: 0x1922d0 - 0x192380
void sub_001922D0_0x1922d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001922D0_0x1922d0");
#endif

    switch (ctx->pc) {
        case 0x192310u: goto label_192310;
        default: break;
    }

    ctx->pc = 0x1922d0u;

    // 0x1922d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1922d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1922d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1922d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1922d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1922d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1922dc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1922dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1922e0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x1922e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1922e4: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1922e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1922e8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1922e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1922ec: 0x0  nop
    ctx->pc = 0x1922ecu;
    // NOP
    // 0x1922f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1922F0u;
    {
        const bool branch_taken_0x1922f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1922F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1922F0u;
        // 0x1922f4: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922f0) {
            ctx->pc = 0x192318u;
            goto label_192318;
        }
    }
    ctx->pc = 0x1922F8u;
    // 0x1922f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1922f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1922fc: 0x0  nop
    ctx->pc = 0x1922fcu;
    // NOP
    // 0x192300: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x192300u;
    {
        const bool branch_taken_0x192300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192300u;
        // 0x192304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192300) {
            ctx->pc = 0x192318u;
            goto label_192318;
        }
    }
    ctx->pc = 0x192308u;
    // 0x192308: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x192308u;
    SET_GPR_U32(ctx, 31, 0x192310u);
    ctx->pc = 0x19230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192308u;
    // 0x19230c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x192308u, 0x192310u)) {
        return;
    }
    ctx->pc = 0x192310u;
label_192310:
    // 0x192310: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x192310u;
    {
        const bool branch_taken_0x192310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192310u;
        // 0x192314: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192310) {
            ctx->pc = 0x192378u;
            goto label_192378;
        }
    }
    ctx->pc = 0x192318u;
label_192318:
    // 0x192318: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x192318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19231c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x19231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192320: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x192320u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192324: 0x0  nop
    ctx->pc = 0x192324u;
    // NOP
    // 0x192328: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x192328u;
    {
        const bool branch_taken_0x192328 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192328u;
        // 0x19232c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192328) {
            ctx->pc = 0x192378u;
            goto label_192378;
        }
    }
    ctx->pc = 0x192330u;
    // 0x192330: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x192330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192334: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x192334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192338: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x192338u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x19233c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x19233cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192340: 0x0  nop
    ctx->pc = 0x192340u;
    // NOP
    // 0x192344: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x192344u;
    {
        const bool branch_taken_0x192344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x192348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192344u;
        // 0x192348: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192344) {
            ctx->pc = 0x19235Cu;
            goto label_19235c;
        }
    }
    ctx->pc = 0x19234Cu;
    // 0x19234c: 0x460c1b00  add.s       $f12, $f3, $f12
    ctx->pc = 0x19234cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x192350: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x192350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192354: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192354u;
    {
        const bool branch_taken_0x192354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192354) {
            ctx->pc = 0x192364u;
            goto label_192364;
        }
    }
    ctx->pc = 0x19235Cu;
label_19235c:
    // 0x19235c: 0x460c1b00  add.s       $f12, $f3, $f12
    ctx->pc = 0x19235cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x192360: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x192360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_192364:
    // 0x192364: 0x0  nop
    ctx->pc = 0x192364u;
    // NOP
    // 0x192368: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x192368u;
    {
        const bool branch_taken_0x192368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192368) {
            ctx->pc = 0x19236Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192368u;
            // 0x19236c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x192370u;
            goto label_192370;
        }
    }
    ctx->pc = 0x192370u;
label_192370:
    // 0x192370: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x192370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x192374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192378:
    // 0x192378: 0x3e00008  jr          $ra
    ctx->pc = 0x192378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192378u;
        // 0x19237c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192380u;
}
