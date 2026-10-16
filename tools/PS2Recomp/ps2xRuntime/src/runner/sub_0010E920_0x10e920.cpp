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

// Function: sub_0010E920
// Address: 0x10e920 - 0x10ea00
void sub_0010E920_0x10e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E920_0x10e920");
#endif

    switch (ctx->pc) {
        case 0x10e978u: goto label_10e978;
        case 0x10e990u: goto label_10e990;
        case 0x10e9d0u: goto label_10e9d0;
        default: break;
    }

    ctx->pc = 0x10e920u;

    // 0x10e920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10e920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10e924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10e924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10e928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10e928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10e92c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10e92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10e930: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x10e930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e934: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10e934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10e938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10e93c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e940: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10e940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10e944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10e944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10e948: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10E948u;
    {
        const bool branch_taken_0x10e948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E948u;
        // 0x10e94c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e948) {
            ctx->pc = 0x10E958u;
            goto label_10e958;
        }
    }
    ctx->pc = 0x10E950u;
    // 0x10e950: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E950u;
    {
        const bool branch_taken_0x10e950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E950u;
        // 0x10e954: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e950) {
            ctx->pc = 0x10E968u;
            goto label_10e968;
        }
    }
    ctx->pc = 0x10E958u;
label_10e958:
    // 0x10e958: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10e958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10e95c: 0x0  nop
    ctx->pc = 0x10e95cu;
    // NOP
    // 0x10e960: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10E960u;
    {
        const bool branch_taken_0x10e960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10e960) {
            ctx->pc = 0x10E964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E960u;
            // 0x10e964: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E968u;
            goto label_10e968;
        }
    }
    ctx->pc = 0x10E968u;
label_10e968:
    // 0x10e968: 0xe62c0010  swc1        $f12, 0x10($s1)
    ctx->pc = 0x10e968u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x10e96c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10e96cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e970: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x10e970u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x10e974: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x10e974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_10e978:
    // 0x10e978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10e97c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x10E97Cu;
    {
        const bool branch_taken_0x10e97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e97c) {
            ctx->pc = 0x10E980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E97Cu;
            // 0x10e980: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E9D4u;
            goto label_10e9d4;
        }
    }
    ctx->pc = 0x10E984u;
    // 0x10e984: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x10e984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10e988: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10E988u;
    SET_GPR_U32(ctx, 31, 0x10E990u);
    ctx->pc = 0x10E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E988u;
    // 0x10e98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10E988u, 0x10E990u)) {
        return;
    }
    ctx->pc = 0x10E990u;
label_10e990:
    // 0x10e990: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x10e990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10e994: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x10e994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10e998: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10e998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10e99c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e9a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10E9A0u;
    {
        const bool branch_taken_0x10e9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9A0u;
        // 0x10e9a4: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9a0) {
            ctx->pc = 0x10E9D0u;
            goto label_10e9d0;
        }
    }
    ctx->pc = 0x10E9A8u;
    // 0x10e9a8: 0x8e6282f4  lw          $v0, -0x7D0C($s3)
    ctx->pc = 0x10e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935284)));
    // 0x10e9ac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10E9ACu;
    {
        const bool branch_taken_0x10e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e9ac) {
            ctx->pc = 0x10E9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E9ACu;
            // 0x10e9b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E9D4u;
            goto label_10e9d4;
        }
    }
    ctx->pc = 0x10E9B4u;
    // 0x10e9b4: 0xe46c0058  swc1        $f12, 0x58($v1)
    ctx->pc = 0x10e9b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x10e9b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e9bc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10e9c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E9C0u;
    {
        const bool branch_taken_0x10e9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9C0u;
        // 0x10e9c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9c0) {
            ctx->pc = 0x10E9D0u;
            goto label_10e9d0;
        }
    }
    ctx->pc = 0x10E9C8u;
    // 0x10e9c8: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10E9C8u;
    SET_GPR_U32(ctx, 31, 0x10E9D0u);
    ctx->pc = 0x10E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9C8u;
    // 0x10e9cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10E9C8u, 0x10E9D0u)) {
        return;
    }
    ctx->pc = 0x10E9D0u;
label_10e9d0:
    // 0x10e9d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10e9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10e9d4:
    // 0x10e9d4: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x10e9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10e9d8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10E9D8u;
    {
        const bool branch_taken_0x10e9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9D8u;
        // 0x10e9dc: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e9d8) {
            ctx->pc = 0x10E978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e978;
        }
    }
    ctx->pc = 0x10E9E0u;
    // 0x10e9e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10e9e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e9e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10e9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e9e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10e9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e9ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10e9ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e9f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E9F4u;
        // 0x10e9f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E9FCu;
    // 0x10e9fc: 0x0  nop
    ctx->pc = 0x10e9fcu;
    // NOP
    ctx->pc = 0x10ea00u;
}
