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

// Function: sub_0012F020
// Address: 0x12f020 - 0x12f140
void sub_0012F020_0x12f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F020_0x12f020");
#endif

    switch (ctx->pc) {
        case 0x12f098u: goto label_12f098;
        case 0x12f0c0u: goto label_12f0c0;
        case 0x12f0f0u: goto label_12f0f0;
        default: break;
    }

    ctx->pc = 0x12f020u;

    // 0x12f020: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12f024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f028: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x12f02c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12f02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x12f030: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12f030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f034: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12f034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x12f038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f03c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12f03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12f040: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12f040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f044: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x12f044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x12f048: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12f048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f04c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f050: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x12f050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x12f054: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12f054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x12f058: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12f058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x12f05c: 0x8e021bb0  lw          $v0, 0x1BB0($s0)
    ctx->pc = 0x12f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7088)));
    // 0x12f060: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x12F060u;
    {
        const bool branch_taken_0x12f060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f060) {
            ctx->pc = 0x12F064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F060u;
            // 0x12f064: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F120u;
            goto label_12f120;
        }
    }
    ctx->pc = 0x12F068u;
    // 0x12f068: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x12f068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x12f06c: 0x8e041630  lw          $a0, 0x1630($s0)
    ctx->pc = 0x12f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5680)));
    // 0x12f070: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x12f070u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x12f074: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f078: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12f078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12f07c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F07Cu;
    {
        const bool branch_taken_0x12f07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F07Cu;
        // 0x12f080: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f07c) {
            ctx->pc = 0x12F098u;
            goto label_12f098;
        }
    }
    ctx->pc = 0x12F084u;
    // 0x12f084: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f088: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F088u;
    {
        const bool branch_taken_0x12f088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f088) {
            ctx->pc = 0x12F08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F088u;
            // 0x12f08c: 0x8e031638  lw          $v1, 0x1638($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F09Cu;
            goto label_12f09c;
        }
    }
    ctx->pc = 0x12F090u;
    // 0x12f090: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12F090u;
    SET_GPR_U32(ctx, 31, 0x12F098u);
    ctx->pc = 0x12F094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F090u;
    // 0x12f094: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12F090u, 0x12F098u)) {
        return;
    }
    ctx->pc = 0x12F098u;
label_12f098:
    // 0x12f098: 0x8e031638  lw          $v1, 0x1638($s0)
    ctx->pc = 0x12f098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5688)));
label_12f09c:
    // 0x12f09c: 0x8e821a70  lw          $v0, 0x1A70($s4)
    ctx->pc = 0x12f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
    // 0x12f0a0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x12f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x12f0a4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F0A4u;
    {
        const bool branch_taken_0x12f0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0A4u;
        // 0x12f0a8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0a4) {
            ctx->pc = 0x12F0C0u;
            goto label_12f0c0;
        }
    }
    ctx->pc = 0x12F0ACu;
    // 0x12f0ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f0b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F0B0u;
    {
        const bool branch_taken_0x12f0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0B0u;
        // 0x12f0b4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0b0) {
            ctx->pc = 0x12F0C4u;
            goto label_12f0c4;
        }
    }
    ctx->pc = 0x12F0B8u;
    // 0x12f0b8: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x12F0B8u;
    SET_GPR_U32(ctx, 31, 0x12F0C0u);
    ctx->pc = 0x12F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F0B8u;
    // 0x12f0bc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12F0B8u, 0x12F0C0u)) {
        return;
    }
    ctx->pc = 0x12F0C0u;
label_12f0c0:
    // 0x12f0c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12f0c4:
    // 0x12f0c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F0C4u;
    {
        const bool branch_taken_0x12f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0C4u;
        // 0x12f0c8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0c4) {
            ctx->pc = 0x12F0D0u;
            goto label_12f0d0;
        }
    }
    ctx->pc = 0x12F0CCu;
    // 0x12f0cc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x12f0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_12f0d0:
    // 0x12f0d0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x12f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12f0d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F0D4u;
    {
        const bool branch_taken_0x12f0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0D4u;
        // 0x12f0d8: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0d4) {
            ctx->pc = 0x12F0E0u;
            goto label_12f0e0;
        }
    }
    ctx->pc = 0x12F0DCu;
    // 0x12f0dc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x12f0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_12f0e0:
    // 0x12f0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0e8: 0xc04dd94  jal         func_137650
    ctx->pc = 0x12F0E8u;
    SET_GPR_U32(ctx, 31, 0x12F0F0u);
    ctx->pc = 0x12F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F0E8u;
    // 0x12f0ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137650u, 0x12F0E8u, 0x12F0F0u)) {
        return;
    }
    ctx->pc = 0x12F0F0u;
label_12f0f0:
    // 0x12f0f0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12f0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f0f4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x12f0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f0f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12f0f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x12f0fc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12f0fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x12f100: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12f100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12f104: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12f104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x12f108: 0x0  nop
    ctx->pc = 0x12f108u;
    // NOP
    // 0x12f10c: 0x0  nop
    ctx->pc = 0x12f10cu;
    // NOP
    // 0x12f110: 0x46000004  c1          0x4
    ctx->pc = 0x12f110u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x12f114: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12f114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x12f118: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12f118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12f11c: 0x0  nop
    ctx->pc = 0x12f11cu;
    // NOP
label_12f120:
    // 0x12f120: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12f120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12f124: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12f124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f128: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12f128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f12c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x12f12cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f134: 0x3e00008  jr          $ra
    ctx->pc = 0x12F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F134u;
        // 0x12f138: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F13Cu;
    // 0x12f13c: 0x0  nop
    ctx->pc = 0x12f13cu;
    // NOP
    ctx->pc = 0x12f140u;
}
