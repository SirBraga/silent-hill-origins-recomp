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

// Function: sub_0021B1E0
// Address: 0x21b1e0 - 0x21b2d8
void sub_0021B1E0_0x21b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B1E0_0x21b1e0");
#endif

    switch (ctx->pc) {
        case 0x21b200u: goto label_21b200;
        case 0x21b208u: goto label_21b208;
        case 0x21b230u: goto label_21b230;
        case 0x21b288u: goto label_21b288;
        default: break;
    }

    ctx->pc = 0x21b1e0u;

    // 0x21b1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b1e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21b1e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b1ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21b1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b1f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21b1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21b1f4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x21b1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21b1f8: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21B1F8u;
    {
        const bool branch_taken_0x21b1f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1f8) {
            ctx->pc = 0x21B1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B1F8u;
            // 0x21b1fc: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B220u;
            goto label_21b220;
        }
    }
    ctx->pc = 0x21B200u;
label_21b200:
    // 0x21b200: 0xc08684c  jal         func_21A130
    ctx->pc = 0x21B200u;
    SET_GPR_U32(ctx, 31, 0x21B208u);
    ctx->pc = 0x21B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B200u;
    // 0x21b204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21A130u, 0x21B200u, 0x21B208u)) {
        return;
    }
    ctx->pc = 0x21B208u;
label_21b208:
    // 0x21b208: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21b208u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x21b20c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x21b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x21b210: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21b214: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B214u;
    {
        const bool branch_taken_0x21b214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b214) {
            ctx->pc = 0x21B200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b200;
        }
    }
    ctx->pc = 0x21B21Cu;
    // 0x21b21c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x21b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21b220:
    // 0x21b220: 0x10c00027  beqz        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x21B220u;
    {
        const bool branch_taken_0x21b220 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B220u;
        // 0x21b224: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b220) {
            ctx->pc = 0x21B2C0u;
            goto label_21b2c0;
        }
    }
    ctx->pc = 0x21B228u;
    // 0x21b228: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x21b228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b22c: 0x0  nop
    ctx->pc = 0x21b22cu;
    // NOP
label_21b230:
    // 0x21b230: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21b230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21b234: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B234u;
    {
        const bool branch_taken_0x21b234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B234u;
        // 0x21b238: 0x8cc6000c  lw          $a2, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b234) {
            ctx->pc = 0x21B254u;
            goto label_21b254;
        }
    }
    ctx->pc = 0x21B23Cu;
    // 0x21b23c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x21b23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b240: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x21b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b244: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21b244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b248: 0x0  nop
    ctx->pc = 0x21b248u;
    // NOP
    // 0x21b24c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x21B24Cu;
    {
        const bool branch_taken_0x21b24c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21B250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B24Cu;
        // 0x21b250: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b24c) {
            ctx->pc = 0x21B260u;
            goto label_21b260;
        }
    }
    ctx->pc = 0x21B254u;
label_21b254:
    // 0x21b254: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x21b254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x21b258: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21B258u;
    {
        const bool branch_taken_0x21b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B258u;
        // 0x21b25c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b258) {
            ctx->pc = 0x21B2B8u;
            goto label_21b2b8;
        }
    }
    ctx->pc = 0x21B260u;
label_21b260:
    // 0x21b260: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21b264: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x21B264u;
    {
        const bool branch_taken_0x21b264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b264) {
            ctx->pc = 0x21B268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B264u;
            // 0x21b268: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B2B4u;
            goto label_21b2b4;
        }
    }
    ctx->pc = 0x21B26Cu;
    // 0x21b26c: 0x46010834  c.lt.s      $f1, $f1
    ctx->pc = 0x21b26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b270: 0x0  nop
    ctx->pc = 0x21b270u;
    // NOP
    // 0x21b274: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x21B274u;
    {
        const bool branch_taken_0x21b274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b274) {
            ctx->pc = 0x21B278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B274u;
            // 0x21b278: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B2B4u;
            goto label_21b2b4;
        }
    }
    ctx->pc = 0x21B27Cu;
    // 0x21b27c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21b27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b280: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21b280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b284: 0x0  nop
    ctx->pc = 0x21b284u;
    // NOP
label_21b288:
    // 0x21b288: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21b28c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21B28Cu;
    {
        const bool branch_taken_0x21b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b28c) {
            ctx->pc = 0x21B290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B28Cu;
            // 0x21b290: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B2B4u;
            goto label_21b2b4;
        }
    }
    ctx->pc = 0x21B294u;
    // 0x21b294: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x21b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21b298: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x21b298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21b29c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21b29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21b2a0: 0x0  nop
    ctx->pc = 0x21b2a0u;
    // NOP
    // 0x21b2a4: 0x4503fff8  bc1tl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x21B2A4u;
    {
        const bool branch_taken_0x21b2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21b2a4) {
            ctx->pc = 0x21B2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B2A4u;
            // 0x21b2a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b288;
        }
    }
    ctx->pc = 0x21B2ACu;
    // 0x21b2ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21b2b0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x21b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_21b2b4:
    // 0x21b2b4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x21b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_21b2b8:
    // 0x21b2b8: 0x14c0ffdd  bnez        $a2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x21B2B8u;
    {
        const bool branch_taken_0x21b2b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2B8u;
        // 0x21b2bc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2b8) {
            ctx->pc = 0x21B230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b230;
        }
    }
    ctx->pc = 0x21B2C0u;
label_21b2c0:
    // 0x21b2c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21b2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b2c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x21B2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2CCu;
        // 0x21b2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B2D4u;
    // 0x21b2d4: 0x0  nop
    ctx->pc = 0x21b2d4u;
    // NOP
    ctx->pc = 0x21b2d8u;
}
