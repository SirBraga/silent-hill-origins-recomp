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

// Function: sub_00102040
// Address: 0x102040 - 0x102120
void sub_00102040_0x102040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102040_0x102040");
#endif

    switch (ctx->pc) {
        case 0x1020a4u: goto label_1020a4;
        case 0x1020acu: goto label_1020ac;
        case 0x102108u: goto label_102108;
        case 0x102110u: goto label_102110;
        default: break;
    }

    ctx->pc = 0x102040u;

    // 0x102040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x102044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102048: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x102048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10204c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102054: 0xc60101b4  lwc1        $f1, 0x1B4($s0)
    ctx->pc = 0x102054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x102058: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x102058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10205c: 0x0  nop
    ctx->pc = 0x10205cu;
    // NOP
    // 0x102060: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x102060u;
    {
        const bool branch_taken_0x102060 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x102060) {
            ctx->pc = 0x1020A4u;
            goto label_1020a4;
        }
    }
    ctx->pc = 0x102068u;
    // 0x102068: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10206c: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x10206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x102070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x102074: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x102074u;
    {
        const bool branch_taken_0x102074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x102074) {
            ctx->pc = 0x1020A4u;
            goto label_1020a4;
        }
    }
    ctx->pc = 0x10207Cu;
    // 0x10207c: 0xc60c01b0  lwc1        $f12, 0x1B0($s0)
    ctx->pc = 0x10207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x102080: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x102080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x102084: 0x0  nop
    ctx->pc = 0x102084u;
    // NOP
    // 0x102088: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x102088u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[12]);
    // 0x10208c: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x10208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x102090: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x102090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x102094: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x102094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x102098: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x102098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10209c: 0xc09d938  jal         func_2764E0
    ctx->pc = 0x10209Cu;
    SET_GPR_U32(ctx, 31, 0x1020A4u);
    ctx->pc = 0x1020A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10209Cu;
    // 0x1020a0: 0x8c660028  lw          $a2, 0x28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2764E0u, 0x10209Cu, 0x1020A4u)) {
        return;
    }
    ctx->pc = 0x1020A4u;
label_1020a4:
    // 0x1020a4: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x1020A4u;
    SET_GPR_U32(ctx, 31, 0x1020ACu);
    ctx->pc = 0x1020A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1020A4u;
    // 0x1020a8: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x1020A4u, 0x1020ACu)) {
        return;
    }
    ctx->pc = 0x1020ACu;
label_1020ac:
    // 0x1020ac: 0x8e0302a4  lw          $v1, 0x2A4($s0)
    ctx->pc = 0x1020acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x1020b0: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1020B0u;
    {
        const bool branch_taken_0x1020b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020b0) {
            ctx->pc = 0x1020B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1020B0u;
            // 0x1020b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102114u;
            goto label_102114;
        }
    }
    ctx->pc = 0x1020B8u;
    // 0x1020b8: 0xc60101bc  lwc1        $f1, 0x1BC($s0)
    ctx->pc = 0x1020b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1020bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1020bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1020c0: 0x0  nop
    ctx->pc = 0x1020c0u;
    // NOP
    // 0x1020c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1020c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1020c8: 0x0  nop
    ctx->pc = 0x1020c8u;
    // NOP
    // 0x1020cc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1020CCu;
    {
        const bool branch_taken_0x1020cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1020cc) {
            ctx->pc = 0x102108u;
            goto label_102108;
        }
    }
    ctx->pc = 0x1020D4u;
    // 0x1020d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1020d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1020d8: 0x8e0301ac  lw          $v1, 0x1AC($s0)
    ctx->pc = 0x1020d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x1020dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1020dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1020e0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1020E0u;
    {
        const bool branch_taken_0x1020e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1020e0) {
            ctx->pc = 0x102108u;
            goto label_102108;
        }
    }
    ctx->pc = 0x1020E8u;
    // 0x1020e8: 0xc60c01b8  lwc1        $f12, 0x1B8($s0)
    ctx->pc = 0x1020e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1020ec: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1020ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1020f0: 0x0  nop
    ctx->pc = 0x1020f0u;
    // NOP
    // 0x1020f4: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x1020f4u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[12]);
    // 0x1020f8: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x1020f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x1020fc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x1020fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x102100: 0xc09d938  jal         func_2764E0
    ctx->pc = 0x102100u;
    SET_GPR_U32(ctx, 31, 0x102108u);
    ctx->pc = 0x102104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102100u;
    // 0x102104: 0x8e060194  lw          $a2, 0x194($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2764E0u, 0x102100u, 0x102108u)) {
        return;
    }
    ctx->pc = 0x102108u;
label_102108:
    // 0x102108: 0xc0942f2  jal         func_250BC8
    ctx->pc = 0x102108u;
    SET_GPR_U32(ctx, 31, 0x102110u);
    ctx->pc = 0x10210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102108u;
    // 0x10210c: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250BC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250BC8u, 0x102108u, 0x102110u)) {
        return;
    }
    ctx->pc = 0x102110u;
label_102110:
    // 0x102110: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x102110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_102114:
    // 0x102114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102118: 0x3e00008  jr          $ra
    ctx->pc = 0x102118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102118u;
        // 0x10211c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102120u;
}
